//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "TPDialerKeypadProtocol.h"

@class NSString;

@interface TPPhonePad : UIControl <TPDialerKeypadProtocol>
{
    int _downKey;
    int _highlightKey;
    id <TPDialerKeypadDelegate> _delegate;
    BOOL _playsSounds;
    BOOL _supportsHardPause;
    float _topHeight;
    float _midHeight;
    float _bottomHeight;
    float _leftWidth;
    float _midWidth;
    float _rightWidth;
    struct __CFSet *_inflightSounds;
    struct __CFDictionary *_keyToButtonMap;
    unsigned int _incompleteSounds;
    unsigned int _delegateSoundCallbacks:1;
    unsigned int _soundsActivated:1;
}

+ (void)_delayedDeactivate;
+ (BOOL)launchFieldTestIfNeeded:(id)arg1;
+ (BOOL)shouldStringAutoDial:(id)arg1 givenLastChar:(BOOL)arg2;
@property BOOL supportsHardPause; // @synthesize supportsHardPause=_supportsHardPause;
- (void)_stopAllSoundsForcingCallbacks:(BOOL)arg1;
- (void)_stopSoundForKey:(unsigned int)arg1;
- (void)_playSoundForKey:(unsigned int)arg1;
- (void)_notifySoundCompletionIfNecessary:(unsigned long)arg1;
- (struct CGRect)_rectForKey:(unsigned int)arg1;
- (int)_keyForPoint:(struct CGPoint)arg1;
- (void)_handleKeyPressAndHoldForKey:(int)arg1;
- (void)_handleKeyPressAndHoldForDownKey:(id)arg1;
- (void)_handleKeyPressAndHoldForHighlightedKey:(id)arg1;
- (void)_handleKey:(id)arg1 forUIEvent:(id)arg2;
- (BOOL)cancelTouchTracking;
- (void)setHighlighted:(BOOL)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)pointMostlyInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (id)_imageByCroppingImage:(id)arg1 toRect:(struct CGRect)arg2;
- (struct CGRect)_updateRect:(struct CGRect)arg1 withScale:(float)arg2;
- (float)_yFudge;
- (id)_highlightedImage;
- (id)_keypadImage;
- (id)_pressedImage;
- (struct CGPoint)_keypadOrigin;
- (void)setNeedsDisplayForKey:(int)arg1;
- (id)_buttonForKeyAtIndex:(unsigned int)arg1;
- (void)setButton:(id)arg1 forKeyAtIndex:(unsigned int)arg2;
- (void)setPlaysSounds:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)movedToWindow:(id)arg1;
- (void)movedFromWindow:(id)arg1;
- (void)_appResumed;
- (void)_appSuspended;
- (void)removeFromSuperview;
- (void)_activateSounds:(BOOL)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (int)indexForHighlightedKey;
- (void)highlightKeyAtIndex:(int)arg1;
- (void)performTapActionEndForHighlightedKey;
- (void)performTapActionDownForHighlightedKey;
- (id)scriptingInfoWithChildren;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
