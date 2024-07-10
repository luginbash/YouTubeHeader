#import "YTPlayerViewController.h"
#import "YTWatchPullToFullController.h"
#import "YTWatchPlayerViewLayoutSource.h"

@interface YTWatchViewController : UIViewController <YTWatchPlayerViewLayoutSource>
@property (nonatomic, weak, readwrite) YTPlayerViewController *playerViewController;
@property (nonatomic, strong, readwrite) YTWatchPullToFullController *pullToFullController;
@property (nonatomic, assign, readwrite, getter=isFullscreen) BOOL fullscreen;
- (NSUInteger)allowedFullScreenOrientations;
- (BOOL)fullscreen;
@end
