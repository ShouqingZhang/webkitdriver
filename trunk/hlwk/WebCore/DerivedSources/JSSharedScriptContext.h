/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#ifndef JSSharedScriptContext_h
#define JSSharedScriptContext_h

#if ENABLE(SHARED_SCRIPT)

#include "JSSharedScriptContextBase.h"
#include "SharedScriptContext.h"

namespace WebCore {

class SharedScriptContext;

class JSSharedScriptContext : public JSSharedScriptContextBase {
    typedef JSSharedScriptContextBase Base;
public:
    JSSharedScriptContext(NonNullPassRefPtr<JSC::Structure>, PassRefPtr<SharedScriptContext>);
    virtual ~JSSharedScriptContext();
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertyDescriptor&);
    virtual void put(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::JSValue, JSC::PutPropertySlot&);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;

    static PassRefPtr<JSC::Structure> createStructure(JSC::JSValue prototype)
    {
        return JSC::Structure::create(prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags));
    }

    virtual void markChildren(JSC::MarkStack&);


    // Custom functions
    JSC::JSValue addEventListener(JSC::ExecState*, const JSC::ArgList&);
    JSC::JSValue removeEventListener(JSC::ExecState*, const JSC::ArgList&);
    SharedScriptContext* impl() const
    {
        return static_cast<SharedScriptContext*>(Base::impl());
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesMarkChildren | JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

SharedScriptContext* toSharedScriptContext(JSC::JSValue);

class JSSharedScriptContextPrototype : public JSC::JSObject {
    typedef JSC::JSObject Base;
public:
    void* operator new(size_t, JSC::JSGlobalData*);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    static PassRefPtr<JSC::Structure> createStructure(JSC::JSValue prototype)
    {
        return JSC::Structure::create(prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags));
    }
    JSSharedScriptContextPrototype(NonNullPassRefPtr<JSC::Structure> structure) : JSC::JSObject(structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesMarkChildren | JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

// Functions

JSC::JSValue JSC_HOST_CALL jsSharedScriptContextPrototypeFunctionAddEventListener(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsSharedScriptContextPrototypeFunctionRemoveEventListener(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsSharedScriptContextPrototypeFunctionDispatchEvent(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
// Attributes

JSC::JSValue jsSharedScriptContextSelf(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSSharedScriptContextSelf(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSharedScriptContextName(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue jsSharedScriptContextOnerror(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSSharedScriptContextOnerror(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);

} // namespace WebCore

#endif // ENABLE(SHARED_SCRIPT)

#endif