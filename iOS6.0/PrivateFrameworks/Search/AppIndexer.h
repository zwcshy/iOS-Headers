/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSBundle, NSString;

@interface AppIndexer : NSObject
{
    NSString *_displayID;
    NSString *_category;
    NSString *_appSpotlightPath;
    NSString *_searchBundleName;
    NSBundle *_bundle;
}

- (void)beginIndexing;
- (id)_getUpdateIDsFromDatastore:(id)arg1;
- (id)_loadBundle;
- (void)dealloc;
- (id)initWithDisplayID:(id)arg1 andCategory:(id)arg2;

@end
