#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface YTAssetLoader : NSObject
- (instancetype)initWithBundle:(NSBundle *)bundle;
- (UIImage *)imageNamed:(NSString *)image;
@end
