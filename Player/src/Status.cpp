#include "../inc/Status.hpp"

Status::Status(std::string statusFile)
{
  std::fstream myFile;
  myFile.open("Input/" + statusFile, std::ios::in);

  if(!myFile)
  {
    std::cout << "File doesn't exist!\n";
    // return exit code
  }
  else
  {
    // read file

  }
}

unitInfo getInfo(char unit)
{
  switch(unit)
  {
    case 'K': // Knight
    {
      unitInfo newUnit(70, 5, 400, 1, 5);
      return newUnit;
    }break;
    case 'S': // Swordsman
    {
      unitInfo newUnit(60, 2, 250, 1, 3);
      return newUnit;
    }break;
    case 'A': // Archer
    {
      unitInfo newUnit(40, 2, 250, 5, 3);
      return newUnit;
    }break;
    case 'P': // Pikeman
    {
      unitInfo newUnit(50, 2, 200, 2, 3);
      return newUnit;
    }break;
    case 'R': // Ram
    {
      unitInfo newUnit(90, 2, 500, 1, 4);
      return newUnit;
    }break;
    case 'C': // Catapult
    {
      unitInfo newUnit(50, 2, 800, 7, 6);
      return newUnit;
    }break;
    case 'W': // Worker
    {
      unitInfo newUnit(20, 2, 100, 1, 2);
      return newUnit;
    }break;
    case 'B': // Base
    {
      unitInfo newUnit(200, 0, 0, 0, 0);
      return newUnit;
    }break;
  }
  return unitInfo(0, 0, 0, 0, 0);
}