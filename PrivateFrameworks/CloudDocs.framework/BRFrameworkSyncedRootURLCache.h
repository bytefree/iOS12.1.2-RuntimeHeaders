/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRFrameworkSyncedRootURLCache : NSObject <BRSyncedRootURLCache> {
    NSObject<OS_dispatch_queue> * _notificationQueue;
    NSObject<OS_dispatch_queue> * _queue;
    int  _syncedLocationsChangedNotificationToken;
    NSArray * _syncedRootURLs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *syncedRootURLs;

- (void).cxx_destruct;
- (void)_accountWillChange;
- (void)_fetchSyncedRootURLs;
- (void)dealloc;
- (id)init;
- (void)registerForSyncedLocationsChangesNotifications;
- (id)syncedRootURLs;

@end
