#include "myscene.h"
#include "scene.h"

Scene::Scene() 
{   
    //constructor   
	std::cout << "################ new Scene ################" << std::endl;
    _window = new Window();
}

Scene::~Scene() 
{
	// deconstruct and delete the Tree
    delete _window;
}

void Scene::update(float deltaTime)
{
    
}
