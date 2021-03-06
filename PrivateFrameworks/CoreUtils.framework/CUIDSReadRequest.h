/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUIDSReadRequest : NSObject {
    id /* block */  _completion;
    char * buffer;
    unsigned long long  len;
    unsigned long long  maxLen;
    unsigned long long  minLen;
    CUIDSReadRequest * next;
}

@property (nonatomic, copy) id /* block */ completion;

- (void).cxx_destruct;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;

@end
