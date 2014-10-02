//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ChatKit/CKChatItem.h>

@class IMHandle, NSDate;

@interface CKBalloonChatItem : CKChatItem
{
}

- (void)configureBalloonView:(id)arg1;
@property(readonly, retain, nonatomic) IMHandle *sender;
@property(readonly, retain, nonatomic) NSDate *time;
@property(readonly, nonatomic) BOOL failed;
@property(readonly, nonatomic, getter=isFromMe) BOOL fromMe;
@property(readonly, nonatomic) Class balloonViewClass;
@property(readonly, nonatomic) unsigned int balloonCorners;
@property(readonly, nonatomic) BOOL balloonOrientation;
- (id)loadTranscriptDrawerText;
- (struct CGSize)loadSizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(out struct UIEdgeInsets *)arg2;
- (BOOL)isEditable;
- (BOOL)wantsDrawerLayout;
- (BOOL)displayDuringSend;
- (id)contactImage;
- (id)cellIdentifier;
- (Class)cellClass;
- (BOOL)transcriptOrientation;
- (struct UIEdgeInsets)contentInsets;
- (struct UIEdgeInsets)transcriptTextAlignmentInsets;
- (id)description;

@end
