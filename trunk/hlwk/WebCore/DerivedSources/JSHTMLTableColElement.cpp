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

#include "config.h"
#include "JSHTMLTableColElement.h"

#include "HTMLTableColElement.h"
#include "KURL.h"
#include <runtime/JSNumberCell.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSHTMLTableColElement);

/* Hash table */

static const HashTableValue JSHTMLTableColElementTableValues[8] =
{
    { "align", DontDelete, (intptr_t)jsHTMLTableColElementAlign, (intptr_t)setJSHTMLTableColElementAlign },
    { "ch", DontDelete, (intptr_t)jsHTMLTableColElementCh, (intptr_t)setJSHTMLTableColElementCh },
    { "chOff", DontDelete, (intptr_t)jsHTMLTableColElementChOff, (intptr_t)setJSHTMLTableColElementChOff },
    { "span", DontDelete, (intptr_t)jsHTMLTableColElementSpan, (intptr_t)setJSHTMLTableColElementSpan },
    { "vAlign", DontDelete, (intptr_t)jsHTMLTableColElementVAlign, (intptr_t)setJSHTMLTableColElementVAlign },
    { "width", DontDelete, (intptr_t)jsHTMLTableColElementWidth, (intptr_t)setJSHTMLTableColElementWidth },
    { "constructor", DontEnum|ReadOnly, (intptr_t)jsHTMLTableColElementConstructor, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSHTMLTableColElementTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 511, JSHTMLTableColElementTableValues, 0 };
#else
    { 17, 15, JSHTMLTableColElementTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSHTMLTableColElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSHTMLTableColElementConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSHTMLTableColElementConstructorTableValues, 0 };
#else
    { 1, 0, JSHTMLTableColElementConstructorTableValues, 0 };
#endif

class JSHTMLTableColElementConstructor : public DOMConstructorObject {
public:
    JSHTMLTableColElementConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
        : DOMConstructorObject(JSHTMLTableColElementConstructor::createStructure(globalObject->objectPrototype()), globalObject)
    {
        putDirect(exec->propertyNames().prototype, JSHTMLTableColElementPrototype::self(exec, globalObject), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    virtual bool getOwnPropertyDescriptor(ExecState*, const Identifier&, PropertyDescriptor&);
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    static PassRefPtr<Structure> createStructure(JSValue proto) 
    { 
        return Structure::create(proto, TypeInfo(ObjectType, StructureFlags), AnonymousSlotCount); 
    }
    
protected:
    static const unsigned StructureFlags = OverridesGetOwnPropertySlot | ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

const ClassInfo JSHTMLTableColElementConstructor::s_info = { "HTMLTableColElementConstructor", 0, &JSHTMLTableColElementConstructorTable, 0 };

bool JSHTMLTableColElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLTableColElementConstructor, DOMObject>(exec, &JSHTMLTableColElementConstructorTable, this, propertyName, slot);
}

bool JSHTMLTableColElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLTableColElementConstructor, DOMObject>(exec, &JSHTMLTableColElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLTableColElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSHTMLTableColElementPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSHTMLTableColElementPrototypeTableValues, 0 };
#else
    { 1, 0, JSHTMLTableColElementPrototypeTableValues, 0 };
#endif

const ClassInfo JSHTMLTableColElementPrototype::s_info = { "HTMLTableColElementPrototype", 0, &JSHTMLTableColElementPrototypeTable, 0 };

JSObject* JSHTMLTableColElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLTableColElement>(exec, globalObject);
}

const ClassInfo JSHTMLTableColElement::s_info = { "HTMLTableColElement", &JSHTMLElement::s_info, &JSHTMLTableColElementTable, 0 };

JSHTMLTableColElement::JSHTMLTableColElement(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLTableColElement> impl)
    : JSHTMLElement(structure, globalObject, impl)
{
}

JSObject* JSHTMLTableColElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSHTMLTableColElementPrototype(JSHTMLTableColElementPrototype::createStructure(JSHTMLElementPrototype::self(exec, globalObject)));
}

bool JSHTMLTableColElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLTableColElement, Base>(exec, &JSHTMLTableColElementTable, this, propertyName, slot);
}

