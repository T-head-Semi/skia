// GENERATED FILE - DO NOT EDIT.
// Generated by generate_entry_points.py using data from gl.xml.
//
// Copyright 2019 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// entry_points_gl_1_1_autogen.cpp:
//   Defines the GL 1.1 entry points.

#include "libGL/entry_points_gl_1_1_autogen.h"

#include "libANGLE/Context.h"
#include "libANGLE/Context.inl.h"
#include "libANGLE/entry_points_utils.h"
#include "libANGLE/validationEGL.h"
#include "libANGLE/validationES.h"
#include "libANGLE/validationES1.h"
#include "libANGLE/validationES2.h"
#include "libANGLE/validationES3.h"
#include "libANGLE/validationES31.h"
#include "libANGLE/validationESEXT.h"
#include "libANGLE/validationGL11_autogen.h"
#include "libGLESv2/global_state.h"

namespace gl
{
GLboolean GL_APIENTRY AreTexturesResident(GLsizei n, const GLuint *textures, GLboolean *residences)
{
    EVENT("(GLsizei n = %d, const GLuint *textures = 0x%016" PRIxPTR
          ", GLboolean *residences = 0x%016" PRIxPTR ")",
          n, (uintptr_t)textures, (uintptr_t)residences);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        ANGLE_CAPTURE(AreTexturesResident, context, n, textures, residences);
        if (context->skipValidation() ||
            ValidateAreTexturesResident(context, n, textures, residences))
        {
            return context->areTexturesResident(n, textures, residences);
        }
    }

    return GetDefaultReturnValue<EntryPoint::AreTexturesResident, GLboolean>();
}

void GL_APIENTRY ArrayElement(GLint i)
{
    EVENT("(GLint i = %d)", i);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        ANGLE_CAPTURE(ArrayElement, context, i);
        if (context->skipValidation() || ValidateArrayElement(context, i))
        {
            context->arrayElement(i);
        }
    }
}

void GL_APIENTRY BindTexture(GLenum target, GLuint texture)
{
    EVENT("(GLenum target = 0x%X, GLuint texture = %u)", target, texture);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        TextureType targetPacked = FromGLenum<TextureType>(target);
        ANGLE_CAPTURE(BindTexture, context, targetPacked, texture);
        if (context->skipValidation() || ValidateBindTexture(context, targetPacked, texture))
        {
            context->bindTexture(targetPacked, texture);
        }
    }
}

void GL_APIENTRY ColorPointer(GLint size, GLenum type, GLsizei stride, const void *pointer)
{
    EVENT(
        "(GLint size = %d, GLenum type = 0x%X, GLsizei stride = %d, const void *pointer = "
        "0x%016" PRIxPTR ")",
        size, type, stride, (uintptr_t)pointer);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        VertexAttribType typePacked = FromGLenum<VertexAttribType>(type);
        ANGLE_CAPTURE(ColorPointer, context, size, typePacked, stride, pointer);
        if (context->skipValidation() ||
            ValidateColorPointer(context, size, typePacked, stride, pointer))
        {
            context->colorPointer(size, typePacked, stride, pointer);
        }
    }
}

void GL_APIENTRY CopyTexImage1D(GLenum target,
                                GLint level,
                                GLenum internalformat,
                                GLint x,
                                GLint y,
                                GLsizei width,
                                GLint border)
{
    EVENT(
        "(GLenum target = 0x%X, GLint level = %d, GLenum internalformat = 0x%X, GLint x = %d, "
        "GLint y = %d, GLsizei width = %d, GLint border = %d)",
        target, level, internalformat, x, y, width, border);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        ANGLE_CAPTURE(CopyTexImage1D, context, target, level, internalformat, x, y, width, border);
        if (context->skipValidation() ||
            ValidateCopyTexImage1D(context, target, level, internalformat, x, y, width, border))
        {
            context->copyTexImage1D(target, level, internalformat, x, y, width, border);
        }
    }
}

void GL_APIENTRY CopyTexImage2D(GLenum target,
                                GLint level,
                                GLenum internalformat,
                                GLint x,
                                GLint y,
                                GLsizei width,
                                GLsizei height,
                                GLint border)
{
    EVENT(
        "(GLenum target = 0x%X, GLint level = %d, GLenum internalformat = 0x%X, GLint x = %d, "
        "GLint y = %d, GLsizei width = %d, GLsizei height = %d, GLint border = %d)",
        target, level, internalformat, x, y, width, height, border);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        TextureTarget targetPacked = FromGLenum<TextureTarget>(target);
        ANGLE_CAPTURE(CopyTexImage2D, context, targetPacked, level, internalformat, x, y, width,
                      height, border);
        if (context->skipValidation() ||
            ValidateCopyTexImage2D(context, targetPacked, level, internalformat, x, y, width,
                                   height, border))
        {
            context->copyTexImage2D(targetPacked, level, internalformat, x, y, width, height,
                                    border);
        }
    }
}

