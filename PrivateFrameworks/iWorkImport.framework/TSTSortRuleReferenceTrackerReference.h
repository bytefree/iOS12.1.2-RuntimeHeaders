/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTSortRuleReferenceTrackerReference : NSObject {
    unsigned short  _columnIndex;
    TSCETrackedReference * _trackedReference;
}

@property (nonatomic) unsigned short columnIndex;
@property (nonatomic, retain) TSCETrackedReference *trackedReference;

+ (id)referenceWithColumnIndex:(unsigned short)arg1 trackedReference:(id)arg2;

- (void).cxx_destruct;
- (unsigned short)columnIndex;
- (bool)hasTrackedReferenceEqualTo:(id)arg1;
- (unsigned long long)hash;
- (id)initWithColumnIndex:(unsigned short)arg1 trackedReference:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)setColumnIndex:(unsigned short)arg1;
- (void)setTrackedReference:(id)arg1;
- (id)trackedReference;

@end