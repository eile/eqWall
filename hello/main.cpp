#include <iostream>


#include "Application.h"


int main( const int argc, char** argv )
{
    Application::pApp = new Application;

    if(   Application::pApp->init(argc, argv,0) 
       && Application::pApp->run(0) 
       && Application::pApp->exit())
        return EXIT_SUCCESS;
    
    return EXIT_FAILURE;
}