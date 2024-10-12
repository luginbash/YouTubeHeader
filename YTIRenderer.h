#import <Foundation/Foundation.h>
#import "YTILiveChatTextMessageRenderer.h"
#import "YTIElementRenderer.h"
#import "YTILiveChatActionPanelRenderer.h"
#import "YTIPollRenderer.h"
#import "YTIButtonRenderer.h"

@interface YTIRenderer : GPBMessage
@property (nonatomic, strong, readwrite) YTILiveChatTextMessageRenderer *liveChatTextMessageRenderer;
@property (nonatomic, strong, readwrite) YTIElementRenderer *elementRenderer;
@property (nonatomic, strong, readwrite) YTILiveChatActionPanelRenderer *liveChatActionPanelRenderer;
@property (nonatomic, strong, readwrite) YTIPollRenderer *pollRenderer;
@property (nonatomic, assign, readonly) NSString *stepId;
@property (nonatomic, strong, readwrite) YTIButtonRenderer *buttonRenderer;
@end
