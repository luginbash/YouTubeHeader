#import <Foundation/Foundation.h>

#import "GPBUnknownField.h"

@class GPBUnknownField;

NS_ASSUME_NONNULL_BEGIN

__attribute__((deprecated("Use GPBUnknownFields instead.", "GPBUnknownFields")))
__attribute__((objc_subclassing_restricted))
@interface GPBUnknownFieldSet : NSObject<NSCopying>
- (BOOL)hasField:(int32_t)number;
- (nullable GPBUnknownField *)getField:(int32_t)number;
- (NSUInteger)countOfFields;
- (void)addField:(GPBUnknownField *)field;
- (NSArray<GPBUnknownField *> *)sortedFields;
@end

NS_ASSUME_NONNULL_END
