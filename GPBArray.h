#import <Foundation/Foundation.h>

#import "GPBRuntimeTypes.h"

NS_ASSUME_NONNULL_BEGIN

#pragma mark - Int32

@interface GPBInt32Array : NSObject <NSCopying>

@property(nonatomic, readonly) NSUInteger count;

+ (instancetype)array;
+ (instancetype)arrayWithValue:(int32_t)value;
+ (instancetype)arrayWithValueArray:(GPBInt32Array *)array;
+ (instancetype)arrayWithCapacity:(NSUInteger)count;

- (instancetype)init NS_DESIGNATED_INITIALIZER;
- (instancetype)initWithValues:(const int32_t [__nullable])values
                         count:(NSUInteger)count;
- (instancetype)initWithValueArray:(GPBInt32Array *)array;
- (instancetype)initWithCapacity:(NSUInteger)count;

- (int32_t)valueAtIndex:(NSUInteger)index;
- (void)enumerateValuesWithBlock:(void (NS_NOESCAPE ^)(int32_t value, NSUInteger idx,
                                                       BOOL *stop))block;
- (void)enumerateValuesWithOptions:(NSEnumerationOptions)opts
                        usingBlock:(void (NS_NOESCAPE ^)(int32_t value, NSUInteger idx,
                                                         BOOL *stop))block;

- (void)addValue:(int32_t)value;
- (void)addValues:(const int32_t [__nullable])values count:(NSUInteger)count;
- (void)addValuesFromArray:(GPBInt32Array *)array;
- (void)insertValue:(int32_t)value atIndex:(NSUInteger)index;
- (void)replaceValueAtIndex:(NSUInteger)index withValue:(int32_t)value;
- (void)removeValueAtIndex:(NSUInteger)index;
- (void)removeAll;
- (void)exchangeValueAtIndex:(NSUInteger)idx1
            withValueAtIndex:(NSUInteger)idx2;

@end

#pragma mark - UInt32

@interface GPBUInt32Array : NSObject <NSCopying>

@property(nonatomic, readonly) NSUInteger count;

+ (instancetype)array;
+ (instancetype)arrayWithValue:(uint32_t)value;
+ (instancetype)arrayWithValueArray:(GPBUInt32Array *)array;
+ (instancetype)arrayWithCapacity:(NSUInteger)count;

- (instancetype)init NS_DESIGNATED_INITIALIZER;
- (instancetype)initWithValues:(const uint32_t [__nullable])values
                         count:(NSUInteger)count;
- (instancetype)initWithValueArray:(GPBUInt32Array *)array;
- (instancetype)initWithCapacity:(NSUInteger)count;

- (uint32_t)valueAtIndex:(NSUInteger)index;
- (void)enumerateValuesWithBlock:(void (NS_NOESCAPE ^)(uint32_t value, NSUInteger idx,
                                                       BOOL *stop))block;
- (void)enumerateValuesWithOptions:(NSEnumerationOptions)opts
                        usingBlock:(void (NS_NOESCAPE ^)(uint32_t value, NSUInteger idx,
                                                         BOOL *stop))block;

- (void)addValue:(uint32_t)value;
- (void)addValues:(const uint32_t [__nullable])values count:(NSUInteger)count;
- (void)addValuesFromArray:(GPBUInt32Array *)array;
- (void)insertValue:(uint32_t)value atIndex:(NSUInteger)index;
- (void)replaceValueAtIndex:(NSUInteger)index withValue:(uint32_t)value;
- (void)removeValueAtIndex:(NSUInteger)index;
- (void)removeAll;
- (void)exchangeValueAtIndex:(NSUInteger)idx1
            withValueAtIndex:(NSUInteger)idx2;

@end

#pragma mark - Int64

@interface GPBInt64Array : NSObject <NSCopying>

@property(nonatomic, readonly) NSUInteger count;

