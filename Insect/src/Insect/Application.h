#pragma once

//this is the core class of the library. Client code must derive from it and define CreateApplication() to return an application object.

#include "Core.h"

#include <string>

namespace Insect
{
   class INSECT_API Application
   {
   public:

      Application(std::string);
      
      virtual ~Application();

      void run();

   protected:

      //use char array in case client code uses a different version of the STL
      std::string* myConfigFile;
   };

   //to be defined in client application
   Application* CreateApplication();

}