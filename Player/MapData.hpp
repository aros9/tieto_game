#pragma once
#include "Matrix.hpp"
#include <string>

class MapData
{

    private:
        Matrix<char, int> m_data;

    public:
        MapData(std::string mapFile);
        
};