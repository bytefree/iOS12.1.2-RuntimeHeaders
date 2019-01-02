/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCRecentsChangeToken : NSObject {
    unsigned long long  _databaseID;
    unsigned long long  _notifRank;
}

@property (nonatomic) unsigned long long databaseID;
@property (nonatomic) unsigned long long notifRank;

+ (id)changeTokenFromData:(id)arg1;
+ (bool)supportsSecureCoding;

- (unsigned long long)databaseID;
- (id)description;
- (unsigned long long)notifRank;
- (void)setDatabaseID:(unsigned long long)arg1;
- (void)setNotifRank:(unsigned long long)arg1;
- (id)toData;

@end