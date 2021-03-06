/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class UIKBThemedView, UIKeyboardCandidateBarSegmentControl, UISegmentedControl;

// Not exported
@interface UIKeyboardCandidateSortControl : UIView
{
    UIKeyboardCandidateBarSegmentControl *_segmentedControl;
    int _candidatesVisualStyle;
    _Bool _legacyAlertAppearance;
    UIKBThemedView *_themedView;
}

+ (_Bool)_preventsAppearanceProxyCustomization;
@property(retain, nonatomic) UIKBThemedView *themedView; // @synthesize themedView=_themedView;
@property(readonly) UISegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
- (void)setSortControlTitles:(id)arg1;
- (_Bool)needsToUpdateSortControlForTitles:(id)arg1;
- (void)selectNextSegment;
- (void)selectPreviousSegment;
- (void)layoutSubviews;
- (void)_setRenderConfig:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 candidatesVisualStyle:(int)arg2 legacyAlertAppearance:(_Bool)arg3;
- (void)updateTitleTextAttributes;
- (void)addSegmentedControlWithFrame:(struct CGRect)arg1;

@end

