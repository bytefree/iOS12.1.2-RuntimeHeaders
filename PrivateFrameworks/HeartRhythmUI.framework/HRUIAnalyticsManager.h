/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
 */

@interface HRUIAnalyticsManager : NSObject

+ (id)sharedManager;

- (void)trackAtrialFibrillationDetectionOnboardingStep:(unsigned long long)arg1 forVersion:(long long)arg2;
- (void)trackElectrocardiogramDataTypeViewed;
- (void)trackElectrocardiogramOnboardingCompletedForVersion:(long long)arg1;
- (void)trackElectrocardiogramOnboardingStartedForVersion:(long long)arg1;
- (void)trackElectrocardiogramPDFShared;
- (void)trackElectrocardiogramPDFViewed;

@end
