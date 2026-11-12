#include "player.h"
#include "raylib.h"

Player CreatePlayer(void) {
    int playerHealth = 100;
    Texture2D playerTexture = LoadTexture("../assets/hunter.png");
    Rectangle playerCollision = {STARTING_X, STARTING_Y, COLLISION_WIDTH,
                                 COLLISION_HEIGHT};
    PlayerState playerState = IDLE;

    Player player = {
        playerHealth,
        playerTexture,
        playerCollision,
        playerState,
    };

    return player;
}

void PlayerMovement(Player *player) {
    if (IsKeyDown(KEY_A)) {
        player->playerCollision.x -= 10;
    }

    if (IsKeyDown(KEY_D)) {
        player->playerCollision.x += 10;
    }

    // TODO: ADD JUMP FUNCTIONALITY
}

void PlayerAnimation(Player *player) {
    // TODO: ADD PLAYER ANIMATIONS
    switch (player->playerState) {
    case IDLE:
    case WALK:
    case JUMP:
    case CATCH:
    case DEATH:
    default:
        break;
    }
}