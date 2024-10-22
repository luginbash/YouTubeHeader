#import "YTIPivotBarSupportedRenderers.h"
#import "YTIPivotBarItemRenderer.h"

@interface YTIPivotBarRenderer : NSObject
@property (nonatomic, strong) NSMutableArray <YTIPivotBarSupportedRenderers *> *itemsArray;
@property (nonatomic, strong) NSArray *tabItems;
+ (YTIPivotBarSupportedRenderers *)pivotSupportedRenderersWithBrowseId:(NSString *)browseId title:(NSString *)title iconType:(int)iconType;
- (void)reorderTabsWithTabOrder:(NSArray *)tabOrder;
@end
