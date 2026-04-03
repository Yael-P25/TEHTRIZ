#include "MyMath.h"
#include <SFML/Audio.hpp>
#include <SFML/Audio/SoundBuffer.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics/Font.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Text.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/System/Clock.hpp>
#include <SFML/System/Time.hpp>
#include <SFML/Window/Event.hpp>
#include <SFML/Window/Keyboard.hpp>
#include <cstdlib>
#include <iostream>
#include <iterator>
#include <memory>
#include <optional>
#include <string>
#include <vector>

int main() {
  sf::RenderWindow window(sf::VideoMode({1920, 1080}), "TehTrIz");
  window.setFramerateLimit(60);

  sf::Texture background("./images/backme.png");
  sf::Sprite bg(background);
  sf::SoundBuffer rowclearbuffer("./audio/holy_crap.wav");
  sf::Sound rc(rowclearbuffer);

  sf::SoundBuffer rowclearbuffer2("./audio/carlin_jesus.wav");
  sf::Sound rc2(rowclearbuffer2);

  sf::RectangleShape rectangle({20.f, 940.f});
  rectangle.setOrigin({rectangle.getSize().x / 2, rectangle.getSize().y / 2});
  rectangle.setPosition({600, 540});

  sf::RectangleShape rectangle2({20.f, 940.f});
  rectangle2.setOrigin(
      {rectangle2.getSize().x / 2, rectangle2.getSize().y / 2});
  rectangle2.setPosition({1190, 540});

  sf::RectangleShape rectangle3({600.f, 20.f});
  rectangle3.setOrigin(
      {rectangle3.getSize().x / 2, rectangle3.getSize().y / 2});
  rectangle3.setPosition({890, 1000});

  sf::RectangleShape rectangle4({40.f, 40.f});
  rectangle4.setOrigin({20.f, 20.f});
  rectangle4.setPosition({900, 0});

  sf::Font font1("./fonts/Hack-Bold.ttf");
  sf::Text point(font1);
  int ppoints = 0;
  point.setString("pOiNTs: " + std::to_string(ppoints));
  point.setCharacterSize(32);
  point.setFillColor(sf::Color::White);
  point.setPosition({700, 1020});

  sf::Text why(font1);
  why.setString("Why do you still play\nClose the shit NOW\nPLS ))))");
  why.setCharacterSize(50);
  why.setFillColor(sf::Color::White);
  why.setPosition({1200, 600});

  int time = 0;
  bool bottom = false;
  std::vector<Block> myblocks;
  Block a;
  a.Initialize();
  myblocks.push_back(a);

  std::vector<sf::RectangleShape> grid;

  int columns = 33;
  int rows = 19;

  float increment = 30.f;
  int rgbint = 5;
  for (int x = 0; x < columns; x++) {
    for (int j = 0; j < rows; j++) {
      sf::RectangleShape one({30.f, 30.f});
      one.setOrigin({one.getSize().x / 2, one.getSize().y / 2});
      one.setPosition({625.f + (increment * j), 975.f - (increment * x)});
      // one.setFillColor(sf::Color(100, (rgbint % 255), 100, 255));
      one.setFillColor(sf::Color::Transparent);
      one.setOutlineThickness(1.f);
      one.setOutlineColor(sf::Color::White);
      grid.push_back(one);
      rgbint += 5;
    }
  }
  sf::Clock c1;
  float yarr[33];
  yarr[0] = 975.f;
  for (int x = 1; x < sizeof(yarr) / sizeof(yarr[0]); x++) {
    yarr[x] = yarr[x - 1] - 30.f;
  }

  for (auto a : yarr) {
    std::cout << "Y: " << a << "\n";
  }

  std::vector<sf::RectangleShape *> clearrow;
  float ypos = 0.f;

  sf::SoundBuffer songbuffer("./audio/piano.wav");
  sf::Sound piano(songbuffer);
  piano.play();

  //----------------------------------------------GAME LOOP
  //-------------------------------
  int line_full = 0;
  while (window.isOpen()) {
    while (const std::optional event = window.pollEvent()) {
      if (event->is<sf::Event::Closed>())
        window.close();
      if (event->is<sf::Event::KeyReleased>() &&
          event->getIf<sf::Event::KeyReleased>()->code ==
              sf::Keyboard::Key::A) {
        myblocks.back().left();
      }
      if (event->is<sf::Event::KeyReleased>() &&
          event->getIf<sf::Event::KeyReleased>()->code ==
              sf::Keyboard::Key::D) {
        myblocks.back().right();
      }
      if (event->is<sf::Event::KeyReleased>() &&
          event->getIf<sf::Event::KeyReleased>()->code ==
              sf::Keyboard::Key::Space) {
        myblocks.back().Rotate();
        std::cout << "Spacebar was pressed\n";
      }
    }

    if (myblocks.back().bottom == true) {
      Block one;
      one.Initialize();
      myblocks.push_back(one);
      bottom = false;
    }
    sf::Time deltaTimer = c1.restart();
    float deltaTime = deltaTimer.asSeconds();
    // std::cout << "Delta Time: " << deltaTime << "\n";

    myblocks.back().Update();
    MyMath::collision_check(myblocks, rectangle, rectangle2, rectangle3,
                            myblocks.back());

    for (int x = 0; x < sizeof(yarr) / sizeof(yarr[0]); x++) {
      int count = 0;
      std::vector<sf::RectangleShape *> mytrans;
      for (auto &a : myblocks) {
        if (a.bottom == true) {
          if (a.s1.getPosition().y == yarr[x]) {
            ++count;
            mytrans.push_back(&a.s1);
          }
          if (a.s2.getPosition().y == yarr[x]) {
            ++count;
            mytrans.push_back(&a.s2);
          }
          if (a.s3.getPosition().y == yarr[x]) {
            ++count;
            mytrans.push_back(&a.s3);
          }
          if (a.s4.getPosition().y == yarr[x]) {
            ++count;
            mytrans.push_back(&a.s4);
          }
        }
      }
      if (count == 19) {
        std::cout << "Row with Y position of: " << yarr[x] << ", Is full\n";
        clearrow = {mytrans.begin(), mytrans.end()};
        break;

        // for (auto &a : mytrans) {
        //   a->setFillColor(sf::Color::Yellow);
        //   std::cout << "BLock Cords, X: " << a->getPosition().x
        //             << ", Y: " << a->getPosition().y << "\n";
        //   // a->setPosition({100, 100});
        // }
        //
        // for (auto &b : mytrans) {
        //   // b->setPosition({0, 0});
        // }

        // for (auto &a : myblocks) {
        //   if (a.s1.getPosition().y < yarr[x]) {
        //     a.s1.move({0, +30.f});
        //   }
        //   if (a.s2.getPosition().y < yarr[x]) {
        //     a.s2.move({0, +30.f});
        //   }
        //   if (a.s3.getPosition().y < yarr[x]) {
        //     a.s3.move({0, +30.f});
        //   }
        //   if (a.s4.getPosition().y < yarr[x]) {
        //     a.s4.move({0, +30.f});
        //   }
        // }
      }
    }

    if (clearrow.size() == 19) {
      ypos = clearrow[0]->getPosition().y;
      for (auto &block : clearrow) {
        block->setFillColor(sf::Color::Transparent);
        block->setPosition({0, 0});
      }
      ppoints += 19;
      point.setString("pOiNTs: " + std::to_string(ppoints));
      clearrow.clear();
      if (ppoints < 100) {
        rc.play();
      } else if (ppoints > 100) {
        rc2.play();
      }
    }

    for (auto &a : myblocks) {
      if (a.s1.getPosition().y < ypos) {
        a.s1.move({0, +30.f});
      }
      if (a.s2.getPosition().y < ypos) {
        a.s2.move({0, +30.f});
      }
      if (a.s3.getPosition().y < ypos) {
        a.s3.move({0, +30.f});
      }
      if (a.s4.getPosition().y < ypos) {
        a.s4.move({0, +30.f});
      }
    }
    // std::cout << "After shifting 30 down\n";
    ypos = 0.f;
    if (piano.getStatus() == sf::Sound::Status::Stopped) {
      piano.play();
    }

    // std::cout << "Points now: " << ppoints << "\n";
    window.clear();
    window.draw(bg);
    window.draw(point);
    if (ppoints >= 19) {
      window.draw(why);
    }
    window.draw(rectangle);
    window.draw(rectangle2);
    window.draw(rectangle3);
    // window.draw(bl);
    // window.draw(br);
    // window.draw(tl);
    // window.draw(tr);
    for (auto a : myblocks) {
      a.Draw(window);
    }
    // for (auto a : grid) {
    //   window.draw(a);
    // }
    // window.draw(rectangle4);
    window.display();
  }
}
