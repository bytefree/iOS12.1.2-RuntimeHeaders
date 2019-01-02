/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCEDistributor : NSObject {
    NSMutableArray * _receivers;
}

@property (nonatomic, readonly) Protocol *protocol;
@property (nonatomic, readonly) NSArray *receivers;

- (void).cxx_destruct;
- (void)addReceiver:(id)arg1;
- (void)addReceiverIfMissing:(id)arg1;
- (void)disconnect;
- (void)distributeBlock:(id /* block */)arg1;
- (void)dropAllTargets;
- (bool)hasReceiver:(id)arg1;
- (id)init;
- (id)protocol;
- (id)receivers;
- (void)removeReceiver:(id)arg1;
- (void)suspendDuringBlock:(id /* block */)arg1;

@end