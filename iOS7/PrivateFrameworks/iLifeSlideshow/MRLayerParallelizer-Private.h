/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iLifeSlideshow/MRLayerParallelizer.h>

@interface MRLayerParallelizer (Private)
- (id)_retainedByUserRenderedImageAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (void)_renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (void)_setNeedsToRequestRebuildAudio:(_Bool)arg1;
- (void)_unobservePlugOnDepreactivate;
- (void)_observePlugOnPreactivate;
- (void)_unobservePlug;
- (void)_observePlug;
- (void)_unobserveSublayerOnDepreactivate:(id)arg1;
- (void)_observeSublayerOnPreactivate:(id)arg1;
- (void)_unobserveSublayer:(id)arg1;
- (void)_observeSublayer:(id)arg1;
- (void)_deleteSublayer:(id)arg1;
- (id)_createSublayerForPlug:(id)arg1;
- (void)_updateSublayersOrdering;
- (void)_executeLayerCommandQueue;
@end

