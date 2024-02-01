#include "window.h"

Window::Window() 
{   
    //constructor   
    DrawWindow();
}

Window::~Window() 
{
	// deconstruct and delete the Tree
}

void Window::update(float deltaTime)
{

}

void Window::DrawWindow()
{
     // Initialization
    //--------------------------------------------------------------------------------------

    InitWindow(screenWidth, screenHeight, "basic window");

    SetTargetFPS(210);              // Set our game to run at amout frames-per-second
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

            ClearBackground(MAROON);

            // DrawText("FPS", 20, 25, 20, GREEN);

            DrawFPS(300, 300);

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    
    //--------------------------------------------------------------------------------------
    if(IsKeyDown(KEY_ESCAPE))
    {
        CloseWindow();        // Close window and OpenGL context
    }
    //--------------------------------------------------------------------------------------
}
