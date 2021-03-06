/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMapTable, VGLResourceFactory;

// Not exported
@interface VGLProgramFactory : NSObject
{
    VGLResourceFactory *_factory;
    NSMapTable *_programCache;
}

@property(nonatomic) VGLResourceFactory *factory; // @synthesize factory=_factory;
- (id)programWithClass:(Class)arg1;
- (void)dealloc;
- (id)initWithResourceFactory:(id)arg1;

@end

