/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKKaleidoscopeStyleOption : NTKEnumeratedEditOption

@property (nonatomic, readonly) unsigned long long style;

+ (id)_nameLocalizationKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_orderedValuesForDevice:(id)arg1;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (long long)indexForStyle:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)optionWithStyle:(unsigned long long)arg1 forDevice:(id)arg2;

- (id)_valueToFaceBundleStringDict;
- (unsigned long long)style;
- (long long)swatchStyle;

@end