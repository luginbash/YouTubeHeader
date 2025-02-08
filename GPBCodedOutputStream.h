#import <Foundation/Foundation.h>

#import "GPBRuntimeTypes.h"
#import "GPBWireFormat.h"

#import "GPBArray.h"

NS_ASSUME_NONNULL_BEGIN

extern NSString *const GPBCodedOutputStreamException_OutOfSpace;
extern NSString *const GPBCodedOutputStreamException_WriteFailed;

__attribute__((objc_subclassing_restricted))
@interface GPBCodedOutputStream : NSObject

+ (instancetype)streamWithData:(NSMutableData *)data;
+ (instancetype)streamWithOutputStream:(NSOutputStream *)output;

- (instancetype)initWithData:(NSMutableData *)data;
- (instancetype)initWithOutputStream:(NSOutputStream *)output;

- (void)flush;
- (size_t)bytesWritten;

- (void)writeRawByte:(uint8_t)value;
- (void)writeTag:(uint32_t)fieldNumber format:(GPBWireFormat)format;
- (void)writeRawLittleEndian32:(int32_t)value;
- (void)writeRawLittleEndian64:(int64_t)value;
- (void)writeRawVarint32:(int32_t)value;
- (void)writeRawVarint64:(int64_t)value;
- (void)writeRawVarintSizeTAs32:(size_t)value;
- (void)writeRawData:(NSData *)data;
- (void)writeRawPtr:(const void *)data offset:(size_t)offset length:(size_t)length;

- (void)writeBool:(int32_t)fieldNumber value:(BOOL)value;
- (void)writeBoolArray:(int32_t)fieldNumber values:(GPBBoolArray *)values tag:(uint32_t)tag;
- (void)writeBoolNoTag:(BOOL)value;

- (void)writeEnum:(int32_t)fieldNumber value:(int32_t)value;
- (void)writeEnumArray:(int32_t)fieldNumber values:(GPBEnumArray *)values tag:(uint32_t)tag;
- (void)writeEnumNoTag:(int32_t)value;

- (void)writeString:(int32_t)fieldNumber value:(NSString *)value;
- (void)writeStringArray:(int32_t)fieldNumber values:(NSArray<NSString*> *)values;
- (void)writeStringNoTag:(NSString *)value;

- (void)writeMessage:(int32_t)fieldNumber value:(GPBMessage *)value;
- (void)writeMessageArray:(int32_t)fieldNumber values:(NSArray<GPBMessage*> *)values;
- (void)writeMessageNoTag:(GPBMessage *)value;

- (void)writeBytes:(int32_t)fieldNumber value:(NSData *)value;
- (void)writeBytesArray:(int32_t)fieldNumber values:(NSArray<NSData*> *)values;
- (void)writeBytesNoTag:(NSData *)value;

@end

NS_ASSUME_NONNULL_END
