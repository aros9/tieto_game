#pragma once
#include <string>
#include <vector>
#include <fstream>
#include <iostream>

typedef struct Unit
{
  int m_id;
  int m_x;
  int m_y;
  int m_durability;
  char m_produced; // base parameter
  char m_affiliation;
  char m_type;
}Unit;

typedef struct unitInfo
{
  unitInfo(const int uDurability, const int uSpeed, const int uCost, const int uRange, const int uTime) :
    m_durability(uDurability), m_speed(uSpeed), m_cost(uCost), m_range(uRange), m_buildTime(uTime) {}
  
  int m_durability;
  int m_speed;
  int m_cost;
  int m_range;
  int m_buildTime;
}unitInfo;

class Status
{
  public:

    Status();
    Status(std::string statusFile);
    unitInfo getInfo(const char unit);
    
  private:
  
    int m_gold;
    std::vector<Unit> m_units;

};