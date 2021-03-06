/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCForYouQueryUtilities : NSObject

+ (id)_filterTagsForQuerying:(id)arg1 withMutedTagIDs:(id)arg2;
+ (id)feedRequestsForTags:(id)arg1 tagBinProvider:(id /* block */)arg2 hiddenFeedIDs:(id)arg3 purchasedTagIDs:(id)arg4 configuration:(id)arg5 maxCount:(unsigned long long)arg6 tagIDFeedRangeProvider:(id /* block */)arg7 isRunningPPT:(bool)arg8;
+ (void)fetchTagsForQueryingWithSubscribedTagIDs:(id)arg1 mutedTagIDs:(id)arg2 purchasedTagIDs:(id)arg3 configuration:(id)arg4 contentContext:(id)arg5 fallbackToPresubscribedTagIDs:(bool)arg6 qualityOfService:(long long)arg7 completionHandler:(id /* block */)arg8;
+ (void)fetchTagsForQueryingWithSubscribedTags:(id)arg1 mutedTagIDs:(id)arg2 purchasedTagIDs:(id)arg3 configuration:(id)arg4 contentContext:(id)arg5 fallbackToPresubscribedTagIDs:(bool)arg6 qualityOfService:(long long)arg7 completionHandler:(id /* block */)arg8;

@end