+ (instancetype)array;
+ (instancetype)arrayWithValue:(int64_t)value;
+ (instancetype)arrayWithValueArray:(GPBInt64Array *)array;
+ (instancetype)arrayWithCapacity:(NSUInteger)count;

- (instancetype)init NS_DESIGNATED_INITIALIZER;
- (instancetype)initWithValues:(const int64_t [__nullable])values
                         count:(NSUInteger)count;
- (instancetype)initWithValueArray:(GPBInt64Array *)array;
- (instancetype)initWithCapacity:(NSUInteger)count;

- (int64_t)valueAtIndex:(NSUInteger)index;
- (void)enumerateValuesWithBlock:(void (NS_NOESCAPE ^)(int64_t value, NSUInteger idx,
                                                       BOOL *stop))block;
- (void)enumerateValuesWithOptions:(NSEnumerationOptions)opts
                        usingBlock:(void (NS_NOESCAPE ^)(int64_t value, NSUInteger idx,
                                                         BOOL *stop))block;

- (void)addValue:(int64_t)value;
- (void)addValues:(const int64_t [__nullable])values count:(NSUInteger)count;
- (void)addValuesFromArray:(GPBInt64Array *)array;
- (void)insertValue:(int64_t)value atIndex:(NSUInteger)index;
- (void)replaceValueAtIndex:(NSUInteger)index withValue:(int64_t)value;
- (void)removeValueAtIndex:(NSUInteger)index;
- (void)removeAll;
- (void)exchangeValueAtIndex:(NSUInteger)idx1
            withValueAtIndex:(NSUInteger)idx2;

@end

#pragma mark - UInt64

@interface GPBUInt64Array : NSObject <NSCopying>

@property(nonatomic, readonly) NSUInteger count;

+ (instancetype)array;
+ (instancetype)arrayWithValue:(uint64_t)value;
+ (instancetype)arrayWithValueArray:(GPBUInt64Array *)array;
+ (instancetype)arrayWithCapacity:(NSUInteger)count;

- (instancetype)init NS_DESIGNATED_INITIALIZER;
- (instancetype)initWithValues:(const uint64_t [__nullable])values
                         count:(NSUInteger)count;
- (instancetype)initWithValueArray:(GPBUInt64Array *)array;
- (instancetype)initWithCapacity:(NSUInteger)count;

- (uint64_t)valueAtIndex:(NSUInteger)index;
- (void)enumerateValuesWithBlock:(void (NS_NOESCAPE ^)(uint64_t value, NSUInteger idx,
                                                       BOOL *stop))block;
- (void)enumerateValuesWithOptions:(NSEnumerationOptions)opts
                        usingBlock:(void (NS_NOESCAPE ^)(uint64_t value, NSUInteger idx,
                                                         BOOL *stop))block;

- (void)addValue:(uint64_t)value;
- (void)addValues:(const uint64_t [__nullable])values count:(NSUInteger)count;
- (void)addValuesFromArray:(GPBUInt64Array *)array;
- (void)insertValue:(uint64_t)value atIndex:(NSUInteger)index;
- (void)replaceValueAtIndex:(NSUInteger)index withValue:(uint64_t)value;
- (void)removeValueAtIndex:(NSUInteger)index;
- (void)removeAll;
- (void)exchangeValueAtIndex:(NSUInteger)idx1
            withValueAtIndex:(NSUInteger)idx2;

@end

#pragma mark - Float

@interface GPBFloatArray : NSObject <NSCopying>

@property(nonatomic, readonly) NSUInteger count;

+ (instancetype)array;
+ (instancetype)arrayWithValue:(float)value;
+ (instancetype)arrayWithValueArray:(GPBFloatArray *)array;
+ (instancetype)arrayWithCapacity:(NSUInteger)count;

- (instancetype)init NS_DESIGNATED_INITIALIZER;
- (instancetype)initWithValues:(const float [__nullable])values
                         count:(NSUInteger)count;
