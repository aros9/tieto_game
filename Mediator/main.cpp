#include <iostream>
#include <cstdlib>

constexpr int MAX_TURN_COUTER = 10;

int main()
{
  std::cout << "Mediator: Starting application.\n";

  for (int turnCounter = 0; turnCounter < MAX_TURN_COUTER; ++turnCounter)
  {
    std::system("./release/player mapa.txt status.txt rozkazy.txt 5");
  }

  return 0;
}