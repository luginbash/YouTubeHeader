#import "YTICommand.h"
#import "YTIFormattedString.h"
#import "YTIIcon.h"

@interface YTIPivotBarItemRenderer : NSObject
@property (nonatomic, retain) YTIIcon *icon;
@property (nonatomic, copy, readwrite) NSString *targetId;
@property (nonatomic, retain) YTICommand *navigationEndpoint;
@property (nonatomic, copy) NSString *pivotIdentifier;
@property (nonatomic, retain) YTIFormattedString *title;
@property (nonatomic, copy) NSData *trackingParams;
- (void)setNavigationEndpoint:(YTICommand *)navigationEndpoint;
@end
