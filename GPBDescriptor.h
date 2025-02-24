#import <Foundation/Foundation.h>

#import "GPBRuntimeTypes.h"

@class GPBEnumDescriptor;
@class GPBFieldDescriptor;
@class GPBFileDescriptor;
@class GPBOneofDescriptor;

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(uint8_t, GPBFileSyntax) {
  GPBFileSyntaxUnknown = 0,
  GPBFileSyntaxProto2 = 2,
  GPBFileSyntaxProto3 = 3,
  GPBFileSyntaxProtoEditions = 99,
};

typedef NS_ENUM(uint8_t, GPBFieldType) {
  GPBFieldTypeSingle,
  GPBFieldTypeRepeated,
  GPBFieldTypeMap,
};

__attribute__((objc_subclassing_restricted))
@interface GPBDescriptor : NSObject<NSCopying>

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;
@property(nonatomic, readonly, copy) NSString *name;
@property(nonatomic, readonly, strong, nullable) NSArray<GPBFieldDescriptor *> *fields;
@property(nonatomic, readonly, strong, nullable) NSArray<GPBOneofDescriptor *> *oneofs;
@property(nonatomic, readonly, nullable) const GPBExtensionRange *extensionRanges;
@property(nonatomic, readonly) uint32_t extensionRangesCount;
@property(nonatomic, readonly) GPBFileDescriptor *file;
@property(nonatomic, readonly, getter=isWireFormat) BOOL wireFormat;
@property(nonatomic, readonly) Class messageClass;
@property(readonly, nullable) GPBDescriptor *containingType;
@property(readonly, nullable) NSString *fullName;

- (nullable GPBFieldDescriptor *)fieldWithNumber:(uint32_t)fieldNumber;
- (nullable GPBFieldDescriptor *)fieldWithName:(NSString *)name;
- (nullable GPBOneofDescriptor *)oneofWithName:(NSString *)name;

@end

__attribute__((objc_subclassing_restricted))
@interface GPBFileDescriptor : NSObject<NSCopying>

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;
@property(nonatomic, readonly, copy) NSString *package;
@property(nonatomic, readonly, copy, nullable) NSString *objcPrefix;

@end

__attribute__((objc_subclassing_restricted))
@interface GPBOneofDescriptor : NSObject<NSCopying>

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;
@property(nonatomic, readonly) NSString *name;
@property(nonatomic, readonly) NSArray<GPBFieldDescriptor *> *fields;

- (nullable GPBFieldDescriptor *)fieldWithNumber:(uint32_t)fieldNumber;
- (nullable GPBFieldDescriptor *)fieldWithName:(NSString *)name;

@end

__attribute__((objc_subclassing_restricted))
@interface GPBFieldDescriptor : NSObject<NSCopying>

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;
@property(nonatomic, readonly, copy) NSString *name;
@property(nonatomic, readonly) uint32_t number;
@property(nonatomic, readonly) GPBDataType dataType;
@property(nonatomic, readonly) BOOL hasDefaultValue;
@property(nonatomic, readonly) GPBGenericValue defaultValue;
@property(nonatomic, readonly, getter=isRequired) BOOL required;
@property(nonatomic, readonly, getter=isOptional) BOOL optional;
@property(nonatomic, readonly) GPBFieldType fieldType;
@property(nonatomic, readonly) GPBDataType mapKeyDataType;
@property(nonatomic, readonly, getter=isPackable) BOOL packable;
@property(nonatomic, readonly, nullable) GPBOneofDescriptor *containingOneof;
@property(nonatomic, readonly, nullable) Class msgClass;
@property(nonatomic, readonly, strong, nullable) GPBEnumDescriptor *enumDescriptor;

- (BOOL)isValidEnumValue:(int32_t)value;
- (nullable NSString *)textFormatName;

@end

__attribute__((objc_subclassing_restricted))
@interface GPBEnumDescriptor : NSObject<NSCopying>

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;
@property(nonatomic, readonly, copy) NSString *name;
@property(nonatomic, readonly) GPBEnumValidationFunc enumVerifier;
@property(nonatomic, readonly) BOOL isClosed;
- (nullable NSString *)enumNameForValue:(int32_t)number;
- (BOOL)getValue:(nullable int32_t *)outValue forEnumName:(NSString *)name;
- (nullable NSString *)textFormatNameForValue:(int32_t)number;
- (BOOL)getValue:(nullable int32_t *)outValue forEnumTextFormatName:(NSString *)textFormatName;
@property(nonatomic, readonly) uint32_t enumNameCount;
- (nullable NSString *)getEnumNameForIndex:(uint32_t)index;
- (nullable NSString *)getEnumTextFormatNameForIndex:(uint32_t)index;

@end

__attribute__((objc_subclassing_restricted))
@interface GPBExtensionDescriptor : NSObject<NSCopying>

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;
@property(nonatomic, readonly) uint32_t fieldNumber;
@property(nonatomic, readonly) Class containingMessageClass;
@property(nonatomic, readonly) GPBDataType dataType;
@property(nonatomic, readonly, getter=isRepeated) BOOL repeated;
@property(nonatomic, readonly, getter=isPackable) BOOL packable;
@property(nonatomic, readonly) Class msgClass;
@property(nonatomic, readonly) NSString *singletonName;
@property(nonatomic, readonly, strong, nullable) GPBEnumDescriptor *enumDescriptor;
@property(nonatomic, readonly, nullable) id defaultValue;

@end

NS_ASSUME_NONNULL_END
