/* Generated by EzioChiu.
 */

@protocol ACXDeviceConnectionDelegateProtocol <NSObject>

@required

- (void)updateInstallProgressForApplication:(NSString *)arg1 progress:(double)arg2 phase:(unsigned long long)arg3;
- (void)updatedInstallStateForApplicationsWithInfo:(NSDictionary *)arg1;

@end
