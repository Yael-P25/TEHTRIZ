#include "Blocks.h"
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/System/Vector2.hpp>
#include <vector>
#pragma one

class MyMath {
public:
  MyMath();
  ~MyMath();

public:
  static void collision_check(std::vector<Block> &myblocks,
                              sf::RectangleShape s1, sf::RectangleShape s2,
                              sf::RectangleShape b1, Block &Lblock);
};
