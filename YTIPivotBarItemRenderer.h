#import "YTICommand.h"
#import "YTIFormattedString.h"
#import "YTIAccessibilitySupportedDatas.h"
#import "YTIIcon.h"
#import "YTIRenderer.h"
#import "YTIThumbnailDetails.h"

@interface YTIPivotBarItemRenderer : NSObject
@property (nonatomic, copy, readwrite) NSString *pivotIdentifier;
@property (nonatomic, copy, readwrite) NSString *targetId;
@property (nonatomic, strong, readwrite) YTIThumbnailDetails *thumbnail;
@property (nonatomic, strong, readwrite) YTICommand *navigationEndpoint;
@property (nonatomic, strong, readwrite) YTICommand *onSelected;
@property (nonatomic, strong, readwrite) YTICommand *onDeselected;
@property (nonatomic, strong, readwrite) YTIFormattedString *title;
@property (nonatomic, strong, readwrite) YTIAccessibilitySupportedDatas *accessibility;
@property (nonatomic, assign, readonly) int imageOneOfCase;
@property (nonatomic, strong, readwrite) YTIIcon *icon;
// @property (nonatomic, strong, readwrite) YTIThumbnailDetails *thumbnail;
@property (nonatomic, strong, readwrite) YTIRenderer *avatar;
// @property (nonatomic, strong, readwrite) YTIPivotBarItemPresentationStyle *presentationStyle;
// @property (nonatomic, strong, readwrite) YTIPivotBarItemIndicatorSupportedRenderers *indicator;
@property (nonatomic, copy, readwrite) NSData *trackingParams;
@property (nonatomic, assign, readwrite) int navigationType;
@property (nonatomic, strong, readwrite) YTIRenderer *progressIndicator;
@property (nonatomic, assign, readwrite) BOOL isDisabled;
@property (nonatomic, strong, readwrite) YTICommand *onLongPress;
@end
