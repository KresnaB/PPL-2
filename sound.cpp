#include "sound.h"

//header sound

void BGM(){
    mciSendString("open \"sound/BGM.mp3\" type mpegvideo alias mp3", NULL, 0, NULL);
    mciSendString("play mp3", NULL, 0, NULL);
}

void FallSFX(){
    mciSendString("open \"sound/Fall.mp3\" type mpegvideo alias mp3",NULL, 0, NULL);
    mciSendString("play mp3", NULL, 0, NULL);
}
