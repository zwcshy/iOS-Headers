/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface ML3MigrationDirectives : NSObject
{
    _Bool _needsToRecreateIndexes;
    _Bool _needsToRecreateTriggers;
    _Bool _needsToRemoveLocationsForItemsMissingAssets;
    _Bool _needsToReloadStoreBookmarkMetadataIdentifiers;
    _Bool _needsAnalyze;
    int _userVersion;
}

@property(nonatomic) int userVersion; // @synthesize userVersion=_userVersion;
@property(nonatomic) _Bool needsAnalyze; // @synthesize needsAnalyze=_needsAnalyze;
@property(nonatomic) _Bool needsToReloadStoreBookmarkMetadataIdentifiers; // @synthesize needsToReloadStoreBookmarkMetadataIdentifiers=_needsToReloadStoreBookmarkMetadataIdentifiers;
@property(nonatomic) _Bool needsToRemoveLocationsForItemsMissingAssets; // @synthesize needsToRemoveLocationsForItemsMissingAssets=_needsToRemoveLocationsForItemsMissingAssets;
@property(nonatomic) _Bool needsToRecreateTriggers; // @synthesize needsToRecreateTriggers=_needsToRecreateTriggers;
@property(nonatomic) _Bool needsToRecreateIndexes; // @synthesize needsToRecreateIndexes=_needsToRecreateIndexes;

@end

