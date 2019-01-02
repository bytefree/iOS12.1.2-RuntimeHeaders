/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFBookmarkCoordinator : NSObject {
    NSCountedSet * _accessedPaths;
    NSCountedSet * _managedPaths;
}

+ (id)sharedInstance;
+ (bool)urlHasSandboxExtension:(id)arg1;

- (void).cxx_destruct;
- (void)_decrementRefcountForURL:(id)arg1;
- (void)_incrementRefcountForURL:(id)arg1 callStart:(bool)arg2;
- (void)addPowerBoxURL:(id)arg1;
- (void)addPowerBoxURLs:(id)arg1;
- (id)description;
- (id)init;
- (void)logRefCountForUrl:(id)arg1 withPrefix:(id)arg2 sender:(id)arg3;
- (id)startAccesingURLForBookmarkData:(id)arg1 error:(id*)arg2;
- (void)startAccessingURL:(id)arg1;
- (void)stopAccessingURL:(id)arg1;
- (void)stopAccessingURLs:(id)arg1;

@end