bool JSHTMLTableColElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLTableColElement, Base>(exec, &JSHTMLTableColElementTable, this, propertyName, descriptor);
}

JSValue jsHTMLTableColElementAlign(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLTableColElement* castedThis = static_cast<JSHTMLTableColElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLTableColElement* imp = static_cast<HTMLTableColElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->align());
    return result;
}

JSValue jsHTMLTableColElementCh(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLTableColElement* castedThis = static_cast<JSHTMLTableColElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLTableColElement* imp = static_cast<HTMLTableColElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->ch());
    return result;
}

JSValue jsHTMLTableColElementChOff(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLTableColElement* castedThis = static_cast<JSHTMLTableColElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLTableColElement* imp = static_cast<HTMLTableColElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->chOff());
    return result;
}

JSValue jsHTMLTableColElementSpan(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLTableColElement* castedThis = static_cast<JSHTMLTableColElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLTableColElement* imp = static_cast<HTMLTableColElement*>(castedThis->impl());
    JSValue result = jsNumber(exec, imp->span());
    return result;
}

JSValue jsHTMLTableColElementVAlign(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLTableColElement* castedThis = static_cast<JSHTMLTableColElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLTableColElement* imp = static_cast<HTMLTableColElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->vAlign());
    return result;
}

JSValue jsHTMLTableColElementWidth(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLTableColElement* castedThis = static_cast<JSHTMLTableColElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLTableColElement* imp = static_cast<HTMLTableColElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->width());
    return result;
}

JSValue jsHTMLTableColElementConstructor(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLTableColElement* domObject = static_cast<JSHTMLTableColElement*>(asObject(slot.slotBase()));
    return JSHTMLTableColElement::getConstructor(exec, domObject->globalObject());
}
void JSHTMLTableColElement::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSHTMLTableColElement, Base>(exec, propertyName, value, &JSHTMLTableColElementTable, this, slot);
}

void setJSHTMLTableColElementAlign(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLTableColElement* castedThisObj = static_cast<JSHTMLTableColElement*>(thisObject);
    HTMLTableColElement* imp = static_cast<HTMLTableColElement*>(castedThisObj->impl());
    imp->setAlign(valueToStringWithNullCheck(exec, value));
}

void setJSHTMLTableColElementCh(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLTableColElement* castedThisObj = static_cast<JSHTMLTableColElement*>(thisObject);
    HTMLTableColElement* imp = static_cast<HTMLTableColElement*>(castedThisObj->impl());
    imp->setCh(valueToStringWithNullCheck(exec, value));
}

void setJSHTMLTableColElementChOff(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLTableColElement* castedThisObj = static_cast<JSHTMLTableColElement*>(thisObject);
    HTMLTableColElement* imp = static_cast<HTMLTableColElement*>(castedThisObj->impl());
    imp->setChOff(valueToStringWithNullCheck(exec, value));
}

void setJSHTMLTableColElementSpan(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLTableColElement* castedThisObj = static_cast<JSHTMLTableColElement*>(thisObject);
    HTMLTableColElement* imp = static_cast<HTMLTableColElement*>(castedThisObj->impl());
    imp->setSpan(value.toInt32(exec));
}

void setJSHTMLTableColElementVAlign(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLTableColElement* castedThisObj = static_cast<JSHTMLTableColElement*>(thisObject);
    HTMLTableColElement* imp = static_cast<HTMLTableColElement*>(castedThisObj->impl());
    imp->setVAlign(valueToStringWithNullCheck(exec, value));
}

void setJSHTMLTableColElementWidth(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLTableColElement* castedThisObj = static_cast<JSHTMLTableColElement*>(thisObject);
    HTMLTableColElement* imp = static_cast<HTMLTableColElement*>(castedThisObj->impl());
    imp->setWidth(valueToStringWithNullCheck(exec, value));
}

JSValue JSHTMLTableColElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLTableColElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}