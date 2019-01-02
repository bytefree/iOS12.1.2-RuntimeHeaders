/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDTapToRadarManager : NSObject {
    NSObject<OS_dispatch_queue> * _alertQueue;
    NSMutableDictionary * _lastPromptDateByMessageHash;
    NSUserDefaults * _userDefaults;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *alertQueue;
@property (nonatomic, retain) NSMutableDictionary *lastPromptDateByMessageHash;
@property (nonatomic, retain) NSUserDefaults *userDefaults;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_hashForMessage:(id)arg1;
- (id)_init;
- (id)_lastPromptDateForMessage:(id)arg1;
- (void)_launchTTRWithRequest:(id)arg1;
- (void)_lockedTriggerTapToRadarWithRequest:(id)arg1;
- (void)_notePromptAttemptForMessage:(id)arg1;
- (id)alertQueue;
- (id)init;
- (id)lastPromptDateByMessageHash;
- (void)setAlertQueue:(id)arg1;
- (void)setLastPromptDateByMessageHash:(id)arg1;
- (void)setUserDefaults:(id)arg1;
- (void)triggerTapToRadarWithRequest:(id)arg1;
- (id)userDefaults;

@end