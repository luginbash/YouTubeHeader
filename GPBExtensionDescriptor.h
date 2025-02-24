#import <Foundation/Foundation.h>

@interface GPBExtensionDescriptor : NSObject<NSCopying>
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
