/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVRatingBadgeView : UIView {
    UIColor * _fillColor;
    NSString * _ratingStyle;
    double  _ratingValue;
    UIColor * _tintColor;
}

@property (nonatomic, retain) UIColor *fillColor;
@property (nonatomic, retain) NSString *ratingStyle;
@property (nonatomic) double ratingValue;
@property (nonatomic, retain) UIColor *tintColor;

- (void).cxx_destruct;
- (double)_circleRadius;
- (id)_halfStarImage;
- (id)_starImage;
- (bool)canBecomeFocused;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)fillColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)ratingStyle;
- (double)ratingValue;
- (void)setFillColor:(id)arg1;
- (void)setRatingStyle:(id)arg1;
- (void)setRatingValue:(double)arg1;
- (void)setTintColor:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)tintColor;

@end
