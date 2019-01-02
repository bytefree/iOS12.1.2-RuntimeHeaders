/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXAssetVariationsDataSourceManager : PXSectionedDataSourceManager <PXAssetEditOperationManagerObserver, PXPhotoLibraryUIChangeObserver> {
    PHAsset * _asset;
    PHAsset * _currentAsset;
    long long  _currentVariationType;
    bool  _didCreateInitialDataSource;
    PXAssetEditOperationManager * _editOperationManager;
    struct { 
        bool pendingVariationType; 
        bool currentVariationType; 
        bool dataSource; 
    }  _needsUpdateFlags;
    long long  _pendingVariationType;
}

@property (nonatomic, readonly) PHAsset *asset;
@property (nonatomic, retain) PHAsset *currentAsset;
@property (nonatomic) long long currentVariationType;
@property (nonatomic, readonly) PXAssetVariationsDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PXAssetEditOperationManager *editOperationManager;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long pendingVariationType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_assetEditOperationsDidChange;
- (void)_invalidateCurrentVariationType;
- (void)_invalidateDataSource;
- (void)_invalidatePendingVariationType;
- (bool)_needsUpdate;
- (void)_setNeedsUpdate;
- (void)_updateCurrentVariationTypeIfNeeded;
- (void)_updateDataSourceIfNeeded;
- (void)_updateIfNeeded;
- (void)_updatePendingVariationTypeIfNeeded;
- (id)_variationOptionWithType:(long long)arg1 asset:(id)arg2;
- (id)asset;
- (void)assetEditOperationManager:(id)arg1 didChangeEditOperationsPerformedOnAsset:(id)arg2 context:(void*)arg3;
- (id)currentAsset;
- (long long)currentVariationType;
- (id)dataSource;
- (void)didPerformChanges;
- (id)editOperationManager;
- (id)init;
- (id)initWithAsset:(id)arg1 editOperationManager:(id)arg2;
- (long long)pendingVariationType;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (void)setCurrentAsset:(id)arg1;
- (void)setCurrentVariationType:(long long)arg1;
- (void)setPendingVariationType:(long long)arg1;

@end