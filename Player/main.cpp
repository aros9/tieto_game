#include <iostream>
#include <string>
#include "MapData.hpp"

int main(int argc, char** argv)
{
  std::cout << "Player: Hello world!\n";

  const std::string mapFileName = argv[1];
  const std::string statusFileName = argv[2];
  const std::string ordersFileName = argv[3];

  
  int timeLimit = 5;

  if (argc > 3)
  {
    timeLimit = std::atoi(argv[4]);
  }

  MapData map(mapFileName);

  return 1;
}