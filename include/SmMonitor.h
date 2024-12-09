#import <AVFoundation/AVFoundation.h>
#import <AVKit/AVKit.h>
#import "SmCustomData.h"

@interface SmMonitor : NSObject
+ (instancetype)sharedInstance;

- (void) attachAVPlayer:(nonnull AVPlayer *)player withAVPlayerLayer:(nonnull AVPlayerLayer*) playerLayer;
- (void) attachAVPlayer:(nonnull AVPlayer *)player withAVPlayerViewController:(nonnull AVPlayerViewController *)playerViewController;
- (void) setCustomData:(SmCustomData *)customData;
- (void) recordAppStartTime;
- (double) timeSinceAppStart;

- (void) destroy;
@end
