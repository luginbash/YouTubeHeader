#import <Foundation/Foundation.h>

#import "GPBRuntimeTypes.h"

NS_ASSUME_NONNULL_BEGIN

@interface GPBInt32Array : NSObject <NSCopying>

@property(nonatomic, readonly) NSUInteger count;

+ (instancetype)array;
+ (instancetype)arrayWithValue:(int32_t)value;
+ (instancetype)arrayWithValueArray:(GPBInt32Array *)array;
+ (instancetype)arrayWithCapacity:(NSUInteger)count;

- (instancetype)init NS_DESIGNATED_INITIALIZER;
- (instancetype)initWithValues:(const int32_t [__nullable])values count:(NSUInteger)count;
- (instancetype)initWithValueArray:(GPBInt32Array *)array;
- (instancetype)initWithCapacity:(NSUInteger)count;

- (int32_t)valueAtIndex:(NSUInteger)index;

- (void)enumerateValuesWithBlock:(void (NS_NOESCAPE ^)(int32_t value, NSUInteger idx, BOOL *stop))block;
- (void)enumerateValuesWithOptions:(NSEnumerationOptions)opts usingBlock:(void (NS_NOESCAPE ^)(int32_t value, NSUInteger idx, BOOL *stop))block;

- (void)addValue:(int32_t)value;
- (void)addValues:(const int32_t [__nullable])values count:(NSUInteger)count;
- (void)addValuesFromArray:(GPBInt32Array *)array;

- (void)insertValue:(int32_t)value atIndex:(NSUInteger)index;
- (void)replaceValueAtIndex:(NSUInteger)index withValue:(int32_t)value;
- (void)removeValueAtIndex:(NSUInteger)index;
- (void)removeAll;
- (void)exchangeValueAtIndex:(NSUInteger)idx1 withValueAtIndex:(NSUInteger)idx2;

@end

@interface GPBUInt32Array : NSObject <NSCopying>

@property(nonatomic, readonly) NSUInteger count;

+ (instancetype)array;
+ (instancetype)arrayWithValue:(uint32_t)value;
+ (instancetype)arrayWithValueArray:(GPBUInt32Array *)array;
+ (instancetype)arrayWithCapacity:(NSUInteger)count;

- (instancetype)init NS_DESIGNATED_INITIALIZER;
- (instancetype)initWithValues:(const uint32_t [__nullable])values count:(NSUInteger)count;
- (instancetype)initWithValueArray:(GPBUInt32Array *)array;
- (instancetype)initWithCapacity:(NSUInteger)count;

- (uint32_t)valueAtIndex:(NSUInteger)index;

- (void)enumerateValuesWithBlock:(void (NS_NOESCAPE ^)(uint32_t value, NSUInteger idx, BOOL *stop))block;
- (void)enumerateValuesWithOptions:(NSEnumerationOptions)opts usingBlock:(void (NS_NOESCAPE ^)(uint32_t value, NSUInteger idx, BOOL *stop))block;

- (void)addValue:(uint32_t)value;
- (void)addValues:(const uint32_t [__nullable])values count:(NSUInteger)count;
- (void)addValuesFromArray:(GPBUInt32Array *)array;

- (void)insertValue:(uint32_t)value atIndex:(NSUInteger)index;
- (void)replaceValueAtIndex:(NSUInteger)index withValue:(uint32_t)value;
- (void)removeValueAtIndex:(NSUInteger)index;
- (void)removeAll;
- (void)exchangeValueAtIndex:(NSUInteger)idx1 withValueAtIndex:(NSUInteger)idx2;

@end

NS_ASSUME_NONNULL_END
