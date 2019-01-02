/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKController : NSObject {
    NSArray * _additionalStrokes;
    NSObject<PKControllerDelegate> * _delegate;
    PKDrawing * _drawing;
    NSArray * _hideAdditionalStrokes;
    NSObject<OS_dispatch_queue> * _interactQueue;
    NSObject<OS_dispatch_semaphore> * _interactSemaphore;
    bool  _isSuspended;
    bool  _liveInteraction;
    NSObject<OS_dispatch_queue> * _previewQueue;
    bool  _previewsSuspended;
    NSMutableArray * _renderedStrokes;
    <PKRendererControllerProtocol> * _rendererController;
    NSObject<OS_dispatch_queue> * _suspendQueue;
}

@property (nonatomic, retain) NSArray *additionalStrokes;
@property (nonatomic) NSObject<PKControllerDelegate> *delegate;
@property (nonatomic, retain) PKDrawing *drawing;
@property (nonatomic, retain) NSArray *hideAdditionalStrokes;
@property (nonatomic, readonly) PKStrokeGenerator *inputController;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *interactQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *interactSemaphore;
@property (nonatomic) bool isSuspended;
@property bool liveInteraction;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *previewQueue;
@property (nonatomic) bool previewsSuspended;
@property (nonatomic, retain) NSMutableArray *renderedStrokes;
@property (nonatomic, retain) <PKRendererControllerProtocol> *rendererController;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *suspendQueue;

+ (void)updatesFrom:(id)arg1 to:(id)arg2 newStrokesToRender:(id*)arg3 redrawAllInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4;

- (void).cxx_destruct;
- (void)_applyCommands:(id)arg1 interactCompletion:(id /* block */)arg2 completionBlock:(id /* block */)arg3;
- (void)_didRenderStrokes:(id)arg1;
- (void)_drawingChanged;
- (bool)_loadInitialDrawing:(id)arg1 withImage:(struct CGImage { }*)arg2 andMask:(struct CGImage { }*)arg3;
- (void)_renderAllInStrokeSpaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 completion:(id /* block */)arg2;
- (void)_renderAllInStrokeSpaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 selectedStrokes:(id)arg2 hideSelected:(bool)arg3 completion:(id /* block */)arg4;
- (void)_renderImage:(struct CGImage { }*)arg1 andMask:(struct CGImage { }*)arg2;
- (void)_renderStrokes:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 completion:(id /* block */)arg3;
- (void)_renderStrokes:(id)arg1 renderIntermediateSteps:(bool)arg2 completion:(id /* block */)arg3;
- (void)_setDrawing:(id)arg1 initialDrawing:(id)arg2 withImage:(struct CGImage { }*)arg3 andMask:(struct CGImage { }*)arg4 setupComplete:(id /* block */)arg5 completion:(id /* block */)arg6;
- (void)_updateDrawing:(id)arg1 erasedStrokes:(id)arg2 completion:(id /* block */)arg3;
- (bool)_updateFrom:(id)arg1 completion:(id /* block */)arg2;
- (id)addNewRenderedStroke:(id)arg1 preDrawingChangedBlock:(id /* block */)arg2;
- (id)additionalStrokes;
- (void)applyCommand:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)applyCommands:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)cancelLongRunningRenders;
- (void)clearAdditionalStrokes;
- (id)delegate;
- (void)didEndLiveInteraction;
- (void)didStartLiveInteractionWith:(id)arg1;
- (id)drawing;
- (void)drawingChanged;
- (id)hideAdditionalStrokes;
- (void)imageWithCompletionBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithPixelSize:(struct CGSize { double x1; double x2; })arg1 actualSize:(struct CGSize { double x1; double x2; })arg2 renderQueue:(id)arg3;
- (id)inputController;
- (id)interactQueue;
- (id)interactSemaphore;
- (bool)isSuspended;
- (bool)liveInteraction;
- (void)performAsyncInteractBlock:(id /* block */)arg1;
- (id)previewQueue;
- (bool)previewsSuspended;
- (void)removeStrokesInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 from:(id)arg2;
- (void)renderImage:(struct CGImage { }*)arg1 andMask:(struct CGImage { }*)arg2 forRenderedStrokes:(id)arg3 thenRenderStrokes:(id)arg4 completion:(id /* block */)arg5;
- (void)renderImage:(struct CGImage { }*)arg1 andMask:(struct CGImage { }*)arg2 forRenderedStrokes:(id)arg3 thenRenderStrokes:(id)arg4 inStrokeSpaceClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 completion:(id /* block */)arg6;
- (void)renderStrokes:(id)arg1 completion:(id /* block */)arg2;
- (void)renderStrokes:(id)arg1 intoTile:(id)arg2;
- (void)renderTiles:(id)arg1 tileTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 completion:(id /* block */)arg3;
- (void)renderTilesIntoTiles:(id)arg1 completion:(id /* block */)arg2;
- (id)renderedStrokes;
- (id)rendererController;
- (void)resumeDrawing;
- (void)resumePreviews;
- (void)setAdditionalStrokes:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDrawing:(id)arg1;
- (void)setDrawing:(id)arg1 initialDrawing:(id)arg2 withImage:(struct CGImage { }*)arg3 andMask:(struct CGImage { }*)arg4 setupComplete:(id /* block */)arg5 completion:(id /* block */)arg6;
- (void)setDrawing:(id)arg1 tiles:(id)arg2 tileTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 setupComplete:(id /* block */)arg4 completionBlock:(id /* block */)arg5;
- (void)setHideAdditionalStrokes:(id)arg1;
- (void)setInteractQueue:(id)arg1;
- (void)setInteractSemaphore:(id)arg1;
- (void)setIsSuspended:(bool)arg1;
- (void)setLiveInteraction:(bool)arg1;
- (void)setPreviewQueue:(id)arg1;
- (void)setPreviewsSuspended:(bool)arg1;
- (void)setRenderedStrokes:(id)arg1;
- (void)setRendererController:(id)arg1;
- (void)setSuspendQueue:(id)arg1;
- (void)suspendDrawing;
- (void)suspendDrawingImmediately:(bool)arg1;
- (void)suspendPreviews;
- (id)suspendQueue;
- (void)teardown;
- (void)updateDrawing;
- (void)updateDrawing:(bool)arg1 withAdditionalStrokes:(id)arg2 hide:(bool)arg3 isErasing:(bool)arg4;
- (void)updateDrawingFrom:(id)arg1;
- (void)updateDrawingWithErasedStrokes:(id)arg1;
- (void)updateOrientation:(long long)arg1;

@end