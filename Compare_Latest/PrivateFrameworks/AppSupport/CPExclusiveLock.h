/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSLocking-Protocol.h"

@class NSString;

@interface CPExclusiveLock : NSObject <NSLocking>
{
    int _fd;
    NSString *_name;
}

- (id)init;
- (id)initWithName:(id)arg1;
- (void)dealloc;
- (void)lock;
- (void)unlock;
- (BOOL)tryLock;
- (void)setName:(id)arg1;
- (id)name;

@end
