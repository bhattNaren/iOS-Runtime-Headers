/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@class AssistantUIViewController, NSDictionary, NSMutableDictionary;

@interface AssistantSubUIViewController : AUUITableViewController {
    BOOL _iPadIdiom;
    NSDictionary *_inParamDict;
    NSMutableDictionary *_outResultsDict;
    AssistantUIViewController *_parentController;
}

@property BOOL iPadIdiom;
@property(retain) NSDictionary * inParamDict;
@property(readonly) NSDictionary * outResultsDict;
@property AssistantUIViewController * parentController;

- (void)dealloc;
- (id)getProductLocalizedStringWithFormat:(id)arg1;
- (BOOL)iPadIdiom;
- (id)inParamDict;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)outResultsDict;
- (id)parentController;
- (void)setIPadIdiom:(BOOL)arg1;
- (void)setInParamDict:(id)arg1;
- (void)setLeftNavigationButton:(id)arg1 enable:(BOOL)arg2 hide:(BOOL)arg3;
- (void)setParentController:(id)arg1;
- (void)setRightNavigationButton:(id)arg1 enable:(BOOL)arg2 hide:(BOOL)arg3;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidLoad;

@end
