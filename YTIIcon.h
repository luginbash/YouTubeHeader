#import <UIKit/UIImage.h>
#import "GPBMessage.h"
#import "YTIcon.h"

@interface YTIIcon : GPBMessage
@property (nonatomic, assign, readwrite) YTIcon iconType;
- (BOOL)hasIconType;
- (UIImage *)iconImageWithColor:(UIColor *)color;
- (UIImage *)iconImageWithSelected:(BOOL)selected;
@end
