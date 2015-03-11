/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWRMLinkPrefChange2 : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int count : 1; 
        unsigned int nCallActive : 1; 
        unsigned int nCallIdle : 1; 
        unsigned int nCelluarBadRSRP : 1; 
        unsigned int nCelluarBadSignal : 1; 
        unsigned int nCellularNotReady : 1; 
        unsigned int nData : 1; 
        unsigned int nHandoverNotPerformed : 1; 
        unsigned int nHandoverPerformed : 1; 
        unsigned int nHandoverUnknown : 1; 
        unsigned int nRunning : 1; 
        unsigned int nStationary : 1; 
        unsigned int nStatusUpdateDelayBin1 : 1; 
        unsigned int nStatusUpdateDelayBin2 : 1; 
        unsigned int nStatusUpdateDelayBin3 : 1; 
        unsigned int nStatusUpdateDelayBin4 : 1; 
        unsigned int nStatusUpdateDelayBin5 : 1; 
        unsigned int nStatusUpdateDelayBin6 : 1; 
        unsigned int nVehicular : 1; 
        unsigned int nVoice : 1; 
        unsigned int nWalking : 1; 
        unsigned int nWifiGood : 1; 
    unsigned int _count;
    } _has;
    unsigned int _nCallActive;
    unsigned int _nCallIdle;
    unsigned int _nCelluarBadRSRP;
    unsigned int _nCelluarBadSignal;
    unsigned int _nCellularNotReady;
    unsigned int _nData;
    unsigned int _nHandoverNotPerformed;
    unsigned int _nHandoverPerformed;
    unsigned int _nHandoverUnknown;
    unsigned int _nRunning;
    unsigned int _nStationary;
    unsigned int _nStatusUpdateDelayBin1;
    unsigned int _nStatusUpdateDelayBin2;
    unsigned int _nStatusUpdateDelayBin3;
    unsigned int _nStatusUpdateDelayBin4;
    unsigned int _nStatusUpdateDelayBin5;
    unsigned int _nStatusUpdateDelayBin6;
    unsigned int _nVehicular;
    unsigned int _nVoice;
    unsigned int _nWalking;
    unsigned int _nWifiGood;
    unsigned long long _timestamp;
}

