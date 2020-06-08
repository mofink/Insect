#include "Application.h"
#include "Data.h"


#include <iostream>
#include <fstream>
#include <sstream>
#include <utility>


using namespace Insect;

Application::Application(std::string configFile)
{
   myApp = new ApplicationImp;

   myConfigFile = new std::string;
   *myConfigFile = configFile;
}


Application::~Application()
{
   delete myConfigFile;
   delete myApp;
}

void Application::run()
{

   std::ifstream infile;
   infile.open(*myConfigFile);
   std::string fname;
   while (std::getline(infile, fname))
   {
      myApp->loadFile(fname);
   }
   infile.close();
}
//---------------------------------------------------------------------


Insect::ApplicationImp::ApplicationImp()
   : myDataObjects{}
{

}

Insect::ApplicationImp::~ApplicationImp()
{
   for (auto pData : myDataObjects)
   {
      delete pData;
   }
}

bool ApplicationImp::loadFile(std::string fname)
{
   Data* pData = new Data(fname);
   myDataObjects.push_back(pData);
   return true;
}