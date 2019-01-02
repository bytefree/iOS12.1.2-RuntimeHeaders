/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXLoadingFailureBadgeView : UIImageView {
    long long  __sizeClass;
    struct { 
        bool image; 
        bool sizeClass; 
    }  _needsUpdateFlags;
}

@property (setter=_setSizeClass:, nonatomic) long long _sizeClass;

+ (id)_imageForSizeClass:(long long)arg1;
+ (struct CGSize { double x1; double x2; })_imageSizeForSizeClass:(long long)arg1;

- (void)_invalidateImage;
- (void)_invalidateSizeClass;
- (bool)_needsUpdate;
- (void)_setNeedsUpdate;
- (void)_setSizeClass:(long long)arg1;
- (long long)_sizeClass;
- (void)_updateIfNeeded;
- (void)_updateImageIfNeeded;
- (void)_updateSizeClassIfNeeded;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setImage:(id)arg1;
- (void)sizeToFit;

@end