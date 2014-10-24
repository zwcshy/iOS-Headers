//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_xpc_object>;

@interface IMTranscodeController : NSObject
{
    NSObject<OS_xpc_object> *_connection;
}

+ (id)sharedInstance;
- (void)transcodeFileTransferContents:(id)arg1 utiType:(id)arg2 allowUnfilteredUTIs:(id)arg3 target:(int)arg4 highQualityMaxByteSize:(unsigned long)arg5 lowQualityMaxByteSize:(unsigned long)arg6 maxDimension:(unsigned long)arg7 transcoderUserInfo:(id)arg8 representations:(int)arg9 completionBlock:(CDUnknownBlockType)arg10;
- (void)_transcodeFileTransferContents:(id)arg1 utiType:(id)arg2 allowUnfilteredUTIs:(id)arg3 target:(int)arg4 highQualityMaxByteSize:(unsigned long)arg5 lowQualityMaxByteSize:(unsigned long)arg6 maxDimension:(unsigned long)arg7 transcoderUserInfo:(id)arg8 representations:(int)arg9 retries:(int)arg10 completionBlock:(CDUnknownBlockType)arg11;
- (BOOL)_connect;
- (void)_disconnected;
- (void)dealloc;
- (id)init;

@end