@property unsigned int count;
@property BOOL hasCount;
@property BOOL hasNCallActive;
@property BOOL hasNCallIdle;
@property BOOL hasNCelluarBadRSRP;
@property BOOL hasNCelluarBadSignal;
@property BOOL hasNCellularNotReady;
@property BOOL hasNData;
@property BOOL hasNHandoverNotPerformed;
@property BOOL hasNHandoverPerformed;
@property BOOL hasNHandoverUnknown;
@property BOOL hasNRunning;
@property BOOL hasNStationary;
@property BOOL hasNStatusUpdateDelayBin1;
@property BOOL hasNStatusUpdateDelayBin2;
@property BOOL hasNStatusUpdateDelayBin3;
@property BOOL hasNStatusUpdateDelayBin4;
@property BOOL hasNStatusUpdateDelayBin5;
@property BOOL hasNStatusUpdateDelayBin6;
@property BOOL hasNVehicular;
@property BOOL hasNVoice;
@property BOOL hasNWalking;
@property BOOL hasNWifiGood;
@property BOOL hasTimestamp;
@property unsigned int nCallActive;
@property unsigned int nCallIdle;
@property unsigned int nCelluarBadRSRP;
@property unsigned int nCelluarBadSignal;
@property unsigned int nCellularNotReady;
@property unsigned int nData;
@property unsigned int nHandoverNotPerformed;
@property unsigned int nHandoverPerformed;
@property unsigned int nHandoverUnknown;
@property unsigned int nRunning;
@property unsigned int nStationary;
@property unsigned int nStatusUpdateDelayBin1;
@property unsigned int nStatusUpdateDelayBin2;
@property unsigned int nStatusUpdateDelayBin3;
@property unsigned int nStatusUpdateDelayBin4;
@property unsigned int nStatusUpdateDelayBin5;
@property unsigned int nStatusUpdateDelayBin6;
@property unsigned int nVehicular;
@property unsigned int nVoice;
@property unsigned int nWalking;
@property unsigned int nWifiGood;
@property unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCount;
- (BOOL)hasNCallActive;
- (BOOL)hasNCallIdle;
- (BOOL)hasNCelluarBadRSRP;
- (BOOL)hasNCelluarBadSignal;
- (BOOL)hasNCellularNotReady;
- (BOOL)hasNData;
- (BOOL)hasNHandoverNotPerformed;
- (BOOL)hasNHandoverPerformed;
- (BOOL)hasNHandoverUnknown;
- (BOOL)hasNRunning;
- (BOOL)hasNStationary;
- (BOOL)hasNStatusUpdateDelayBin1;
- (BOOL)hasNStatusUpdateDelayBin2;
- (BOOL)hasNStatusUpdateDelayBin3;
- (BOOL)hasNStatusUpdateDelayBin4;
- (BOOL)hasNStatusUpdateDelayBin5;
- (BOOL)hasNStatusUpdateDelayBin6;
- (BOOL)hasNVehicular;
- (BOOL)hasNVoice;
- (BOOL)hasNWalking;
- (BOOL)hasNWifiGood;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)nCallActive;
- (unsigned int)nCallIdle;
- (unsigned int)nCelluarBadRSRP;
- (unsigned int)nCelluarBadSignal;
- (unsigned int)nCellularNotReady;
- (unsigned int)nData;
- (unsigned int)nHandoverNotPerformed;
- (unsigned int)nHandoverPerformed;
- (unsigned int)nHandoverUnknown;
- (unsigned int)nRunning;
- (unsigned int)nStationary;
- (unsigned int)nStatusUpdateDelayBin1;
- (unsigned int)nStatusUpdateDelayBin2;
- (unsigned int)nStatusUpdateDelayBin3;
- (unsigned int)nStatusUpdateDelayBin4;
- (unsigned int)nStatusUpdateDelayBin5;
- (unsigned int)nStatusUpdateDelayBin6;
- (unsigned int)nVehicular;
- (unsigned int)nVoice;
- (unsigned int)nWalking;
- (unsigned int)nWifiGood;
- (BOOL)readFrom:(id)arg1;
- (void)setCount:(unsigned int)arg1;
- (void)setHasCount:(BOOL)arg1;
- (void)setHasNCallActive:(BOOL)arg1;
- (void)setHasNCallIdle:(BOOL)arg1;
- (void)setHasNCelluarBadRSRP:(BOOL)arg1;
- (void)setHasNCelluarBadSignal:(BOOL)arg1;
- (void)setHasNCellularNotReady:(BOOL)arg1;
- (void)setHasNData:(BOOL)arg1;
- (void)setHasNHandoverNotPerformed:(BOOL)arg1;
- (void)setHasNHandoverPerformed:(BOOL)arg1;
- (void)setHasNHandoverUnknown:(BOOL)arg1;
- (void)setHasNRunning:(BOOL)arg1;
- (void)setHasNStationary:(BOOL)arg1;
- (void)setHasNStatusUpdateDelayBin1:(BOOL)arg1;
- (void)setHasNStatusUpdateDelayBin2:(BOOL)arg1;
- (void)setHasNStatusUpdateDelayBin3:(BOOL)arg1;
- (void)setHasNStatusUpdateDelayBin4:(BOOL)arg1;
- (void)setHasNStatusUpdateDelayBin5:(BOOL)arg1;
- (void)setHasNStatusUpdateDelayBin6:(BOOL)arg1;
- (void)setHasNVehicular:(BOOL)arg1;
- (void)setHasNVoice:(BOOL)arg1;
- (void)setHasNWalking:(BOOL)arg1;
- (void)setHasNWifiGood:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setNCallActive:(unsigned int)arg1;
- (void)setNCallIdle:(unsigned int)arg1;
- (void)setNCelluarBadRSRP:(unsigned int)arg1;
- (void)setNCelluarBadSignal:(unsigned int)arg1;
- (void)setNCellularNotReady:(unsigned int)arg1;
- (void)setNData:(unsigned int)arg1;
- (void)setNHandoverNotPerformed:(unsigned int)arg1;
- (void)setNHandoverPerformed:(unsigned int)arg1;
- (void)setNHandoverUnknown:(unsigned int)arg1;
- (void)setNRunning:(unsigned int)arg1;
- (void)setNStationary:(unsigned int)arg1;
- (void)setNStatusUpdateDelayBin1:(unsigned int)arg1;
- (void)setNStatusUpdateDelayBin2:(unsigned int)arg1;
- (void)setNStatusUpdateDelayBin3:(unsigned int)arg1;
- (void)setNStatusUpdateDelayBin4:(unsigned int)arg1;
- (void)setNStatusUpdateDelayBin5:(unsigned int)arg1;
- (void)setNStatusUpdateDelayBin6:(unsigned int)arg1;
- (void)setNVehicular:(unsigned int)arg1;
- (void)setNVoice:(unsigned int)arg1;
- (void)setNWalking:(unsigned int)arg1;
- (void)setNWifiGood:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end