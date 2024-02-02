#include "myscene.h"

//------------------------------------------------------------------------------------
//                            Program main entry point                              //
//------------------------------------------------------------------------------------
int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 1000;
    const int screenHeight = 1000;

    InitWindow(screenWidth, screenHeight, "basic window");

    SetTargetFPS(210);               // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {   
        MyScene* myscene = new MyScene(); // create Scene on the heap

        // Update
        // TODO: Update your variables here
        myscene->Movement(0);
        
        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();


            ClearBackground(VIOLET);
            DrawFPS(300, 300);

        EndDrawing();
        //----------------------------------------------------------------------------------
        delete myscene;
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
     if(IsKeyDown(KEY_ESCAPE))
    {
        CloseWindow();        // Close window and OpenGL context
    }     
    //--------------------------------------------------------------------------------------

    return 0;

}