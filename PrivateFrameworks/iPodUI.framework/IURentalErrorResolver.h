/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class IURentalData, NSError, UIAlertView;

@interface IURentalErrorResolver : MPAVErrorResolver <UIAlertViewDelegate> {
    NSError *_error;
    UIAlertView *_playbackAlertView;
    IURentalData *_rentalData;
}

- (void)_cancelPlaybackAlertView:(BOOL)arg1;
- (void)_destroyPlaybackAlertView;
- (BOOL)_errorIsFairPlayError:(id)arg1;
- (id)_mediaItem;
- (void)_rentalDataDidLoadNotification:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)alertViewCancel:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithMediaItem:(id)arg1;
- (void)resolveError:(id)arg1;

@end
