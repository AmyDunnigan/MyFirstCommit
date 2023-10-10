#include "raylib.h"

int main() {
    // Determin the Game Window Width and Height
    const int screenWidth = 800;
    const int screenHeight = 500;

    // Initialize the Window
    InitWindow(screenWidth, screenHeight, "My not very fun Game");
    
    int myInteger = 5;
    float myFloat = 3.14f;
    bool isProgrammingFun = true;
    char myCharacter = 'a';
    double myDouble = 2.7;

    // Setting the Frames Per Second
    SetTargetFPS(60);

    // The Game Loop
    while (!WindowShouldClose() /*WindowShouldClose returns true if esc is clicked and closes the window*/) {

        // Setup Canvas
        BeginDrawing();
        // Clear canvas to a specific color to avoid flicker
        ClearBackground(RAYWHITE);

        DrawText ("Hello, Raylib", 10,20,20,BLUE);
        DrawText(TextFormat("Integer Value: %d", myInteger), 10,40,20,BLACK);
        DrawText(TextFormat("Float Value: %f", myFloat), 10,60,20,BLACK);
        DrawText(TextFormat("Double Value: %f", myDouble), 10,80,20,BLACK);
        DrawText(TextFormat("Character Value: %c", myCharacter), 10,100,20,BLACK);

        // Here goes all the Game Logic

        // teardown Canvas
        EndDrawing();
    }
    CloseWindow();
    return 0;
}


