//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CUIThemeImageSource.h"
#import "NSCoding.h"
#import "NSCopying.h"

@interface CUIThemeFacet : NSObject <CUIThemeImageSource, NSCopying, NSCoding>
{
    struct _renditionkeytoken *_renditionKeyList;
    unsigned int _themeIndex;
    int _renditionType;
    struct CGSize _thumbnailSize;
    struct CGPoint _hotSpot;
    struct {
        unsigned int hasCheckedButtonGlyph:1;
        unsigned int isButtonGlyph:1;
        unsigned int reserved:14;
    } _fFlags;
}

+ (BOOL)assetExistsForRenditionKey:(id)arg1 fromTheme:(unsigned int)arg2;
+ (id)cursorFacetWithName:(id)arg1 fromTheme:(unsigned int)arg2;
+ (id)_facetWithKeyList:(const struct _renditionkeytoken *)arg1 andRenditionKeyClass:(Class)arg2 orRenditionKey:(id)arg3 fromTheme:(unsigned int)arg4;
+ (id)facetWithRenditionKey:(id)arg1 fromTheme:(unsigned int)arg2;
+ (id)facetWithElement:(int)arg1 part:(int)arg2 dimension1:(int)arg3 dimension2:(int)arg4 fromTheme:(unsigned int)arg5;
+ (id)facetWithElement:(int)arg1 part:(int)arg2 fromTheme:(unsigned int)arg3;
+ (id)debug_bundleIdentifierForThemeRef:(unsigned int)arg1;
+ (unsigned int)themeWithContentsOfURL:(id)arg1 error:(id *)arg2;
+ (unsigned int)themeForBundleIdentifier:(id)arg1 error:(id *)arg2;
+ (unsigned int)themeNamed:(id)arg1 forBundleIdentifier:(id)arg2 error:(id *)arg3;
+ (void)initialize;
+ (id)_themeStoreForThemeIndex:(unsigned int)arg1;
+ (void)_invalidateArtworkCaches;
- (id)maskWithSize:(struct CGSize)arg1 keyAdjustment:(id)arg2;
- (id)highlightWithSize:(struct CGSize)arg1 keyAdjustment:(id)arg2;
- (id)imageWithSize:(struct CGSize)arg1 keyAdjustment:(id)arg2;
- (id)imageForSlice:(int)arg1 withKeyAdjustment:(id)arg2;
- (id)maskForSlice:(int)arg1 withKeyAdjustment:(id)arg2;
- (id)description;
- (int)_sliceIndexForSlice:(int)arg1 ofRendition:(id)arg2;
- (void)_applyFixedAttributesToKey:(id)arg1;
- (struct CGSize)topLeftCapSize;
- (struct CGSize)thumbnailSize;
- (id)thumbnail;
- (id)displayName;
- (int)renditionType;
- (id)renditionKey;
- (id)themeRendition;
- (unsigned int)themeIndex;
- (void)_setThemeIndex:(unsigned int)arg1;
- (id)gradientWithKeyAdjustment:(id)arg1 angle:(float *)arg2 style:(unsigned int *)arg3;
- (struct CGSize)imageSize;
- (id)blendModeAsCAFilterString;
- (int)blendMode;
- (float)alpha;
- (id)image;
- (id)imageForSliceIndex:(int)arg1;
- (id)imageWithKeyAdjustment:(id)arg1;
- (id)imageForState:(int)arg1 value:(int)arg2 size:(unsigned int)arg3;
- (id)imageForState:(int)arg1 value:(int)arg2;
- (BOOL)isValidButtonImageSource;
- (BOOL)isValidButtonImageSourceForSize:(unsigned int)arg1;
- (BOOL)hasValueSlices;
- (id)imageForState:(int)arg1 withValue:(int)arg2;
- (id)imageForState:(int)arg1;
- (id)renditionSliceInformationForRect:(struct CGRect)arg1 keyAdjustment:(id)arg2;
- (id)renditionMetricsWithKeyAdjustment:(id)arg1;
- (void)_drawSlice:(int)arg1 inFrame:(struct CGRect)arg2 withKeyAdjustment:(id)arg3;
- (void)_drawSpecificRenditionKey:(id)arg1 rendition:(id)arg2 inFrame:(struct CGRect)arg3 context:(struct CGContext *)arg4 alpha:(float)arg5 operation:(int)arg6 isFocused:(BOOL)arg7 isFlipped:(BOOL)arg8;
- (void)_drawSpecificRenditionKey:(id)arg1 inFrame:(struct CGRect)arg2 context:(struct CGContext *)arg3 alpha:(float)arg4 operation:(int)arg5 isFocused:(BOOL)arg6 isFlipped:(BOOL)arg7;
- (void)_drawSpecificRenditionKey:(id)arg1 inFrame:(struct CGRect)arg2 context:(struct CGContext *)arg3 isFocused:(BOOL)arg4 isFlipped:(BOOL)arg5;
- (void)_drawAsMaskSpecificRenditionKey:(id)arg1 inFrame:(struct CGRect)arg2 context:(struct CGContext *)arg3 alpha:(float)arg4 operation:(int)arg5 isFocused:(BOOL)arg6;
- (id)renditionForSpecificKeyWrapper:(id)arg1;
- (void)_drawMaskFromSpecificRenditionKey:(id)arg1 inFrame:(struct CGRect)arg2 alpha:(float)arg3 operation:(int)arg4 isFocused:(BOOL)arg5;
- (void)drawPulseInFrame:(struct CGRect)arg1 pulseValue:(float)arg2 isFocused:(BOOL)arg3 keyAdjustment:(id)arg4;
- (void)drawMaskInFrame:(struct CGRect)arg1 alpha:(float)arg2 operation:(int)arg3 isFocused:(BOOL)arg4 keyAdjustment:(id)arg5;
- (void)drawMaskInFrame:(struct CGRect)arg1 alpha:(float)arg2 isFocused:(BOOL)arg3 keyAdjustment:(id)arg4;
- (void)drawHighlightInFrame:(struct CGRect)arg1 alpha:(float)arg2 operation:(int)arg3 keyAdjustment:(id)arg4;
- (void)drawHighlightInFrame:(struct CGRect)arg1 alpha:(float)arg2 keyAdjustment:(id)arg3;
- (void)drawInFrame:(struct CGRect)arg1 alpha:(float)arg2 operation:(int)arg3 isFocused:(BOOL)arg4 keyAdjustment:(id)arg5;
- (void)drawInFrame:(struct CGRect)arg1 alpha:(float)arg2 isFocused:(BOOL)arg3 keyAdjustment:(id)arg4;
- (void)drawGradientInFrame:(struct CGRect)arg1 angle:(float)arg2 alpha:(float)arg3 operation:(int)arg4 isFocused:(BOOL)arg5 keyAdjustment:(id)arg6 context:(struct CGContext *)arg7;
- (void)drawGradientInFrame:(struct CGRect)arg1 angle:(float)arg2 alpha:(float)arg3 operation:(int)arg4 isFocused:(BOOL)arg5 keyAdjustment:(id)arg6;
- (void)drawHighlightInFrame:(struct CGRect)arg1 alpha:(float)arg2 operation:(int)arg3 owner:(id)arg4 userInfo:(id)arg5;
- (void)drawInFrame:(struct CGRect)arg1 alpha:(float)arg2 operation:(int)arg3 owner:(id)arg4 userInfo:(id)arg5;
- (void)drawPulseInFrame:(struct CGRect)arg1 pulseValue:(float)arg2 owner:(id)arg3 userInfo:(id)arg4;
- (void)drawMaskInFrame:(struct CGRect)arg1 alpha:(float)arg2 owner:(id)arg3 userInfo:(id)arg4;
- (void)drawHighlightInFrame:(struct CGRect)arg1 alpha:(float)arg2 owner:(id)arg3 userInfo:(id)arg4;
- (void)drawInFrame:(struct CGRect)arg1 alpha:(float)arg2 owner:(id)arg3 userInfo:(id)arg4;
- (BOOL)hitTestAtPoint:(struct CGPoint)arg1 inFrame:(struct CGRect)arg2 owner:(id)arg3 userInfo:(id)arg4;
- (BOOL)_canGetRenditionForKey:(id)arg1 withDrawingLayer:(int)arg2;
- (void)drawMaskInFrame:(struct CGRect)arg1 owner:(id)arg2 userInfo:(id)arg3;
- (void)drawHighlightInFrame:(struct CGRect)arg1 owner:(id)arg2 userInfo:(id)arg3;
- (void)drawInFrame:(struct CGRect)arg1 owner:(id)arg2 userInfo:(id)arg3;
- (void)drawSegmentInFrame:(struct CGRect)arg1 isFocused:(BOOL)arg2 segmentType:(int)arg3;
- (void)drawAnimationFrameMappedFrom0_1RangedValue:(double)arg1 destinationFrame:(struct CGRect)arg2 isFocused:(BOOL)arg3 context:(struct CGContext *)arg4;
- (void)drawAbsoluteAnimationFrame:(double)arg1 destinationFrame:(struct CGRect)arg2 isFocused:(BOOL)arg3 context:(struct CGContext *)arg4;
- (void)drawAsOnePartWithSlice:(int)arg1 inFrame:(struct CGRect)arg2 isFocused:(BOOL)arg3;
- (void)drawInFrame:(struct CGRect)arg1 alpha:(float)arg2 operation:(int)arg3 isFocused:(BOOL)arg4 context:(struct CGContext *)arg5;
- (void)drawInFrame:(struct CGRect)arg1 alpha:(float)arg2 operation:(int)arg3 isFocused:(BOOL)arg4;
- (void)drawInFrame:(struct CGRect)arg1 alpha:(float)arg2 isFocused:(BOOL)arg3;
- (void)drawInFrame:(struct CGRect)arg1 isFocused:(BOOL)arg2 context:(struct CGContext *)arg3;
- (void)updateLayer:(id)arg1;
- (id)makeLayer;
- (struct CGImage *)copyLayerImageContentsAndCenter:(struct CGRect *)arg1;
- (struct CGImage *)copyLayerImageContentsAndCenter:(struct CGRect *)arg1 renditionKey:(id)arg2;
- (void)setControlSize:(int)arg1;
- (int)controlSize;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithRenditionKey:(id)arg1 fromTheme:(unsigned int)arg2;
- (void)_initWithRenditionKey:(id)arg1;
- (struct CGContext *)currentCGContext;
- (id)_imageForRenditionFromKey:(id)arg1 withSize:(struct CGSize)arg2 isMask:(BOOL)arg3;
- (BOOL)_isButtonGlyph;
- (void)_setIsButtonGlyph:(BOOL)arg1;
- (void)_setHasCheckedButtonGlyph:(BOOL)arg1;
- (struct CGSize)_thumbnailSizeForRendition:(id)arg1;
- (id)_rendition;
- (id)_renditionForSpecificKey:(id)arg1;
- (id)_approximateRenditionForRenditionKey:(id)arg1;
- (void)_updateSpecificRenditionKey:(id)arg1 isFocused:(char *)arg2 owner:(id)arg3 userInfo:(id)arg4;
- (struct CGPoint)_hotSpot;
- (id)_themeStore;

@end
