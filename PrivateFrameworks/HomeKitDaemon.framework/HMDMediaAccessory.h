/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDMediaAccessory : HMDAccessory <HMFLogging> {
    HMDMediaAccessoryAdvertisement * _advertisement;
    HMDMediaProfile * _mediaProfile;
}

@property (readonly, copy) HMDMediaAccessoryAdvertisement *advertisement;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMDMediaProfile *mediaProfile;
@property (readonly) Class superclass;

+ (id)computedNameForCategoryType:(id)arg1 inRoom:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_registerForMessages;
- (void)addAdvertisement:(id)arg1;
- (id)advertisement;
- (id)assistantObject;
- (void)configure:(id)arg1 msgDispatcher:(id)arg2 accessoryConfigureGroup:(id)arg3;
- (id)dumpSimpleState;
- (id)dumpState;
- (void)encodeWithCoder:(id)arg1;
- (void)handleRoomNameChanged:(id)arg1;
- (void)handleUpdatedAdvertisement:(id)arg1;
- (void)handleUpdatedMinimumUserPrivilege:(long long)arg1;
- (void)handleUpdatedPassword:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransaction:(id)arg1 home:(id)arg2;
- (id)mediaProfile;
- (id)name;
- (void)notifyConnectivityChangedWithReachabilityState:(bool)arg1;
- (bool)providesHashRouteID;
- (long long)reachableTransports;
- (void)removeAdvertisement:(id)arg1;
- (void)setAdvertisement:(id)arg1;
- (void)setRemotelyReachable:(bool)arg1;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)transactionWithObjectChangeType:(unsigned long long)arg1;
- (id)url;

@end