//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface TSTIntegerKeyDict : NSObject
{
    struct hash_map<unsigned long, SFUtility::ObjcSharedPtr<NSObject>, TSTIntHasher, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, SFUtility::ObjcSharedPtr<NSObject>>>> *mMap;
}

- (id)allValues;
- (int)count;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)transformWithFunction:(CDUnknownFunctionPointerType)arg1 withState:(void *)arg2;
- (void)applyFunction:(CDUnknownFunctionPointerType)arg1 withState:(void *)arg2 andState:(void *)arg3;
- (void)applyFunction:(CDUnknownFunctionPointerType)arg1 withState:(void *)arg2;
- (void)makeObjectsPerformSelector:(SEL)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(unsigned long)arg1;
- (void)removeFirstObject;
- (void)setObject:(id)arg1 forKey:(unsigned long)arg2;
- (id)objectForKey:(unsigned long)arg1;
- (void)dealloc;
- (id)init;

@end
