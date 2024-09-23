#import <Foundation/Foundation.h>

#import "GPBExtensionRegistry.h"
#import "GPBMessage.h"

NS_ASSUME_NONNULL_BEGIN

CF_EXTERN_C_BEGIN

extern NSString *const GPBCodedInputStreamException;
extern NSString *const GPBCodedInputStreamUnderlyingErrorKey;
extern NSString *const GPBCodedInputStreamErrorDomain;

typedef NS_ENUM(NSInteger, GPBCodedInputStreamErrorCode) {
  GPBCodedInputStreamErrorInvalidSize = -100,
  GPBCodedInputStreamErrorSubsectionLimitReached = -101,
  GPBCodedInputStreamErrorInvalidSubsectionLimit = -102,
  GPBCodedInputStreamErrorInvalidTag = -103,
  GPBCodedInputStreamErrorInvalidUTF8 = -104,
  GPBCodedInputStreamErrorInvalidVarInt = -105,
  GPBCodedInputStreamErrorRecursionDepthExceeded = -106,
};

CF_EXTERN_C_END

@interface GPBCodedInputStream : NSObject
+ (instancetype)streamWithData:(NSData *)data;
- (instancetype)initWithData:(NSData *)data;
- (int32_t)readTag;
- (double)readDouble;
- (float)readFloat;
- (uint64_t)readUInt64;
- (uint32_t)readUInt32;
- (int64_t)readInt64;
- (int32_t)readInt32;
- (uint64_t)readFixed64;
- (uint32_t)readFixed32;
- (int32_t)readEnum;
- (int32_t)readSFixed32;
- (int64_t)readSFixed64;
- (int32_t)readSInt32;
- (int64_t)readSInt64;
- (BOOL)readBool;
- (NSString *)readString;
- (NSData *)readBytes;
- (void)readMessage:(GPBMessage *)message extensionRegistry:(nullable id<GPBExtensionRegistry>)extensionRegistry;
- (BOOL)skipField:(int32_t)tag;
- (void)skipMessage;
- (BOOL)isAtEnd;
- (size_t)position;
- (size_t)pushLimit:(size_t)byteLimit;
- (void)popLimit:(size_t)oldLimit;
- (size_t)bytesUntilLimit;
- (void)checkLastTagWas:(int32_t)expected;
@end

NS_ASSUME_NONNULL_END
