#include <SFML/Graphics.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/System/Vector2.hpp>
#include <SFML/Window/Event.hpp>
#include <optional>
#pragma one

class Block {
  float origin = 15.f;
  int m_time = 0;
  sf::Vector2f start_pos = {930.f, 60.f};

public:
  float size = 30.f;
  int type = 0;
  sf::RectangleShape s1;
  sf::RectangleShape s2;
  sf::RectangleShape s3;
  sf::RectangleShape s4;
  bool bottom = false;
  int rotation = 1;
  Block();
  ~Block();

  // void SetPosition(sf::Vector2f a) { this->item.setPosition(a); }
  // sf::Vector2f GetPosition() { return this->item.getPosition(); }

  void Initialize();
  void Update();
  void left();
  void Rotate();
  void right();
  void Draw(sf::RenderWindow &);
};
