/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableData, NSString;

@interface PTPStorageInfoDataset : NSObject
{
    unsigned short _storageType;
    unsigned short _filesystemType;
    unsigned short _accessCapability;
    unsigned long long _maxCapacity;
    unsigned long long _freeSpaceInBytes;
    unsigned int _freeSpaceInImages;
    NSString *_storageDescription;
    NSString *_volumeLabel;
    NSMutableData *_content;
    BOOL _dirty;
    BOOL _readOnlyObject;
}

- (id)init;
- (void)setContent:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithMutableData:(id)arg1;
- (void)dealloc;
- (void)updateContent;
- (id)content;
- (id)description;
- (unsigned short)storageType;
- (void)setStorageType:(unsigned short)arg1;
- (unsigned short)filesystemType;
- (void)setFilesystemType:(unsigned short)arg1;
- (unsigned short)accessCapability;
- (void)setAccessCapability:(unsigned short)arg1;
- (unsigned long long)maxCapacity;
- (void)setMaxCapacity:(unsigned long long)arg1;
- (unsigned long long)freeSpaceInBytes;
- (void)setFreeSpaceInBytes:(unsigned long long)arg1;
- (unsigned long)freeSpaceInImages;
- (void)setFreeSpaceInImages:(unsigned long)arg1;
- (id)storageDescription;
- (void)setStorageDescription:(id)arg1;
- (id)volumeLabel;
- (void)setVolumeLabel:(id)arg1;

@end
