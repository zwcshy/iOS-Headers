/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AVItem, NSDictionary, NSString;

@interface SBUISound : NSObject
{
    long long _soundType;
    unsigned int _systemSoundID;
    unsigned long long _soundBehavior;
    NSString *_ringtoneName;
    AVItem *_avItem;
    NSDictionary *_vibrationPattern;
    _Bool _repeats;
    double _maxDuration;
    NSDictionary *_controllerAttributes;
    int _alertType;
    NSString *_accountIdentifier;
    NSString *_toneIdentifier;
    NSString *_vibrationIdentifier;
    NSString *_resolvedToneIdentifier;
    id _completionBlock;
}

@property(copy, nonatomic) NSString *vibrationIdentifier; // @synthesize vibrationIdentifier=_vibrationIdentifier;
@property(copy, nonatomic) NSString *toneIdentifier; // @synthesize toneIdentifier=_toneIdentifier;
@property(copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(nonatomic) int alertType; // @synthesize alertType=_alertType;
@property(retain, nonatomic) NSDictionary *controllerAttributes; // @synthesize controllerAttributes=_controllerAttributes;
@property(nonatomic) double maxDuration; // @synthesize maxDuration=_maxDuration;
@property(nonatomic, getter=isRepeating) _Bool repeats; // @synthesize repeats=_repeats;
@property(retain, nonatomic) NSDictionary *vibrationPattern; // @synthesize vibrationPattern=_vibrationPattern;
@property(retain, nonatomic) AVItem *avItem; // @synthesize avItem=_avItem;
@property(retain, nonatomic) NSString *ringtoneName; // @synthesize ringtoneName=_ringtoneName;
@property(nonatomic) unsigned long long soundBehavior; // @synthesize soundBehavior=_soundBehavior;
@property(nonatomic) unsigned int systemSoundID; // @synthesize systemSoundID=_systemSoundID;
@property(nonatomic) long long soundType; // @synthesize soundType=_soundType;
- (id)description;
- (void)_setResolvedToneIdentifier:(id)arg1;
- (id)_resolvedToneIdentifier;
- (void)_setCompletionBlock:(id)arg1;
- (id)_completionBlock;
- (void)stop;
- (_Bool)playInEvironments:(long long)arg1 completion:(id)arg2;
- (_Bool)isPlaying;
- (void)dealloc;
- (id)initWithToneAlert:(int)arg1 accountIdentifier:(id)arg2 toneIdentifier:(id)arg3 vibrationIdentifier:(id)arg4;
- (id)initWithAVItem:(id)arg1 vibrationPattern:(id)arg2 repeats:(_Bool)arg3 maxDuration:(double)arg4 controllerAttributes:(id)arg5;
- (id)initWithRingtone:(id)arg1 vibrationPattern:(id)arg2 repeats:(_Bool)arg3 controllerAttributes:(id)arg4;
- (id)initWithSystemSoundID:(unsigned int)arg1 behavior:(unsigned long long)arg2 vibrationPattern:(id)arg3;

@end

