/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKPlayer.h>

@interface GKSpecialPlayer : GKPlayer
{
}

- (id)sortName;
- (id)displayNameWithIdentifiableName:(BOOL)arg1 quoteAlias:(BOOL)arg2;
- (id)attributedDisplayNameWithIdentifiableName:(BOOL)arg1;
- (BOOL)isFriend;
- (id)alias;
- (CDStruct_4aceb884)stats;
- (void)loadProfilePieces:(unsigned int)arg1 withCompletionHandler:(id)arg2;
- (id)autorelease;
- (oneway void)release;
- (id)managedObjectContext;

@end

