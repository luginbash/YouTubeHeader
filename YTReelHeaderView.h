#import <UIKit/UIKit.h>
#import "YTResponder.h"
#import "YTReelHeaderDelegate.h"
#import "YTReelTransparentStackView.h"
#import "YTReelPlayerButton.h"

@interface YTReelHeaderView : UIView <YTResponder>
@property (nonatomic, strong) id<YTReelHeaderDelegate> delegate;
@property (nonatomic, strong) YTReelTransparentStackView *leftStackView;
@property (nonatomic, strong) YTReelTransparentStackView *rightStackView;
@property (nonatomic, strong, readwrite) YTReelPlayerButton *qualityButton; // Tweak: YouQuality
- (void)addView:(id)  toStackView:(id)  withSize:(CGSize);
- (void)addLeftStackView:(id)view toView:(id)view;
- (void)addRightStackView:(id)view toView:(id)view;
- (void)setRightNavigationButtonsArray:(id);
- (id<YTReelHeaderDelegate>)delegate;
- (void)setDelegate:(id<YTReelHeaderDelegate>)delegate;
- (void)didPressVideoQuality:(id)arg;
- (YTQTMButton *)buttonWithImage:(UIImage *)image accessibilityLabel:(NSString *)accessibilityLabel verticalContentPadding:(CGFloat)verticalContentPadding;
@end
