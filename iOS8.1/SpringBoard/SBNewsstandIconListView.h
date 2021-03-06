//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBFolderIconListView.h"

@interface SBNewsstandIconListView : SBFolderIconListView
{
    double _iconVPaddingPortrait;
    double _topIconInsetPortrait;
    double _iconVPaddingLandscape;
    double _topIconInsetLandscape;
}

+ (unsigned long long)maxVisibleIconRowsInterfaceOrientation:(long long)arg1;
+ (unsigned long long)iconColumnsForInterfaceOrientation:(long long)arg1;
+ (long long)rotationAnchor;
- (void)cleanupAfterRotation;
- (void)prepareToRotateToInterfaceOrientation:(long long)arg1;
- (void)_updateVisibleIconsFromRow:(unsigned long long)arg1 toRow:(unsigned long long)arg2 includeIcon:(id)arg3 layoutIfNeeded:(_Bool)arg4;
- (double)verticalIconPadding;
- (double)sideIconInset;
- (double)bottomIconInset;
- (double)topIconInset;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (Class)baseIconViewClass;

@end

