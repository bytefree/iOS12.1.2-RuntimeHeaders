/* Generated by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKCustomProtocol : NSURLProtocol {
    unsigned long long  _customProtocolID;
    struct RetainPtr<__CFRunLoop *> { 
        void *m_ptr; 
    }  _initializationRunLoop;
}

@property (nonatomic, readonly) unsigned long long customProtocolID;
@property (nonatomic, readonly) struct __CFRunLoop { }*initializationRunLoop;

+ (bool)canInitWithRequest:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (bool)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)customProtocolID;
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;
- (struct __CFRunLoop { }*)initializationRunLoop;
- (void)startLoading;
- (void)stopLoading;

@end