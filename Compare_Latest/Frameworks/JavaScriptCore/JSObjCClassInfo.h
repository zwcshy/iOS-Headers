//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JSContext;

__attribute__((visibility("hidden")))
@interface JSObjCClassInfo : NSObject
{
    JSContext *m_context;
    Class m_class;
    _Bool m_block;
    // Error parsing type: ^{OpaqueJSClass={atomic<int>=Ai}^{OpaqueJSClass}^{OpaqueJSClass}^?^?^?^?^?^?^?^?^?^?^?{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}{OwnPtr<WTF::HashMap<WTF::RefPtr<WTF::StringImpl>, std::__1::unique_ptr<StaticValueEntry, std::__1::default_delete<StaticValueEntry> >, WTF::StringHash, WTF::HashTraits<WTF::RefPtr<WTF::StringImpl> >, WTF::HashTraits<std::__1::unique_ptr<StaticValueEntry, std::__1::default_delete<StaticValueEntry> > > > >=^{HashMap<WTF::RefPtr<WTF::StringImpl>, std::__1::unique_ptr<StaticValueEntry, std::__1::default_delete<StaticValueEntry> >, WTF::StringHash, WTF::HashTraits<WTF::RefPtr<WTF::StringImpl> >, WTF::HashTraits<std::__1::unique_ptr<StaticValueEntry, std::__1::default_delete<StaticValueEntry> > > >}}{OwnPtr<WTF::HashMap<WTF::RefPtr<WTF::StringImpl>, std::__1::unique_ptr<StaticFunctionEntry, std::__1::default_delete<StaticFunctionEntry> >, WTF::StringHash, WTF::HashTraits<WTF::RefPtr<WTF::StringImpl> >, WTF::HashTraits<std::__1::unique_ptr<StaticFunctionEntry, std::__1::default_delete<StaticFunctionEntry> > > > >=^{HashMap<WTF::RefPtr<WTF::StringImpl>, std::__1::unique_ptr<StaticFunctionEntry, std::__1::default_delete<StaticFunctionEntry> >, WTF::StringHash, WTF::HashTraits<WTF::RefPtr<WTF::StringImpl> >, WTF::HashTraits<std::__1::unique_ptr<StaticFunctionEntry, std::__1::default_delete<StaticFunctionEntry> > > >}}}, name: m_classRef
    struct Weak<JSC::JSObject> m_prototype;
    struct Weak<JSC::JSObject> m_constructor;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)constructor;
- (id)wrapperForObject:(id)arg1;
- (void)reallocateConstructorAndOrPrototype;
- (void)allocateConstructorAndPrototypeWithSuperClassInfo:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1 forClass:(Class)arg2 superClassInfo:(id)arg3;

@end

