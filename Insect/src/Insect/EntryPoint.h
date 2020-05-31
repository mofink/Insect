#pragma once

#ifdef INSECT_PLATFORM_WINDOWS

extern Insect::Application* Insect::CreateApplication();

int main(int argc, char** argv)
{
   auto app = Insect::CreateApplication();
   app->run();
   delete app;
}
#endif