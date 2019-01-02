/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIAccessibilityHUDView : UIView {
    UIView * _customView;
    UIVisualEffectView * _effectView;
    UIImageView * _imageView;
    UIAccessibilityHUDItem * _item;
    UILabel * _titleLabel;
    UIView * _transformContainer;
    UIVibrancyEffect * _vibrancyEffect;
}

@property (nonatomic, copy) UIAccessibilityHUDItem *item;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (struct CGSize { double x1; double x2; })preferredHUDSize;

- (void).cxx_destruct;
- (void)_show:(bool)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (id)containerViewForLayout;
- (id)customView;
- (void)dismissAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })imageInsetsForLayout;
- (id)imageView;
- (id)initWithHUDItem:(id)arg1;
- (id)item;
- (id)layoutManager;
- (void)layoutSubviews;
- (void)setItem:(id)arg1;
- (void)showAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)titleLabel;

@end