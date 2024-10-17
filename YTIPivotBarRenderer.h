#import "YTIPivotBarSupportedRenderers.h"
#import "YTIPivotBarItemRenderer.h"

@interface YTIPivotBarRenderer : NSObject
@property (nonatomic, strong) NSArray *itemsArray;
@property (nonatomic, strong) NSArray *tabItems;
+ (YTIPivotBarSupportedRenderers *)pivotSupportedRenderersWithBrowseId:(NSString *)browseId title:(NSString *)title iconType:(int)iconType;
- (NSMutableArray <YTIPivotBarSupportedRenderers *> *)itemsArray;
- (void)reorderTabsWithTabOrder:(NSArray *)tabOrder;
@end
