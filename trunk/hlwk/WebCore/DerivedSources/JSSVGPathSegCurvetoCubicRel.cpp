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

#if ENABLE(SVG)

#include "JSSVGPathSegCurvetoCubicRel.h"

#include "SVGPathSegCurvetoCubic.h"
#include <runtime/JSNumberCell.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGPathSegCurvetoCubicRel);

/* Hash table */

static const HashTableValue JSSVGPathSegCurvetoCubicRelTableValues[8] =
{
    { "x", DontDelete, (intptr_t)jsSVGPathSegCurvetoCubicRelX, (intptr_t)setJSSVGPathSegCurvetoCubicRelX },
    { "y", DontDelete, (intptr_t)jsSVGPathSegCurvetoCubicRelY, (intptr_t)setJSSVGPathSegCurvetoCubicRelY },
    { "x1", DontDelete, (intptr_t)jsSVGPathSegCurvetoCubicRelX1, (intptr_t)setJSSVGPathSegCurvetoCubicRelX1 },
    { "y1", DontDelete, (intptr_t)jsSVGPathSegCurvetoCubicRelY1, (intptr_t)setJSSVGPathSegCurvetoCubicRelY1 },
    { "x2", DontDelete, (intptr_t)jsSVGPathSegCurvetoCubicRelX2, (intptr_t)setJSSVGPathSegCurvetoCubicRelX2 },
    { "y2", DontDelete, (intptr_t)jsSVGPathSegCurvetoCubicRelY2, (intptr_t)setJSSVGPathSegCurvetoCubicRelY2 },
    { "constructor", DontEnum|ReadOnly, (intptr_t)jsSVGPathSegCurvetoCubicRelConstructor, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGPathSegCurvetoCubicRelTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 15, JSSVGPathSegCurvetoCubicRelTableValues, 0 };
#else
    { 16, 15, JSSVGPathSegCurvetoCubicRelTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSSVGPathSegCurvetoCubicRelConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGPathSegCurvetoCubicRelConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSSVGPathSegCurvetoCubicRelConstructorTableValues, 0 };
#else
    { 1, 0, JSSVGPathSegCurvetoCubicRelConstructorTableValues, 0 };
#endif

class JSSVGPathSegCurvetoCubicRelConstructor : public DOMConstructorObject {
public:
    JSSVGPathSegCurvetoCubicRelConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
        : DOMConstructorObject(JSSVGPathSegCurvetoCubicRelConstructor::createStructure(globalObject->objectPrototype()), globalObject)
    {
        putDirect(exec->propertyNames().prototype, JSSVGPathSegCurvetoCubicRelPrototype::self(exec, globalObject), None);
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

const ClassInfo JSSVGPathSegCurvetoCubicRelConstructor::s_info = { "SVGPathSegCurvetoCubicRelConstructor", 0, &JSSVGPathSegCurvetoCubicRelConstructorTable, 0 };

bool JSSVGPathSegCurvetoCubicRelConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPathSegCurvetoCubicRelConstructor, DOMObject>(exec, &JSSVGPathSegCurvetoCubicRelConstructorTable, this, propertyName, slot);
}

bool JSSVGPathSegCurvetoCubicRelConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGPathSegCurvetoCubicRelConstructor, DOMObject>(exec, &JSSVGPathSegCurvetoCubicRelConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSSVGPathSegCurvetoCubicRelPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGPathSegCurvetoCubicRelPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSSVGPathSegCurvetoCubicRelPrototypeTableValues, 0 };
#else
    { 1, 0, JSSVGPathSegCurvetoCubicRelPrototypeTableValues, 0 };
#endif

const ClassInfo JSSVGPathSegCurvetoCubicRelPrototype::s_info = { "SVGPathSegCurvetoCubicRelPrototype", 0, &JSSVGPathSegCurvetoCubicRelPrototypeTable, 0 };

JSObject* JSSVGPathSegCurvetoCubicRelPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGPathSegCurvetoCubicRel>(exec, globalObject);
}

const ClassInfo JSSVGPathSegCurvetoCubicRel::s_info = { "SVGPathSegCurvetoCubicRel", &JSSVGPathSeg::s_info, &JSSVGPathSegCurvetoCubicRelTable, 0 };

JSSVGPathSegCurvetoCubicRel::JSSVGPathSegCurvetoCubicRel(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGPathSegCurvetoCubicRel> impl)
    : JSSVGPathSeg(structure, globalObject, impl)
{
}

JSObject* JSSVGPathSegCurvetoCubicRel::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGPathSegCurvetoCubicRelPrototype(JSSVGPathSegCurvetoCubicRelPrototype::createStructure(JSSVGPathSegPrototype::self(exec, globalObject)));
}

bool JSSVGPathSegCurvetoCubicRel::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPathSegCurvetoCubicRel, Base>(exec, &JSSVGPathSegCurvetoCubicRelTable, this, propertyName, slot);
}

bool JSSVGPathSegCurvetoCubicRel::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGPathSegCurvetoCubicRel, Base>(exec, &JSSVGPathSegCurvetoCubicRelTable, this, propertyName, descriptor);
}

JSValue jsSVGPathSegCurvetoCubicRelX(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGPathSegCurvetoCubicRel* castedThis = static_cast<JSSVGPathSegCurvetoCubicRel*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGPathSegCurvetoCubicRel* imp = static_cast<SVGPathSegCurvetoCubicRel*>(castedThis->impl());
    JSValue result = jsNumber(exec, imp->x());
    return result;
}

