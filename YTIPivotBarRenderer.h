#import "YTIPivotBarSupportedRenderers.h"

@interface YTIPivotBarRenderer : NSObject
@property (nonatomic, strong, readwrite) NSArray<YTIPivotBarItemRenderer *> *itemsArray;
+ (YTIPivotBarSupportedRenderers *)pivotSupportedRenderersWithBrowseId:(NSString *)browseId title:(NSString *)title iconType:(int)iconType;
@end
