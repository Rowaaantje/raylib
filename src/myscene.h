#ifndef MYSCENE_H
#define MYSCENE_H


#include <fstream>
#include <sstream>

#include "raylib.h"
#include "player.h"

///Class Definition: Your MyScene class inherits from a Scene
/// @brief The MyScene class is the Scene implementation.
class MyScene // : public Scene
{
public:
	MyScene();
	virtual ~MyScene();
	virtual void update(float deltaTime);
	void Movement(float deltaTime);


	
private:
	Player* player;
};

#endif /* SCENE00_H */
