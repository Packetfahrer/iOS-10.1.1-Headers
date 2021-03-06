//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBDashBoardPresentationViewController.h"

#import "SBDashBoardNotificationDestination-Protocol.h"
#import "SBDashBoardNotificationListViewControllerDelegate-Protocol.h"
#import "SBDashBoardStatusTextViewControllerDelegate-Protocol.h"
#import "SBLockScreenNowPlayingControllerDelegate-Protocol.h"
#import "_UISettingsKeyObserver-Protocol.h"

@class NSString, SBDashBoardNotificationListViewController, SBDashBoardNowPlayingController, SBDashBoardStatusTextViewController, SBDashBoardUserPictureViewController, SBLockScreenLogoutButtonViewController, SBLockScreenSettings, SBSlideUpAppGrabberView;
@protocol SBDashBoardNotificationDispatcher;

@interface SBDashBoardMainPageContentViewController : SBDashBoardPresentationViewController <SBDashBoardStatusTextViewControllerDelegate, SBLockScreenNowPlayingControllerDelegate, _UISettingsKeyObserver, SBDashBoardNotificationListViewControllerDelegate, SBDashBoardNotificationDestination>
{
    SBDashBoardNowPlayingController *_nowPlayingController;
    long long _nowPlayingState;
    SBDashBoardUserPictureViewController *_userPictureViewController;
    SBDashBoardNotificationListViewController *_notificationViewController;
    SBDashBoardStatusTextViewController *_statusTextViewController;
    SBLockScreenLogoutButtonViewController *_logoutButtonViewController;
    SBLockScreenSettings *_testSettings;
    _Bool _authenticatedSinceFingerOn;
    NSString *_cachedMesaFailureText;
    _Bool _temporaryMesaFailureTextActive;
    _Bool _useFakeBlur;
}

+ (Class)viewClass;
@property(nonatomic) _Bool useFakeBlur; // @synthesize useFakeBlur=_useFakeBlur;
@property(readonly, nonatomic) SBDashBoardNotificationListViewController *notificationListViewController; // @synthesize notificationListViewController=_notificationViewController;
- (void).cxx_destruct;
- (void)_updateCallToActionTextAnimated:(_Bool)arg1;
@property(readonly, nonatomic) SBSlideUpAppGrabberView *slideUpAppGrabberView;
- (void)updateSlideUpAppGrabberViewForApplicationWithBundleIdentifier:(id)arg1;
- (void)_updateMediaControlsVisibility;
- (void)_addOrRemoveViewsAsAppropriate;
- (void)_updateSlideUpGrabberViewVisibilityIfNecesary;
- (void)_addOrRemoveNotificationsListIfNecessaryAnimated:(_Bool)arg1;
- (void)_addOrRemoveLogoutButtonViewController;
- (void)_addOrRemoveUserPictureViewController;
- (void)_addStatusTextViewControllerIfNecessary;
- (void)_addSlideUpAppGrabberView;
- (void)_addCallToAction;
- (id)_dashBoardMainPageView;
- (void)notificationListViewController:(id)arg1 hasContent:(_Bool)arg2;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)nowPlayingController:(id)arg1 didChangeToState:(long long)arg2;
- (_Bool)isNotificationContentExtensionVisible:(id)arg1;
- (void)updateNotificationSectionSettings:(id)arg1;
- (void)withdrawNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (void)updateNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (void)postNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
@property(nonatomic) __weak id <SBDashBoardNotificationDispatcher> dispatcher; // @dynamic dispatcher;
- (void)dashBoardStatusTextViewControllerContentDidChange:(id)arg1;
- (_Bool)handleEvent:(id)arg1;
- (void)updateForPresentation:(id)arg1;
- (void)aggregateBehavior:(id)arg1;
- (void)aggregateAppearance:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)setRasterizesNotifications:(_Bool)arg1;
- (void)updateCallToActionForMesaMatchFailure;
@property(readonly, nonatomic, getter=isShowingMediaControls) _Bool showingMediaControls;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy, nonatomic) NSString *dashBoardIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long participantState;
@property(readonly) Class superclass;

@end

