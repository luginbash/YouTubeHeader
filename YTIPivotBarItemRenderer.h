#import "YTICommand.h"
#import "YTIFormattedString.h"
#import "YTIIcon.h"

@interface YTIPivotBarItemRenderer : NSObject
@property (nonatomic, copy, readwrite) NSString *pivotIdentifier;
@property (nonatomic, assign, readwrite) BOOL hasPivotIdentifier;
@property (nonatomic, copy, readwrite) NSString *targetId;
@property (nonatomic, assign, readwrite) BOOL hasTargetId;
@property (nonatomic, strong, readwrite) YTICommand *navigationEndpoint;
@property (nonatomic, assign, readwrite) BOOL hasNavigationEndpoint;
@property (nonatomic, strong, readwrite) YTICommand *onSelected;
@property (nonatomic, assign, readwrite) BOOL hasOnSelected;
@property (nonatomic, strong, readwrite) YTICommand *onDeselected;
@property (nonatomic, assign, readwrite) BOOL hasOnDeselected;
@property (nonatomic, strong, readwrite) YTIFormattedString *title;
@property (nonatomic, assign, readwrite) BOOL hasTitle;
@property (nonatomic, strong, readwrite) YTIAccessibilitySupportedDatas *accessibility;
@property (nonatomic, assign, readwrite) BOOL hasAccessibility;
@property (nonatomic, assign, readonly) int imageOneOfCase;
@property (nonatomic, strong, readwrite) YTIIcon *icon;
@property (nonatomic, strong, readwrite) YTIThumbnailDetails *thumbnail;
@property (nonatomic, strong, readwrite) YTIRenderer *avatar;
@property (nonatomic, strong, readwrite) YTIPivotBarItemPresentationStyle *presentationStyle;
@property (nonatomic, assign, readwrite) BOOL hasPresentationStyle;
@property (nonatomic, strong, readwrite) YTIPivotBarItemIndicatorSupportedRenderers *indicator;
@property (nonatomic, assign, readwrite) BOOL hasIndicator;
@property (nonatomic, copy, readwrite) NSData *trackingParams;
@property (nonatomic, assign, readwrite) BOOL hasTrackingParams;
@property (nonatomic, assign, readwrite) int navigationType;
@property (nonatomic, assign, readwrite) BOOL hasNavigationType;
@property (nonatomic, strong, readwrite) YTIRenderer *progressIndicator;
@property (nonatomic, assign, readwrite) BOOL hasProgressIndicator;
@property (nonatomic, assign, readwrite) BOOL isDisabled;
@property (nonatomic, assign, readwrite) BOOL hasIsDisabled;
@property (nonatomic, strong, readwrite) YTICommand *onLongPress;
@property (nonatomic, assign, readwrite) BOOL hasOnLongPress;
@end
