/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Foundation/NSValue.h>

// Not exported
@interface NSWeakPointerValue : NSValue
{
    void *_value;
    void *_weakValue;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)nonretainedObjectValue;
- (void)getValue:(void *)arg1;
- (const char *)objCType;
- (unsigned long long)hash;
- (_Bool)isEqualToValue:(id)arg1;
- (id)initWithPointer:(void *)arg1;

@end

