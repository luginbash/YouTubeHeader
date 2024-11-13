#import <UIKit/UIKit.h>
#import "YTReelPlayerViewController.h"
#import "YTReelTransparentStackView.h"
#import "YTReelPlayerButton.h"
#import "YTQTMButton.h"

@interface YTReelHeaderView : UIView
@property (nonatomic, strong) id<YTReelHeaderDelegate> delegate;
@property (nonatomic, strong) YTReelTransparentStackView *leftStackView;
@property (nonatomic, strong) YTReelTransparentStackView *rightStackView;
@property (nonatomic, strong) YTQTMButton *qualityButton;
- (void)addView:(id)view toStackView:(id)stackView withSize:(CGSize)size;
- (void)addLeftStackView:(id)view toView:(id)parentView;
- (void)addRightStackView:(id)view toView:(id)parentView;
- (void)setRightNavigationButtonsArray:(id)buttonsArray;
- (void)didPressVideoQuality:(id)arg;
- (void)setContextualHeaderRenderer:(id)arg1;
- (void)setElementRenderer:(id)arg1;
- (void)addBackButton:(id)arg1 toStackView:(id)arg2;
- (void)addPlaceholderView:(id)arg1 toStackView:(id)arg2;
- (void)addRightSideButton:(id)arg1 toStackView:(id)arg2;
- (void)addRightSideSearchBar:(id)arg1 toStackView:(id)arg2 withNavigationButtonCount:(int)arg3;
@end
