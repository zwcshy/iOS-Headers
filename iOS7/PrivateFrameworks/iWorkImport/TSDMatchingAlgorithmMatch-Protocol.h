/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol TSDMatchingAlgorithmMatch
@property(readonly, nonatomic) id outgoingMatchObject;
@property(readonly, nonatomic) id incomingMatchObject;
@property(readonly, nonatomic) long long matchCost;
- (_Bool)conflictsWithMatch:(id)arg1;
- (long long)compareToMatch:(id)arg1;
@end

