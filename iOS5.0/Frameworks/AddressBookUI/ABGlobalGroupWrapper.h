/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AddressBookUI/ABGroupWrapper.h>

@interface ABGlobalGroupWrapper : ABGroupWrapper
{
    BOOL _showLinkedPeople;
}

+ (id)newGlobalGroupWrapperWithAddressBook:(void *)arg1 showLinkedPeople:(BOOL)arg2;
+ (id)newGlobalGroupWrapperWithAddressBook:(void *)arg1;
- (BOOL)isGlobalWrapper;
@property(nonatomic) BOOL showLinkedPeople; // @synthesize showLinkedPeople=_showLinkedPeople;
- (id)name;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEditable;
- (id)description;

@end

