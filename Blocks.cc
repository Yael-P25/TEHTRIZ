#include "Blocks.h"
#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/System/Vector2.hpp>
#include <SFML/Window/Event.hpp>
#include <SFML/Window/Keyboard.hpp>
#include <SFML/Window/Window.hpp>
#include <cstdlib>
#include <iostream>
#include <optional>

Block::Block()
    : size(30.f), origin(15.f), s1({size, size}), s2({size, size}),
      s3({size, size}), s4({size, size}), m_time(0) {}
Block::~Block() {}

void Block::Initialize() {
  srand(time(0));
  type = (rand() % 4) + 1;
  // type = 3;
  int col = (rand() % 7) + 1;
  if (col == 1) {
    s1.setFillColor(sf::Color::Red);
    s2.setFillColor(sf::Color::Red);
    s3.setFillColor(sf::Color::Red);
    s4.setFillColor(sf::Color::Red);
  } else if (col == 2) {
    s1.setFillColor(sf::Color::Blue);
    s2.setFillColor(sf::Color::Blue);
    s3.setFillColor(sf::Color::Blue);
    s4.setFillColor(sf::Color::Blue);
  } else if (col == 3) {
    s1.setFillColor(sf::Color::Yellow);
    s2.setFillColor(sf::Color::Yellow);
    s3.setFillColor(sf::Color::Yellow);
    s4.setFillColor(sf::Color::Yellow);
  } else if (col == 4) {
    s1.setFillColor(sf::Color::Green);
    s2.setFillColor(sf::Color::Green);
    s3.setFillColor(sf::Color::Green);
    s4.setFillColor(sf::Color::Green);
  } else if (col == 5) {
    s1.setFillColor(sf::Color::Magenta);
    s2.setFillColor(sf::Color::Magenta);
    s3.setFillColor(sf::Color::Magenta);
    s4.setFillColor(sf::Color::Magenta);
  } else if (col == 6) {
    s1.setFillColor(sf::Color(255, 55, 100, 255));
    s2.setFillColor(sf::Color(255, 55, 100, 255));
    s3.setFillColor(sf::Color(255, 55, 100, 255));
    s4.setFillColor(sf::Color(255, 55, 100, 255));
  } else if (col == 7) {
    s1.setFillColor(sf::Color(55, 255, 100, 255));
    s2.setFillColor(sf::Color(55, 255, 100, 255));
    s3.setFillColor(sf::Color(55, 255, 100, 255));
    s4.setFillColor(sf::Color(55, 255, 100, 255));
  }

  // T shape
  if (type == 3) {
    s1.setOrigin({origin, origin});
    s1.setPosition({895, 45});
    s2.setOrigin({origin, origin});
    s2.setPosition({925, 45});
    s3.setOrigin({origin, origin});
    s3.setPosition({955, 45});
    s4.setOrigin({origin, origin});
    s4.setPosition({895, 15});

    // L Shape
  } else if (type == 4) {
    s1.setOrigin({origin, origin});
    s1.setPosition({865, 45});
    s2.setOrigin({origin, origin});
    s2.setPosition({895, 45});
    s3.setOrigin({origin, origin});
    s3.setPosition({925, 45});
    s4.setOrigin({origin, origin});
    s4.setPosition({895, 15});

    // Square shape
  } else if (type == 1) {
    s1.setOrigin({origin, origin});
    s1.setPosition({895, 45});
    s2.setOrigin({origin, origin});
    s2.setPosition({925, 45});
    s3.setOrigin({origin, origin});
    s3.setPosition({895, 75});
    s4.setOrigin({origin, origin});
    s4.setPosition({925, 75});

    // Long vertical stick
  } else if (type == 2) {
    s1.setOrigin({origin, origin});
    s1.setPosition({895, 45});
    s2.setOrigin({origin, origin});
    s2.setPosition({895, 75});
    s3.setOrigin({origin, origin});
    s3.setPosition({895, 105});
    s4.setOrigin({origin, origin});
    s4.setPosition({895, 135});
  }
}

