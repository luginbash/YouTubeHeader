#import <Foundation/Foundation.h>
#import "YTIElementRenderer.h"
#import "YTIPollRenderer.h"
#import "YTIButtonRenderer.h"

@interface YTIRenderer : GPBMessage
@property (nonatomic, strong, readwrite) YTIElementRenderer *elementRenderer;
@property (nonatomic, strong, readwrite) YTIPollRenderer *pollRenderer;
@property (nonatomic, assign, readonly) NSString *stepId;
@property (nonatomic, strong, readwrite) YTIButtonRenderer *buttonRenderer;
@end
