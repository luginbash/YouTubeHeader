#import <Foundation/Foundation.h>
#import "GPBBootstrap.h"
#import "GPBCodedInputStream.h"
#import "GPBCodedOutputStream.h"
#import "GPBDescriptor.h"
#import "GPBExtensionRegistry.h"
#import "GPBUnknownFields.h"

@class GPBCodedInputStream;
@class GPBCodedOutputStream;
@class GPBUnknownFields;

NS_ASSUME_NONNULL_BEGIN

CF_EXTERN_C_BEGIN

extern NSString *const GPBMessageErrorDomain;

typedef NS_ENUM(NSInteger, GPBMessageErrorCode) {
  GPBMessageErrorCodeOther = -100,
  GPBMessageErrorCodeMissingRequiredField = -101,
};

extern NSString *const GPBErrorReasonKey;
extern NSString *const GPBMessageExceptionMessageTooLarge;

CF_EXTERN_C_END

@interface GPBMessage : NSObject <NSSecureCoding, NSCopying>
@property(nonatomic, readonly, getter=isInitialized) BOOL initialized;
+ (instancetype)message;
+ (nullable instancetype)parseFromData:(NSData *)data error:(NSError **)errorPtr;
+ (nullable instancetype)parseFromData:(NSData *)data extensionRegistry:(nullable id<GPBExtensionRegistry>)extensionRegistry error:(NSError **)errorPtr;
+ (nullable instancetype)parseFromCodedInputStream:(GPBCodedInputStream *)input extensionRegistry: (nullable id<GPBExtensionRegistry>)extensionRegistry error:(NSError **)errorPtr;
+ (nullable instancetype)parseDelimitedFromCodedInputStream:(GPBCodedInputStream *)input extensionRegistry: (nullable id<GPBExtensionRegistry>)extensionRegistry error:(NSError **)errorPtr;
- (nullable instancetype)initWithData:(NSData *)data error:(NSError **)errorPtr;
- (nullable instancetype)initWithData:(NSData *)data extensionRegistry:(nullable id<GPBExtensionRegistry>)extensionRegistry error:(NSError **)errorPtr;
- (nullable instancetype)initWithCodedInputStream:(GPBCodedInputStream *)input extensionRegistry: (nullable id<GPBExtensionRegistry>)extensionRegistry error:(NSError **)errorPtr;
- (instancetype)messageForFieldNumber:(NSUInteger)fieldNumber;
- (instancetype)messageForFieldNumber:(NSUInteger)fieldNumber messageClass:(Class)messageClass;
- (BOOL)mergeFromData:(NSData *)data extensionRegistry:(nullable id<GPBExtensionRegistry>)extensionRegistry error:(NSError **)errorPtr;
- (void)mergeFrom:(GPBMessage *)other;
- (void)writeToCodedOutputStream:(GPBCodedOutputStream *)output;
- (void)writeToOutputStream:(NSOutputStream *)output;
- (void)writeDelimitedToCodedOutputStream:(GPBCodedOutputStream *)output;
- (void)writeDelimitedToOutputStream:(NSOutputStream *)output;
- (nullable NSData *)data;
- (NSData *)delimitedData;
- (size_t)serializedSize;
+ (GPBDescriptor *)descriptor;
- (GPBDescriptor *)descriptor;
- (NSArray *)extensionsCurrentlySet;
- (BOOL)hasExtension:(GPBExtensionDescriptor *)extension;
- (nullable id)getExtension:(GPBExtensionDescriptor *)extension;
- (void)setExtension:(GPBExtensionDescriptor *)extension value:(nullable id)value;
- (void)addExtension:(GPBExtensionDescriptor *)extension value:(id)value;
- (void)setExtension:(GPBExtensionDescriptor *)extension index:(NSUInteger)index value:(id)value;
- (void)clearExtension:(GPBExtensionDescriptor *)extension;
- (void)clear;
- (void)clearUnknownFields;
- (BOOL)mergeUnknownFields:(GPBUnknownFields *)unknownFields extensionRegistry:(nullable id<GPBExtensionRegistry>)extensionRegistry error:(NSError **)errorPtr;
@end

NS_ASSUME_NONNULL_END
