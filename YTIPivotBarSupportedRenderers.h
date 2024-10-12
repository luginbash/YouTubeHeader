#import "YTIPivotBarItemRenderer.h"
#import "YTIPivotBarIconOnlyItemRenderer.h"

@interface YTIPivotBarSupportedRenderers : NSObject
@property (nonatomic, assign, readonly) int itemsOneOfCase;
@property (nonatomic, strong, readwrite) YTIPivotBarItemRenderer *pivotBarItemRenderer;
@property (nonatomic, strong, readwrite) YTIPivotBarIconOnlyItemRenderer *pivotBarIconOnlyItemRenderer;
- (YTIPivotBarItemRenderer *)pivotBarItemRenderer;
- (YTIPivotBarIconOnlyItemRenderer *)pivotBarIconOnlyItemRenderer;
@end
