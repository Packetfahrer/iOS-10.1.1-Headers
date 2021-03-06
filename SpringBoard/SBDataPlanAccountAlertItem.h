//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBDataPlanAlertItem.h"

#import "SBDataPlanAlertActions-Protocol.h"

@class NSURL;

@interface SBDataPlanAccountAlertItem : SBDataPlanAlertItem <SBDataPlanAlertActions>
{
    NSURL *_accountURL;
}

+ (id)nowButtonTitle;
+ (id)laterButtonTitle;
@property(copy, nonatomic) NSURL *accountURL; // @synthesize accountURL=_accountURL;
- (void).cxx_destruct;
- (void)takeAction;
- (void)notNow;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (id)initWithAccountURL:(id)arg1;

@end

