#import <UIKit/UIKit.h>
#import "libactivator.h"
#import "PSWSnapshotPageView.h"

@interface PSWViewController : UIViewController<PSWSnapshotPageViewDelegate, LAListener> {
@private
	UIWindow* backgroundWindow;
	PSWSnapshotPageView *snapshotPageView;
	PSWApplication *focusedApplication;
	BOOL isActive;
	BOOL isAnimating;
	NSDictionary *preferences;
	UIStatusBarStyle formerStatusBarStyle;
}
+ (PSWViewController *)sharedInstance;

@property (nonatomic, assign, getter=isActive) BOOL active;
- (void)setActive:(BOOL)active animated:(BOOL)animated;
@property (nonatomic, readonly) BOOL isAnimating;
@property (nonatomic, readonly) PSWSnapshotPageView *snapshotPageView;
@property (nonatomic, readonly) UIWindow* backgroundWindow;

@end
