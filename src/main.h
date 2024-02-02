#ifndef MAIN_H
#define MAIN_H

#include <fstream>
#include <sstream>

class Main 
{
public:
	Main();
	virtual ~Main();
	virtual void update(float deltaTime);
	void Input(float deltaTime);


private:

};

#endif /* MAIN_H */
