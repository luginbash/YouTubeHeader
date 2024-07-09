#import "YTICompactListItemThumbnailSupportedRenderers.h"
#import "YTIFormattedString.h"

@interface YTICompactListItemRenderer : GPBMessage
@property (nonatomic, strong) YTICompactListItemThumbnailSupportedRenderers *thumbnail;
@property (nonatomic, strong) YTIFormattedString *title;
- (BOOL)hasThumbnail;
- (BOOL)hasTitle;
@end
