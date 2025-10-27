//
//  Created by ktiays on 2025/10/26.
//  Copyright (c) 2025 ktiays. All rights reserved.
//

import QuartzCore
import SwiftyRuntime

@propertyWrapper
struct FilterProperty<Value> where Value: SupportedFilterPropertyValue {

    private let key: String

    init<Key>(_: KeyPath<FilterProperties, Key.Type>) where Key: FilterPropertyKey, Value == Key.Value {
        self.key = Key.key
    }

    public var wrappedValue: Value {
        get { fatalError() }
        set { fatalError() }
    }

    public static subscript<EnclosingSelf>(
        _enclosingInstance observed: EnclosingSelf,
        wrapped wrappedKeyPath: ReferenceWritableKeyPath<EnclosingSelf, Value>,
        storage storageKeyPath: ReferenceWritableKeyPath<EnclosingSelf, Self>
    ) -> Value where EnclosingSelf: QuartzFilter {
        get {
            let storageValue = observed[keyPath: storageKeyPath]
            let key = storageValue.key
            return _value(for: key, of: observed.caFilter)
        }
        set {
            let storageValue = observed[keyPath: storageKeyPath]
            let key = storageValue.key
            _setValue(newValue, for: key, of: observed.caFilter)
        }
    }
}

protocol FilterPropertyKey {

    associatedtype Value

    static var key: String { get }
}

protocol SupportedFilterPropertyValue {}
protocol SupportedDirectlyAssignmentValue: SupportedFilterPropertyValue {}
protocol SupportedDefaultValue {
    static var defaultValue: Self { get }
}

extension Int: SupportedDirectlyAssignmentValue {}
extension Int: SupportedDefaultValue {
    static var defaultValue: Int { 0 }
}

extension Float: SupportedDirectlyAssignmentValue {}
extension Float: SupportedDefaultValue {
    static var defaultValue: Float { 0.0 }
}

extension Double: SupportedDirectlyAssignmentValue {}
extension Double: SupportedDefaultValue {
    static var defaultValue: Double { 0.0 }
}

extension CGFloat: SupportedDirectlyAssignmentValue {}
extension CGFloat: SupportedDefaultValue {
    static var defaultValue: CGFloat { 0.0 }
}

extension Bool: SupportedDirectlyAssignmentValue {}
extension Bool: SupportedDefaultValue {
    static var defaultValue: Bool { false }
}

extension String: SupportedDirectlyAssignmentValue {}

extension ColorMatrix: SupportedFilterPropertyValue {}
extension ColorMatrix: SupportedDefaultValue {
    static var defaultValue: ColorMatrix { .identity }
}

extension CGImage: SupportedFilterPropertyValue {}

extension Optional: SupportedFilterPropertyValue where Wrapped: SupportedFilterPropertyValue {}
extension Optional: SupportedDirectlyAssignmentValue, SupportedDefaultValue where Wrapped: SupportedDirectlyAssignmentValue {
    static var defaultValue: Optional<Wrapped> { nil }
}

// MARK: - Getter

private func _value<T>(for key: String, of filter: NSObject?) -> T where T: SupportedFilterPropertyValue {
    if T.self as? SupportedDirectlyAssignmentValue.Type != nil, let Default = T.self as? SupportedDefaultValue.Type {
        return filter?.value(forKey: key) as? T ?? (Default.defaultValue as! T)
    }
    if T.self == ColorMatrix.self {
        return (filter?.value(forKey: key) as? NSValue)?.colorMatrixValue as? T ?? (ColorMatrix.identity as! T)
    }
    if T.self == CGImage?.self {
        guard let value = filter?.value(forKey: key) else {
            return Optional<CGImage>.none as! T
        }
        return unsafeBitCast(value, to: CGImage?.self) as! T
    }
    fatalError("Unsupported property type")
}

// MARK: - Setter

private func _setValue<T>(_ value: T, for key: String, of filter: NSObject?) where T: SupportedFilterPropertyValue {
    if T.self as? SupportedDirectlyAssignmentValue.Type != nil {
        filter?.setValue(value, forKey: key)
        return
    }
    if T.self == ColorMatrix.self {
        if let newValue = value as? ColorMatrix {
            filter?.setValue(NSValue.fromColorMatrix(newValue), forKey: key)
        } else {
            filter?.setValue(nil, forKey: key)
        }
        return
    }
    if T.self == CGImage?.self {
        filter?.setValue(value, forKey: key)
        return
    }
    fatalError("Unsupported property type")
}
