/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXLoggingSubsystem : NSObject {
    bool  _ignoreLogging;
}

@property (nonatomic) bool ignoreLogging;

+ (id)_errorWithMessage:(id)arg1 underlyingError:(id)arg2;
+ (int)defaultLogLevel;
+ (id)errorWithDescription:(id)arg1;
+ (id)identifier;
+ (void)initialize;
+ (void)initializeSubsytem;
+ (id)sharedInstance;
+ (bool)shouldIncludeBacktraceInLogs;
+ (bool)shouldIncludeFileLineAndFunctionInLogs;
+ (bool)shouldProcessMessageForLogs;
+ (id)subsystems;
+ (double)threshold;
+ (bool)willLog;
+ (bool)willLogDebug;
+ (bool)willLogInfo;
+ (id)wrapError:(id)arg1 description:(id)arg2;

- (bool)ignoreLogging;
- (void)setIgnoreLogging:(bool)arg1;

@end