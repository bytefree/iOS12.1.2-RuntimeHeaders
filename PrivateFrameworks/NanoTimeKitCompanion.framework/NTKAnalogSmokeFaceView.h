/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKAnalogSmokeFaceView : NTKAnalogVideoFaceView {
    unsigned long long  _currentDialShape;
    unsigned long long  _currentSmokeColor;
    NSDictionary * _dataSources;
    bool  _shouldApplyTransform;
}

@property (nonatomic) unsigned long long currentDialShape;
@property (nonatomic) unsigned long long currentSmokeColor;
@property (nonatomic, retain) NSDictionary *dataSources;

+ (id)_nameForSmokeColor:(unsigned long long)arg1;
+ (id)_swatchForEditModeDependsOnOptions:(long long)arg1 forDevice:(id)arg2;
+ (id)_swatchImageForColorOption:(id)arg1 forDevice:(id)arg2;

- (void).cxx_destruct;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyVideoPlayerTransform;
- (id)_complicationsCompanionForegroundColor;
- (void)_configureReusableTimeView:(id)arg1;
- (void)_customizeVideoPlayerOnSetup;
- (id)_editOptionThatHidesAllComplications;
- (void)_handleEitherScreenWake;
- (id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;
- (id)_swatchImageForSmokeColor:(unsigned long long)arg1 andDialShape:(unsigned long long)arg2;
- (void)_updateDialSize;
- (unsigned long long)currentDialShape;
- (unsigned long long)currentSmokeColor;
- (id)dataSources;
- (id)imageForEditOption:(id)arg1;
- (void)reloadDataSources;
- (void)setCurrentDialShape:(unsigned long long)arg1;
- (void)setCurrentSmokeColor:(unsigned long long)arg1;
- (void)setDataSources:(id)arg1;
- (void)setupDataSources;

@end