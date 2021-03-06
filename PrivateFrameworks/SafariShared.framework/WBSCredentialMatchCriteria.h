/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSCredentialMatchCriteria : NSObject {
    NSURL * _URL;
    unsigned long long  _options;
    NSString * _partialUsername;
}

@property (nonatomic, readonly, copy) NSURL *URL;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly, copy) NSString *partialUsername;

- (void).cxx_destruct;
- (id)URL;
- (id)initWithURL:(id)arg1 options:(unsigned long long)arg2 partialUsername:(id)arg3;
- (unsigned long long)options;
- (id)partialUsername;

@end
