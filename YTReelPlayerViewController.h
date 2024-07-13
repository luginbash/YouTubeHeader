#import "YTPlayerViewController.h"
#import "YTReelContentView.h"
#import "YTReelHeaderDelegate.h"
#import "YTResponder.h"

@interface YTReelPlayerViewController : UIViewController <YTResponder>
@property (nonatomic, strong, readwrite) YTPlayerViewController *player;
- (id <YTVideoPlayerOverlayDelegate>)delegate;
- (void)didPressVideoQuality:(id)arg;
- (YTReelContentView *)contentView;
- (NSString *)videoId;
@end
