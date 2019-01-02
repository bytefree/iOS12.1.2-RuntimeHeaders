/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

@interface DNDSPairedDeviceStateMonitor : NSObject {
    DNDSPairedDevice * _currentPairedDevice;
    <DNDSPairedDeviceStateMonitorDelegate> * _delegate;
    int  _pairedDeviceDidChangeNotificationToken;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) <DNDSPairedDeviceStateMonitorDelegate> *delegate;

- (void).cxx_destruct;
- (void)_beginMonitoringForChanges;
- (void)_endMonitoringForChanges;
- (id)_getCurrentPairedDevice;
- (void)_pairedDeviceStateChanged:(id)arg1;
- (void)_updatePairedState;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)pairedDeviceWithError:(id*)arg1;
- (void)setDelegate:(id)arg1;

@end