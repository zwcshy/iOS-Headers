//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSKCommand.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface TSKReplaceAllCommand : TSKCommand
{
    NSMutableArray *_commands;
    NSString *_findString;
    NSString *_replaceString;
    unsigned int _options;
    unsigned int _countOfItemsReplaced;
}

@property(readonly, nonatomic) unsigned int options; // @synthesize options=_options;
@property(readonly, nonatomic) NSString *replaceString; // @synthesize replaceString=_replaceString;
@property(readonly, nonatomic) NSString *findString; // @synthesize findString=_findString;
@property(nonatomic) unsigned int countOfItemsReplaced; // @synthesize countOfItemsReplaced=_countOfItemsReplaced;
- (void)redo;
- (void)undo;
- (void)commit;
- (BOOL)process;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)dealloc;
- (id)initWithDocumentRoot:(id)arg1 findString:(id)arg2 replaceString:(id)arg3 options:(unsigned int)arg4;

@end
