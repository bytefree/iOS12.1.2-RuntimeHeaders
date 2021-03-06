/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STChildSetupController : NSObject {
    id /* block */  _completionHandler;
    STRootViewModelCoordinator * _coordinator;
    UIViewController * _initialViewController;
    STIntroductionController * _introductionController;
}

@property (copy) id /* block */ completionHandler;
@property (nonatomic, retain) STRootViewModelCoordinator *coordinator;
@property (nonatomic, readonly) UIViewController *initialViewController;
@property (nonatomic, retain) STIntroductionController *introductionController;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id)coordinator;
- (id)initWithDSID:(id)arg1;
- (id)initialViewController;
- (id)introductionController;
- (void)saveValuesForModel:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setCoordinator:(id)arg1;
- (void)setIntroductionController:(id)arg1;

@end
