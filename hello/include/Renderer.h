/**
 *  Created: August 26th 2012 by Madhu Srinivasan
 *           <madhu.srinivasan@kaust.edu.sa>
 *           
 *  Copyright © 2012 Madhu Srinivasan
 *
 */


#include <seq/sequel.h>
#include <stdlib.h>


class Renderer : public seq::Renderer
{
public:
    Renderer( seq::Application& application ) : seq::Renderer( application ) {}
    virtual ~Renderer() {}

protected:
    virtual void draw( co::Object* frameData );
};
