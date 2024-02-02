#ifndef Player_H
#define Player_H

#include <iostream>
#include "raylib.h"


///Class Definition: Your Player class inherits from a Scene
/// @brief The Player class is the Scene implementation.
class Player // : public Scene
{
public:
	Player();
	virtual ~Player();
	virtual void update(float deltaTime);


    Rectangle player = { position.x, position.y, 40, 40 };

    Vector2 position {500.0f, 500.0f};


	
private:

};

#endif /* SCENE00_H */
