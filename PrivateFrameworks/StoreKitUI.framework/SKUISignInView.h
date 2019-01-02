/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUISignInView : UIView <SKUIViewElementView, UITextFieldDelegate> {
    UIColor * _borderColor;
    SKUIShapeView * _borderView;
    <SKUISignInViewDelegate> * _delegate;
    NSMutableArray * _labels;
    NSMutableArray * _textFields;
    SKUIViewElement * _viewElement;
    NSMapTable * _viewFontDescriptors;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUISignInViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_borderPathWithSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)_fontDescriptorWithViewElement:(id)arg1 defaultTextStyle:(id)arg2 bold:(bool)arg3;
+ (id)_labelWithViewElement:(id)arg1;
+ (id)_textFieldWithViewElement:(id)arg1;
+ (struct CGSize { double x1; double x2; })preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize { double x1; double x2; })sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;

- (void).cxx_destruct;
- (id)_accountNameText;
- (id)_applePasswordText;
- (void)_clearFieldsAndLabels;
- (double)_layoutLabels;
- (void)_layoutTextFieldsOffsetX:(double)arg1;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (bool)resignFirstResponder;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDelegate:(id)arg1;
- (bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(bool)arg3;
- (id)viewForElementIdentifier:(id)arg1;

@end