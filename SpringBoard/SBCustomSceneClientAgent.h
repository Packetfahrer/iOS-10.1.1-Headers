//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoardUIServices/FBSBasicSceneClientAgent.h>

@interface SBCustomSceneClientAgent : FBSBasicSceneClientAgent
{
}

- (void)scene:(id)arg1 handleEvent:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)didReceiveMessage:(id)arg1 fromCounterpartAgent:(id)arg2 withResponseSender:(CDUnknownBlockType)arg3;
- (void)scene:(id)arg1 willInvalidateWithEvent:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)scene:(id)arg1 didInitializeWithEvent:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;

@end
