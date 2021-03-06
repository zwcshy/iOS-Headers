//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CIFilter.h"

@class CIImage, CIVector, NSData, NSNumber;

@interface BLDramaFilter : CIFilter
{
    BOOL _needsReprocess;
    float _lastAmount;
    float _lastPhototone;
    float _lastNeutralGamma;
    CIImage *_inputImage;
    NSNumber *_inputAmount;
    CIVector *_inputHueStrengthArray;
    NSNumber *_inputPhototone;
    NSNumber *_inputNeutralGamma;
    CIFilter *_colorCubeFilterDrama;
    NSData *_precomputedCube;
    CIVector *_lastHueStrengthArray;
}

@property(retain, nonatomic) CIVector *lastHueStrengthArray; // @synthesize lastHueStrengthArray=_lastHueStrengthArray;
@property(retain, nonatomic) NSData *precomputedCube; // @synthesize precomputedCube=_precomputedCube;
@property(retain, nonatomic) CIFilter *colorCubeFilterDrama; // @synthesize colorCubeFilterDrama=_colorCubeFilterDrama;
@property(copy, nonatomic) NSNumber *inputNeutralGamma; // @synthesize inputNeutralGamma=_inputNeutralGamma;
@property(copy, nonatomic) NSNumber *inputPhototone; // @synthesize inputPhototone=_inputPhototone;
@property(copy, nonatomic) CIVector *inputHueStrengthArray; // @synthesize inputHueStrengthArray=_inputHueStrengthArray;
@property(copy, nonatomic) NSNumber *inputAmount; // @synthesize inputAmount=_inputAmount;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage=_inputImage;
- (void).cxx_destruct;
- (id)outputImage;
- (void)setDefaults;
- (id)init;

@end

