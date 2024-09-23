#import <Foundation/Foundation.h>

#import "GPBBootstrap.h"

@class GPBEnumDescriptor;
@class GPBMessage;

typedef BOOL (*GPBEnumValidationFunc)(int32_t);
typedef GPBEnumDescriptor *(*GPBEnumDescriptorFunc)(void);

typedef union {
  BOOL valueBool;
  int32_t valueInt32;
  int64_t valueInt64;
  uint32_t valueUInt32;
  uint64_t valueUInt64;
  float valueFloat;
  double valueDouble;
  GPB_UNSAFE_UNRETAINED NSData *valueData;
  GPB_UNSAFE_UNRETAINED NSString *valueString;
  GPB_UNSAFE_UNRETAINED GPBMessage *valueMessage;
  int32_t valueEnum;
} GPBGenericValue;

typedef NS_ENUM(uint8_t, GPBDataType) {
  GPBDataTypeBool = 0,
  GPBDataTypeFixed32,
  GPBDataTypeSFixed32,
  GPBDataTypeFloat,
  GPBDataTypeFixed64,
  GPBDataTypeSFixed64,
  GPBDataTypeDouble,
  GPBDataTypeInt32,
  GPBDataTypeInt64,
  GPBDataTypeSInt32,
  GPBDataTypeSInt64,
  GPBDataTypeUInt32,
  GPBDataTypeUInt64,
  GPBDataTypeBytes,
  GPBDataTypeString,
  GPBDataTypeMessage,
  GPBDataTypeGroup,
  GPBDataTypeEnum,
};

typedef struct GPBExtensionRange {
  uint32_t start;
  uint32_t end;
} GPBExtensionRange;

typedef struct GPBObjcClass_t GPBObjcClass_t;
