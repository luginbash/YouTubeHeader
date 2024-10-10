#import <UIKit/UIKit.h>
#import "YTPivotBarItemView.h"

@interface YTPivotBarItemViewAccessibilityControl : UIControl
@property (nonatomic, strong, readwrite) YTPivotBarItemView *pivotBarItemView
@property (nonatomic, strong, readwrite) NSString *rendererAccessibilityLabel
@end
