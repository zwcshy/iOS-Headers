//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CoreDAVTaskDelegate.h"

@class CoreDAVPrincipalSearchPropertySetTask, NSError, NSSet;

@protocol CoreDAVPrincipalSearchPropertySetTaskDelegate <CoreDAVTaskDelegate>

@optional
- (void)searchPropertySetTask:(CoreDAVPrincipalSearchPropertySetTask *)arg1 completetWithPropertySearchSet:(NSSet *)arg2 error:(NSError *)arg3;
@end
