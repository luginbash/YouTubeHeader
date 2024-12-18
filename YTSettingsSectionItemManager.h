#import "GIMMe.h"

@interface YTSettingsSectionItemManager : NSObject <UIDocumentPickerDelegate>
@property (nonatomic, readwrite, weak) GIMMe *gimme;
- (id)parentResponder;
@end
