/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMLockdownManager : NSObject {
    BOOL  _hasShownMismatchedSIM;
    BOOL  _hasShownWaitingAlertThisSession;
    BOOL  _isCarrierInstall;
    BOOL  _isInternalInstall;
    BOOL  _isNonUIInstall;
    BOOL  _isVendorInstall;
    BOOL  _settingUpActivationState;
    unsigned int  _state;
}

@property (nonatomic) BOOL _hasShownMismatchedSIM;
@property (nonatomic) BOOL _hasShownWaitingAlertThisSession;
@property (nonatomic) BOOL _isCarrierInstall;
@property (nonatomic) BOOL _isInternalInstall;
@property (nonatomic) BOOL _isNonUIInstall;
@property (nonatomic) BOOL _isVendorInstall;
@property (nonatomic) BOOL _settingUpActivationState;
@property (setter=_setState:, nonatomic) unsigned int _state;
@property (nonatomic, readonly) BOOL isActivated;
@property (nonatomic, readonly) BOOL isCarrierInstall;
@property (nonatomic, readonly) BOOL isExpired;
@property (nonatomic, readonly) BOOL isInternalInstall;
@property (nonatomic, readonly) BOOL isNonUIInstall;
@property (nonatomic, readonly) BOOL isVendorInstall;
@property (nonatomic, readonly) NSString *uniqueDeviceIdentifier;

+ (id)sharedInstance;

- (void)_calculateInstallType;
- (BOOL)_hasShownMismatchedSIM;
- (BOOL)_hasShownWaitingAlertThisSession;
- (BOOL)_isCarrierInstall;
- (BOOL)_isInternalInstall;
- (BOOL)_isNonUIInstall;
- (BOOL)_isVendorInstall;
- (void)_resetActivationState;
- (void)_setState:(unsigned int)arg1;
- (BOOL)_settingUpActivationState;
- (void)_setupActivationState;
- (unsigned int)_state;
- (void)dealloc;
- (id)description;
- (id)init;
- (BOOL)isActivated;
- (BOOL)isCarrierInstall;
- (BOOL)isExpired;
- (BOOL)isInternalInstall;
- (BOOL)isNonUIInstall;
- (BOOL)isVendorInstall;
- (int)lockdownState;
- (void)set_hasShownMismatchedSIM:(BOOL)arg1;
- (void)set_hasShownWaitingAlertThisSession:(BOOL)arg1;
- (void)set_isCarrierInstall:(BOOL)arg1;
- (void)set_isInternalInstall:(BOOL)arg1;
- (void)set_isNonUIInstall:(BOOL)arg1;
- (void)set_isVendorInstall:(BOOL)arg1;
- (void)set_settingUpActivationState:(BOOL)arg1;
- (id)uniqueDeviceIdentifier;

@end
