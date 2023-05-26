#pragma once
#include "MapData.hpp"
#include "Status.hpp"
#include "Action.hpp"

class Player
{
    public:
        Player(MapData map, Status status)
        {
            m_map = &map;
            m_status = &status;
        }    

    private:
        
        MapData* m_map;
        Status* m_status;
        // Action* m_action;
};