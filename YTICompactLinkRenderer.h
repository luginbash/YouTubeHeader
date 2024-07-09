#import "YTIIcon.h"
#import "YTIFormattedString.h"
#import "YTICompactListItemThumbnailSupportedRenderers.h"

@interface YTICompactLinkRenderer : GPBMessage
@property (nonatomic, strong) YTIIcon *icon;
@property (nonatomic, strong) YTIFormattedString *title;
@property (nonatomic, strong) YTICompactListItemThumbnailSupportedRenderers *thumbnail;
- (BOOL)hasIcon;
- (BOOL)hasThumbnail;
@end
