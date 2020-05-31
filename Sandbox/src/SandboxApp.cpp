#include <Insect.h>

class Sandbox : public Insect::Application
{
public:
   Sandbox()
   {

   }
   virtual ~Sandbox()
   {

   }
};

Insect::Application* Insect::CreateApplication()
{
   return new Sandbox();
}