void Block::Update() {
  m_time++;
  if (m_time == 30) {
    s1.setPosition({s1.getPosition().x, s1.getPosition().y + 10});
    s2.setPosition({s2.getPosition().x, s2.getPosition().y + 10});
    s3.setPosition({s3.getPosition().x, s3.getPosition().y + 10});
    s4.setPosition({s4.getPosition().x, s4.getPosition().y + 10});
    m_time = 0;
  } else {
    // std::cout << "Hit bottom brrrrrrrrrr, no longer moving item\n";
  }
  // if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A) && !bottom) {
  //   s1.setPosition(s1.getPosition() + sf::Vector2f(-100.f, 0.f));
  //   s2.setPosition(s2.getPosition() + sf::Vector2f(-100.f, 0.f));
  //   s3.setPosition(s3.getPosition() + sf::Vector2f(-100.f, 0.f));
  //   s4.setPosition(s4.getPosition() + sf::Vector2f(-100.f, 0.f));
  //   // s1.move({-10.f, 0.f});
  //   // s2.move({-10.f, 0.f});
  //   // s3.move({-10.f, 0.f});
  //   // s4.move({-10.f, 0.f});
  //   std::cout << "Pressed a\n";
  //   // time = 0;
  // } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D) && !bottom) {
  //   s1.setPosition(s1.getPosition() + sf::Vector2f(100.f, 0.f));
  //   s2.setPosition(s2.getPosition() + sf::Vector2f(100.f, 0.f));
  //   s3.setPosition(s3.getPosition() + sf::Vector2f(100.f, 0.f));
  //   s4.setPosition(s4.getPosition() + sf::Vector2f(100.f, 0.f));
  //
  //   // s1.move(sf::Vector2f(10.f, 0.f) * deltaTime);
  //   // s2.move(sf::Vector2f(10.f, 0.f) * deltaTime);
  //   // s3.move(sf::Vector2f(10.f, 0.f) * deltaTime);
  //   // s4.move(sf::Vector2f(10.f, 0.f) * deltaTime);
  //   std::cout << "Pressed d\n";
  //   // time = 0;
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S) && !bottom) {
    s1.move({0.f, 20.f});
    s2.move({0.f, 20.f});
    s3.move({0.f, 20.f});
    s4.move({0.f, 20.f});
    // std::cout << "Pressed s\n";
    m_time = 0;
  }
}

void Block::right() {
  if (!bottom) {
    s1.setPosition(s1.getPosition() + sf::Vector2f(30.f, 0.f));
    s2.setPosition(s2.getPosition() + sf::Vector2f(30.f, 0.f));
    s3.setPosition(s3.getPosition() + sf::Vector2f(30.f, 0.f));
    s4.setPosition(s4.getPosition() + sf::Vector2f(30.f, 0.f));
    // s1.move({-10.f, 0.f});
    // s2.move({-10.f, 0.f});
    // s3.move({-10.f, 0.f});
    // s4.move({-10.f, 0.f});
    // std::cout << "Pressed a\n";
    // time = 0;
  }
}

void Block::left() {
  if (!bottom) {
    s1.setPosition(s1.getPosition() + sf::Vector2f(-30.f, 0.f));
    s2.setPosition(s2.getPosition() + sf::Vector2f(-30.f, 0.f));
    s3.setPosition(s3.getPosition() + sf::Vector2f(-30.f, 0.f));
    s4.setPosition(s4.getPosition() + sf::Vector2f(-30.f, 0.f));
    // s1.move({-10.f, 0.f});
    // s2.move({-10.f, 0.f});
    // s3.move({-10.f, 0.f});
    // s4.move({-10.f, 0.f});
    // std::cout << "Pressed a\n";
    // time = 0;
  }
}

