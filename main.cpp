#include "raylib.h"

int main() {
    // Determine the Game Window Width and Height
    

    // Initialize the Window
    const int screenwidth = 800;
    const int screenheight = 600;

    InitWindow(screenwidth, screenheight, "Basic Drawing Screen");
    
    // Setting the Frames Per Second
    SetTargetFPS(60);

    // The Game Loop
    while (!WindowShouldClose() /*WindowShouldClose returns true if esc is clicked and closes the window*/) {

        // Setup Canvas
        BeginDrawing();
        // Clear canvas to a specific color to avoid flicker
        ClearBackground(RAYWHITE);

        DrawRectangle (10, 10, 20, 40, GREEN);
        DrawCircle (450, 450, 200, BLUE);
        DrawLine (10, 10, 600, 600, RED);
        
        // Here goes all the Game Logic

        // teardown Canvas
        EndDrawing();
    }
    CloseWindow();
    return 0;
}


