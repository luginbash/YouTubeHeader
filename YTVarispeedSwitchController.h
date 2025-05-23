#import <Foundation/NSObject.h>
#import "YTVarispeedSwitchControllerDelegate.h"

@interface YTVarispeedSwitchController : NSObject
@property (nonatomic, weak, readwrite) id <YTVarispeedSwitchControllerDelegate> delegate;
@end
