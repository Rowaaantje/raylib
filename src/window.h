#ifndef WINDOW_H
#define WINDOW_H

#include "raylib.h"

/// @brief The MyScene class is the Scene implementation.
class Window 
{
public:
	Window(); // Constructor of the Scene
	virtual ~Window();// deconstruct of the Scene
    void update(float deltaTime);

    const int screenWidth = 800;
    const int screenHeight = 450;
    void DrawWindow();

private:
	
};

#endif /* WINDOW_H */


