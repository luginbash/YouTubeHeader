#import <Foundation/Foundation.h>

#import "GPBMessage.h"
#import "GPBUnknownField.h"

@class GPBMessage;
@class GPBUnknownField;

NS_ASSUME_NONNULL_BEGIN

@interface GPBUnknownFields : NSObject<NSCopying, NSFastEnumeration>
- (instancetype)initFromMessage:(nonnull GPBMessage *)message;
- (instancetype)init;
@property(nonatomic, readonly, assign) NSUInteger count;
@property(nonatomic, readonly, assign) BOOL empty;
- (void)clear;
- (nullable NSArray<GPBUnknownField *> *)fields:(int32_t)fieldNumber;
- (void)addFieldNumber:(int32_t)fieldNumber varint:(uint64_t)value;
- (void)addFieldNumber:(int32_t)fieldNumber fixed32:(uint32_t)value;
- (void)addFieldNumber:(int32_t)fieldNumber fixed64:(uint64_t)value;
- (void)addFieldNumber:(int32_t)fieldNumber lengthDelimited:(nonnull NSData *)value;
- (nonnull GPBUnknownFields *)addGroupWithFieldNumber:(int32_t)fieldNumber;
- (GPBUnknownField *)addCopyOfField:(nonnull GPBUnknownField *)field;
- (void)removeField:(nonnull GPBUnknownField *)field;
- (void)clearFieldNumber:(int32_t)fieldNumber;
@end

@interface GPBUnknownFields (AccessHelpers)
- (BOOL)getFirst:(int32_t)fieldNumber varint:(nonnull uint64_t *)outValue;
- (BOOL)getFirst:(int32_t)fieldNumber fixed32:(nonnull uint32_t *)outValue;
- (BOOL)getFirst:(int32_t)fieldNumber fixed64:(nonnull uint64_t *)outValue;
- (nullable NSData *)firstLengthDelimited:(int32_t)fieldNumber;
- (nullable GPBUnknownFields *)firstGroup:(int32_t)fieldNumber;
@end

NS_ASSUME_NONNULL_END
