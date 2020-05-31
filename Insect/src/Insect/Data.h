#pragma once

//Object representing loaded data. Has member variables for basic information e.g. mean, standard deviation, etc.
//All statistical models are built from a data object
#include "Core.h"
#include <string>

class INSECT_API Data
{
public:
   
   Data(std::string);

   ~Data();
};

