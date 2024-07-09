#import "YTIElementRenderer.h"

@interface YTIItemSectionSupportedRenderers : GPBMessage
@property (nonatomic, strong, readwrite) YTIElementRenderer *elementRenderer;
@property (nonatomic, assign, readwrite) BOOL hasPromotedVideoRenderer;
@property (nonatomic, assign, readwrite) BOOL hasPromotedVideoInlineMutedRenderer;
@property (nonatomic, assign, readwrite) BOOL hasCompactPromotedVideoRenderer;
@property (readonly, nonatomic) YTICompactLinkRenderer *compactLinkRenderer;
@property (readonly, nonatomic) YTICompactListItemRenderer *compactListItemRenderer;
- (BOOL)hasCompactLinkRenderer;
- (BOOL)hasCompactListItemRenderer;
@end
