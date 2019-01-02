/* Generated by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMHomeManagerConfiguration : NSObject <NSCopying> {
    unsigned long long  _cachePolicy;
    unsigned long long  _options;
    bool  _shouldConnect;
}

@property (nonatomic) unsigned long long cachePolicy;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic) bool shouldConnect;

+ (id)defaultConfiguration;
+ (id)defaultPrivateConfiguration;

- (unsigned long long)cachePolicy;
- (bool)canUseCache;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithOptions:(unsigned long long)arg1 cachePolicy:(unsigned long long)arg2;
- (unsigned long long)options;
- (void)setCachePolicy:(unsigned long long)arg1;
- (void)setShouldConnect:(bool)arg1;
- (bool)shouldConnect;

@end