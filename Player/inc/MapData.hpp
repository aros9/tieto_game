#pragma once
#include "Matrix.hpp"
#include <string>

class MapData
{
  public:
    
    MapData(std::string mapFile);
        
  private:

    Matrix<char, int> m_data;
};