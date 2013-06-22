/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray;

@interface CAWindowServer : NSObject
{
    struct CAWindowServerImpl *_impl;
}

+ (id)context;
+ (id)contextWithOptions:(id)arg1;
+ (id)server;
+ (id)serverIfRunning;
- (id)init;
- (id)_init;
- (void)addDisplay:(id)arg1;
- (void)removeDisplay:(id)arg1;
- (void)removeAllDisplays;
- (id)displayWithName:(id)arg1;
- (void)_detectDisplays;
- (void)dealloc;
@property(readonly) NSArray *displays;
@property(getter=isMirroringEnabled) BOOL mirroringEnabled;
@property unsigned int rendererFlags;
- (id)description;

@end
