/* Generated by EzioChiu.
 */

@protocol FBUISceneClientProxy <NSObject, BSDescriptionProviding>

@required

- (void)didInvalidateSceneHost:(id <FBUISceneHostProxy>)arg1;
- (void)sceneHost:(void *)arg1 destroySceneWithTransitionContext:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: <FBUISceneHostProxy> *, FBSSceneTransitionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)sceneHost:(id <FBUISceneHostProxy>)arg1 didReceiveActions:(NSSet *)arg2;
- (void)sceneHost:(void *)arg1 didUpdateSettings:(void *)arg2 withDiff:(void *)arg3 transitionContext:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 11: <FBUISceneHostProxy> *, FBSSceneSettings *, FBSSceneSettingsDiff *, FBSSceneTransitionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end