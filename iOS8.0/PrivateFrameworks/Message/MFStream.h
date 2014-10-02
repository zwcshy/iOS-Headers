//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSStreamDelegate.h"

@class NSError, NSInputStream, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSOutputStream, NSString;

@interface MFStream : NSObject <NSStreamDelegate>
{
    NSInputStream *_rStream;
    NSOutputStream *_wStream;
    NSMutableDictionary *_properties;
    CDUnknownBlockType _callback;
    NSObject<OS_dispatch_queue> *_location;
    unsigned long _capacity;
    unsigned long _length;
    char *_buffer;
    NSError *_error;
    BOOL _streamCanRead;
    BOOL _streamCanWrite;
    BOOL _dispatchedBytesAvailable;
    unsigned int _bytesRead;
    unsigned int _bytesWritten;
    BOOL _enableThroughputMonitoring;
}

+ (id)_networkDispatchQueue;
+ (void)setNetworkThread:(id)arg1;
+ (id)networkThread;
@property(readonly, nonatomic) NSError *streamError; // @synthesize streamError=_error;
- (void)enableThroughputMonitoring:(BOOL)arg1;
- (void)stream:(id)arg1 handleEvent:(unsigned int)arg2;
- (void)_readBytesFromStream;
- (void)close;
- (int)write:(const char *)arg1 maxLength:(unsigned int)arg2;
- (int)read:(char *)arg1 maxLength:(unsigned int)arg2;
- (void)_closeAndReleaseStream:(id)arg1 logMessage:(id)arg2;
- (void)openToHostName:(id)arg1 port:(int)arg2;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (id)_copyPropertyForKey:(id)arg1;
@property(readonly, nonatomic) BOOL isOpen;
- (void)dealloc;
- (id)initCallBack:(CDUnknownBlockType)arg1 onDispatchQueue:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
