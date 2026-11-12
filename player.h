#ifndef PLAYER_H_
#define PLAYER_H_

#include "raylib.h"

#define STARTING_X 600
#define STARTING_Y 680
#define COLLISION_WIDTH 100
#define COLLISION_HEIGHT 100

typedef enum PlayerState {
    IDLE,
    JUMP,
    WALK,
    CATCH,
    DEATH,
} PlayerState;

typedef struct Player {
    int health;
    Texture2D playerTexture;
    Rectangle playerCollision;
    PlayerState playerState;
} Player;

Player CreatePlayer(void);

#endif
