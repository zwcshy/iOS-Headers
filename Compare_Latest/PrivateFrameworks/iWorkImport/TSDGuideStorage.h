//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import "TSPCopying.h"

@class NSMutableSet, NSSet;

__attribute__((visibility("hidden")))
@interface TSDGuideStorage : TSPObject <TSPCopying>
{
    NSMutableSet *mGuides;
}

@property(retain, nonatomic) NSSet *guides; // @synthesize guides=mGuides;
- (id)description;
- (id)alignmentGuidesForEditing;
- (id)alignmentGuides;
- (id)provideDynamicGuides;
- (unsigned int)count;
- (void)removeGuide:(id)arg1;
- (void)addGuide:(id)arg1;
- (void)dealloc;
- (id)copyWithContext:(id)arg1;
- (id)initWithContext:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;

@end