- (instancetype)initWithValueArray:(GPBFloatArray *)array;
- (instancetype)initWithCapacity:(NSUInteger)count;

- (float)valueAtIndex:(NSUInteger)index;
- (void)enumerateValuesWithBlock:(void (NS_NOESCAPE ^)(float value, NSUInteger idx,
                                                       BOOL *stop))block;
- (void)enumerateValuesWithOptions:(NSEnumerationOptions)opts
                        usingBlock:(void (NS_NOESCAPE ^)(float value, NSUInteger idx,
                                                         BOOL *stop))block;

- (void)addValue:(float)value;
- (void)addValues:(const float [__nullable])values count:(NSUInteger)count;
- (void)addValuesFromArray:(GPBFloatArray *)array;
- (void)insertValue:(float)value atIndex:(NSUInteger)index;
- (void)replaceValueAtIndex:(NSUInteger)index withValue:(float)value;
- (void)removeValueAtIndex:(NSUInteger)index;
- (void)removeAll;
- (void)exchangeValueAtIndex:(NSUInteger)idx1
            withValueAtIndex:(NSUInteger)idx2;

@end

#pragma mark - Double

@interface GPBDoubleArray : NSObject <NSCopying>

@property(nonatomic, readonly) NSUInteger count;

+ (instancetype)array;
+ (instancetype)arrayWithValue:(double)value;
+ (instancetype)arrayWithValueArray:(GPBDoubleArray *)array;
+ (instancetype)arrayWithCapacity:(NSUInteger)count;

- (instancetype)init NS_DESIGNATED_INITIALIZER;
- (instancetype)initWithValues:(const double [__nullable])values
                         count:(NSUInteger)count;
- (instancetype)initWithValueArray:(GPBDoubleArray *)array;
- (instancetype)initWithCapacity:(NSUInteger)count;

- (double)valueAtIndex:(NSUInteger)index;
- (void)enumerateValuesWithBlock:(void (NS_NOESCAPE ^)(double value, NSUInteger idx,
                                                       BOOL *stop))block;
- (void)enumerateValuesWithOptions:(NSEnumerationOptions)opts
                        usingBlock:(void (NS_NOESCAPE ^)(double value, NSUInteger idx,
                                                         BOOL *stop))block;

- (void)addValue:(double)value;
- (void)addValues:(const double [__nullable])values count:(NSUInteger)count;
- (void)addValuesFromArray:(GPBDoubleArray *)array;
- (void)insertValue:(double)value atIndex:(NSUInteger)index;
- (void)replaceValueAtIndex:(NSUInteger)index withValue:(double)value;
- (void)removeValueAtIndex:(NSUInteger)index;
- (void)removeAll;
- (void)exchangeValueAtIndex:(NSUInteger)idx1
            withValueAtIndex:(NSUInteger)idx2;

@end

#pragma mark - Bool

@interface GPBBoolArray : NSObject <NSCopying>

@property(nonatomic, readonly) NSUInteger count;

+ (instancetype)array;
+ (instancetype)arrayWithValue:(BOOL)value;
+ (instancetype)arrayWithValueArray:(GPBBoolArray *)array;
+ (instancetype)arrayWithCapacity:(NSUInteger)count;

- (instancetype)init NS_DESIGNATED_INITIALIZER;
- (instancetype)initWithValues:(const BOOL [__nullable])values
                         count:(NSUInteger)count;
- (instancetype)initWithValueArray:(GPBBoolArray *)array;
- (instancetype)initWithCapacity:(NSUInteger)count;

- (BOOL)valueAtIndex:(NSUInteger)index;
- (void)enumerateValuesWithBlock:(void (NS_NOESCAPE ^)(BOOL value, NSUInteger idx,
                                                       BOOL *stop))block;
