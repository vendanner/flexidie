/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "SBDisplay.h"

//#import "SBSystemLocalNotificationAlertDelegate-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSMutableArray, NSString, NSTimer, PCPersistentTimer, SBAppContextHostManager, SBCFBundle, SBProcess, SBProcessAssertion, UILocalNotification, UIRemoteApplication;

@interface SBApplication : SBDisplay //<SBSystemLocalNotificationAlertDelegate>
{
    NSString *_bundleIdentifier;
    NSString *_displayIdentifier;
    NSString *_path;
    NSString *_bundleVersion;
    NSString *_longDisplayName;
    NSString *_defaultImageName;
    NSString *_author;
    NSArray *_folderNames;
    NSString *_fallbackFolderName;
    NSDictionary *_searchDomainLaunchInfo;
    SBCFBundle *_cachedBundle;
    SBProcess *_process;
    id _processObserver;
    SBProcessAssertion *_resumeProcessAssertion;
    SBProcessAssertion *_suspendingProcessAssertion;
    double _modificationDate;
    SBAppContextHostManager *_contextHostManager;
    NSString *_displayName;
    NSMutableArray *_tags;
    UIRemoteApplication *_remoteApplication;
    NSDictionary *_seatbeltEnvVars;
    NSString *_signerIdentity;
    unsigned int _activationEventSequenceNumber;
    NSTimer *_watchdogTimer;
    double _userLaunchEventTime;
    unsigned int _monitoringLocaleAndTimeChanges:1;
    unsigned int _watchdogType:4;
    unsigned int _doingBackgroundNetworking:16;
    unsigned int _failedLaunchCount:8;
    unsigned int _provisioningProfileValidated:1;
    unsigned int _enabled:1;
    unsigned int _isSystemApplication:1;
    unsigned int _isSystemProvisioningApplication:1;
    unsigned int _hasMiniAlerts:1;
    unsigned int _lastExitWasAbnormal:1;
    unsigned int _suspendedEventsOnly:1;
    unsigned int _lastSuspendWasSEOUnderLock:1;
    unsigned int _usingLocation:1;
    unsigned int _disallowsLocationBadge:1;
    unsigned int _deactivatingForForcedExit:1;
    unsigned int _isUnsupportediBooks:1;
    unsigned int _isRevealable:1;
    unsigned int _dataFlagsIsSet:1;
    unsigned int _isClassic:1;
    unsigned int _isGameCenterEnabled:1;
    unsigned int _wasGameCenterEverEnabled:1;
    unsigned int _wantsAggressiveJetsamDuringActivation:1;
    unsigned int _backgroundContinuationEnabled:1;
    unsigned int _backgroundContinuationEnabledValid:1;
    unsigned int _supportsAudioBackgroundMode:1;
    unsigned int _supportsLocationBackgroundMode:1;
    unsigned int _supportsVOIPBackgroundMode:1;
    unsigned int _supportsEABackgroundMode:1;
    unsigned int _supportsContinuousBackgroundMode:1;
    unsigned int _supportsNewsstandContentBackgroundMode:1;
    unsigned int _wantsUnboundedTaskCompletionAssertions:1;
    unsigned int _prefersSavedSnapshots:1;
    unsigned int _hasBeenFrontmost:1;
    unsigned int _requiresHiDPI:1;
    unsigned int _hasWatchdogAssertions:1;
    unsigned int _supportsPortraitOrientation:1;
    unsigned int _supportsPortraitUpsideDownOrientation:1;
    unsigned int _supportsLandscapeLeftOrientation:1;
    unsigned int _supportsLandscapeRightOrientation:1;
    unsigned int _terminationAssertions:8;
    unsigned int _terminationAssertionsForCacheCleaning:8;
    unsigned int _defaultStatusBarStyle:8;
    BOOL _defaultStatusBarHidden;
    unsigned int _defaultInterfaceOrientation:8;
    unsigned int _defaultInterfaceOrientationOverride:8;
    unsigned int _interfaceOrientationOverrideSet:1;
    unsigned int _sbUsesNetwork:8;
    unsigned int _dataFlags:8;
    unsigned int _hasShownDataPlanAlertSinceLock:1;
    unsigned int _launchAlerts:8;
    unsigned int _suspendType:8;
    unsigned int _uninstalled:1;
    unsigned int _isLaunchableDuringSetup:1;
    int _preferredBackgroundJetsamPriority;
    int _ratingRank;
    Class _iconClass;
    NSArray *_customMachServices;
    NSArray *_externalAccessoryProtocols;
    NSDictionary *_customSpotlightIconPaths;
    NSArray *_cachedLocalNotifications;
    NSTimer *_terminateIfRunningTimer;
    unsigned int _cachedApplicationState;
    struct _opaque_pthread_mutex_t _appStateMutex;
    NSDate *_nextApplicationWakeDate;
    PCPersistentTimer *_applicationWakeTimer;
    PCPersistentTimer *_localNotificationTimer;
    UILocalNotification *_pendingLocalNotification;
    SBProcessAssertion *_transientProcessAssertion;
    NSTimer *_transientSuspendTimer;
    int _transientAssertionType;
    SBProcessAssertion *_periodicWakeProcessAssertion;
    NSTimer *_periodicWakeSuspendTimer;
    SBProcessAssertion *_continuousBackgroundProcessAssertion;
    SBProcessAssertion *_simpleRemoteActionProcessAssertion;
}