JSValue jsSVGPathSegCurvetoCubicRelY(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGPathSegCurvetoCubicRel* castedThis = static_cast<JSSVGPathSegCurvetoCubicRel*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGPathSegCurvetoCubicRel* imp = static_cast<SVGPathSegCurvetoCubicRel*>(castedThis->impl());
    JSValue result = jsNumber(exec, imp->y());
    return result;
}

JSValue jsSVGPathSegCurvetoCubicRelX1(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGPathSegCurvetoCubicRel* castedThis = static_cast<JSSVGPathSegCurvetoCubicRel*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGPathSegCurvetoCubicRel* imp = static_cast<SVGPathSegCurvetoCubicRel*>(castedThis->impl());
    JSValue result = jsNumber(exec, imp->x1());
    return result;
}

JSValue jsSVGPathSegCurvetoCubicRelY1(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGPathSegCurvetoCubicRel* castedThis = static_cast<JSSVGPathSegCurvetoCubicRel*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGPathSegCurvetoCubicRel* imp = static_cast<SVGPathSegCurvetoCubicRel*>(castedThis->impl());
    JSValue result = jsNumber(exec, imp->y1());
    return result;
}

JSValue jsSVGPathSegCurvetoCubicRelX2(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGPathSegCurvetoCubicRel* castedThis = static_cast<JSSVGPathSegCurvetoCubicRel*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGPathSegCurvetoCubicRel* imp = static_cast<SVGPathSegCurvetoCubicRel*>(castedThis->impl());
    JSValue result = jsNumber(exec, imp->x2());
    return result;
}

JSValue jsSVGPathSegCurvetoCubicRelY2(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGPathSegCurvetoCubicRel* castedThis = static_cast<JSSVGPathSegCurvetoCubicRel*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGPathSegCurvetoCubicRel* imp = static_cast<SVGPathSegCurvetoCubicRel*>(castedThis->impl());
    JSValue result = jsNumber(exec, imp->y2());
    return result;
}

JSValue jsSVGPathSegCurvetoCubicRelConstructor(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGPathSegCurvetoCubicRel* domObject = static_cast<JSSVGPathSegCurvetoCubicRel*>(asObject(slot.slotBase()));
    return JSSVGPathSegCurvetoCubicRel::getConstructor(exec, domObject->globalObject());
}
void JSSVGPathSegCurvetoCubicRel::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSSVGPathSegCurvetoCubicRel, Base>(exec, propertyName, value, &JSSVGPathSegCurvetoCubicRelTable, this, slot);
}

void setJSSVGPathSegCurvetoCubicRelX(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGPathSegCurvetoCubicRel* castedThisObj = static_cast<JSSVGPathSegCurvetoCubicRel*>(thisObject);
    SVGPathSegCurvetoCubicRel* imp = static_cast<SVGPathSegCurvetoCubicRel*>(castedThisObj->impl());
    imp->setX(value.toFloat(exec));
    JSSVGContextCache::propagateSVGDOMChange(castedThisObj, imp->associatedAttributeName());
}

void setJSSVGPathSegCurvetoCubicRelY(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGPathSegCurvetoCubicRel* castedThisObj = static_cast<JSSVGPathSegCurvetoCubicRel*>(thisObject);
    SVGPathSegCurvetoCubicRel* imp = static_cast<SVGPathSegCurvetoCubicRel*>(castedThisObj->impl());
    imp->setY(value.toFloat(exec));
    JSSVGContextCache::propagateSVGDOMChange(castedThisObj, imp->associatedAttributeName());
}

void setJSSVGPathSegCurvetoCubicRelX1(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGPathSegCurvetoCubicRel* castedThisObj = static_cast<JSSVGPathSegCurvetoCubicRel*>(thisObject);
    SVGPathSegCurvetoCubicRel* imp = static_cast<SVGPathSegCurvetoCubicRel*>(castedThisObj->impl());
    imp->setX1(value.toFloat(exec));
    JSSVGContextCache::propagateSVGDOMChange(castedThisObj, imp->associatedAttributeName());
}

void setJSSVGPathSegCurvetoCubicRelY1(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGPathSegCurvetoCubicRel* castedThisObj = static_cast<JSSVGPathSegCurvetoCubicRel*>(thisObject);
    SVGPathSegCurvetoCubicRel* imp = static_cast<SVGPathSegCurvetoCubicRel*>(castedThisObj->impl());
    imp->setY1(value.toFloat(exec));
    JSSVGContextCache::propagateSVGDOMChange(castedThisObj, imp->associatedAttributeName());
}

void setJSSVGPathSegCurvetoCubicRelX2(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGPathSegCurvetoCubicRel* castedThisObj = static_cast<JSSVGPathSegCurvetoCubicRel*>(thisObject);
    SVGPathSegCurvetoCubicRel* imp = static_cast<SVGPathSegCurvetoCubicRel*>(castedThisObj->impl());
    imp->setX2(value.toFloat(exec));
    JSSVGContextCache::propagateSVGDOMChange(castedThisObj, imp->associatedAttributeName());
}

void setJSSVGPathSegCurvetoCubicRelY2(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGPathSegCurvetoCubicRel* castedThisObj = static_cast<JSSVGPathSegCurvetoCubicRel*>(thisObject);
    SVGPathSegCurvetoCubicRel* imp = static_cast<SVGPathSegCurvetoCubicRel*>(castedThisObj->impl());
    imp->setY2(value.toFloat(exec));
    JSSVGContextCache::propagateSVGDOMChange(castedThisObj, imp->associatedAttributeName());
}

JSValue JSSVGPathSegCurvetoCubicRel::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGPathSegCurvetoCubicRelConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(SVG)