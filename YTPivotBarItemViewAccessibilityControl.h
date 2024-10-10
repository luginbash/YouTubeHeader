#import "YTPivotBarItemView.h"

@class YTPivotBarItemView;

@interface YTPivotBarItemViewAccessibilityControl : UIControl
@property (nonatomic, strong, readwrite) YTPivotBarItemView *pivotBarItemView;
@property (nonatomic, strong, readwrite) NSString *rendererAccessibilityLabel;
@end
