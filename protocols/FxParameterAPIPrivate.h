/* Generated by EzioChiu.
 */

@protocol FxParameterAPIPrivate

@required

- (bool)add2DVectorWithName:(NSString *)arg1 parmId:(unsigned int)arg2 defaultX:(double)arg3 defaultY:(double)arg4 parmFlags:(unsigned int)arg5;
- (bool)addLevelsWithName:(NSString *)arg1 parmId:(unsigned int)arg2 hideGamma:(bool)arg3 parmFlags:(unsigned int)arg4;
- (bool)setCustomParameterDefaultValue:(id <NSCoding>)arg1 parmId:(unsigned int)arg2;

@end
