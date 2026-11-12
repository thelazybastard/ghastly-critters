#include <raylib.h>

#define SCREEN_WIDTH 1280
#define SCREEN_HEIGHT 720
#define GAME_TITLE "Ghastly Critters"

int main(void) {
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, GAME_TITLE);

    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();

        ClearBackground(WHITE);

        DrawText("Test", SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2, 50, BLACK);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}