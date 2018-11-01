// cl /experimental:module /EHsc /MD /std:c++latest /utf-8 opengl.core1_0.chain.ixx
export module opengl.core1_0.chain;
import std.core;
namespace opengl {
export {
    // gl types aliases
    using GLbitfield = uint32_t;
    using GLboolean = bool;
    using GLbyte = int8_t;
    using GLclampd = double;
    using GLclampf = float;
    using GLdouble = double;
    using GLenum = uint32_t;
    using GLfloat = float;
    using GLint = int32_t;
    using GLshort = int16_t;
    using GLsizei = int32_t;
    using GLubyte = uint8_t;
    using GLuint = uint32_t;
    using GLushort = uint16_t;
    using GLvoid = void;

    // GLboolean constants
    constexpr GLboolean GL_FALSE    = 0;
    constexpr GLboolean GL_TRUE     = 1;

    // GLbitfields constants
    constexpr GLbitfield GL_COLOR_BUFFER_BIT = 0x00004000;

    // GLenums constants
    constexpr GLenum GL_ALPHA                       = 0x1906;
    constexpr GLenum GL_ALPHA_BIAS                  = 0x0D1D;
    constexpr GLenum GL_ALPHA_SCALE                 = 0x0D1C;
    constexpr GLenum GL_AMBIENT_AND_DIFFUSE         = 0x1602;
    constexpr GLenum GL_AMBIENT                     = 0x1200;
    constexpr GLenum GL_BACK                        = 0x0405;
    constexpr GLenum GL_BITMAP                      = 0x1A00;
    constexpr GLenum GL_BLUE                        = 0x1905;
    constexpr GLenum GL_BLUE_BIAS                   = 0x0D1B;
    constexpr GLenum GL_BLUE_SCALE                  = 0x0D1A;
    constexpr GLenum GL_CCW                         = 0x0901;
    constexpr GLenum GL_CLAMP                       = 0x2900;
    constexpr GLenum GL_CLIP_PLANE0                 = 0x3000;
    constexpr GLenum GL_CLIP_PLANE1                 = 0x3001;
    constexpr GLenum GL_CLIP_PLANE2                 = 0x3002;
    constexpr GLenum GL_CLIP_PLANE3                 = 0x3003;
    constexpr GLenum GL_CLIP_PLANE4                 = 0x3004;
    constexpr GLenum GL_CLIP_PLANE5                 = 0x3005;
    constexpr GLenum GL_COLOR_INDEX                 = 0x1900;
    constexpr GLenum GL_COLOR_INDEXES               = 0x1603;
    constexpr GLenum GL_COLOR_MATERIAL              = 0x0B57;
    constexpr GLenum GL_CONSTANT_ATTENUATION        = 0x1207;
    constexpr GLenum GL_CULL_FACE                   = 0x0B44;
    constexpr GLenum GL_CW                          = 0x0900;
    constexpr GLenum GL_DEPTH_BIAS                  = 0x0D1F;
    constexpr GLenum GL_DEPTH_COMPONENT             = 0x1902;
    constexpr GLenum GL_DEPTH_SCALE                 = 0x0D1E;
    constexpr GLenum GL_DIFFUSE                     = 0x1201;
    constexpr GLenum GL_EMISSION                    = 0x1600;
    constexpr GLenum GL_EYE_LINEAR                  = 0x2400;
    constexpr GLenum GL_EYE_PLANE                   = 0x2502;
    constexpr GLenum GL_FILL                        = 0x1B02;
    constexpr GLenum GL_FLAT                        = 0x1D00;
    constexpr GLenum GL_FRONT                       = 0x0404;
    constexpr GLenum GL_FRONT_AND_BACK              = 0x0408;
    constexpr GLenum GL_GREEN                       = 0x1904;
    constexpr GLenum GL_GREEN_BIAS                  = 0x0D19;
    constexpr GLenum GL_GREEN_SCALE                 = 0x0D18;
    constexpr GLenum GL_INDEX_SHIFT                 = 0x0D12;
    constexpr GLenum GL_INDEX_OFFSET                = 0x0D13;
    constexpr GLenum GL_INVALID_ENUM                = 0x0500;
    constexpr GLenum GL_INVALID_OPERATION           = 0x0502;
    constexpr GLenum GL_INVALID_VALUE               = 0x0501;
    constexpr GLenum GL_LIGHT0                      = 0x4000;
    constexpr GLenum GL_LIGHT1                      = 0x4001;
    constexpr GLenum GL_LIGHT2                      = 0x4002;
    constexpr GLenum GL_LIGHT3                      = 0x4003;
    constexpr GLenum GL_LIGHT4                      = 0x4004;
    constexpr GLenum GL_LIGHT5                      = 0x4005;
    constexpr GLenum GL_LIGHT6                      = 0x4006;
    constexpr GLenum GL_LIGHT7                      = 0x4007;
    constexpr GLenum GL_LIGHTING                    = 0x0B50;
    constexpr GLenum GL_LIGHT_MODEL_AMBIENT         = 0x0B53;
    constexpr GLenum GL_LIGHT_MODEL_LOCAL_VIEWER    = 0x0B51;
    constexpr GLenum GL_LIGHT_MODEL_TWO_SIDE        = 0x0B52;
    constexpr GLenum GL_LINEAR_ATTENUATION          = 0x1208;
    constexpr GLenum GL_LINE                        = 0x1B01;
    constexpr GLenum GL_LINEAR                      = 0x2601;
    constexpr GLenum GL_LINES                       = 0x0001;
    constexpr GLenum GL_LINE_LOOP                   = 0x0002;
    constexpr GLenum GL_LINE_STIPPLE                = 0x0B24;
    constexpr GLenum GL_LINE_STRIP                  = 0x0003;
    constexpr GLenum GL_LUMINANCE                   = 0x1909;
    constexpr GLenum GL_LUMINANCE_ALPHA             = 0x190A;
    constexpr GLenum GL_MAP_COLOR                   = 0x0D10;
    constexpr GLenum GL_MAP_STENCIL                 = 0x0D11;
    constexpr GLenum GL_MODELVIEW                   = 0x1700;
    constexpr GLenum GL_NEAREST                     = 0x2600;
    constexpr GLenum GL_NORMALIZE                   = 0x0BA1;
    constexpr GLenum GL_NO_ERROR                    = 0;
    constexpr GLenum GL_OBJECT_LINEAR               = 0x2401;
    constexpr GLenum GL_OBJECT_PLANE                = 0x2501;
    constexpr GLenum GL_OUT_OF_MEMORY               = 0x0505;
    constexpr GLenum GL_PIXEL_MAP_A_TO_A            = 0x0C79;
    constexpr GLenum GL_PIXEL_MAP_B_TO_B            = 0x0C78;
    constexpr GLenum GL_PIXEL_MAP_G_TO_G            = 0x0C77;
    constexpr GLenum GL_PIXEL_MAP_I_TO_A            = 0x0C75;
    constexpr GLenum GL_PIXEL_MAP_I_TO_B            = 0x0C74;
    constexpr GLenum GL_PIXEL_MAP_I_TO_G            = 0x0C73;
    constexpr GLenum GL_PIXEL_MAP_I_TO_I            = 0x0C70;
    constexpr GLenum GL_PIXEL_MAP_I_TO_R            = 0x0C72;
    constexpr GLenum GL_PIXEL_MAP_R_TO_R            = 0x0C76;
    constexpr GLenum GL_PIXEL_MAP_S_TO_S            = 0x0C71;
    constexpr GLenum GL_POINT                       = 0x1B00;
    constexpr GLenum GL_POINTS                      = 0x0000;
    constexpr GLenum GL_POINT_SMOOTH                = 0x0B10;
    constexpr GLenum GL_POLYGON                     = 0x0009;
    constexpr GLenum GL_POLYGON_SMOOTH              = 0x0B41;
    constexpr GLenum GL_POLYGON_STIPPLE             = 0x0B42;
    constexpr GLenum GL_POSITION                    = 0x1203;
    constexpr GLenum GL_PROJECTION                  = 0x1701;
    constexpr GLenum GL_QUADRATIC_ATTENUATION       = 0x1209;
    constexpr GLenum GL_QUADS                       = 0x0007;
    constexpr GLenum GL_QUAD_STRIP                  = 0x0008;
    constexpr GLenum GL_REPEAT                      = 0x2901;
    constexpr GLenum GL_RGB                         = 0x1907;
    constexpr GLenum GL_RGBA                        = 0x1908;
    constexpr GLenum GL_RED                         = 0x1903;
    constexpr GLenum GL_RED_BIAS                    = 0x0D15;
    constexpr GLenum GL_RED_SCALE                   = 0x0D14;
    constexpr GLenum GL_SHININESS                   = 0x1601;
    constexpr GLenum GL_SMOOTH                      = 0x1D01;
    constexpr GLenum GL_SPECULAR                    = 0x1202;
    constexpr GLenum GL_SPHERE_MAP                  = 0x2402;
    constexpr GLenum GL_SPOT_CUTOFF                 = 0x1206;
    constexpr GLenum GL_SPOT_DIRECTION              = 0x1204;
    constexpr GLenum GL_SPOT_EXPONENT               = 0x1205;
    constexpr GLenum GL_STACK_OVERFLOW              = 0x0503;
    constexpr GLenum GL_STACK_UNDERFLOW             = 0x0504;
    constexpr GLenum GL_STENCIL_INDEX               = 0x1901;
    constexpr GLenum GL_TEXTURE                     = 0x1702;
    constexpr GLenum GL_TEXTURE_1D                  = 0x0DE0;
    constexpr GLenum GL_TEXTURE_2D                  = 0x0DE1;
    constexpr GLenum GL_TEXTURE_BORDER_COLOR        = 0x1004;
    constexpr GLenum GL_TEXTURE_GEN_MODE            = 0x2500;
    constexpr GLenum GL_TEXTURE_GEN_Q               = 0x0C63;
    constexpr GLenum GL_TEXTURE_GEN_R               = 0x0C62;
    constexpr GLenum GL_TEXTURE_GEN_S               = 0x0C60;
    constexpr GLenum GL_TEXTURE_GEN_T               = 0x0C61;
    constexpr GLenum GL_TEXTURE_MAG_FILTER          = 0x2800;
    constexpr GLenum GL_TEXTURE_MIN_FILTER          = 0x2801;
    constexpr GLenum GL_TEXTURE_WRAP_S              = 0x2802;
    constexpr GLenum GL_TEXTURE_WRAP_T              = 0x2803;
    constexpr GLenum GL_TRIANGLES                   = 0x0004;
    constexpr GLenum GL_TRIANGLE_FAN                = 0x0006;
    constexpr GLenum GL_TRIANGLE_STRIP              = 0x0005;
    constexpr GLenum GL_UNPACK_ALIGNMENT            = 0x0CF5;
    constexpr GLenum GL_UNPACK_LSB_FIRST            = 0x0CF1;
    constexpr GLenum GL_UNPACK_ROW_LENGTH           = 0x0CF2;
    constexpr GLenum GL_UNPACK_SKIP_PIXELS          = 0x0CF4;
    constexpr GLenum GL_UNPACK_SKIP_ROWS            = 0x0CF3;
    constexpr GLenum GL_UNPACK_SWAP_BYTES           = 0x0CF0;
}

namespace C {
extern "C" {
    void    glBegin(GLenum mode);
    void    glBitmap(GLsizei w, GLsizei h, GLfloat xbo, GLfloat ybo, GLfloat xbi, GLfloat ybi, const GLubyte* data);
    void    glClear(GLbitfield buf);
    void    glClearColor(GLclampf r, GLclampf g, GLclampf b, GLclampf a);
    void    glClipPlane(GLenum p, const GLdouble* eqn);
    void    glColorMaterial(GLenum face, GLenum mode);
    // TODO
    void    glColor4d(GLdouble r, GLdouble g, GLdouble b, GLdouble a);
    void    glColor4dv(const GLdouble* v);

    void    glCullFace(GLenum mode);
    void    glDepthRange(GLclampd n, GLclampd f);
    void    glDisable(GLenum target);
    void    glDrawPixels(GLsizei width, GLsizei height, GLenum format, GLenum type, const void* data);
    void    glEdgeFlag(GLboolean flag);
    void    glEdgeFlagv(const GLboolean* flag);
    void    glEnable(GLenum target);
    void    glEnd();
    void    glFlush();
    void    glFogf(GLenum pname, GLfloat param);
    void    glFogfv(GLenum pname, const GLfloat* params);
    void    glFogi(GLenum pname, GLint param);
    void    glFogiv(GLenum pname, const GLint* params);
    void    glFrontFace(GLenum dir);
    void    glFrustum(GLdouble l, GLdouble r, GLdouble b, GLdouble t, GLdouble n, GLdouble f);
    GLenum  glGetError();
    // TODO
    void    glIndexd(GLdouble index);
    void    glIndexdv(const GLdouble* index);
    void    glLightModelf(GLenum pname, GLfloat param);
    void    glLightModelfv(GLenum pname, const GLfloat* params);
    void    glLightModeli(GLenum pname, GLint param);
    void    glLightModeliv(GLenum pname, const GLint* params);
    void    glLighti(GLenum light, GLenum pname, GLint param);
    void    glLightiv(GLenum light, GLenum pname, const GLint* params);
    void    glLightf(GLenum light, GLenum pname, GLfloat param);
    void    glLightfv(GLenum light, GLenum pname, const GLfloat* params);
    void    glLineStipple(GLint factor, GLushort pattern);
    void    glLineWidth(GLfloat width);
    void    glLoadIdentity();
    void    glLoadMatrixd(const GLdouble* m);
    void    glLoadMatrixf(const GLfloat* m);
    void    glMaterialf(GLenum face, GLenum pname, GLfloat param);
    void    glMaterialfv(GLenum face, GLenum pname, const GLfloat* params);
    void    glMateriali(GLenum face, GLenum pname, GLint param);
    void    glMaterialiv(GLenum face, GLenum pname, const GLint* params);
    void    glMatrixMode(GLenum mode);
    void    glMultMatrixd(const GLdouble* m);
    void    glMultMatrixf(const GLfloat* m);

    // TODO
    void    glNornal3d(GLdouble x, GLdouble y, GLdouble z);
    void    glNormal3dv(const GLdouble* v);

    void    glOrtho(GLdouble l, GLdouble r, GLdouble b, GLdouble t, GLdouble n, GLdouble f);
    void    glPixelMapuiv(GLenum map, GLsizei size, const GLuint* values);
    void    glPixelMapusv(GLenum map, GLsizei size, const GLushort* values);
    void    glPixelStoref(GLenum pname, GLfloat param);
    void    glPixelStorei(GLenum pname, GLint param);
    void    glPixelTransferf(GLenum param, GLfloat value);
    void    glPixelTransferi(GLenum param, GLfloat value);
    void    glPixelZoom(GLfloat zx, GLfloat zy);
    void    glPointSize(GLfloat size);
    void    glPolygonMode(GLenum face, GLenum mode);
    void    glPolygonStipple(const GLubyte* pattern);
    void    glPopMatrix();
    void    glPushMatrix();
    // TODO
    void    glRasterPos4d(GLdouble coords);
    void    glRasterPos4dv(const GLdouble* coords);

    // TODO
    void    glRectd(GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2);
    void    glRectdv(const GLdouble* v1, const GLdouble* v2);

    void    glRotated(GLdouble degrees, GLdouble x, GLdouble y, GLdouble z);
    void    glRotatef(GLfloat degrees, GLfloat x, GLfloat y, GLfloat z);

    void    glScaled(GLdouble x, GLdouble y, GLdouble z);
    void    glScalef(GLfloat x, GLfloat y, GLfloat z);
    void    glShadeModel(GLenum mode);
    // TODO
    void    glTexCoord4d(GLdouble s, GLdouble t, GLdouble r, GLdouble q);
    void    glTexCoord4dv(const GLdouble* v);

    void    glTexEnvf(GLenum target, GLenum pname, GLfloat param);
    void    glTexEnvfv(GLenum target, GLenum pname, const GLfloat* params);
    void    glTexEnvi(GLenum target, GLenum pname, GLint param);
    void    glTexEnviv(GLenum target, GLenum pname, const GLint* params);
    // TODO
    void    glTexGend(GLenum coord, GLenum pname, GLenum param);
    void    glTexGendv(GLenum coord, GLenum pname, const GLenum* params);

    void    glTexImage1D(GLenum target, GLint level, GLint components, GLsizei width, GLint border, GLenum format, GLenum type, GLvoid* data);
    void    glTexImage2D(GLenum target, GLint level, GLint components, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, GLvoid* data);
    void    glTexParameterf(GLenum target, GLenum pname, GLfloat param);
    void    glTexParameterfv(GLenum target, GLenum pname, GLfloat* params);
    void    glTexParameteri(GLenum target, GLenum pname, GLint param);
    void    glTexParameteriv(GLenum target, GLenum pname, GLint* params);
    void    glTranslated(GLdouble x, GLdouble y, GLdouble z);
    void    glTranslatef(GLfloat x, GLfloat y, GLfloat z);
    // TODO
    void    glVertex4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w);
    void    glVertex4dv(const GLdouble* v);

    void    glViewport(GLint x, GLint y, GLsizei w, GLsizei h);

}}

export {
    auto glBegin = C::glBegin;
    auto glEnd = C::glEnd;
    auto glFlush = C::glFlush;
    auto glClearColor = C::glClearColor;
    auto glClear = C::glClear;
    auto glPointSize = C::glPointSize;
    auto glColor4d = C::glColor4d;
    auto glVertex4d = C::glVertex4d;
    auto glViewport = C::glViewport;
}}