void GL_APIENTRY
CopyTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
    EVENT(
        "(GLenum target = 0x%X, GLint level = %d, GLint xoffset = %d, GLint x = %d, GLint y = %d, "
        "GLsizei width = %d)",
        target, level, xoffset, x, y, width);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        ANGLE_CAPTURE(CopyTexSubImage1D, context, target, level, xoffset, x, y, width);
        if (context->skipValidation() ||
            ValidateCopyTexSubImage1D(context, target, level, xoffset, x, y, width))
        {
            context->copyTexSubImage1D(target, level, xoffset, x, y, width);
        }
    }
}

void GL_APIENTRY CopyTexSubImage2D(GLenum target,
                                   GLint level,
                                   GLint xoffset,
                                   GLint yoffset,
                                   GLint x,
                                   GLint y,
                                   GLsizei width,
                                   GLsizei height)
{
    EVENT(
        "(GLenum target = 0x%X, GLint level = %d, GLint xoffset = %d, GLint yoffset = %d, GLint x "
        "= %d, GLint y = %d, GLsizei width = %d, GLsizei height = %d)",
        target, level, xoffset, yoffset, x, y, width, height);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        TextureTarget targetPacked = FromGLenum<TextureTarget>(target);
        ANGLE_CAPTURE(CopyTexSubImage2D, context, targetPacked, level, xoffset, yoffset, x, y,
                      width, height);
        if (context->skipValidation() ||
            ValidateCopyTexSubImage2D(context, targetPacked, level, xoffset, yoffset, x, y, width,
                                      height))
        {
            context->copyTexSubImage2D(targetPacked, level, xoffset, yoffset, x, y, width, height);
        }
    }
}

void GL_APIENTRY DeleteTextures(GLsizei n, const GLuint *textures)
{
    EVENT("(GLsizei n = %d, const GLuint *textures = 0x%016" PRIxPTR ")", n, (uintptr_t)textures);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        ANGLE_CAPTURE(DeleteTextures, context, n, textures);
        if (context->skipValidation() || ValidateDeleteTextures(context, n, textures))
        {
            context->deleteTextures(n, textures);
        }
    }
}

void GL_APIENTRY DisableClientState(GLenum array)
{
    EVENT("(GLenum array = 0x%X)", array);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        ClientVertexArrayType arrayPacked = FromGLenum<ClientVertexArrayType>(array);
        ANGLE_CAPTURE(DisableClientState, context, arrayPacked);
        if (context->skipValidation() || ValidateDisableClientState(context, arrayPacked))
        {
            context->disableClientState(arrayPacked);
        }
    }
}

void GL_APIENTRY DrawArrays(GLenum mode, GLint first, GLsizei count)
{
    EVENT("(GLenum mode = 0x%X, GLint first = %d, GLsizei count = %d)", mode, first, count);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        PrimitiveMode modePacked = FromGLenum<PrimitiveMode>(mode);
        ANGLE_CAPTURE(DrawArrays, context, modePacked, first, count);
        if (context->skipValidation() || ValidateDrawArrays(context, modePacked, first, count))
        {
            context->drawArrays(modePacked, first, count);
        }
    }
}

void GL_APIENTRY DrawElements(GLenum mode, GLsizei count, GLenum type, const void *indices)
{
    EVENT(
        "(GLenum mode = 0x%X, GLsizei count = %d, GLenum type = 0x%X, const void *indices = "
        "0x%016" PRIxPTR ")",
        mode, count, type, (uintptr_t)indices);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        PrimitiveMode modePacked    = FromGLenum<PrimitiveMode>(mode);
        DrawElementsType typePacked = FromGLenum<DrawElementsType>(type);
        ANGLE_CAPTURE(DrawElements, context, modePacked, count, typePacked, indices);
        if (context->skipValidation() ||
            ValidateDrawElements(context, modePacked, count, typePacked, indices))
        {
            context->drawElements(modePacked, count, typePacked, indices);
        }
    }
}

void GL_APIENTRY EdgeFlagPointer(GLsizei stride, const void *pointer)
{
    EVENT("(GLsizei stride = %d, const void *pointer = 0x%016" PRIxPTR ")", stride,
          (uintptr_t)pointer);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        ANGLE_CAPTURE(EdgeFlagPointer, context, stride, pointer);
        if (context->skipValidation() || ValidateEdgeFlagPointer(context, stride, pointer))
        {
            context->edgeFlagPointer(stride, pointer);
        }
    }
}

