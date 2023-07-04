#ifndef GL_RENDERER_HEADER_FILE
#define GL_RENDERER_HEADER_FILE

#include "matrix.h"

struct Renderer
{
  i16  width;
  i16  height;
  char name[10];
};

struct Camera
{
  struct Matrix3 pos;
  struct Rotation3 rot[2];
};

void configureCamera(void);
void display(void);
void reshape(i32 width, i32 height);
int initializeGL(struct Renderer window);

#endif

