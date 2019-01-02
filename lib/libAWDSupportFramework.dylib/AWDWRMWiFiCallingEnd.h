/* Generated by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWRMWiFiCallingEnd : PBCodable <NSCopying> {
    bool  _aTMRegistrationState;
    unsigned int  _bBAudioErasures;
    unsigned int  _bBAudioPacketLoss;
    unsigned int  _bSSLoad;
    unsigned int  _beaconRate;
    NSString * _callEndReason;
    NSString * _callId;
    bool  _captiveNetwork;
    unsigned int  _hOBool;
    bool  _hOCapability;
    struct { 
        unsigned int lTECTRSRP : 1; 
        unsigned int lTERSRP : 1; 
        unsigned int timestamp : 1; 
        unsigned int wiFiRSSI : 1; 
        unsigned int wiFiSINR : 1; 
        unsigned int bBAudioErasures : 1; 
        unsigned int bBAudioPacketLoss : 1; 
        unsigned int bSSLoad : 1; 
        unsigned int beaconRate : 1; 
        unsigned int hOBool : 1; 
        unsigned int lTEDataLQM : 1; 
        unsigned int lTESINR : 1; 
        unsigned int lTETxPower : 1; 
        unsigned int lTEVoiceLQM : 1; 
        unsigned int latteDejitterBufferUnderflow : 1; 
        unsigned int latteErasures : 1; 
        unsigned int latteNominalJitterBufferSize : 1; 
        unsigned int latteRTPPacketLoss : 1; 
        unsigned int sessionId : 1; 
        unsigned int signalBar : 1; 
        unsigned int wiFiRxRetry : 1; 
        unsigned int wiFiTxPER : 1; 
        unsigned int aTMRegistrationState : 1; 
        unsigned int captiveNetwork : 1; 
        unsigned int hOCapability : 1; 
        unsigned int iPSecTunnelStatus : 1; 
        unsigned int iWLANStatus : 1; 
        unsigned int lTEQoSAvailable : 1; 
        unsigned int wOWEnabled : 1; 
        unsigned int wiFiBSSIDChange : 1; 
        unsigned int wiFiPreferred : 1; 
    }  _has;
    bool  _iPSecTunnelStatus;
    bool  _iWLANStatus;
    long long  _lTECTRSRP;
    unsigned int  _lTEDataLQM;
    bool  _lTEQoSAvailable;
    long long  _lTERSRP;
    int  _lTESINR;
    unsigned int  _lTETxPower;
    unsigned int  _lTEVoiceLQM;
    unsigned int  _latteDejitterBufferUnderflow;
    unsigned int  _latteErasures;
    unsigned int  _latteNominalJitterBufferSize;
    unsigned int  _latteRTPPacketLoss;
    unsigned int  _sessionId;
    unsigned int  _signalBar;
    unsigned long long  _timestamp;
    bool  _wOWEnabled;
    NSString * _wRMRecommendedRAT;
    bool  _wiFiBSSIDChange;
    bool  _wiFiPreferred;
    long long  _wiFiRSSI;
    unsigned int  _wiFiRxRetry;
    long long  _wiFiSINR;
    unsigned int  _wiFiTxPER;
}

@property (nonatomic) bool aTMRegistrationState;
@property (nonatomic) unsigned int bBAudioErasures;
@property (nonatomic) unsigned int bBAudioPacketLoss;
@property (nonatomic) unsigned int bSSLoad;
@property (nonatomic) unsigned int beaconRate;
@property (nonatomic, retain) NSString *callEndReason;
@property (nonatomic, retain) NSString *callId;
@property (nonatomic) bool captiveNetwork;
@property (nonatomic) unsigned int hOBool;
@property (nonatomic) bool hOCapability;
@property (nonatomic) bool hasATMRegistrationState;
@property (nonatomic) bool hasBBAudioErasures;
@property (nonatomic) bool hasBBAudioPacketLoss;
@property (nonatomic) bool hasBSSLoad;
@property (nonatomic) bool hasBeaconRate;
@property (nonatomic, readonly) bool hasCallEndReason;
@property (nonatomic, readonly) bool hasCallId;
@property (nonatomic) bool hasCaptiveNetwork;
@property (nonatomic) bool hasHOBool;
@property (nonatomic) bool hasHOCapability;
@property (nonatomic) bool hasIPSecTunnelStatus;
@property (nonatomic) bool hasIWLANStatus;
@property (nonatomic) bool hasLTECTRSRP;
@property (nonatomic) bool hasLTEDataLQM;
@property (nonatomic) bool hasLTEQoSAvailable;
@property (nonatomic) bool hasLTERSRP;
@property (nonatomic) bool hasLTESINR;
@property (nonatomic) bool hasLTETxPower;
@property (nonatomic) bool hasLTEVoiceLQM;
@property (nonatomic) bool hasLatteDejitterBufferUnderflow;
@property (nonatomic) bool hasLatteErasures;
@property (nonatomic) bool hasLatteNominalJitterBufferSize;
@property (nonatomic) bool hasLatteRTPPacketLoss;
@property (nonatomic) bool hasSessionId;
@property (nonatomic) bool hasSignalBar;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasWOWEnabled;
@property (nonatomic, readonly) bool hasWRMRecommendedRAT;
@property (nonatomic) bool hasWiFiBSSIDChange;
@property (nonatomic) bool hasWiFiPreferred;
@property (nonatomic) bool hasWiFiRSSI;
@property (nonatomic) bool hasWiFiRxRetry;
@property (nonatomic) bool hasWiFiSINR;
@property (nonatomic) bool hasWiFiTxPER;
@property (nonatomic) bool iPSecTunnelStatus;
@property (nonatomic) bool iWLANStatus;
@property (nonatomic) long long lTECTRSRP;
@property (nonatomic) unsigned int lTEDataLQM;
@property (nonatomic) bool lTEQoSAvailable;
@property (nonatomic) long long lTERSRP;
@property (nonatomic) int lTESINR;
@property (nonatomic) unsigned int lTETxPower;
@property (nonatomic) unsigned int lTEVoiceLQM;
@property (nonatomic) unsigned int latteDejitterBufferUnderflow;
@property (nonatomic) unsigned int latteErasures;
@property (nonatomic) unsigned int latteNominalJitterBufferSize;
@property (nonatomic) unsigned int latteRTPPacketLoss;
@property (nonatomic) unsigned int sessionId;
@property (nonatomic) unsigned int signalBar;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) bool wOWEnabled;
@property (nonatomic, retain) NSString *wRMRecommendedRAT;
@property (nonatomic) bool wiFiBSSIDChange;
@property (nonatomic) bool wiFiPreferred;
@property (nonatomic) long long wiFiRSSI;
@property (nonatomic) unsigned int wiFiRxRetry;
@property (nonatomic) long long wiFiSINR;
@property (nonatomic) unsigned int wiFiTxPER;

- (bool)aTMRegistrationState;
- (unsigned int)bBAudioErasures;
- (unsigned int)bBAudioPacketLoss;
- (unsigned int)bSSLoad;
- (unsigned int)beaconRate;
- (id)callEndReason;
- (id)callId;
- (bool)captiveNetwork;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hOBool;
- (bool)hOCapability;
- (bool)hasATMRegistrationState;
- (bool)hasBBAudioErasures;
- (bool)hasBBAudioPacketLoss;
- (bool)hasBSSLoad;
- (bool)hasBeaconRate;
- (bool)hasCallEndReason;
- (bool)hasCallId;
- (bool)hasCaptiveNetwork;
- (bool)hasHOBool;
- (bool)hasHOCapability;
- (bool)hasIPSecTunnelStatus;
- (bool)hasIWLANStatus;
- (bool)hasLTECTRSRP;
- (bool)hasLTEDataLQM;
- (bool)hasLTEQoSAvailable;
- (bool)hasLTERSRP;
- (bool)hasLTESINR;
- (bool)hasLTETxPower;
- (bool)hasLTEVoiceLQM;
- (bool)hasLatteDejitterBufferUnderflow;
- (bool)hasLatteErasures;
- (bool)hasLatteNominalJitterBufferSize;
- (bool)hasLatteRTPPacketLoss;
- (bool)hasSessionId;
- (bool)hasSignalBar;
- (bool)hasTimestamp;
- (bool)hasWOWEnabled;
- (bool)hasWRMRecommendedRAT;
- (bool)hasWiFiBSSIDChange;
- (bool)hasWiFiPreferred;
- (bool)hasWiFiRSSI;
- (bool)hasWiFiRxRetry;
- (bool)hasWiFiSINR;
- (bool)hasWiFiTxPER;
- (unsigned long long)hash;
- (bool)iPSecTunnelStatus;
- (bool)iWLANStatus;
- (bool)isEqual:(id)arg1;
- (long long)lTECTRSRP;
- (unsigned int)lTEDataLQM;
- (bool)lTEQoSAvailable;
- (long long)lTERSRP;
- (int)lTESINR;
- (unsigned int)lTETxPower;
- (unsigned int)lTEVoiceLQM;
- (unsigned int)latteDejitterBufferUnderflow;
- (unsigned int)latteErasures;
- (unsigned int)latteNominalJitterBufferSize;
- (unsigned int)latteRTPPacketLoss;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)sessionId;
- (void)setATMRegistrationState:(bool)arg1;
- (void)setBBAudioErasures:(unsigned int)arg1;
- (void)setBBAudioPacketLoss:(unsigned int)arg1;
- (void)setBSSLoad:(unsigned int)arg1;
- (void)setBeaconRate:(unsigned int)arg1;
- (void)setCallEndReason:(id)arg1;
- (void)setCallId:(id)arg1;
- (void)setCaptiveNetwork:(bool)arg1;
- (void)setHOBool:(unsigned int)arg1;
- (void)setHOCapability:(bool)arg1;
- (void)setHasATMRegistrationState:(bool)arg1;
- (void)setHasBBAudioErasures:(bool)arg1;
- (void)setHasBBAudioPacketLoss:(bool)arg1;
- (void)setHasBSSLoad:(bool)arg1;
- (void)setHasBeaconRate:(bool)arg1;
- (void)setHasCaptiveNetwork:(bool)arg1;
- (void)setHasHOBool:(bool)arg1;
- (void)setHasHOCapability:(bool)arg1;
- (void)setHasIPSecTunnelStatus:(bool)arg1;
- (void)setHasIWLANStatus:(bool)arg1;
- (void)setHasLTECTRSRP:(bool)arg1;
- (void)setHasLTEDataLQM:(bool)arg1;
- (void)setHasLTEQoSAvailable:(bool)arg1;
- (void)setHasLTERSRP:(bool)arg1;
- (void)setHasLTESINR:(bool)arg1;
- (void)setHasLTETxPower:(bool)arg1;
- (void)setHasLTEVoiceLQM:(bool)arg1;
- (void)setHasLatteDejitterBufferUnderflow:(bool)arg1;
- (void)setHasLatteErasures:(bool)arg1;
- (void)setHasLatteNominalJitterBufferSize:(bool)arg1;
- (void)setHasLatteRTPPacketLoss:(bool)arg1;
- (void)setHasSessionId:(bool)arg1;
- (void)setHasSignalBar:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasWOWEnabled:(bool)arg1;
- (void)setHasWiFiBSSIDChange:(bool)arg1;
- (void)setHasWiFiPreferred:(bool)arg1;
- (void)setHasWiFiRSSI:(bool)arg1;
- (void)setHasWiFiRxRetry:(bool)arg1;
- (void)setHasWiFiSINR:(bool)arg1;
- (void)setHasWiFiTxPER:(bool)arg1;
- (void)setIPSecTunnelStatus:(bool)arg1;
- (void)setIWLANStatus:(bool)arg1;
- (void)setLTECTRSRP:(long long)arg1;
- (void)setLTEDataLQM:(unsigned int)arg1;
- (void)setLTEQoSAvailable:(bool)arg1;
- (void)setLTERSRP:(long long)arg1;
- (void)setLTESINR:(int)arg1;
- (void)setLTETxPower:(unsigned int)arg1;
- (void)setLTEVoiceLQM:(unsigned int)arg1;
- (void)setLatteDejitterBufferUnderflow:(unsigned int)arg1;
- (void)setLatteErasures:(unsigned int)arg1;
- (void)setLatteNominalJitterBufferSize:(unsigned int)arg1;
- (void)setLatteRTPPacketLoss:(unsigned int)arg1;
- (void)setSessionId:(unsigned int)arg1;
- (void)setSignalBar:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setWOWEnabled:(bool)arg1;
- (void)setWRMRecommendedRAT:(id)arg1;
- (void)setWiFiBSSIDChange:(bool)arg1;
- (void)setWiFiPreferred:(bool)arg1;
- (void)setWiFiRSSI:(long long)arg1;
- (void)setWiFiRxRetry:(unsigned int)arg1;
- (void)setWiFiSINR:(long long)arg1;
- (void)setWiFiTxPER:(unsigned int)arg1;
- (unsigned int)signalBar;
- (unsigned long long)timestamp;
- (bool)wOWEnabled;
- (id)wRMRecommendedRAT;
- (bool)wiFiBSSIDChange;
- (bool)wiFiPreferred;
- (long long)wiFiRSSI;
- (unsigned int)wiFiRxRetry;
- (long long)wiFiSINR;
- (unsigned int)wiFiTxPER;
- (void)writeTo:(id)arg1;

@end