#include "types.h"
#include "object.h"

#include "gl/main.h"

bool bDrawWireframe = false;

void drawWireframe(void)
{
  bDrawWireframe = !bDrawWireframe;
}

void createMeshPlane(struct Object3 *object)
{
  u16 i, ii;
  float *colour = object->colour;
  float alpha = object->alpha;

  for(i=0; i<MAX_VERTEX3_SIZE; i++)
  {
    switch(bDrawWireframe)
    {
      case 0:
      {
        glBegin(GL_TRIANGLES);
        glColor4f(colour[0], colour[1], colour[2], alpha);
        break;
      }
      default:
      {
        glBegin(GL_LINE_LOOP);
        glColor4f(0.1f, 0.8f, 0.1f, 1.0f);
        break;
      }
    }

    for(ii=0; ii<3; ii++)
    {
      float posX = object->vec.pos.x+(object->mesh.vertex[i].pos[ii].x);
      float posY = object->vec.pos.y+(object->mesh.vertex[i].pos[ii].y);
      float posZ = object->vec.pos.z+(object->mesh.vertex[i].pos[ii].z);
      glVertex4f(posX, posY, posZ, alpha);
    }
    glEnd();
  }
}

void createObject(u8 type, u16 id)
{
  struct Object3 object = getObjectData(type, id);

  createMeshPlane(&object);
}
