/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroTrimmerViewController : UIViewController <MiroTrimmer, UIMovieScrubberDataSource, UIMovieScrubberDelegate> {
    AVPlayerItem * __playerItemForObserving;
    <MiroClip> * _clip;
    MiroTrimmerDebugView * _debugOverlay;
    double  _deferredSeekTime;
    <MiroTrimmerDelegate> * _delegate;
    struct { 
        bool respondsToWillStartTrimmingClip; 
        bool respondsToShouldContinueTrimmingClip_startTime_endTime; 
        bool respondsToDidContinueTrimmingClip_startTime_endTime; 
        bool respondsToDidEndTrimmingClip_startTime_endTime; 
    }  _delegateFlags;
    int  _inUseScrubberHandle;
    double  _lastSeekWallClockTime;
    UIMovieScrubber * _movieScrubber;
    AVPlayer * _player;
    bool  _playerBusySeeking;
    NSObject * _playerPeriodicTimeObserver;
    int  _projectFrameRate;
    UIView * _scrubberView;
    bool  _scrubbing;
    bool  _showsDebugMetadataOverlay;
    MiroScrubberImageSource * _thumbnailSource;
    NSString * _thumbnailSourceAssetID;
    NSObject * _trimBoundaryTimeObserver;
    double  _videoDuration;
    struct CGSize { 
        double width; 
        double height; 
    }  _videoSize;
}

@property (setter=_setPlayerItemForObserving:, nonatomic, retain) AVPlayerItem *_playerItemForObserving;
@property (nonatomic, retain) <MiroClip> *clip;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) MiroTrimmerDebugView *debugOverlay;
@property (nonatomic) double deferredSeekTime;
@property (nonatomic) <MiroTrimmerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int inUseScrubberHandle;
@property (nonatomic) double lastSeekWallClockTime;
@property (nonatomic, retain) UIMovieScrubber *movieScrubber;
@property (nonatomic, retain) AVPlayer *player;
@property bool playerBusySeeking;
@property (nonatomic, retain) NSObject *playerPeriodicTimeObserver;
@property (nonatomic) int projectFrameRate;
@property (nonatomic, retain) UIView *scrubberView;
@property (getter=isScrubbing, nonatomic) bool scrubbing;
@property (nonatomic) bool showsDebugMetadataOverlay;
@property (readonly) Class superclass;
@property (nonatomic, retain) MiroScrubberImageSource *thumbnailSource;
@property (nonatomic, retain) NSString *thumbnailSourceAssetID;
@property (nonatomic, retain) NSObject *trimBoundaryTimeObserver;
@property (nonatomic) double videoDuration;
@property (nonatomic) struct CGSize { double x1; double x2; } videoSize;

- (void).cxx_destruct;
- (void)_commonInit;
- (void)_createView;
- (void)_deferredSeek;
- (void)_deferredSeekToTime:(double)arg1;
- (void)_invalidate;
- (bool)_playerIsPlaying;
- (void)_playerItemDidReachEnd:(id)arg1;
- (id)_playerItemForObserving;
- (void)_seekPlayerToBeginning;
- (void)_seekToTime:(double)arg1 completionHandler:(id /* block */)arg2;
- (void)_setPlayerItemForObserving:(id)arg1;
- (void)_updateDebugOverlay;
- (void)_updateScrubberThumbVisibility;
- (void)_updateScrubberTime;
- (id)clip;
- (void)dealloc;
- (id)debugOverlay;
- (double)deferredSeekTime;
- (id)delegate;
- (void)didReceiveMemoryWarning;
- (int)inUseScrubberHandle;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isScrubbing;
- (double)lastSeekWallClockTime;
- (id)movieScrubber;
- (void)movieScrubber:(id)arg1 editingEndValueDidChange:(double)arg2;
- (void)movieScrubber:(id)arg1 editingStartValueDidChange:(double)arg2;
- (id)movieScrubber:(id)arg1 evenlySpacedTimestamps:(int)arg2 startingAt:(id)arg3 endingAt:(id)arg4;
- (void)movieScrubber:(id)arg1 requestThumbnailImageForTimestamp:(id)arg2;
- (void)movieScrubber:(id)arg1 valueDidChange:(double)arg2;
- (void)movieScrubber:(id)arg1 willZoomToMinimumValue:(double)arg2 maximumValue:(double)arg3;
- (void)movieScrubberDidBeginAnimatingZoom:(id)arg1;
- (void)movieScrubberDidBeginScrubbing:(id)arg1 withHandle:(int)arg2;
- (void)movieScrubberDidEndAnimatingZoom:(id)arg1;
- (void)movieScrubberDidEndScrubbing:(id)arg1 withHandle:(int)arg2;
- (void)movieScrubberDidFinishRequestingThumbnails:(id)arg1;
- (double)movieScrubberDuration:(id)arg1;
- (double)movieScrubberThumbnailAspectRatio:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)player;
- (bool)playerBusySeeking;
- (id)playerPeriodicTimeObserver;
- (int)projectFrameRate;
- (id)scrubberView;
- (void)setClip:(id)arg1;
- (void)setDebugOverlay:(id)arg1;
- (void)setDeferredSeekTime:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInUseScrubberHandle:(int)arg1;
- (void)setLastSeekWallClockTime:(double)arg1;
- (void)setMovieScrubber:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setPlayerBusySeeking:(bool)arg1;
- (void)setPlayerPeriodicTimeObserver:(id)arg1;
- (void)setProjectFrameRate:(int)arg1;
- (void)setScrubberView:(id)arg1;
- (void)setScrubbing:(bool)arg1;
- (void)setShowsDebugMetadataOverlay:(bool)arg1;
- (void)setThumbnailSource:(id)arg1;
- (void)setThumbnailSourceAssetID:(id)arg1;
- (void)setTrimBoundaryTimeObserver:(id)arg1;
- (void)setVideoDuration:(double)arg1;
- (void)setVideoSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)showsDebugMetadataOverlay;
- (id)thumbnailSource;
- (id)thumbnailSourceAssetID;
- (id)trimBoundaryTimeObserver;
- (void)updateDebugMetadataOverlay;
- (double)videoDuration;
- (struct CGSize { double x1; double x2; })videoSize;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end