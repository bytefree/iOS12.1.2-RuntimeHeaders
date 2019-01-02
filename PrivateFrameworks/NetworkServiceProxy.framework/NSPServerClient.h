/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NSPServerClient : NSObject <NSPServerCommands> {
    NSObject<OS_xpc_object> * _connection;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (retain) NSObject<OS_xpc_object> *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addConnectionMetrics:(id)arg1;
- (void)addRequestMetrics:(id)arg1;
- (id)connection;
- (void)establishTrustWithEdgeSetForIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchAppRuleForLabel:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchCurrentConfigurationWithCompletionHandler:(id /* block */)arg1;
- (void)fetchCurrentMetricsWithCompletionHandler:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchEdgeSetForIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchStateForClient:(id)arg1 withPeerEndpoint:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)getConnection;
- (id)initWithCallbackQueue:(id)arg1;
- (id)queue;
- (void)refreshWaldoNowWithCompletionHandler:(id /* block */)arg1;
- (void)reportMetricsNowWithCompletionHandler:(id /* block */)arg1;
- (void)resetCurrentMetricsWithCompletionHandler:(id /* block */)arg1;
- (void)setAppRule:(id)arg1 forLabel:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setConnection:(id)arg1;
- (void)setCurrentConfiguration:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setCurrentLatitude:(double)arg1 longitude:(double)arg2 timestamp:(id)arg3 forClient:(id)arg4;
- (void)setEdgeSet:(id)arg1 forIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setTestLatencyMap:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateKeyBagData:(id)arg1 usageData:(id)arg2 fromClient:(id)arg3;

@end