#include "types.h"

#include "register.h"

struct Object cube[256];
bool objectRegistration[256];

void registerObjects(void)
{
  /* Create an empty object to return in case the given object ID does not exist */
  cube[0].type = 0;
  cube[0].id = 0;
  cube[0].size = 0.0f;
  cube[0].colour[0] = 0.0f;
  cube[0].colour[1] = 0.0f;
  cube[0].colour[2] = 0.0f;
  objectRegistration[0] = true;

  /* ID: 1 - Test Cube */
  cube[1].type = CUBE;
  cube[1].id = 1;
  cube[1].size = 1.0f;
  cube[1].colour[0] = 0.2f;
  cube[1].colour[1] = 0.2f;
  cube[1].colour[2] = 0.8f;
  objectRegistration[1] = true;

  /* ID: 2 - Test Cube 2 */
  cube[2].type = CUBE;
  cube[2].id = 2;
  cube[2].size = 0.5f;
  cube[2].colour[0] = 0.3f;
  cube[2].colour[1] = 0.6f;
  cube[2].colour[2] = 0.3f;
  objectRegistration[2] = true;
}

struct Object getObjectData(u8 type, u8 id)
{
  struct Object temp = { 0, 0, 0 };

  switch(type)
  {
    case CUBE:
    {
      switch(objectRegistration[id])
      {
        case 1: return cube[id];
        default: return cube[0];
      }
      break;
    }
    default: return temp;
  }
}

