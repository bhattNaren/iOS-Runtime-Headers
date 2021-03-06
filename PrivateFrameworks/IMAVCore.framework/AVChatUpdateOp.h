/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@class IMHandle, NSData, NSString;

@interface AVChatUpdateOp : IMExtendedOperation {
    NSString *_conferenceID;
    IMHandle *_imHandle;
    NSData *_updateData;
}

- (void)dealloc;
- (void)didFinish;
- (id)initWithIMHandle:(id)arg1 data:(id)arg2 avChat:(id)arg3;

@end
