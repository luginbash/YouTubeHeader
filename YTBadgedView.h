#import <UIKit/UIKit.h>
#import "YTCountView.h"
#import "YTIFormattedString.h"

@interface YTBadgedView : UIView
- (void)addBorderLayer;
- (void)setLabel:(id)label accessibilityLabel:(id)accessibilityLabel;
- (void)updateColors;
- (void)pageStyleDidChange:(NSInteger)style;
@end
