/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleNeuralEngine.framework/AppleNeuralEngine
 */

@interface _ANEModel : NSObject <NSCopying, NSSecureCoding> {
    NSString * _key;
    NSDictionary * _modelAttributes;
    NSURL * _modelURL;
    _ANEProgramForEvaluation * _program;
    unsigned long long  _programHandle;
}

@property (nonatomic, readonly, copy) NSString *key;
@property (nonatomic, readonly) NSDictionary *modelAttributes;
@property (nonatomic, readonly) NSURL *modelURL;
@property (nonatomic, retain) _ANEProgramForEvaluation *program;
@property (nonatomic, readonly) unsigned long long programHandle;

+ (id)modelAtURL:(id)arg1 key:(id)arg2;
+ (id)modelAtURL:(id)arg1 key:(id)arg2 modelAttributes:(id)arg3;
+ (id)new;
+ (id)sandboxExtensionPathsForModelURL:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithModelAtURL:(id)arg1 key:(id)arg2 modelAttributes:(id)arg3;
- (id)key;
- (id)keyForBundleID:(id)arg1;
- (id)modelAttributes;
- (id)modelURL;
- (id)program;
- (unsigned long long)programHandle;
- (void)reset;
- (void)setProgram:(id)arg1;
- (void)updateModelAttributes:(id)arg1;
- (void)updateModelAttributes:(id)arg1 programHandle:(unsigned long long)arg2;

@end