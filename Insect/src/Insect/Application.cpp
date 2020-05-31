#include "Application.h"
#include "Data.h"


#include <iostream>
#include <fstream>


using namespace Insect;

Application::Application(std::string configFile)
{
   myConfigFile = new std::string;
   *myConfigFile = configFile;
}


Application::~Application()
{
   delete myConfigFile;
}

void Application::run()
{

   std::ifstream infile;
   infile.open(*myConfigFile);
   std::string line;
   while (std::getline(infile, line))
   {
      std::cout << line << std::endl;
   }
   infile.close();
   system("pause");
}