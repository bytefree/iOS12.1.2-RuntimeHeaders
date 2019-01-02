/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDRemoteLoginInitiatorCompanionAuthentication : HMDRemoteLoginInitiatorAuthentication {
    ACAccount * _account;
}

@property (nonatomic, readonly) ACAccount *account;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_authenticate;
- (id)account;
- (void)authenticate;
- (void)dealloc;
- (id)description;
- (id)initWithSessionID:(id)arg1 remoteDevice:(id)arg2 workQueue:(id)arg3 remoteMessageSender:(id)arg4 delegate:(id)arg5 account:(id)arg6;
- (int)loginType;

@end