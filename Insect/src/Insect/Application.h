#pragma once

//this is the core class of the library. Client code must derive from it and define CreateApplication() to return an application object.

#include "Core.h"
#include "Data.h"

#include <string>
#include <vector>

namespace Insect
{

   class ApplicationImp;

   class INSECT_API Application
   {
   public:

      Application(std::string);

      virtual ~Application();

      void run();

      //class implementation -- use PIMPL to ensure STL compatibility by limiting what we export
      ApplicationImp* myApp;

   protected:

      //abstract to string pointer in case client code uses a different version of the STL
      std::string* myConfigFile;
   };

   //to be defined in client application
   Application* CreateApplication();

   //-----------------------------------------------------------------
   class ApplicationImp
   {
   public:

      ApplicationImp();
      ~ApplicationImp();

      //load in a data file and use it to initialize a Data object
      bool loadFile(std::string);

   private:

      //list of data objects
      std::vector<Data*> myDataObjects;
 
   };

};
  