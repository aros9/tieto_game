#include "MapData.hpp"
#include <fstream>
#include <vector>
#include <iostream>

MapData::MapData()
{

    std::fstream myFile;
    myFile.open("Input/mapa.txt", std::ios::in);

    if(!myFile)
    {
        std::cout << "File doesn't exist!\n";
        // return exit code
    }
    else
    {
        // Read the contents of the file into a vector of strings
        std::vector<std::string> lines;
        std::string line;
        while (getline(myFile, line)) 
        {
            lines.push_back(line);
        }

        // Close the file
        myFile.close();

        // Determine the number of rows and columns
        int numRows = lines.size();
        int numCols = 0;
        for (const std::string& row : lines) 
        {
            int rowSize = row.size();
            if (rowSize > numCols) 
            {
                numCols = rowSize;
            }
        }

        // Create and populate the matrix
        m_data.allocate(numRows, numCols);

        for (int i = 0; i < numRows; i++) 
        {
            for (int j = 0; j < numCols; j++) 
            {
                if (j < lines[i].size()) 
                {
                    m_data[i][j] = lines[i][j];
                } 
                else 
                {
                    m_data[i][j] = ' ';  // If the line is shorter, fill the remaining cells with spaces
                }
            }
        }

        // Print the map
        for (int i = 0; i < numRows; i++) 
        {
            for (int j = 0; j < numCols; j++) 
            {
                std::cout << m_data[i][j];
            }
            std::cout << "\n";
        }
    }
    myFile.close();
}