/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "CoreDAVTaskGroup.h"

@class CalDAVBulkUploadTaskGroup;

@interface CalDAVMergeUploadTaskGroup : CoreDAVTaskGroup
{
    id <CalDAVCalendar> _calendar;
    id <CalDAVPrincipal> _principal;
    CalDAVBulkUploadTaskGroup *_uploadTaskGroup;
}

- (id)initWithCalendar:(id)arg1 principal:(id)arg2 accountInfoProvider:(id)arg3 taskManager:(id)arg4;
- (void)dealloc;
- (id)dataContentType;
- (void)startTaskGroup;
- (void)cancelTaskGroup;

@end

