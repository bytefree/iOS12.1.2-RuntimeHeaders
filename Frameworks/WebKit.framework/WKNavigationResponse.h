/* Generated by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKNavigationResponse : NSObject <WKObject> {
    struct ObjectStorage<API::NavigationResponse> { 
        struct type { 
            unsigned char __lx[792]; 
        } data; 
    }  _navigationResponse;
}

@property (readonly) /* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*_apiObject;
@property (nonatomic, readonly) WKFrameInfo *_frame;
@property (nonatomic, readonly) NSURLRequest *_request;
@property (nonatomic, readonly) bool canShowMIMEType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isForMainFrame, nonatomic, readonly) bool forMainFrame;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSURLResponse *response;
@property (readonly) Class superclass;

- (/* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*)_apiObject;
- (id)_frame;
- (id)_request;
- (bool)canShowMIMEType;
- (void)dealloc;
- (id)description;
- (bool)isForMainFrame;
- (id)response;

@end