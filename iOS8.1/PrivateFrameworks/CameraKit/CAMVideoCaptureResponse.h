//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CameraKit/CAMCaptureResponse.h>

@class NSString, UIImage;

@interface CAMVideoCaptureResponse : CAMCaptureResponse
{
    BOOL _unplayable;
    BOOL _didCompleteUnexpectedly;
    short _assetSubtype;
    NSString *_videoCapturePath;
    int _recordingStoppedReason;
    UIImage *_videoPreviewImage;
    double _duration;
}

+ (double)minimumVideoCaptureDuration;
@property(nonatomic) BOOL didCompleteUnexpectedly; // @synthesize didCompleteUnexpectedly=_didCompleteUnexpectedly;
@property(nonatomic, getter=isUnplayable) BOOL unplayable; // @synthesize unplayable=_unplayable;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) short assetSubtype; // @synthesize assetSubtype=_assetSubtype;
@property(retain, nonatomic) UIImage *videoPreviewImage; // @synthesize videoPreviewImage=_videoPreviewImage;
@property(nonatomic) int recordingStoppedReason; // @synthesize recordingStoppedReason=_recordingStoppedReason;
@property(copy, nonatomic) NSString *videoCapturePath; // @synthesize videoCapturePath=_videoCapturePath;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isSuccessful) BOOL successful;
- (id)init;

@end

