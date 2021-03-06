/* Generated by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface _PUOneUpLivePhotoVariationSuggestionInfo : NSObject {
    bool  _didAddRenderProgress;
    bool  _didBeginRendering;
    NSProgress * _progress;
    PXAssetVariationRenderProvider * _renderProvider;
    id /* block */  _resultHandler;
    long long  _variationType;
}

@property (nonatomic) bool didAddRenderProgress;
@property (nonatomic) bool didBeginRendering;
@property (nonatomic, retain) NSProgress *progress;
@property (nonatomic, retain) PXAssetVariationRenderProvider *renderProvider;
@property (nonatomic, copy) id /* block */ resultHandler;
@property (nonatomic) long long variationType;

- (void).cxx_destruct;
- (bool)didAddRenderProgress;
- (bool)didBeginRendering;
- (id)progress;
- (id)renderProvider;
- (id /* block */)resultHandler;
- (void)setDidAddRenderProgress:(bool)arg1;
- (void)setDidBeginRendering:(bool)arg1;
- (void)setProgress:(id)arg1;
- (void)setRenderProvider:(id)arg1;
- (void)setResultHandler:(id /* block */)arg1;
- (void)setVariationType:(long long)arg1;
- (long long)variationType;

@end
