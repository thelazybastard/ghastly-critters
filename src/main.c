#include "player.h"
#include <raylib.h>

#define SCREEN_WIDTH 1280
#define SCREEN_HEIGHT 720
#define GAME_TITLE "Ghastly Critters"

int main(void) {
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, GAME_TITLE);

    // INITIALIZE

    Player player = CreatePlayer();

    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        // UPDATE

        PlayerMovement(&player);
        PlayerAnimation(&player);

        // DRAW
        BeginDrawing();

        ClearBackground(WHITE);

        DrawTexture(player.playerTexture, player.playerCollision.x,
                    player.playerCollision.y, WHITE);
        DrawRectangleRec(player.playerCollision, BLUE);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}