void GL_APIENTRY EnableClientState(GLenum array)
{
    EVENT("(GLenum array = 0x%X)", array);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        ClientVertexArrayType arrayPacked = FromGLenum<ClientVertexArrayType>(array);
        ANGLE_CAPTURE(EnableClientState, context, arrayPacked);
        if (context->skipValidation() || ValidateEnableClientState(context, arrayPacked))
        {
            context->enableClientState(arrayPacked);
        }
    }
}

void GL_APIENTRY GenTextures(GLsizei n, GLuint *textures)
{
    EVENT("(GLsizei n = %d, GLuint *textures = 0x%016" PRIxPTR ")", n, (uintptr_t)textures);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        ANGLE_CAPTURE(GenTextures, context, n, textures);
        if (context->skipValidation() || ValidateGenTextures(context, n, textures))
        {
            context->genTextures(n, textures);
        }
    }
}

void GL_APIENTRY GetPointerv(GLenum pname, void **params)
{
    EVENT("(GLenum pname = 0x%X, void **params = 0x%016" PRIxPTR ")", pname, (uintptr_t)params);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        ANGLE_CAPTURE(GetPointerv, context, pname, params);
        if (context->skipValidation() || ValidateGetPointerv(context, pname, params))
        {
            context->getPointerv(pname, params);
        }
    }
}

void GL_APIENTRY IndexPointer(GLenum type, GLsizei stride, const void *pointer)
{
    EVENT("(GLenum type = 0x%X, GLsizei stride = %d, const void *pointer = 0x%016" PRIxPTR ")",
          type, stride, (uintptr_t)pointer);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        ANGLE_CAPTURE(IndexPointer, context, type, stride, pointer);
        if (context->skipValidation() || ValidateIndexPointer(context, type, stride, pointer))
        {
            context->indexPointer(type, stride, pointer);
        }
    }
}

void GL_APIENTRY Indexub(GLubyte c)
{
    EVENT("(GLubyte c = %d)", c);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        ANGLE_CAPTURE(Indexub, context, c);
        if (context->skipValidation() || ValidateIndexub(context, c))
        {
            context->indexub(c);
        }
    }
}

void GL_APIENTRY Indexubv(const GLubyte *c)
{
    EVENT("(const GLubyte *c = 0x%016" PRIxPTR ")", (uintptr_t)c);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        ANGLE_CAPTURE(Indexubv, context, c);
        if (context->skipValidation() || ValidateIndexubv(context, c))
        {
            context->indexubv(c);
        }
    }
}

void GL_APIENTRY InterleavedArrays(GLenum format, GLsizei stride, const void *pointer)
{
    EVENT("(GLenum format = 0x%X, GLsizei stride = %d, const void *pointer = 0x%016" PRIxPTR ")",
          format, stride, (uintptr_t)pointer);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        ANGLE_CAPTURE(InterleavedArrays, context, format, stride, pointer);
        if (context->skipValidation() ||
            ValidateInterleavedArrays(context, format, stride, pointer))
        {
            context->interleavedArrays(format, stride, pointer);
        }
    }
}

GLboolean GL_APIENTRY IsTexture(GLuint texture)
{
    EVENT("(GLuint texture = %u)", texture);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        ANGLE_CAPTURE(IsTexture, context, texture);
        if (context->skipValidation() || ValidateIsTexture(context, texture))
        {
            return context->isTexture(texture);
        }
    }

    return GetDefaultReturnValue<EntryPoint::IsTexture, GLboolean>();
}

void GL_APIENTRY NormalPointer(GLenum type, GLsizei stride, const void *pointer)
{
    EVENT("(GLenum type = 0x%X, GLsizei stride = %d, const void *pointer = 0x%016" PRIxPTR ")",
          type, stride, (uintptr_t)pointer);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        VertexAttribType typePacked = FromGLenum<VertexAttribType>(type);
        ANGLE_CAPTURE(NormalPointer, context, typePacked, stride, pointer);
        if (context->skipValidation() ||
            ValidateNormalPointer(context, typePacked, stride, pointer))
        {
            context->normalPointer(typePacked, stride, pointer);
        }
    }
}

void GL_APIENTRY PolygonOffset(GLfloat factor, GLfloat units)
{
    EVENT("(GLfloat factor = %f, GLfloat units = %f)", factor, units);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        ANGLE_CAPTURE(PolygonOffset, context, factor, units);
        if (context->skipValidation() || ValidatePolygonOffset(context, factor, units))
        {
            context->polygonOffset(factor, units);
        }
    }
}

void GL_APIENTRY PopClientAttrib()
{
    EVENT("()");

    Context *context = GetValidGlobalContext();
    if (context)
    {
        ANGLE_CAPTURE(PopClientAttrib, context);
        if (context->skipValidation() || ValidatePopClientAttrib(context))
        {
            context->popClientAttrib();
        }
    }
}

