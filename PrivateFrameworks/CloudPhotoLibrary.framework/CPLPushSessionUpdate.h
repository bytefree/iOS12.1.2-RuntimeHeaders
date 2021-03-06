/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLPushSessionUpdate : CPLChangeSessionUpdate {
    NSArray * _addedRecords;
    NSArray * _deletedRecordScopedIdentifiers;
    CPLChangeBatch * _diffBatch;
    NSSet * _unquarantinedRecordScopedIdentifiers;
    NSArray * _updatedRecords;
    NSDictionary * _uploadIdentifiers;
}

@property (nonatomic, readonly) NSArray *addedRecords;
@property (nonatomic, readonly) NSArray *deletedRecordScopedIdentifiers;
@property (nonatomic, readonly) CPLChangeBatch *diffBatch;
@property (nonatomic, readonly) NSSet *unquarantinedRecordScopedIdentifiers;
@property (nonatomic, readonly) NSArray *updatedRecords;
@property (nonatomic, readonly) NSDictionary *uploadIdentifiers;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)addedRecords;
- (bool)applyToStore:(id)arg1 error:(id*)arg2;
- (id)deletedRecordScopedIdentifiers;
- (id)diffBatch;
- (bool)discardFromStore:(id)arg1 error:(id*)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPushSessionTracker:(id)arg1 error:(id*)arg2;
- (id)pendingRecordChangeForClientCacheWithLocalScopedIdentifier:(id)arg1;
- (id)statusDescription;
- (id)storageForStatusInStore:(id)arg1;
- (id)unquarantinedRecordScopedIdentifiers;
- (id)updatedRecords;
- (id)uploadIdentifiers;

@end
