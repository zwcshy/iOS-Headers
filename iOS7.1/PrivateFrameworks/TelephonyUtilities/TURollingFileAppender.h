//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TUAppender.h"

@class NSFileHandle, NSMutableString, NSObject<TUAppenderDelegate>, NSString, NSTimer;

@interface TURollingFileAppender : NSObject <TUAppender>
{
    struct _opaque_pthread_mutex_t _lock;
    NSString *_directory;
    NSString *_prefix;
    NSMutableString *_buffer;
    NSFileHandle *_fileHandle;
    NSTimer *_scheduledFlushTimer;
    struct dispatch_queue_s *_backgroundQueue;
    NSObject<TUAppenderDelegate> *_appenderDelegate;
}

+ (BOOL)sendDirectoryToCrashReporter:(id)arg1 error:(id *)arg2;
- (id)formattedDyldContextForBacktrace:(id)arg1;
- (void)_reloadFileHandles;
- (void)setAppenderDelegate:(id)arg1;
- (void)logWithIdentifier:(id)arg1 pid:(int)arg2 date:(id)arg3 level:(int)arg4 topic:(id)arg5 text:(id)arg6 backtrace:(id)arg7;
- (void)flush;
- (void)_scheduleFlush;
- (void)_flush;
- (void)_rollAndZipIfNecessary;
- (void)_rollAndZip;
- (id)_logFileHandle;
- (id)_logFilePath;
- (void)dealloc;
- (id)initWithDirectory:(id)arg1 prefix:(id)arg2;

@end

