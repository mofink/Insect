#pragma once

//Object representing loaded data. Has member variables for basic information e.g. mean, standard deviation, etc.
//All statistical models are built from a data object
#include "Core.h"
#include <string>
#include <vector>
#include <map>

namespace Insect
{
   class Data
   {
   public:

      //constructor -- convert a data txt file to its code representation.
      /* Data of the form with CSV

      TV	radio	newspaper	sales
      1	230.1	37.8	69.2	22.1
      2	44.5	39.3	45.1	10.4
      3	17.2	45.9	69.3	9.3
      4	151.5	41.3	58.5	18.5

      */
      Data(std::string);

      ~Data();

   private:
      int myNumFeatures;

      //TODO: map between feature name and a list of its values
      //std::map<std::string, std::vector<double>> myFeatures;
     
      //each observation is a vector of data
      std::vector<std::vector <double>> myObservations;
   };
}
