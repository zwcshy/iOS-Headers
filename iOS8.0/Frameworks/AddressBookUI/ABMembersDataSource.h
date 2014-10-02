//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class ABBannerView, ABModel, ABUIPerson, NSMutableArray, NSString;

@interface ABMembersDataSource : NSObject <UITableViewDelegate, UITableViewDataSource>
{
    id <ABMembersDataSourceDelegate> _delegate;
    id <ABStyleProvider> _styleProvider;
    void *_addressBook;
    ABModel *_model;
    NSMutableArray *_sectionIndexTitles;
    struct __CFDictionary *_sectionHeaderToSortingIndex;
    struct __CFDictionary *_displayableSectionHeaderToSectionHeader;
    struct __CFDictionary *_sectionHeaderToDisplayableSectionHeader;
    struct __CFDictionary *_displayableSectionIndexToSectionIndex;
    struct __CFDictionary *_sectionIndexToDisplayableSectionIndex;
    ABBannerView *_bannerView;
    ABUIPerson *_meCard;
}

@property(retain, nonatomic) id <ABStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;
@property(nonatomic) void *addressBook; // @synthesize addressBook=_addressBook;
@property(retain, nonatomic) ABModel *model; // @synthesize model=_model;
@property(nonatomic) id <ABMembersDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (struct CGRect)tableView:(id)arg1 frameForSectionIndexGivenProposedFrame:(struct CGRect)arg2;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(int)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)indexPathForDisplayedMemberIndex:(unsigned int)arg1 inTableView:(id)arg2;
- (int)globalRowForDisplayedMemberIndex:(unsigned int)arg1;
- (unsigned int)displayedMemberIndexForIndexPath:(id)arg1 inTableView:(id)arg2;
- (int)globalRowForBanner;
- (int)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(int)arg3;
- (struct __CFDictionary *)sectionHeaderSortingIndices;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 indexPathForSectionIndexTitle:(id)arg2 atIndex:(int)arg3;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (id)titleForHeaderInSection:(int)arg1;
- (id)displayableSectionHeaderFromSectionHeader:(id)arg1;
- (id)sectionIndexFromDisplayableSectionIndex:(id)arg1;
- (id)displayableSectionIndexFromSectionIndex:(id)arg1;
- (void)createAllDisplayableSectionIndexAndHeaderCaches;
- (int)numberOfSectionsInTableView:(id)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)setBannerView:(id)arg1 inTableView:(id)arg2;
- (id)bannerView;
- (BOOL)shouldShowGroups;
- (void)_invalidateMeCard;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
