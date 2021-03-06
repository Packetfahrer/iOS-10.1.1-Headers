//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BSDescriptionProviding-Protocol.h"

@class NSHashTable, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSPointerArray, NSString, SBAppStatusBarSettings;

@interface SBAppStatusBarManager : NSObject <BSDescriptionProviding>
{
    NSHashTable *_disableAlphaChangeAssertions;
    NSHashTable *_disableUserInteractionChangeAssertions;
    NSMutableOrderedSet *_windowLevelOverrideReasons;
    NSMutableDictionary *_windowLevelOverrideMap;
    NSPointerArray *_statusBarSettingsAssertionsByLevel[11];
    SBAppStatusBarSettings *_currentStatusBarSettings;
    NSMutableDictionary *_edgeInsetsDictionary;
    NSMutableSet *_activeLayoutLayers;
    double _defaultWindowLevel;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (void)_applyEdgeInsetsToStatusBar;
- (void)_updateWindowLevel;
- (void)_setStatusBarValueForPropertyWithAssertions:(id)arg1 setter:(CDUnknownBlockType)arg2;
- (id)_descriptionForPropertyWithAssertions:(id)arg1;
- (void)_evaluateSettings;
- (void)_cleanUpAllStatusBarSettingsAssertions;
- (void)_didTransitionFromSpringBoard;
- (void)_willTransitionToSpringBoard;
- (void)_modifiedStatusBarSettingsAssertion:(id)arg1;
- (void)_removeStatusBarSettingsAssertion:(id)arg1;
- (void)_addStatusBarSettingsAssertion:(id)arg1;
- (void)_removeDisableAppStatusBarUserInteractionChangesAssertion:(id)arg1;
- (void)_addDisableAppStatusBarUserInteractionChangesAssertion:(id)arg1;
- (void)_removeDisableAppStatusBarAlphaChangesAssertion:(id)arg1;
- (void)_addDisableAppStatusBarAlphaChangesAssertion:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) struct UIEdgeInsets statusBarEdgeInsets;
- (void)setStatusBarEdgeInsets:(struct UIEdgeInsets)arg1 forLayoutLayer:(unsigned long long)arg2;
- (void)removeActiveLayoutLayer:(unsigned long long)arg1;
- (void)addActiveLayoutLayer:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long topmostActiveLayoutLayer;
- (void)removeWindowLevelOverrideReason:(id)arg1;
- (void)setWindowLevel:(double)arg1 forOverrideReason:(id)arg2;
- (void)setDefaultWindowLevel:(double)arg1;
- (_Bool)isStatusBarUserInteractionEnabled;
- (void)setStatusBarUserInteractionEnabled:(_Bool)arg1;
- (_Bool)isStatusBarHidden;
- (void)setStatusBarAlpha:(double)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

