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

#ifndef JSCanvasRenderingContext2D_h
#define JSCanvasRenderingContext2D_h

#include "JSCanvasRenderingContext.h"

namespace WebCore {

class CanvasRenderingContext2D;

class JSCanvasRenderingContext2D : public JSCanvasRenderingContext {
    typedef JSCanvasRenderingContext Base;
public:
    JSCanvasRenderingContext2D(NonNullPassRefPtr<JSC::Structure>, JSDOMGlobalObject*, PassRefPtr<CanvasRenderingContext2D>);
    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertyDescriptor&);
    virtual void put(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::JSValue, JSC::PutPropertySlot&);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;

    static PassRefPtr<JSC::Structure> createStructure(JSC::JSValue prototype)
    {
        return JSC::Structure::create(prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount);
    }

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);

    // Custom attributes
    JSC::JSValue strokeStyle(JSC::ExecState*) const;
    void setStrokeStyle(JSC::ExecState*, JSC::JSValue);
    JSC::JSValue fillStyle(JSC::ExecState*) const;
    void setFillStyle(JSC::ExecState*, JSC::JSValue);

    // Custom functions
    JSC::JSValue fillText(JSC::ExecState*, const JSC::ArgList&);
    JSC::JSValue strokeText(JSC::ExecState*, const JSC::ArgList&);
    JSC::JSValue setStrokeColor(JSC::ExecState*, const JSC::ArgList&);
    JSC::JSValue setFillColor(JSC::ExecState*, const JSC::ArgList&);
    JSC::JSValue strokeRect(JSC::ExecState*, const JSC::ArgList&);
    JSC::JSValue drawImage(JSC::ExecState*, const JSC::ArgList&);
    JSC::JSValue drawImageFromRect(JSC::ExecState*, const JSC::ArgList&);
    JSC::JSValue setShadow(JSC::ExecState*, const JSC::ArgList&);
    JSC::JSValue createPattern(JSC::ExecState*, const JSC::ArgList&);
    JSC::JSValue putImageData(JSC::ExecState*, const JSC::ArgList&);
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};


class JSCanvasRenderingContext2DPrototype : public JSC::JSObject {
    typedef JSC::JSObject Base;
public:
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    static PassRefPtr<JSC::Structure> createStructure(JSC::JSValue prototype)
    {
        return JSC::Structure::create(prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount);
    }
    JSCanvasRenderingContext2DPrototype(NonNullPassRefPtr<JSC::Structure> structure) : JSC::JSObject(structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

// Functions

JSC::JSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionSave(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionRestore(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionScale(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionRotate(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionTranslate(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionTransform(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionSetTransform(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionCreateLinearGradient(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionCreateRadialGradient(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionClearRect(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionFillRect(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionBeginPath(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionClosePath(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionMoveTo(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionLineTo(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionQuadraticCurveTo(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionBezierCurveTo(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionArcTo(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionRect(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionArc(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionFill(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionStroke(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionClip(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionIsPointInPath(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionFillText(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionStrokeText(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionMeasureText(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionSetAlpha(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionSetCompositeOperation(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionSetLineWidth(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionSetLineCap(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionSetLineJoin(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionSetMiterLimit(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionClearShadow(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionSetStrokeColor(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionSetFillColor(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionStrokeRect(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionDrawImage(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionDrawImageFromRect(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionSetShadow(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionCreatePattern(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionCreateImageData(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionGetImageData(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionPutImageData(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
// Attributes

JSC::JSValue jsCanvasRenderingContext2DGlobalAlpha(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSCanvasRenderingContext2DGlobalAlpha(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsCanvasRenderingContext2DGlobalCompositeOperation(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSCanvasRenderingContext2DGlobalCompositeOperation(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsCanvasRenderingContext2DLineWidth(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSCanvasRenderingContext2DLineWidth(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsCanvasRenderingContext2DLineCap(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSCanvasRenderingContext2DLineCap(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsCanvasRenderingContext2DLineJoin(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSCanvasRenderingContext2DLineJoin(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsCanvasRenderingContext2DMiterLimit(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSCanvasRenderingContext2DMiterLimit(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsCanvasRenderingContext2DShadowOffsetX(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSCanvasRenderingContext2DShadowOffsetX(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsCanvasRenderingContext2DShadowOffsetY(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSCanvasRenderingContext2DShadowOffsetY(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsCanvasRenderingContext2DShadowBlur(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSCanvasRenderingContext2DShadowBlur(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsCanvasRenderingContext2DShadowColor(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSCanvasRenderingContext2DShadowColor(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsCanvasRenderingContext2DFont(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSCanvasRenderingContext2DFont(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsCanvasRenderingContext2DTextAlign(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSCanvasRenderingContext2DTextAlign(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsCanvasRenderingContext2DTextBaseline(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSCanvasRenderingContext2DTextBaseline(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsCanvasRenderingContext2DStrokeStyle(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSCanvasRenderingContext2DStrokeStyle(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsCanvasRenderingContext2DFillStyle(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSCanvasRenderingContext2DFillStyle(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsCanvasRenderingContext2DConstructor(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);

} // namespace WebCore

#endif