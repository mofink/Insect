#pragma once

#include "Core.h"


namespace Insect
{
   class INSECT_API Application
   {
   public:

      Application();
      
      virtual ~Application();

      void run();
   };

   //to be defined in client application
   Application* CreateApplication();

}