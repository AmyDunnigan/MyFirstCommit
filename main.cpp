#include "raylib.h"

int main() {
    // Determine the Game Window Width and Height
    

    // Initialize the Window
    InitWindow(800, 600, "Variables");
    
    const int screenwidth = GetScreenWidth ();
    const int screenheight = GetScreenHeight ();

    // Setting the Frames Per Second
    SetTargetFPS(60);

    // The Game Loop
    while (!WindowShouldClose() /*WindowShouldClose returns true if esc is clicked and closes the window*/) {

        // Setup Canvas
        BeginDrawing();
        // Clear canvas to a specific color to avoid flicker
        ClearBackground(RAYWHITE);

        DrawText(TextFormat("Screen Width: %d", screenwidth), 10, 10, 30, BLACK);
        DrawText(TextFormat("Screen Height: %d", screenheight), 10, 40, 30, BLACK);

        // Here goes all the Game Logic

        // teardown Canvas
        EndDrawing();
    }
    CloseWindow();
    return 0;
}


