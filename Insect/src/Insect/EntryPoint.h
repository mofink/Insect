#pragma once

//defines an entry point so that client code does not need to define a main() function; the API is mostly pushed to configuration

#ifdef INSECT_PLATFORM_WINDOWS

extern Insect::Application* Insect::CreateApplication();

int main(int argc, char** argv)
{
   auto app = Insect::CreateApplication();
   app->run();
   delete app;
}
#endif