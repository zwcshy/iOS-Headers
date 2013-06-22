/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <VectorKit/VKTileSetBackedTileSource.h>

@interface VKLabelTileSource : VKTileSetBackedTileSource
{
    shared_ptr_dd1f7020 _labelManager;
    BOOL _localizeLabels;
    int _labelScaleFactor;
}

@property(nonatomic) int labelScaleFactor; // @synthesize labelScaleFactor=_labelScaleFactor;
@property(nonatomic) BOOL localizeLabels; // @synthesize localizeLabels=_localizeLabels;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)tileForData:(id)arg1 downloadKey:(const struct _GEOTileKey *)arg2 sourceKey:(const struct VKTileKey *)arg3;
- (int)_labelTileType;
- (int)defaultMaximumZoomLevel;
- (BOOL)maximumZoomLevelBoundsCamera;
- (BOOL)minimumZoomLevelBoundsCamera;
- (void)dealloc;
- (id)initWithTileSet:(id)arg1 labelManager:(const shared_ptr_dd1f7020 *)arg2;

@end
