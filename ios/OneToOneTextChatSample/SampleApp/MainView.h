#import <UIKit/UIKit.h>

@interface MainView : UIView

// publisher view
- (void)addPublisherView:(UIView *)publisherView;
- (void)removePublisherView;
- (void)addPlaceHolderToPublisherView;

- (void)connectCallHolder:(BOOL)connected;
- (void)mutePubliserhMic:(BOOL)muted;
- (void)connectPubliserVideo:(BOOL)connected;

// subscriber view
- (void)addSubscribeView:(UIView *)subsciberView;
- (void)removeSubscriberView;
- (void)addPlaceHolderToSubscriberView;

- (void)muteSubscriberMic:(BOOL)muted;
- (void)connectSubsciberVideo:(BOOL)connected;
- (void)showSubscriberControls:(BOOL)shown;

// other controls
- (void)setTextChatHolderUserInteractionEnabled:(BOOL)enabled;
- (void)removePlaceHolderImage;
- (void)updateControlButtonsForCall:(BOOL)status;
- (void)showReverseCameraButton;
- (void) resetUIInterface;


@property (weak, nonatomic) IBOutlet UIView *actionButtonsHolder;
@end
