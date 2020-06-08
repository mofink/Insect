#include "Data.h"

#include <iostream>
#include <fstream>
#include <sstream>


using namespace Insect;

Data::Data(std::string fname)
{


   std::ifstream infile;
   infile.open(fname);
   std::string line;
   bool firstLine = true;

   //read in line by line (observations)
   while (std::getline(infile, line))
   {
      //skip the metadata
      if (firstLine)
      {
         firstLine = false;
         continue;
      }

      //tokenize the observation

      std::vector<double> observation;
      std::stringstream ss(line);
      
      //we don't need the observation number
      ss.ignore(std::numeric_limits<std::streamsize>::max(), ','); 

      for (double i; ss >> i;)
      {
         observation.push_back(i);
         if (ss.peek() == ',')
         {
            ss.ignore();
         }
      }
      myObservations.push_back(observation);
   }
   infile.close();


}


Data::~Data()
{
}
