/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTStrokeExportCache : NSObject {
    TSTStrokeLayerMergedStack * _mergedStrokes;
    struct TSTSimpleRange { 
        long long origin; 
        unsigned long long length; 
    }  _range;
    TSDStroke * _stroke;
}

@property (nonatomic, retain) TSTStrokeLayerMergedStack *mergedStrokes;
@property (nonatomic) struct TSTSimpleRange { long long x1; unsigned long long x2; } range;
@property (nonatomic, retain) TSDStroke *stroke;

- (void)dealloc;
- (id)initWithMergedStack:(id)arg1;
- (id)mergedStrokes;
- (struct TSTSimpleRange { long long x1; unsigned long long x2; })range;
- (void)setMergedStrokes:(id)arg1;
- (void)setRange:(struct TSTSimpleRange { long long x1; unsigned long long x2; })arg1;
- (void)setStroke:(id)arg1;
- (id)stroke;
- (id)strokeAtIndex:(unsigned int)arg1;

@end