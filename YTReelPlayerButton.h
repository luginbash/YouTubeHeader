#import <UIKit/UIKit.h>
#import "YTReelHeaderView.h"
#import "YTQTMButton.h"

@interface YTReelPlayerButton : UIButton
@property (nonatomic, assign, readwrite) NSInteger buttonAlignment;
@property (nonatomic, assign, readwrite) BOOL applyRightSideLayoutImageSize;
@property (nonatomic, assign, readwrite) CGFloat hitTargetInsets;
- (void)setButtonAlignment:(NSInteger)alignment;
- (id)imageOrAnimationView;
- (void)layoutHorizontalButtons;
- (void)layoutVerticalButtons;
- (NSInteger)buttonAlignment;
- (BOOL)applyRightSideLayoutImageSize;
- (void)setApplyRightSideLayoutImageSize:(BOOL)size;
- (CGFloat)hitTargetInsets;
- (void)setHitTargetInsets:(CGFloat)insets;
@end
