#import "YTCollectionViewController.h"
#import "YTPageStyling.h"

@interface YTInnerTubeCollectionViewController : YTCollectionViewController <YTPageStyling>
@property (nonatomic, strong) NSMutableArray *sectionRenderers;
@end
