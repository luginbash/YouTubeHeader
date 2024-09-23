#import <Foundation/Foundation.h>

#import "GPBDescriptor.h"

NS_ASSUME_NONNULL_BEGIN

@protocol GPBExtensionRegistry <NSObject>
- (nullable GPBExtensionDescriptor *)extensionForDescriptor:(GPBDescriptor *)descriptor fieldNumber:(NSInteger)fieldNumber;
@end

__attribute__((objc_subclassing_restricted))

@interface GPBExtensionRegistry : NSObject <NSCopying, GPBExtensionRegistry>
- (void)addExtension:(GPBExtensionDescriptor *)extension;
- (void)addExtensions:(GPBExtensionRegistry *)registry;
@end

NS_ASSUME_NONNULL_END