- (void)enumerateValuesWithOptions:(NSEnumerationOptions)opts
                        usingBlock:(void (NS_NOESCAPE ^)(BOOL value, NSUInteger idx,
                                                         BOOL *stop))block;

- (void)addValue:(BOOL)value;
- (void)addValues:(const BOOL [__nullable])values count:(NSUInteger)count;
- (void)addValuesFromArray:(GPBBoolArray *)array;
- (void)insertValue:(BOOL)value atIndex:(NSUInteger)index;
- (void)replaceValueAtIndex:(NSUInteger)index withValue:(BOOL)value;
- (void)removeValueAtIndex:(NSUInteger)index;
- (void)removeAll;
- (void)exchangeValueAtIndex:(NSUInteger)idx1
            withValueAtIndex:(NSUInteger)idx2;

@end

#pragma mark - Enum

@interface GPBEnumArray : NSObject <NSCopying>

@property(nonatomic, readonly) NSUInteger count;
@property(nonatomic, readonly) GPBEnumValidationFunc validationFunc;

+ (instancetype)array;
+ (instancetype)arrayWithValidationFunction:(nullable GPBEnumValidationFunc)func;
+ (instancetype)arrayWithValidationFunction:(nullable GPBEnumValidationFunc)func
                                   rawValue:(int32_t)value;
+ (instancetype)arrayWithValueArray:(GPBEnumArray *)array;
+ (instancetype)arrayWithValidationFunction:(nullable GPBEnumValidationFunc)func
                                   capacity:(NSUInteger)count;

- (instancetype)initWithValidationFunction:(nullable GPBEnumValidationFunc)func
    NS_DESIGNATED_INITIALIZER;
- (instancetype)initWithValidationFunction:(nullable GPBEnumValidationFunc)func
                                 rawValues:(const int32_t [__nullable])values
                                     count:(NSUInteger)count;
- (instancetype)initWithValueArray:(GPBEnumArray *)array;
- (instancetype)initWithValidationFunction:(nullable GPBEnumValidationFunc)func
                                  capacity:(NSUInteger)count;

- (int32_t)valueAtIndex:(NSUInteger)index;
- (void)enumerateValuesWithBlock:(void (NS_NOESCAPE ^)(int32_t value, NSUInteger idx,
                                                       BOOL *stop))block;
- (void)enumerateValuesWithOptions:(NSEnumerationOptions)opts
                        usingBlock:(void (NS_NOESCAPE ^)(int32_t value, NSUInteger idx,
                                                         BOOL *stop))block;

- (int32_t)rawValueAtIndex:(NSUInteger)index;
- (void)enumerateRawValuesWithBlock:(void (NS_NOESCAPE ^)(int32_t value, NSUInteger idx,
                                                          BOOL *stop))block;
- (void)enumerateRawValuesWithOptions:(NSEnumerationOptions)opts
                           usingBlock:(void (NS_NOESCAPE ^)(int32_t value, NSUInteger idx,
                                                          BOOL *stop))block;

- (void)addValue:(int32_t)value;
- (void)addValues:(const int32_t [__nullable])values count:(NSUInteger)count;

- (void)insertValue:(int32_t)value atIndex:(NSUInteger)index;
- (void)replaceValueAtIndex:(NSUInteger)index withValue:(int32_t)value;

- (void)addRawValue:(int32_t)value;
- (void)addRawValuesFromArray:(GPBEnumArray *)array;
- (void)addRawValues:(const int32_t [__nullable])values count:(NSUInteger)count;
- (void)insertRawValue:(int32_t)value atIndex:(NSUInteger)index;
- (void)replaceValueAtIndex:(NSUInteger)index withRawValue:(int32_t)value;

- (void)removeValueAtIndex:(NSUInteger)index;
- (void)removeAll;
- (void)exchangeValueAtIndex:(NSUInteger)idx1
            withValueAtIndex:(NSUInteger)idx2;

@end

NS_ASSUME_NONNULL_END
