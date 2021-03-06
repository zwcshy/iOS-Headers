/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class VGLContext;

@interface VGLTexturePool : NSObject
{
    struct CGSize _contentSize;
    struct CGSize _textureSize;
    VGLContext *_context;
    struct vector<unsigned int, vk_allocator<unsigned int>> *_tokens;
}

- (id).cxx_construct;
- (id)checkoutTexture;
- (void)dealloc;
- (id)initWithCapacity:(int)arg1 textureSize:(struct CGSize)arg2 scale:(int)arg3 context:(id)arg4;

@end

