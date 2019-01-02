/* Generated by EzioChiu.
 */

@protocol RCWaveformRendererDelegate <NSObject>

@required

- (double)currentTime;
- (double)duration;
- (void)setCurrentTime:(double)arg1;
- (void)waveformRenderer:(RCWaveformRenderer *)arg1 contentWidthDidChange:(double)arg2;
- (void)waveformRendererContentDidFinishLoading:(RCWaveformRenderer *)arg1;
- (void)waveformRendererDidSynchronizeToDisplayLink:(RCWaveformRenderer *)arg1;

@end