void Block::Rotate() {
  if (!bottom && type == 2 && rotation == 1) {
    std::cout << "Roation on vertical stick\n";
    s1.setPosition({s2.getPosition().x - size, s2.getPosition().y});
    s3.setPosition({s2.getPosition().x + size, s2.getPosition().y});
    s4.setPosition({s2.getPosition().x + size * 2, s2.getPosition().y});
    rotation = 2;
  } else if (!bottom && type == 2 && rotation == 2) {
    std::cout << "Roation on horizontall stick\n";
    s1.setPosition({s2.getPosition().x, s2.getPosition().y - size});
    s3.setPosition({s2.getPosition().x, s2.getPosition().y + size});
    s4.setPosition({s2.getPosition().x, s2.getPosition().y + size * 2});
    rotation = 1;
  }
  if (!bottom && type == 1) {
    std::cout << "We dont rotate the square lol\n";
  }
  if (!bottom && type == 3 && rotation == 1) {
    s1.setPosition({s2.getPosition().x, s2.getPosition().y + size});
    s3.setPosition({s2.getPosition().x, s2.getPosition().y - size});
    s4.setPosition({s2.getPosition().x - size, s2.getPosition().y + size});
    rotation = 2;
  } else if (!bottom && type == 3 && rotation == 2) {
    s1.setPosition({s2.getPosition().x + size, s2.getPosition().y});
    s3.setPosition({s2.getPosition().x - size, s2.getPosition().y});
    s4.setPosition({s2.getPosition().x + size, s2.getPosition().y + size});
    rotation = 3;
  } else if (!bottom && type == 3 && rotation == 3) {
    s1.setPosition({s2.getPosition().x, s2.getPosition().y - size});
    s3.setPosition({s2.getPosition().x, s2.getPosition().y + size});
    s4.setPosition({s2.getPosition().x + size, s2.getPosition().y - size});
    rotation = 4;
  } else if (!bottom && type == 3 && rotation == 4) {
    s1.setPosition({s2.getPosition().x - size, s2.getPosition().y});
    s3.setPosition({s2.getPosition().x + size, s2.getPosition().y});
    s4.setPosition({s2.getPosition().x - size, s2.getPosition().y + size});
    rotation = 5;
  } else if (!bottom && type == 3 && rotation == 5) {
    s1.setPosition({s2.getPosition().x - size, s2.getPosition().y});
    s3.setPosition({s2.getPosition().x + size, s2.getPosition().y});
    s4.setPosition({s2.getPosition().x - size, s2.getPosition().y - size});
    rotation = 1;
  }
  if (!bottom && type == 4 && rotation == 1) {
    s1.setPosition({s2.getPosition().x, s2.getPosition().y - size});
    s3.setPosition({s2.getPosition().x, s2.getPosition().y + size});
    s4.setPosition({s2.getPosition().x + size, s2.getPosition().y});
    rotation = 2;
  } else if (!bottom && type == 4 && rotation == 2) {
    s1.setPosition({s2.getPosition().x + size, s2.getPosition().y});
    s3.setPosition({s2.getPosition().x - size, s2.getPosition().y});
    s4.setPosition({s2.getPosition().x, s2.getPosition().y + size});
    rotation = 3;
  } else if (!bottom && type == 4 && rotation == 3) {
    s1.setPosition({s2.getPosition().x, s2.getPosition().y + size});
    s3.setPosition({s2.getPosition().x, s2.getPosition().y - size});
    s4.setPosition({s2.getPosition().x - size, s2.getPosition().y});
    rotation = 4;
  } else if (!bottom && type == 4 && rotation == 4) {
    s1.setPosition({s2.getPosition().x - size, s2.getPosition().y});
    s3.setPosition({s2.getPosition().x + size, s2.getPosition().y});
    s4.setPosition({s2.getPosition().x, s2.getPosition().y - size});
    rotation = 1;
  }
}

void Block::Draw(sf::RenderWindow &a) {
  a.draw(s1);
  a.draw(s2);
  a.draw(s3);
  a.draw(s4);
}
