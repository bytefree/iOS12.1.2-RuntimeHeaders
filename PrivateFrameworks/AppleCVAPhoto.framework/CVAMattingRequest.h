/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
 */

@interface CVAMattingRequest : NSObject {
    struct __CVBuffer { } * _destinationAlphaMattePixelBuffer;
    CVADisparityPostprocessingRequest * _disparityPostprocessingRequest;
    struct __CVBuffer { } * _segmentationPixelBuffer;
}

@property (readonly) struct __CVBuffer { }*destinationAlphaMattePixelBuffer;
@property (readonly) CVADisparityPostprocessingRequest *disparityPostprocessingRequest;
@property (readonly) struct __CVBuffer { }*segmentationPixelBuffer;

- (void).cxx_destruct;
- (void)dealloc;
- (struct __CVBuffer { }*)destinationAlphaMattePixelBuffer;
- (id)disparityPostprocessingRequest;
- (id)initWithDisparityPostprocessingRequest:(id)arg1 destinationAlphaMattePixelBuffer:(struct __CVBuffer { }*)arg2;
- (id)initWithDisparityPostprocessingRequest:(id)arg1 segmentationPixelBuffer:(struct __CVBuffer { }*)arg2 destinationAlphaMattePixelBuffer:(struct __CVBuffer { }*)arg3 error:(id*)arg4;
- (struct __CVBuffer { }*)segmentationPixelBuffer;

@end