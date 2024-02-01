#include "myscene.h"


//------------------------------------------------------------------------------------
//                            Program main entry point                              //
//------------------------------------------------------------------------------------
int main(void)
{
    MyScene* myscene = new MyScene(); // create Scene on the heap

    delete myscene;

    return 0;

}