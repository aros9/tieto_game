#pragma once
#include "Status.hpp"

constexpr int UNIT_COUNT = 8;

const int AttackTable[UNIT_COUNT - 1][UNIT_COUNT] = 
{
  // K   S   A   P   C   R   W   B
    {35, 35, 35, 35, 35, 50, 35, 35}, // Knight
    {30, 30, 30, 20, 20, 30, 30, 30}, // Swordsman
    {15, 15, 15, 15, 10, 10, 15, 15}, // Archer
    {35, 15, 15, 15, 15, 10, 15, 10}, // Pikeman
    {40, 40, 40, 40, 40, 40, 40, 50}, // Catapult
    {10, 10, 10, 10, 10, 10, 10, 50}, // Ram
    {5,  5,  5,  5,  5,  5,  5,  1} // Worker
};

class Action
{
    public:
        Action(Unit unit) : m_unit(unit) {};
        ~Action();

        void Attack();
        void Move();
    private:
        Unit m_unit;
};