//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UIViewControllerTransitionCoordinatorContext-Protocol.h"

@class UIView;

@protocol UIViewControllerTransitionCoordinator <UIViewControllerTransitionCoordinatorContext>
- (void)notifyWhenInteractionChangesUsingBlock:(void (^)(id <UIViewControllerTransitionCoordinatorContext>))arg1;
- (void)notifyWhenInteractionEndsUsingBlock:(void (^)(id <UIViewControllerTransitionCoordinatorContext>))arg1;
- (_Bool)animateAlongsideTransitionInView:(UIView *)arg1 animation:(void (^)(id <UIViewControllerTransitionCoordinatorContext>))arg2 completion:(void (^)(id <UIViewControllerTransitionCoordinatorContext>))arg3;
- (_Bool)animateAlongsideTransition:(void (^)(id <UIViewControllerTransitionCoordinatorContext>))arg1 completion:(void (^)(id <UIViewControllerTransitionCoordinatorContext>))arg2;
@end
