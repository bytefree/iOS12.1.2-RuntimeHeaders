/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTTSSelectionStatistics : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, copy) NSString *completionType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *interactionId;
@property (nonatomic, copy) NSArray *listenedItems;
@property (nonatomic, copy) NSString *refId;
@property (nonatomic) long long selectedItemIndex;
@property (nonatomic, copy) NSString *sessionId;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *timesListened;

+ (id)tTSSelectionStatistics;
+ (id)tTSSelectionStatisticsWithDictionary:(id)arg1 context:(id)arg2;

- (id)completionType;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)interactionId;
- (id)listenedItems;
- (bool)requiresResponse;
- (long long)selectedItemIndex;
- (id)sessionId;
- (void)setCompletionType:(id)arg1;
- (void)setInteractionId:(id)arg1;
- (void)setListenedItems:(id)arg1;
- (void)setSelectedItemIndex:(long long)arg1;
- (void)setSessionId:(id)arg1;
- (void)setTimesListened:(id)arg1;
- (id)timesListened;

@end