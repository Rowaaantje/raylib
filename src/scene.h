#ifndef SCENE_H
#define SCENE_H

#include <iostream>
#include "raylib.h"
#include "window.h" 
#include "myscene.h"

/// @brief The MyScene class is the Scene implementation.
class Scene 
{
public:
	Scene(); // Constructor of the Scene
	virtual ~Scene(); // Destructor of the Scene
    void update(float deltaTime);


private:
    Window* _window;
    // Scene* _myscene;

};

#endif /* SCENE_H */

