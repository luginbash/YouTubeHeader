#import "YTIPivotBarSupportedRenderers.h"
#import "YTIPivotBarItemRenderer.h"

@interface YTIPivotBarRenderer : NSObject
@property (nonatomic, strong, readwrite) NSArray<YTIPivotBarItemRenderer *> *itemsArray;
+ (YTIPivotBarSupportedRenderers *)pivotSupportedRenderersWithBrowseId:(NSString *)browseId title:(NSString *)title iconType:(int)iconType;
- (NSMutableArray <YTIPivotBarSupportedRenderers *> *)itemsArray;
- (void)reorderTabsWithTabOrder:(NSArray<NSString *> *)tabOrder;
@end
