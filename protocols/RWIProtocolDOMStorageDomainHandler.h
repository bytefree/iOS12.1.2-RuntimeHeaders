/* Generated by EzioChiu.
 */

@protocol RWIProtocolDOMStorageDomainHandler <NSObject>

@required

- (void)disableWithErrorCallback:(void *)arg1 successCallback:(void *)arg2; // needs 2 arg types, found 11: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, void*
- (void)enableWithErrorCallback:(void *)arg1 successCallback:(void *)arg2; // needs 2 arg types, found 11: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, void*
- (void)getDOMStorageItemsWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 storageId:(void *)arg3; // needs 3 arg types, found 13: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, NSArray *, void*, RWIProtocolDOMStorageStorageId *
- (void)removeDOMStorageItemWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 storageId:(void *)arg3 key:(void *)arg4; // needs 4 arg types, found 13: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, void*, RWIProtocolDOMStorageStorageId *, NSString *
- (void)setDOMStorageItemWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 storageId:(void *)arg3 key:(void *)arg4 value:(void *)arg5; // needs 5 arg types, found 14: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, void*, RWIProtocolDOMStorageStorageId *, NSString *, NSString *

@end