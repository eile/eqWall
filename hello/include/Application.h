/**
 *  Created: August 26th 2012 by Madhu Srinivasan
 *           <madhu.srinivasan@kaust.edu.sa>
 *           
 *  Copyright © 2012 Madhu Srinivasan
 *
 */

#include <seq/sequel.h>
#include <stdlib.h>
#include "Renderer.h"

class Application;
typedef co::base::RefPtr< Application > ApplicationPtr;

class Application : public seq::Application
{
public:
    virtual ~Application() {}
    virtual seq::Renderer* createRenderer() { return new Renderer( *this ); }
    virtual co::Object * createObject( const uint32_t type )
        { EQUNIMPLEMENTED; return 0; }
    
    static ApplicationPtr pApp;

    
};
