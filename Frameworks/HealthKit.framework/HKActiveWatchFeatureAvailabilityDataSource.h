/* Generated by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKActiveWatchFeatureAvailabilityDataSource : NSObject <HKFeatureAvailabilityDataSource> {
    NSString * _atrialFibrillationDetectionOnboardingCountryCode;
}

@property (nonatomic, copy) NSString *atrialFibrillationDetectionOnboardingCountryCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_activeWatch;
- (struct { long long x1; long long x2; long long x3; })_operatingSystemVersionForWatchOSVersion:(unsigned int)arg1;
- (id)atrialFibrillationDetectionOnboardingCountryCode;
- (void)setAtrialFibrillationDetectionOnboardingCountryCode:(id)arg1;
- (id)watchModelNumber;
- (struct { long long x1; long long x2; long long x3; })watchOSVersion;
- (id)watchProductType;
- (id)watchRegion;

@end