void GL_APIENTRY PrioritizeTextures(GLsizei n, const GLuint *textures, const GLfloat *priorities)
{
    EVENT("(GLsizei n = %d, const GLuint *textures = 0x%016" PRIxPTR
          ", const GLfloat *priorities = 0x%016" PRIxPTR ")",
          n, (uintptr_t)textures, (uintptr_t)priorities);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        ANGLE_CAPTURE(PrioritizeTextures, context, n, textures, priorities);
        if (context->skipValidation() ||
            ValidatePrioritizeTextures(context, n, textures, priorities))
        {
            context->prioritizeTextures(n, textures, priorities);
        }
    }
}

void GL_APIENTRY PushClientAttrib(GLbitfield mask)
{
    EVENT("(GLbitfield mask = 0x%X)", mask);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        ANGLE_CAPTURE(PushClientAttrib, context, mask);
        if (context->skipValidation() || ValidatePushClientAttrib(context, mask))
        {
            context->pushClientAttrib(mask);
        }
    }
}

void GL_APIENTRY TexCoordPointer(GLint size, GLenum type, GLsizei stride, const void *pointer)
{
    EVENT(
        "(GLint size = %d, GLenum type = 0x%X, GLsizei stride = %d, const void *pointer = "
        "0x%016" PRIxPTR ")",
        size, type, stride, (uintptr_t)pointer);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        VertexAttribType typePacked = FromGLenum<VertexAttribType>(type);
        ANGLE_CAPTURE(TexCoordPointer, context, size, typePacked, stride, pointer);
        if (context->skipValidation() ||
            ValidateTexCoordPointer(context, size, typePacked, stride, pointer))
        {
            context->texCoordPointer(size, typePacked, stride, pointer);
        }
    }
}

void GL_APIENTRY TexSubImage1D(GLenum target,
                               GLint level,
                               GLint xoffset,
                               GLsizei width,
                               GLenum format,
                               GLenum type,
                               const void *pixels)
{
    EVENT(
        "(GLenum target = 0x%X, GLint level = %d, GLint xoffset = %d, GLsizei width = %d, GLenum "
        "format = 0x%X, GLenum type = 0x%X, const void *pixels = 0x%016" PRIxPTR ")",
        target, level, xoffset, width, format, type, (uintptr_t)pixels);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        ANGLE_CAPTURE(TexSubImage1D, context, target, level, xoffset, width, format, type, pixels);
        if (context->skipValidation() ||
            ValidateTexSubImage1D(context, target, level, xoffset, width, format, type, pixels))
        {
            context->texSubImage1D(target, level, xoffset, width, format, type, pixels);
        }
    }
}

void GL_APIENTRY TexSubImage2D(GLenum target,
                               GLint level,
                               GLint xoffset,
                               GLint yoffset,
                               GLsizei width,
                               GLsizei height,
                               GLenum format,
                               GLenum type,
                               const void *pixels)
{
    EVENT(
        "(GLenum target = 0x%X, GLint level = %d, GLint xoffset = %d, GLint yoffset = %d, GLsizei "
        "width = %d, GLsizei height = %d, GLenum format = 0x%X, GLenum type = 0x%X, const void "
        "*pixels = 0x%016" PRIxPTR ")",
        target, level, xoffset, yoffset, width, height, format, type, (uintptr_t)pixels);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        TextureTarget targetPacked = FromGLenum<TextureTarget>(target);
        ANGLE_CAPTURE(TexSubImage2D, context, targetPacked, level, xoffset, yoffset, width, height,
                      format, type, pixels);
        if (context->skipValidation() ||
            ValidateTexSubImage2D(context, targetPacked, level, xoffset, yoffset, width, height,
                                  format, type, pixels))
        {
            context->texSubImage2D(targetPacked, level, xoffset, yoffset, width, height, format,
                                   type, pixels);
        }
    }
}

void GL_APIENTRY VertexPointer(GLint size, GLenum type, GLsizei stride, const void *pointer)
{
    EVENT(
        "(GLint size = %d, GLenum type = 0x%X, GLsizei stride = %d, const void *pointer = "
        "0x%016" PRIxPTR ")",
        size, type, stride, (uintptr_t)pointer);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        VertexAttribType typePacked = FromGLenum<VertexAttribType>(type);
        ANGLE_CAPTURE(VertexPointer, context, size, typePacked, stride, pointer);
        if (context->skipValidation() ||
            ValidateVertexPointer(context, size, typePacked, stride, pointer))
        {
            context->vertexPointer(size, typePacked, stride, pointer);
        }
    }
}
}  // namespace gl
