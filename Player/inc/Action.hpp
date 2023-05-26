#pragma once
#include "Status.hpp"

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