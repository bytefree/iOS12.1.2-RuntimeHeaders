/* Generated by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVFigObjectInspector : NSObject

+ (void)initialize;

- (short)_SInt16ForProperty:(struct __CFString { }*)arg1;
- (int)_SInt32ForProperty:(struct __CFString { }*)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_affineTransformForProperty:(struct __CFString { }*)arg1;
- (id)_arrayForProperty:(struct __CFString { }*)arg1;
- (unsigned char)_booleanForProperty:(struct __CFString { }*)arg1;
- (id)_dataForProperty:(struct __CFString { }*)arg1;
- (id)_dictionaryForProperty:(struct __CFString { }*)arg1;
- (float)_floatForProperty:(struct __CFString { }*)arg1;
- (float)_floatForProperty:(struct __CFString { }*)arg1 defaultValue:(float)arg2;
- (long long)_longLongForProperty:(struct __CFString { }*)arg1;
- (id)_nonNilArrayForProperty:(struct __CFString { }*)arg1;
- (id)_nonNilDictionaryForProperty:(struct __CFString { }*)arg1;
- (struct CGSize { double x1; double x2; })_sizeForProperty:(struct __CFString { }*)arg1;
- (struct CGSize { double x1; double x2; })_sizeForProperty:(struct __CFString { }*)arg1 defaultValue:(struct CGSize { double x1; double x2; })arg2;
- (id)_stringForProperty:(struct __CFString { }*)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_timeForProperty:(struct __CFString { }*)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_timeForProperty:(struct __CFString { }*)arg1 defaultValue:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })_timeRangeForProperty:(struct __CFString { }*)arg1;
- (id)_tollFreeBridgedObjectForProperty:(struct __CFString { }*)arg1;
- (void*)_valueAsCFTypeForProperty:(struct __CFString { }*)arg1;

@end