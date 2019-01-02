/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMMigrationContext : NSObject {
    NSMutableSet * _deletedObjectIDs;
    NSMutableSet * _filledObjectIDs;
    NSMutableDictionary * _uniqueIdentifierToCloudObjectID;
    NSMutableDictionary * _uniqueIdentifierToLocalObjectID;
}

- (void).cxx_destruct;
- (id)cloudObjectIDForUniqueIdentifier:(id)arg1;
- (id)cloudObjectMatchingLocalObject:(id)arg1 error:(id*)arg2;
- (id)createCloudObjectForLocalObject:(id)arg1;
- (id)createLocalObjectForCloudObject:(id)arg1;
- (bool)deleteCloudObjectWithUniqueIdentifier:(id)arg1 managedObjectContext:(id)arg2 error:(id*)arg3;
- (bool)deleteLocalObjectWithUniqueIdentifier:(id)arg1 managedObjectContext:(id)arg2 error:(id*)arg3;
- (bool)fillCloudObject:(id)arg1 fromLocalObject:(id)arg2 cloudDelta:(id)arg3 localDelta:(id)arg4 error:(id*)arg5;
- (bool)fillLocalObject:(id)arg1 fromCloudObject:(id)arg2 localDelta:(id)arg3 cloudDelta:(id)arg4 error:(id*)arg5;
- (id)init;
- (bool)initializeCachesWithManagedObjectContext:(id)arg1 withCloudStore:(id)arg2 andLocalStore:(id)arg3 error:(id*)arg4;
- (id)localObjectIDForUniqueIdentifier:(id)arg1;
- (id)localObjectMatchingCloudObject:(id)arg1 error:(id*)arg2;
- (bool)newDeleteCloudObjectWithUniqueIdentifier:(id)arg1 managedObjectContext:(id)arg2 error:(id*)arg3;
- (bool)newDeleteLocalObjectWithUniqueIdentifier:(id)arg1 managedObjectContext:(id)arg2 error:(id*)arg3;
- (id)updateCloudObjectWithUniqueIdentifier:(id)arg1 dictionary:(id)arg2 managedObjectContext:(id)arg3 error:(id*)arg4;

@end