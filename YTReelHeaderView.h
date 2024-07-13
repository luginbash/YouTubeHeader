#import <UIKit/UIKit.h>
#import "YTReelPlayerViewController.h"
#import "YTReelTransparentStackView.h"
#import "YTReelPlayerButton.h"
#import "YTQTMButton.h"

@interface YTReelHeaderView : UIView
@property (nonatomic, strong) id<YTReelHeaderDelegate> delegate;
@property (nonatomic, strong) YTReelTransparentStackView *leftStackView;
@property (nonatomic, strong) YTReelTransparentStackView *rightStackView;
@property (nonatomic, strong) YTReelPlayerButton *qualityButton;
@property (nonatomic, strong) YTQTMButton *qualityButton;
- (void)addView:(id)view toStackView:(id)stackView withSize:(CGSize)size;
- (void)addLeftStackView:(id)view toView:(id)parentView;
- (void)addRightStackView:(id)view toView:(id)parentView;
- (void)setRightNavigationButtonsArray:(id)buttonsArray;
- (id<YTReelHeaderDelegate>)delegate;
- (void)setDelegate:(id<YTReelHeaderDelegate>)delegate;
- (YTQTMButton *)buttonWithImage:(UIImage *)image accessibilityLabel:(NSString *)accessibilityLabel verticalContentPadding:(CGFloat)verticalContentPadding;
@end
