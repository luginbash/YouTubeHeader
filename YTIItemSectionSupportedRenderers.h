#import "YTICompactLinkRenderer.h"
#import "YTICompactListItemRenderer.h"
#import "YTIElementRenderer.h"

@interface YTIItemSectionSupportedRenderers : GPBMessage
@property (readonly, nonatomic) YTICompactLinkRenderer *compactLinkRenderer;
@property (readonly, nonatomic) YTICompactListItemRenderer *compactListItemRenderer;
@property (nonatomic, strong, readwrite) YTIElementRenderer *elementRenderer;
@property (nonatomic, assign, readwrite) BOOL hasPromotedVideoRenderer;
@property (nonatomic, assign, readwrite) BOOL hasPromotedVideoInlineMutedRenderer;
@property (nonatomic, assign, readwrite) BOOL hasCompactPromotedVideoRenderer;
- (BOOL)hasCompactLinkRenderer;
- (BOOL)hasCompactListItemRenderer;
@end
