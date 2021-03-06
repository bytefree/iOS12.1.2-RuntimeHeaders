/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface _MTLIndirectTessellationFactorArguments : NSObject {
    unsigned long long  _instanceStride;
    float  _scale;
    void * _virtualAddress;
}

@property (nonatomic) unsigned long long instanceStride;
@property (nonatomic) float scale;
@property (nonatomic) void*virtualAddress;

- (unsigned long long)instanceStride;
- (float)scale;
- (void)setInstanceStride:(unsigned long long)arg1;
- (void)setScale:(float)arg1;
- (void)setVirtualAddress:(void*)arg1;
- (void*)virtualAddress;

@end
