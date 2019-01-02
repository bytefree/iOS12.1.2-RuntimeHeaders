/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PAEKeyerHistogram : NSObject <NSCoding> {
    struct ColorHisto { struct vector<int, std::__1::allocator<int> > { int *x_1_1_1; int *x_1_1_2; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x_3_2_1; } x_1_1_3; } x1; int x2; int x3; int x4; } * _histogram;
}

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (struct ColorHisto { struct vector<int, std::__1::allocator<int> > { int *x_1_1_1; int *x_1_1_2; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x_3_2_1; } x_1_1_3; } x1; int x2; int x3; int x4; }*)getHistogram;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setHistogram:(struct ColorHisto { struct vector<int, std::__1::allocator<int> > { int *x_1_1_1; int *x_1_1_2; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x_3_2_1; } x_1_1_3; } x1; int x2; int x3; int x4; }*)arg1;
- (void)setHistogramArray:(id)arg1;

@end