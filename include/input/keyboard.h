#ifndef INPUT_KEYBOARD_HEADER_FILE
#define INPUT_KEYBOARD_HEADER_FILE

void configureKeys(void);
int returnKey(u8 key);
void keyPressed(u8 key, i32 x, i32 y);
void keyReleased(u8 key, i32 x, i32 y);
void handleKeys(struct Camera *camera);

#endif

