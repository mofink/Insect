#include <Insect.h>

#include <string>


class Sandbox : public Insect::Application
{
public:
   Sandbox(std::string configFile)
      : Application(configFile)
   {

   }
   virtual ~Sandbox()
   {

   }
};

Insect::Application* Insect::CreateApplication()
{
   std::string configFile = "dataConfig.txt";
   return new Sandbox(configFile);
}