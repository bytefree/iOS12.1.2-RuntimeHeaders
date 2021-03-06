/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSCoreSpeechServices : NSObject

+ (void)fetchRemoteVoiceTriggerAssetForLanguageCode:(id)arg1 completion:(id /* block */)arg2;
+ (id)getCoreSpeechServiceConnection;
+ (id)getCoreSpeechXPCConnection;
+ (long long)getFirstPassRunningMode;
+ (void)installedVoiceTriggerAssetForLanguageCode:(id)arg1 completion:(id /* block */)arg2;
+ (void)requestUpdatedSATAudio;
+ (void)voiceTriggerRTModelForVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 downloadedModels:(id)arg3 preinstalledModels:(id)arg4 completion:(id /* block */)arg5;

@end
