/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTTableFilterRule : NSObject <NSCopying> {
    bool  _doesNotNeedFormulaRewriteForImport;
    TSTFormulaPredicate * _predicate;
}

@property (nonatomic) bool doesNotNeedFormulaRewriteForImport;
@property (nonatomic, retain) TSTFormulaPredicate *predicate;

+ (id)ruleWhereValuesInTable:(id)arg1 inBaseColumn:(struct TSUModelColumnIndex { unsigned short x1; })arg2 matchCell:(id)arg3;
+ (id)ruleWithFormulaPredicate:(id)arg1;

- (void).cxx_destruct;
- (struct TSUModelColumnIndex { unsigned short x1; })baseColumnIndexForFilterRuleInTableInfo:(id)arg1;
- (id)copyByRewritingToGeometricFormWithTableInfo:(id)arg1 containsBadRef:(bool*)arg2;
- (id)copyByRewritingToUidFormWithTableInfo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)doesNotNeedFormulaRewriteForImport;
- (void)encodeToArchive:(struct FilterRuleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct FormulaPredicateArchive {} *x5; bool x6; }*)arg1 archiver:(id)arg2;
- (struct TSCEFormula { struct TSCEASTNodeArray {} *x1; struct TSCEFormulaTranslationFlags { unsigned char x_2_1_1; } x2; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_3_1_1; } x3; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_4_1_1; } x4; }*)formula;
- (unsigned long long)hash;
- (id)initFromArchive:(const struct FilterRuleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct FormulaPredicateArchive {} *x5; bool x6; }*)arg1;
- (id)initRuleWhereValuesInTable:(id)arg1 inBaseColumn:(struct TSUModelColumnIndex { unsigned short x1; })arg2 matchCell:(id)arg3;
- (id)initWithFormulaPredicate:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)matchesCell:(id)arg1;
- (bool)matchesRow:(unsigned int)arg1 withFormulaTableUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg2 withCalculationEngine:(id)arg3;
- (bool)needsFormulaRewriteForImport;
- (bool)needsThreshold;
- (id)predicate;
- (void)setDoesNotNeedFormulaRewriteForImport;
- (void)setDoesNotNeedFormulaRewriteForImport:(bool)arg1;
- (void)setPredicate:(id)arg1;

@end