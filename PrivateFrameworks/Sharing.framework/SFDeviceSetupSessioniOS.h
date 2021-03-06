/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFDeviceSetupSessioniOS : NSObject {
    bool  _activateCalled;
    bool  _buddyComplete;
    BYDeviceSetupSourceSession * _buddySession;
    CDPContext * _cdpContext;
    CDPStateController * _cdpController;
    int  _cdpState;
    bool  _configRequestSent;
    bool  _configResponseReceived;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _interruptionHandler;
    bool  _invalidateCalled;
    id /* block */  _invalidationHandler;
    unsigned int  _pairFlags;
    bool  _pairSetupDone;
    bool  _pairSetupReset;
    bool  _pairSetupRunning;
    SFDevice * _peerDevice;
    int  _preAuthPairSetupState;
    bool  _preAuthRequestSent;
    bool  _preAuthResponseReceived;
    id /* block */  _progressHandler;
    id /* block */  _promptForPINHandler;
    id /* block */  _receivedObjectHandler;
    SFSession * _sfSession;
    bool  _sfSessionActivated;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic) unsigned int pairFlags;
@property (nonatomic, retain) SFDevice *peerDevice;
@property (nonatomic, copy) id /* block */ progressHandler;
@property (nonatomic, copy) id /* block */ promptForPINHandler;
@property (nonatomic, copy) id /* block */ receivedObjectHandler;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)_completedWithError:(id)arg1;
- (void)_handleBuddyProgress:(id)arg1;
- (void)_handleSetupActionRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_receivedObject:(id)arg1 flags:(unsigned int)arg2;
- (void)_run;
- (int)_runCoreCDPSetup;
- (int)_runPreAuthPairSetup;
- (void)_runSFSessionActivated;
- (void)_runSFSessionStart;
- (void)_sendConfigInfo;
- (void)_sendPreAuthInfo;
- (void)_startBuddySession;
- (void)activate;
- (void)dealloc;
- (id)dispatchQueue;
- (id)init;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (unsigned int)pairFlags;
- (id)peerDevice;
- (id /* block */)progressHandler;
- (id /* block */)promptForPINHandler;
- (id /* block */)receivedObjectHandler;
- (void)setDispatchQueue:(id)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setPairFlags:(unsigned int)arg1;
- (void)setPeerDevice:(id)arg1;
- (void)setProgressHandler:(id /* block */)arg1;
- (void)setPromptForPINHandler:(id /* block */)arg1;
- (void)setReceivedObjectHandler:(id /* block */)arg1;
- (void)tryPIN:(id)arg1;

@end
