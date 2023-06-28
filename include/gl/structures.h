#ifndef GL_STRUCTURES_HEADER_FILE
#define GL_STRUCTURES_HEADER_FILE

struct Render
{
  i32         width;
  i32         height;
  char        name[10];
};

struct Camera
{
  float x;
  float y;
  float z;
  float rotX;
  float rotY;
  float rotZ;
};

struct KeyMap
{
  u8 pause;
  u8 up;
  u8 down;
  u8 left;
  u8 right;
  u8 transform;
};

#endif

