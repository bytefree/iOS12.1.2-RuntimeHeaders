/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIAssetsForInputMode : NSObject {
    NSMutableDictionary * _assetsByInputModeLevel;
    NSString * _inputMode;
}

@property (nonatomic, readonly) NSString *inputMode;

- (void).cxx_destruct;
- (void)addAssetsForInputModeLevel:(id)arg1;
- (id)assetContentItemsMatching:(id)arg1;
- (void)dealloc;
- (id)initWithInputMode:(id)arg1;
- (id)inputMode;
- (id)recursiveDescription;
- (void)removeAllInputModeLevels;

@end