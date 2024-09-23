#import <Foundation/Foundation.h>

#import "GPBArray.h"
#import "GPBUnknownFieldSet.h"
#import "GPBUnknownFields.h"

@class GPBUnknownFieldSet;
@class GPBUnknownFields;

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(uint8_t, GPBUnknownFieldType) {
  GPBUnknownFieldTypeVarint,
  GPBUnknownFieldTypeFixed32,
  GPBUnknownFieldTypeFixed64,
  GPBUnknownFieldTypeLengthDelimited,
  GPBUnknownFieldTypeGroup,
};

__attribute__((objc_subclassing_restricted))
@interface GPBUnknownField : NSObject<NSCopying>

- (instancetype)initWithNumber:(int32_t)number
    __attribute__((deprecated(
        "Use the apis on GPBUnknownFields to add new fields instead of making them directly.")));

@property(nonatomic, readonly, assign) int32_t number;
@property(nonatomic, readonly, assign) GPBUnknownFieldType type;
@property(nonatomic, readonly, assign) uint64_t varint;
@property(nonatomic, readonly, assign) uint32_t fixed32;
@property(nonatomic, readonly, assign) uint64_t fixed64;
@property(nonatomic, readonly, strong, nonnull) NSData *lengthDelimited;
@property(nonatomic, readonly, strong, nonnull) GPBUnknownFields *group;
@property(nonatomic, readonly, strong) GPBUInt64Array *varintList
    __attribute__((deprecated("See the new apis on GPBUnknownFields and thus reduced api here.")));
@property(nonatomic, readonly, strong) GPBUInt32Array *fixed32List
    __attribute__((deprecated("See the new apis on GPBUnknownFields and thus reduced api here.")));
@property(nonatomic, readonly, strong) GPBUInt64Array *fixed64List
    __attribute__((deprecated("See the new apis on GPBUnknownFields and thus reduced api here.")));
@property(nonatomic, readonly, strong) NSArray<NSData *> *lengthDelimitedList
    __attribute__((deprecated("See the new apis on GPBUnknownFields and thus reduced api here.")));
@property(nonatomic, readonly, strong) NSArray<GPBUnknownFieldSet *> *groupList
    __attribute__((deprecated("See the new apis on GPBUnknownFields and thus reduced api here.")));

- (void)addVarint:(uint64_t)value
    __attribute__((deprecated("See the new apis on GPBUnknownFields and thus reduced api here.")));

- (void)addFixed32:(uint32_t)value
    __attribute__((deprecated("See the new apis on GPBUnknownFields and thus reduced api here.")));

- (void)addFixed64:(uint64_t)value
    __attribute__((deprecated("See the new apis on GPBUnknownFields and thus reduced api here.")));

- (void)addLengthDelimited:(NSData *)value
    __attribute__((deprecated("See the new apis on GPBUnknownFields and thus reduced api here.")));

- (void)addGroup:(GPBUnknownFieldSet *)value
    __attribute__((deprecated("See the new apis on GPBUnknownFields and thus reduced api here.")));

@end

NS_ASSUME_NONNULL_END
