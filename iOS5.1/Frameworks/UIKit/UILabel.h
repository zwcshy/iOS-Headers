/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIView.h>

#import "NSCoding-Protocol.h"

@class NSString, UIColor, UIFont;

@interface UILabel : UIView <NSCoding>
{
    struct CGSize _size;
    NSString *_text;
    UIColor *_color;
    UIColor *_highlightedColor;
    UIColor *_shadowColor;
    UIFont *_font;
    struct CGSize _shadowOffset;
    float _minFontSize;
    float _actualFontSize;
    int _numberOfLines;
    float _lastLineBaseline;
    int _lineSpacing;
    float _shadowBlur;
    struct {
        unsigned int lineBreakMode:3;
        unsigned int highlighted:1;
        unsigned int autosizeTextToFit:1;
        unsigned int autotrackTextToFit:1;
        unsigned int baselineAdjustment:2;
        unsigned int alignment:2;
        unsigned int enabled:1;
        unsigned int wordRoundingEnabled:1;
        unsigned int explicitAlignment:1;
        unsigned int marqueeEnabled:1;
        unsigned int marqueeRunable:1;
        unsigned int marqueeRequired:1;
        unsigned int drawsLetterpress:1;
        unsigned int drawsUnderline:1;
    } _textLabelFlags;
}

+ (id)defaultFont;
- (BOOL)drawsUnderline;
- (void)setDrawsUnderline:(BOOL)arg1;
- (id)letterpressStyle;
- (void)setLetterpressStyle:(id)arg1;
- (BOOL)drawsLetterpress;
- (void)setDrawsLetterpress:(BOOL)arg1;
- (void)setMarqueeRunning:(BOOL)arg1;
- (BOOL)marqueeRunning;
- (void)_stopMarqueeWithRedisplay:(BOOL)arg1;
- (void)_startMarqueeIfNecessary;
- (void)_startMarquee;
- (void)_coordinateBeginTimeForMarqueeAnimations:(double)arg1;
- (float)_maximumMarqueeTextWidth;
- (id)_siblingMarqueeLabels;
- (void)setMarqueeEnabled:(BOOL)arg1;
- (BOOL)_allowAscentRounding;
- (void)_setWordRoundingEnabled:(BOOL)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)_drawTextInRect:(struct CGRect)arg1 baselineCalculationOnly:(BOOL)arg2;
- (id)_attributes;
- (void)drawTextInRect:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) float _lastLineBaseline;
@property(nonatomic) int baselineAdjustment;
@property(nonatomic) BOOL autotrackTextToFit;
@property(nonatomic) int lineSpacing;
@property(nonatomic) int numberOfLines;
@property(nonatomic) int lineBreakMode;
@property(nonatomic, getter=isHighlighted) BOOL highlighted;
- (BOOL)_usesCGToDrawShadow;
- (float)shadowBlur;
- (void)setShadowBlur:(float)arg1;
@property(nonatomic) struct CGSize shadowOffset;
- (void)_setShadowUIOffset:(struct UIOffset)arg1;
@property(retain, nonatomic) UIColor *shadowColor;
@property(retain, nonatomic) UIFont *font;
- (id)currentTextColor;
- (id)_disabledFontColor;
@property(retain, nonatomic) UIColor *highlightedTextColor;
@property(nonatomic) int textAlignment;
- (float)actualFontSize;
- (void)setActualFontSize:(float)arg1;
@property(nonatomic) float minimumFontSize;
@property(nonatomic) BOOL adjustsFontSizeToFitWidth;
@property(retain, nonatomic) UIColor *textColor;
@property(nonatomic, getter=isEnabled) BOOL enabled;
@property(nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled; // @dynamic userInteractionEnabled;
@property(copy, nonatomic) NSString *text;
- (void)_invalidateTextSize;
- (struct CGRect)_textRectForBounds:(struct CGRect)arg1 limitedToNumberOfLines:(int)arg2 includingShadow:(BOOL)arg3;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1 limitedToNumberOfLines:(int)arg2;
- (struct CGSize)textSize;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonInit;

@end

