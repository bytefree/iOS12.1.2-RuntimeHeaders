/* Generated by EzioChiu.
 */

@protocol PXInboxModelDetailViewControllerProvider <NSObject>

@required

- (long long)presentationTypeForInboxModel:(id <PXInboxModel>)arg1;

@optional

- (void)navigateToInboxModel:(id <PXInboxModel>)arg1 inSharedAlbumActivityFeedViewController:(id <PXCloudFeedNavigating><PXNavigableCloudFeedViewController>)arg2;
- (void)popViewControllerForModel:(id <PXInboxModel>)arg1 fromViewController:(UIViewController *)arg2 toNavigableForYouViewController:(id <PXNavigableForYouViewController>)arg3;
- (UIViewController *)viewControllerForInboxModel:(id <PXInboxModel>)arg1 fromViewController:(UIViewController *)arg2;

@end