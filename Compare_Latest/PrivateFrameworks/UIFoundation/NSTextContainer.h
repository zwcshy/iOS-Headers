/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSTextLayoutOrientationProvider-Protocol.h"

@class NSArray, NSLayoutManager;

@interface NSTextContainer : NSObject <NSCoding, NSTextLayoutOrientationProvider>
{
    NSLayoutManager *_layoutManager;
    id _textView;
    struct CGSize _size;
    float _lineFragmentPadding;
    unsigned int _maximumLines;
    struct __tcFlags {
        unsigned int widthTracksTextView:1;
        unsigned int heightTracksTextView:1;
        unsigned int observingFrameChanges:1;
        unsigned int lineBreakMode:4;
        unsigned int _reserved:9;
    } _tcFlags;
    NSArray *_exclusionPaths;
    struct CGPath *_cachedBoundingPath;
    struct __CFArray *_cachedClippingAttributes;
    struct __CFArray *_cachedBounds;
    float _cacheBoundsMinY;
    float _cacheBoundsMaxY;
    int _layoutOrientation;
}

+ (void)initialize;
@property(nonatomic) unsigned int maximumNumberOfLines; // @synthesize maximumNumberOfLines=_maximumLines;
- (id)description;
@property(nonatomic) int layoutOrientation;
@property(readonly) BOOL isSimpleRectangularTextContainer;
- (struct CGRect)lineFragmentRectForProposedRect:(struct CGRect)arg1 remainingRect:(struct CGRect *)arg2;
- (struct CGRect)lineFragmentRectForProposedRect:(struct CGRect)arg1 atIndex:(unsigned int)arg2 writingDirection:(int)arg3 remainingRect:(struct CGRect *)arg4;
@property(copy, nonatomic) NSArray *exclusionPaths;
@property(nonatomic) int lineBreakMode;
@property(nonatomic) float lineFragmentPadding;
@property(nonatomic) struct CGSize size;
- (struct CGSize)containerSize;
- (void)setContainerSize:(struct CGSize)arg1;
@property(nonatomic) BOOL heightTracksTextView;
@property(nonatomic) BOOL widthTracksTextView;
- (void)setTextView:(id)arg1;
- (id)textView;
- (struct CGPoint)textContainerOrigin;
- (void)replaceLayoutManager:(id)arg1;
@property(nonatomic) NSLayoutManager *layoutManager;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithSize:(struct CGSize)arg1;
- (id)initWithContainerSize:(struct CGSize)arg1;
- (void)_commonInit;
- (void)_resizeAccordingToTextView:(id)arg1;
- (void)coordinateAccess:(id)arg1;

@end
