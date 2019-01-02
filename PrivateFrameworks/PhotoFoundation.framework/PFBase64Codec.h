/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFBase64Codec : NSObject

+ (const char *)alphabet;
+ (bool)appendPadding;
+ (bool)checkTerminators:(long long)arg1 expected:(long long)arg2;
+ (id)decodeString:(id)arg1;
+ (bool)decodeString:(id)arg1 with:(id /* block */)arg2;
+ (id)decodeUuid:(id)arg1;
+ (const char *)decoder;
+ (id)encodeBytes:(const void*)arg1 withLength:(unsigned long long)arg2;
+ (id)encodeData:(id)arg1;
+ (id)encodeUuid:(id)arg1;
+ (unsigned long long)encodedUuidLength;

- (id)init;

@end