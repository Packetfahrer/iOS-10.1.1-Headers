//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSSet;
@protocol NSCopying;

@interface SBComposedWallpaperSpecification : NSObject <NSCopying>
{
    NSArray *_layers;
}

+ (id)specificationWithLayers:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *layers; // @synthesize layers=_layers;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) id <NSCopying> propertyListRepresentation;
@property(readonly, copy, nonatomic) NSSet *allAssetURLs;
- (id)init;
- (id)initWithLayers:(id)arg1;
- (id)initWithPropertyList:(id)arg1;
- (id)initWithPropertyListData:(id)arg1;

@end
