/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
 */

@interface NCNotificationStore : NSObject {
    NSMutableDictionary * _notificationSections;
}

@property (nonatomic, retain) NSMutableDictionary *notificationSections;
@property (nonatomic, readonly) unsigned long long notificationsCount;
@property (nonatomic, readonly) unsigned long long sectionsCount;

- (void).cxx_destruct;
- (id)addNotificationRequest:(id)arg1;
- (id)coalescedNotificationForRequest:(id)arg1;
- (id)init;
- (id)notificationSections;
- (unsigned long long)notificationsCount;
- (id)removeNotificationRequest:(id)arg1;
- (id)replaceNotificationRequest:(id)arg1;
- (unsigned long long)sectionsCount;
- (void)setNotificationSections:(id)arg1;

@end
