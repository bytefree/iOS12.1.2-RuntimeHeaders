/* Generated by EzioChiu.
 */

@protocol MSAssetDownloadSchedulerContinuation <NSObject>

@required

- (void)rescheduleAfterFailure;
- (void)rescheduleAfterSuccess;
- (void)stopScheduling;

@end