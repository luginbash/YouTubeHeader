#import <Foundation/Foundation.h>

#import "GPBArray.h"
#import "GPBUnknownFields.h"

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

@property(nonatomic, readonly, assign) int32_t number;
@property(nonatomic, readonly, assign) GPBUnknownFieldType type;
@property(nonatomic, readonly, assign) uint64_t varint;
@property(nonatomic, readonly, assign) uint32_t fixed32;
@property(nonatomic, readonly, assign) uint64_t fixed64;
@property(nonatomic, readonly, strong, nonnull) NSData *lengthDelimited;
@property (nonatomic, readonly, strong) NSArray <NSData *> *lengthDelimitedList;
@property(nonatomic, readonly, strong, nonnull) GPBUnknownFields *group;

@end

NS_ASSUME_NONNULL_END
