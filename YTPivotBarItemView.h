#import <UIKit/UIKit.h>
#import "YTPivotBarItemViewAccessibilityControl.h"

@interface YTPivotBarItemView : UIView
@property (strong, nonatomic) UIButton *navigationButton;
@property (nonatomic, strong) YTPivotBarItemViewAccessibilityControl *hitTarget;
@end
