/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSProxy.h"

@interface WebMainThreadInvoker : NSProxy
{
    id target;
    id exception;
}

- (id)initWithTarget:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)handleException:(id)arg1;

@end
