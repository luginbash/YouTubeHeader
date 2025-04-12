#import "YTIPivotBarItemRenderer.h"
#import "YTPivotBarItemViewAccessibilityControl.h"
#import "YTQTMButton.h"

@interface YTPivotBarItemView : UIView
@property (nonatomic, strong, readwrite) YTIPivotBarItemRenderer *renderer;
@property (nonatomic, strong, readwrite) YTQTMButton *navigationButton;
@property (nonatomic, strong) YTPivotBarItemViewAccessibilityControl *hitTarget;
@end
