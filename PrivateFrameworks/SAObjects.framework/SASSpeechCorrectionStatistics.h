/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SASSpeechCorrectionStatistics : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSString * aceId;
@property int alternativeSelectCount;
@property int characterChangeCount;
@property(copy) NSString * interactionId;
@property(copy) NSString * refId;
@property(copy) NSString * sessionId;

+ (id)speechCorrectionStatistics;
+ (id)speechCorrectionStatisticsWithDictionary:(id)arg1 context:(id)arg2;

- (int)alternativeSelectCount;
- (int)characterChangeCount;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)interactionId;
- (id)sessionId;
- (void)setAlternativeSelectCount:(int)arg1;
- (void)setCharacterChangeCount:(int)arg1;
- (void)setInteractionId:(id)arg1;
- (void)setSessionId:(id)arg1;

@end
