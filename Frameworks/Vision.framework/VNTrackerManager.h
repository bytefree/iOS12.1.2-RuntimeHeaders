/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNTrackerManager : NSObject {
    NSMutableDictionary * _liveTrackerCounter;
    NSDictionary * _liveTrackerCounterLimit;
    NSMapTable * _trackerClassToNameMapTable;
    NSDictionary * _trackerTypeToClassDictionary;
    NSMutableDictionary * _trackers;
    NSObject<OS_dispatch_queue> * _trackersCollectionManagementQueue;
    NSObject<OS_dispatch_queue> * _trackingProcessingQueue;
}

+ (id)manager;
+ (void)releaseAllTrackers;
+ (void)releaseManager;

- (void).cxx_destruct;
- (id)_createTracker:(id)arg1 type:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (id)_getTracker:(id)arg1;
- (long long)_maximumTrackersOfType:(id)arg1;
- (id)init;
- (void)releaseTracker:(id)arg1;
- (id)trackerWithOptions:(id)arg1 error:(id*)arg2;

@end