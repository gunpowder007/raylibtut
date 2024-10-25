#include "raylib.h"

int main()
{
    // Initialize the window
    InitWindow(800, 450, "My Game");

    

    // Main game loop
    while (!WindowShouldClose())
    {

       ClearBackground(YELLOW);
        EndDrawing();
    }

    // De-Initialize
    CloseWindow();
    return 0;
}