+ (void)initialize;
+ (BOOL)multitaskingIsSupported;
+ (id)systemSnapshotsDirectory;
+ (void *)cachedSnapshotSurfaceForPath:(id)arg1;
+ (void)setCachedSnapshotSurface:(void *)arg1 forPath:(id)arg2;
+ (void)removeCachedSnapshotSurface:(void *)arg1 forPath:(id)arg2;
+ (void)removeCachedSnapshotsMatchingPath:(id)arg1;
+ (void)flushLaunchAlertsOfType:(int)arg1;
- (void)_configureDisplayNameForInfoDictionary:(id)arg1 atBundlePath:(id)arg2;
- (id)initWithBundleIdentifier:(id)arg1 webClip:(id)arg2 path:(id)arg3 bundle:(id)arg4 infoDictionary:(id)arg5 isSystemApplication:(BOOL)arg6 signerIdentity:(id)arg7 provisioningProfileValidated:(BOOL)arg8;
- (void)_watchdogFired;
- (void)_startWatchdogTimerType:(int)arg1;
- (void)_cancelWatchdogTimer;
- (void)_watchdogFiredFired;
- (void)startWatchdogTimerForPhoneSlideIfNecessary;
- (void)_scheduleWatchdogAssertionWithTimeout:(double *)arg1 token:(unsigned int)arg2;
- (unsigned int)addWatchdogAssertionWithTimeout:(double *)arg1;
- (void)renewWatchdogAssertionWithToken:(unsigned int)arg1 timeout:(double *)arg2;
- (void)_clearWatchdogAssertions;
- (void)removeWatchdogAssertionWithToken:(unsigned int)arg1;
- (void)_watchdogAssertExpired:(id)arg1;
- (BOOL)shouldWatchdog;
- (double)autoDimTime;
- (double)autoLockTime;
- (void)dealloc;
- (unsigned int)activationEventSequenceNumber;
- (BOOL)isSameExecutableAsApplication:(id)arg1;
- (id)bundleIdentifier;
- (id)path;
- (id)containerPath;
- (double)modificationDate;
- (id)bundle;
- (void)purgeBundleCaches;
- (id)bundleVersion;
- (BOOL)enabled;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)suspendedEventsOnly;
- (void)setTags:(id)arg1;
- (id)tags;
- (void)_addInternalDebugVariablesToEnvironment;
- (BOOL)hasMiniAlerts;
- (void)setHasMiniAlerts:(BOOL)arg1;
- (int)dataUsage;
- (BOOL)hasShownDataPlanAlertSinceLock;
- (void)setHasShownDataPlanAlertSinceLock:(BOOL)arg1;
- (void)_setDataUsage:(int)arg1;
- (void)setUsesBackgroundNetwork:(BOOL)arg1;
- (unsigned int)_doingBackgroundNetworking;
- (void)_setDoingBackgroundNetworking:(unsigned int)arg1;
- (void)setUsesEdgeNetwork:(BOOL)arg1;
- (void)setUsesWiFiNetwork:(BOOL)arg1;
- (void)_resetDataUsage;
- (BOOL)isSystemApplication;
- (BOOL)isInternalApplication;
- (BOOL)isSystemProvisioningApplication;
- (BOOL)isWebApplication;
- (id)webClip;
- (BOOL)isNewsstandApplication;
- (BOOL)isNowRecordingApplication;
- (BOOL)isUserRatable;
- (BOOL)hasGameCenterData;
- (BOOL)isUnsupportediBooks;
- (void)setIsUnsupportediBooks:(BOOL)arg1;
- (BOOL)isLaunchableDuringSetup;
- (BOOL)wantsAggressiveJetsamDuringActivation;
- (id)customSpotlightIconPathsForKey:(id)arg1;
- (id)appSnapshotPath;
- (void)flushSnapshots;
- (BOOL)shouldLaunchPNGless;
- (id)_additionalDisplayQualification;
- (id)_pathIfFileExistsAtPath:(id)arg1;
- (BOOL)_useLosslessSnapshotsForScale:(float)arg1;
- (id)_dynamicSnapshotSuffixForScale:(float)arg1;
- (BOOL)isSnapshotPresentForLaunchingInterfaceOrientation:(int)arg1;
- (id)defaultImage:(char *)arg1 preferredScale:(float)arg2 originalOrientation:(int *)arg3 currentOrientation:(int *)arg4;
- (id)defaultImage:(char *)arg1 preferredScale:(float)arg2 originalOrientation:(int *)arg3 currentOrientation:(int *)arg4 canUseIOSurface:(BOOL)arg5;
- (BOOL)canFindDefaultImage:(char *)arg1 preferredScale:(float)arg2 originalOrientation:(int *)arg3 currentOrientation:(int *)arg4 launchingInterfaceOrientation:(int)arg5 canUseIOSurface:(BOOL)arg6 imagePointer:(id *)arg7;
- (id)_defaultImagePathInBundle:(id)arg1 baseResourceName:(id)arg2 ofType:(id)arg3 scale:(float *)arg4;
- (Class)iconClass;
- (BOOL)isRevealable;
- (id)displayName;
- (void)setDisplayName:(id)arg1;
- (id)longDisplayName;
- (id)author;
- (int)ratingRank;
- (id)folderNames;
- (id)fallbackFolderName;
- (void)markUserLaunchInitiationTime;
- (void)launch;
- (void)activate;
- (void)deactivate;
- (void)deactivated;
- (void)kill;
- (BOOL)_shouldAutoLaunchForVoIP;
- (void)_setAutoLaunchForVoIP:(BOOL)arg1;
- (BOOL)_shouldAutoRelaunchForEA;
- (BOOL)_shouldAutoLaunchOnBootOrInstall:(BOOL)arg1;
- (void)autoLaunchIfNecessaryOnBootOrInstall:(BOOL)arg1;
- (void)_cancelAutoRelaunch;
- (void)_relaunchAfterExitIfNecessary;
- (int)statusBarStyle;
- (int)defaultStatusBarStyle;
- (int)statusBarStyleOverridesToCancel;
- (BOOL)defaultStatusBarHidden;
- (void)overrideDefaultInterfaceOrientation:(int)arg1;
- (void)removeDefaultInterfaceOrientationOverride;
- (int)launchingInterfaceOrientationForCurrentOrientation:(int)arg1;
- (BOOL)isClassic;
- (void)setIsClassic:(BOOL)arg1;
- (BOOL)classicAppZoomedIn;
- (BOOL)classicAppRequiresHiDPI;
- (BOOL)classicAppZoomedInOrRequiresHiDPI;
- (BOOL)classicDefaultStatusBarHidden;
- (BOOL)backgroundContinuationSupported;
- (BOOL)backgroundContinuationEnabled;
- (void)setBackgroundContinuationEnabled:(BOOL)arg1;
- (BOOL)backgroundContinuationAvailable;
- (void)exitedCommon;
- (void)exitedAbnormally;
- (void)exitedNormally;
- (int)preferredBackgroundJetsamPriority;
- (int)effectiveBackgroundJetsamPriority;
- (id)applicationNextWakeDate;
- (void)setApplicationNextWakeDate:(id)arg1;
- (void)_updateApplicationWakeTimers;
- (void)wakeTimerFired;
- (void)spdResumeForTrafficRequested;
- (void)sendOpenURL:(id)arg1;
- (id)loggingIdentifier;
- (void)_setupLocalNotificationLogging;
- (id)_scheduledLocalNotifications;
- (void)_setScheduledLocalNotifications:(id)arg1;
- (id)_copyUnexpiredScheduledLocalNotifications;
- (void)_setPendingLocalNotificationFromBulletin:(id)arg1;
- (id)scheduledLocalNotifications;
- (void)scheduleLocalNotifications:(id)arg1 replaceExistingNotifications:(BOOL)arg2;
- (void)cancelLocalNotification:(id)arg1;
- (BOOL)usesLocalNotifications;
- (void)noteBadgeSetLocally;
- (BOOL)badgeHasBeenSetLocally;
- (void)_dismissAllSystemLocalNotificationAlerts;
- (void)_setLastLocalNotificationFireDate:(id)arg1;
- (id)_lastLocalNotificationFireDate;
- (void)_setMonitoringForLocaleAndTimeChanges:(BOOL)arg1;
- (void)_updateLocalNotificationTimers;
- (void)localNotificationTimerFired;
- (void)_fireNotification:(id)arg1;
- (void)systemLocalNotificationAlertShouldLaunch:(id)arg1 forApplication:(id)arg2;
- (void)systemLocalNotificationAlertShouldSnooze:(id)arg1 forApplication:(id)arg2;
- (id)getPendingLocalNotification;
- (void)_purgeCachedLocalNotifications;
- (BOOL)isContextHostingEnabled;
- (id)contextHostViewForRequester:(id)arg1;
- (id)contextHostViewForRequester:(id)arg1 enableAndOrderFront:(BOOL)arg2;
- (void)enableContextHostingForRequester:(id)arg1 orderFront:(BOOL)arg2;
- (void)disableContextHostingForRequester:(id)arg1;
- (id)contextHostManager;
- (void)_clearContextHostManager;
- (void)_setContextHostManager:(id)arg1;
- (void)hideContextHostViewForRequester:(id)arg1;
- (void)_unregisterRemoteViewsAndSheets;
- (id)launchdJobLabel;
- (id)seatbeltEnvironmentVariables;
- (void)setSeatbeltEnvironmentVariables:(id)arg1;
- (id)sandboxPath;
- (id)preferenceDomain;
- (unsigned int)applicationState;
- (void)_updateCachedApplicationState;
- (unsigned int)cachedApplicationState;
- (BOOL)hasBeenFrontmost;
- (void)setHasBeenFrontmost:(BOOL)arg1;
- (void)_sendApplicationStateChangedNotification:(unsigned int)arg1;
- (void)setSuspendType:(int)arg1;
- (int)suspensionType;
- (BOOL)supportsAudioBackgroundMode;
- (BOOL)supportsLocationBackgroundMode;
- (BOOL)supportsVOIPBackgroundMode;
- (BOOL)supportsEABackgroundMode;
- (BOOL)supportsContinuousBackgroundMode;
- (BOOL)supportsNewsstandContentBackgroundMode;
- (BOOL)wantsUnboundedTaskCompletionAssertions;
- (id)signerIdentity;
- (int)applicationSignatureState;
- (BOOL)_signatureNeedsExplicitUserTrust;
//- (BOOL)_doesProfileMatchSignerIdentity:(struct _MISProfile *)arg1;
- (id)_expirationDateForProvisioningProfile;
- (void)markApplicationIdentityAsTrusted;
- (BOOL)provisioningProfileValidated;
- (id)externalAccessoryProtocols;
- (void)launchSucceeded:(BOOL)arg1;
- (void)prepareForUninstallation;
- (id)remoteApplication;
- (void)_purgeRemoteApplication;
- (BOOL)showLaunchAlertForType:(int)arg1;
- (void)resetLaunchAlertForType:(int)arg1;
- (BOOL)isAnyTerminationAssertionHeld;
- (BOOL)isCacheCleaningTerminationAssertionHeld;
- (void)incrementTerminationAssertionCountForReason:(unsigned char)arg1;
- (void)decrementTerminationAssertionCountForReason:(unsigned char)arg1;
- (void)notifyResignActiveForReason:(int)arg1;
- (void)notifyResumeActiveForReason:(int)arg1;
- (void)notifyResignActive;
- (void)notifyResumeActive;
- (void)notifyOfTaskResume;
- (void)notifyOfImminentProcessAssertionExpiration;
- (void)process:(id)arg1 didAddAssertion:(id)arg2;
- (void)resumeToQuit;
- (void)resumeForContentAvailable;
- (id)_transientIdentifier;
- (double)_resumeDurationForTransientType:(int)arg1;
- (void)_transientResumeForType:(int)arg1;
- (void)_transientSuspendForTimerFired:(id)arg1;
- (void)setNowPlayingWithAudio:(BOOL)arg1;
@property(getter=isUsingLocation) BOOL usingLocation;
- (void)takeAssertionWithTimeoutForSimpleRemoteAction;
- (void)sendSimpleRemoteAction:(int)arg1;
- (void)_setProcess:(id)arg1;
@property(retain, nonatomic) SBProcess *process; // @synthesize process=_process;
- (void)_cancelProcessAssertionForSimpleRemoteAction;
- (void)_dropTransientProcessAssertion;
- (id)_copyApplicationMetadata;
- (id)_localizedGenreNameForID:(int)arg1;
- (id)_localizedGenreFromDictionary:(id)arg1;
- (void)_takeResumeProcessAssertion;
- (void)_takeSuspendingProcessAssertion;
- (void)_dropResumeProcessAssertion;
- (void)_dropSuspendingProcessAssertion;
- (void)_resumeForPeriodicWakeWithReason:(id)arg1;
- (void)_dropPeriodicWakeProcessAssertion;
- (void)_suspendForPeriodicWakeTimerFired:(id)arg1;
- (id)_currentDefaultPNGName;
- (id)defaultImagePathForCurrentOrientationWithName:(id)arg1;
@property(copy) NSString *displayIdentifier; // @synthesize displayIdentifier=_displayIdentifier;

@end

