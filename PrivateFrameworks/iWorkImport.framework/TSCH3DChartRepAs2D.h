/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartRepAs2D : TSCHChartRep {
    TSCHChartRep * m2DRep;
}

- (void)addToSet:(id)arg1;
- (void)dealloc;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (void)p_create2DRep;
- (id)p_layoutFrom3DInfo:(id)arg1 layout3D:(id)arg2;
- (id)p_mutationsForConverting3DFillFromSeries:(id)arg1;
- (void)p_update2DLayout;
- (void)renderIntoContext:(struct CGContext { }*)arg1 visible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

@end