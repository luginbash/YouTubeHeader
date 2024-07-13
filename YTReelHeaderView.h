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
- (void)addView:(id)view toStackView:(id)stackView withSize:(CGSize)size;
- (void)addLeftStackView:(id)view toView:(id)parentView;
- (void)addRightStackView:(id)view toView:(id)parentView;
- (void)setRightNavigationButtonsArray:(id)buttonsArray;
- (id<YTReelHeaderDelegate>)delegate;
- (void)setDelegate:(id<YTReelHeaderDelegate>)delegate;
- (void)didPressVideoQuality:(id)arg;
- (YTQTMButton *)buttonWithImage:(UIImage *)image accessibilityLabel:(NSString *)accessibilityLabel verticalContentPadding:(CGFloat)verticalContentPadding;
@end
