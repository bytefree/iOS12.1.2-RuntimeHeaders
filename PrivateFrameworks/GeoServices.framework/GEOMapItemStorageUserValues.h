/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapItemStorageUserValues : PBCodable <NSCopying> {
    NSString * _name;
    NSString * _phoneNumber;
    NSData * _timeZoneData;
    NSString * _timeZoneName;
    PBUnknownFields * _unknownFields;
    NSString * _url;
}

@property (nonatomic, readonly) bool hasName;
@property (nonatomic, readonly) bool hasPhoneNumber;
@property (nonatomic, readonly) bool hasTimeZoneData;
@property (nonatomic, readonly) bool hasTimeZoneName;
@property (nonatomic, readonly) bool hasUrl;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *phoneNumber;
@property (nonatomic, retain) NSData *timeZoneData;
@property (nonatomic, retain) NSString *timeZoneName;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSString *url;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasName;
- (bool)hasPhoneNumber;
- (bool)hasTimeZoneData;
- (bool)hasTimeZoneName;
- (bool)hasUrl;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (id)phoneNumber;
- (bool)readFrom:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setTimeZoneData:(id)arg1;
- (void)setTimeZoneName:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)timeZoneData;
- (id)timeZoneName;
- (id)unknownFields;
- (id)url;
- (void)writeTo:(id)arg1;

@end
