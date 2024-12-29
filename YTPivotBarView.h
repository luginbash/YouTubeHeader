#import <UIKit/UIKit.h>
#import "YTPivotBarItemView.h"
#import "YTIPivotBarRenderer.h"

@interface YTPivotBarView : UIView
@property (nonatomic, assign, readonly) YTPivotBarView *root;
@property (nonatomic, strong, readwrite) UIView *separatorView;
@property (nonatomic, strong, readwrite) UIVisualEffectView *blurView;
@property (nonatomic, strong, readwrite) YTPivotBarItemView *itemView1;
@property (nonatomic, strong, readwrite) YTPivotBarItemView *itemView2;
@property (nonatomic, strong, readwrite) YTPivotBarItemView *itemView3;
@property (nonatomic, strong, readwrite) YTPivotBarItemView *itemView4;
@property (nonatomic, strong, readwrite) YTPivotBarItemView *itemView5;
@property (nonatomic, strong, readwrite) YTPivotBarItemView *itemView6;
@property (nonatomic, assign, readonly) NSArray *itemViews;
// @property (nonatomic, strong, readwrite) id <YTPageStyleProvider> *pageStyleProviderDelegate;
// @property (nonatomic, weak, readwrite) id <YTPivotBarItemViewDelegate> *delegate;
@property (nonatomic, strong, readwrite) YTIPivotBarRenderer *renderer;
@property (nonatomic, assign, readonly) UIView *contentView;
@property (nonatomic, strong, readwrite) UIView *scrubberView;
@property (nonatomic, assign, readonly) UIPanGestureRecognizer *scrubGestureRecognizer;
@property (nonatomic, assign, readonly) NSInteger pageStyle;
@end
