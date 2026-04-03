
#include "MyMath.h"
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/System/Vector2.hpp>
#include <cstdlib>
#include <iostream>
#include <vector>

MyMath::MyMath() {}
MyMath::~MyMath() {}

void MyMath::collision_check(std::vector<Block> &myblocks,
                             sf::RectangleShape s1, sf::RectangleShape s2,
                             sf::RectangleShape b1, Block &Lblock) {
  for (auto &block : myblocks) {
    // T shape left wall
    if (block.s1.getGlobalBounds().findIntersection(s1.getGlobalBounds()) &&
        block.type == 4 && block.bottom == false && block.rotation == 1) {
      sf::Vector2i delta = {abs(block.s1.getPosition().x - s1.getPosition().x),
                            abs(block.s1.getPosition().y - s1.getPosition().y)};
      sf::Vector2i overlap;
      overlap.x = (block.s1.getSize().x / 2) + (s1.getSize().x / 2) - delta.x;
      overlap.y = 0;
      block.s1.move((sf::Vector2f)overlap);
      block.s2.move((sf::Vector2f)overlap);
      block.s3.move((sf::Vector2f)overlap);
      block.s4.move((sf::Vector2f)overlap);
    } else if (block.s1.getGlobalBounds().findIntersection(
                   s1.getGlobalBounds()) &&
               block.type == 4 && block.bottom == false &&
               block.rotation == 2) {
      sf::Vector2i delta = {abs(block.s1.getPosition().x - s1.getPosition().x),
                            abs(block.s1.getPosition().y - s1.getPosition().y)};
      sf::Vector2i overlap;
      overlap.x = (block.s1.getSize().x / 2) + (s1.getSize().x / 2) - delta.x;
      overlap.y = 0;
      block.s1.move((sf::Vector2f)overlap);
      block.s2.move((sf::Vector2f)overlap);
      block.s3.move((sf::Vector2f)overlap);
      block.s4.move((sf::Vector2f)overlap);

    } else if (block.s3.getGlobalBounds().findIntersection(
                   s1.getGlobalBounds()) &&
               block.type == 4 && block.bottom == false &&
               block.rotation == 3) {
      sf::Vector2i delta = {abs(block.s3.getPosition().x - s1.getPosition().x),
                            abs(block.s3.getPosition().y - s1.getPosition().y)};
      sf::Vector2i overlap;
      overlap.x = (block.s3.getSize().x / 2) + (s1.getSize().x / 2) - delta.x;
      overlap.y = 0;
      block.s1.move((sf::Vector2f)overlap);
      block.s2.move((sf::Vector2f)overlap);
      block.s3.move((sf::Vector2f)overlap);
      block.s4.move((sf::Vector2f)overlap);

    } else if (block.s4.getGlobalBounds().findIntersection(
                   s1.getGlobalBounds()) &&
               block.type == 4 && block.bottom == false &&
               block.rotation == 4) {
      sf::Vector2i delta = {abs(block.s4.getPosition().x - s1.getPosition().x),
                            abs(block.s4.getPosition().y - s1.getPosition().y)};
      sf::Vector2i overlap;
      overlap.x = (block.s4.getSize().x / 2) + (s1.getSize().x / 2) - delta.x;
      overlap.y = 0;
      block.s1.move((sf::Vector2f)overlap);
      block.s2.move((sf::Vector2f)overlap);
      block.s3.move((sf::Vector2f)overlap);
      block.s4.move((sf::Vector2f)overlap);

    } else if (block.s4.getGlobalBounds().findIntersection(
                   s1.getGlobalBounds()) &&
               block.type == 3 && block.bottom == false &&
               block.rotation == 1) {
      // L shape left wall
      sf::Vector2i delta = {abs(block.s4.getPosition().x - s1.getPosition().x),
                            abs(block.s4.getPosition().y - s1.getPosition().y)};
      sf::Vector2i overlap;
      overlap.x = (block.s4.getSize().x / 2) + (s1.getSize().x / 2) - delta.x;
      overlap.y = 0;
      block.s1.move((sf::Vector2f)overlap);
      block.s2.move((sf::Vector2f)overlap);
      block.s3.move((sf::Vector2f)overlap);
      block.s4.move((sf::Vector2f)overlap);
    } else if (block.s4.getGlobalBounds().findIntersection(
                   s1.getGlobalBounds()) &&
               block.type == 3 && block.bottom == false &&
               block.rotation == 2) {
      sf::Vector2i delta = {abs(block.s4.getPosition().x - s1.getPosition().x),
                            abs(block.s4.getPosition().y - s1.getPosition().y)};
      sf::Vector2i overlap;
      overlap.x = (block.s4.getSize().x / 2) + (s1.getSize().x / 2) - delta.x;
      overlap.y = 0;
      block.s1.move((sf::Vector2f)overlap);
      block.s2.move((sf::Vector2f)overlap);
      block.s3.move((sf::Vector2f)overlap);
      block.s4.move((sf::Vector2f)overlap);

    } else if (block.s3.getGlobalBounds().findIntersection(
                   s1.getGlobalBounds()) &&
               block.type == 3 && block.bottom == false &&
               block.rotation == 3) {
      sf::Vector2i delta = {abs(block.s3.getPosition().x - s1.getPosition().x),
                            abs(block.s3.getPosition().y - s1.getPosition().y)};
      sf::Vector2i overlap;
      overlap.x = (block.s3.getSize().x / 2) + (s1.getSize().x / 2) - delta.x;
      overlap.y = 0;
      block.s1.move((sf::Vector2f)overlap);
      block.s2.move((sf::Vector2f)overlap);
      block.s3.move((sf::Vector2f)overlap);
      block.s4.move((sf::Vector2f)overlap);

    } else if (block.s1.getGlobalBounds().findIntersection(
                   s1.getGlobalBounds()) &&
               block.type == 3 && block.bottom == false &&
               block.rotation == 4) {
      sf::Vector2i delta = {abs(block.s1.getPosition().x - s1.getPosition().x),
                            abs(block.s1.getPosition().y - s1.getPosition().y)};
      sf::Vector2i overlap;
      overlap.x = (block.s1.getSize().x / 2) + (s1.getSize().x / 2) - delta.x;
      overlap.y = 0;
      block.s1.move((sf::Vector2f)overlap);
      block.s2.move((sf::Vector2f)overlap);
      block.s3.move((sf::Vector2f)overlap);
      block.s4.move((sf::Vector2f)overlap);

    } else if (block.s1.getGlobalBounds().findIntersection(
                   s1.getGlobalBounds()) &&
               block.type == 1 && block.bottom == false) {
      // Square shape
      sf::Vector2i delta = {abs(block.s1.getPosition().x - s1.getPosition().x),
                            abs(block.s1.getPosition().y - s1.getPosition().y)};
      sf::Vector2i overlap;
      overlap.x = (block.s1.getSize().x / 2) + (s1.getSize().x / 2) - delta.x;
      overlap.y = 0;
      block.s1.move((sf::Vector2f)overlap);
      block.s2.move((sf::Vector2f)overlap);
      block.s3.move((sf::Vector2f)overlap);
      block.s4.move((sf::Vector2f)overlap);
    } else if (block.s1.getGlobalBounds().findIntersection(
                   s1.getGlobalBounds()) &&
               block.type == 2 && block.bottom == false) { // Long boi left side
      sf::Vector2i delta = {abs(block.s1.getPosition().x - s1.getPosition().x),
                            abs(block.s1.getPosition().y - s1.getPosition().y)};
      sf::Vector2i overlap;
      overlap.x = (block.s1.getSize().x / 2) + (s1.getSize().x / 2) - delta.x;
      overlap.y = 0;
      block.s1.move((sf::Vector2f)overlap);
      block.s2.move((sf::Vector2f)overlap);
      block.s3.move((sf::Vector2f)overlap);
      block.s4.move((sf::Vector2f)overlap);
    }

    //--------------------------------------------------------------------------
    // Right side T shape
    if (block.s3.getGlobalBounds().findIntersection(s2.getGlobalBounds()) &&
        block.type == 4 && block.bottom == false && block.rotation == 1) {
      sf::Vector2i delta = {abs(block.s3.getPosition().x - s2.getPosition().x),
                            abs(block.s3.getPosition().y - s2.getPosition().y)};
      sf::Vector2i overlap;
      overlap.x = (block.s3.getSize().x / 2) + (s2.getSize().x / 2) - delta.x;
      overlap.x = -overlap.x;
      overlap.y = 0;
      block.s3.move((sf::Vector2f)overlap);
      block.s2.move((sf::Vector2f)overlap);
      block.s4.move((sf::Vector2f)overlap);
      block.s1.move((sf::Vector2f)overlap);
    } else if (block.s4.getGlobalBounds().findIntersection(
                   s2.getGlobalBounds()) &&
               block.type == 4 && block.bottom == false &&
               block.rotation == 2) {
      sf::Vector2i delta = {abs(block.s4.getPosition().x - s2.getPosition().x),
                            abs(block.s4.getPosition().y - s2.getPosition().y)};
      sf::Vector2i overlap;
      overlap.x = (block.s4.getSize().x / 2) + (s2.getSize().x / 2) - delta.x;
      overlap.x = -overlap.x;
      overlap.y = 0;
      block.s3.move((sf::Vector2f)overlap);
      block.s2.move((sf::Vector2f)overlap);
      block.s4.move((sf::Vector2f)overlap);
      block.s1.move((sf::Vector2f)overlap);

    } else if (block.s1.getGlobalBounds().findIntersection(
                   s2.getGlobalBounds()) &&
               block.type == 4 && block.bottom == false &&
               block.rotation == 3) {
      sf::Vector2i delta = {abs(block.s1.getPosition().x - s2.getPosition().x),
                            abs(block.s1.getPosition().y - s2.getPosition().y)};
      sf::Vector2i overlap;
      overlap.x = (block.s1.getSize().x / 2) + (s2.getSize().x / 2) - delta.x;
      overlap.x = -overlap.x;
      overlap.y = 0;
      block.s3.move((sf::Vector2f)overlap);
      block.s2.move((sf::Vector2f)overlap);
      block.s4.move((sf::Vector2f)overlap);
      block.s1.move((sf::Vector2f)overlap);

    } else if (block.s3.getGlobalBounds().findIntersection(
                   s2.getGlobalBounds()) &&
               block.type == 4 && block.bottom == false &&
               block.rotation == 4) {
      sf::Vector2i delta = {abs(block.s3.getPosition().x - s2.getPosition().x),
                            abs(block.s3.getPosition().y - s2.getPosition().y)};
      sf::Vector2i overlap;
      overlap.x = (block.s3.getSize().x / 2) + (s2.getSize().x / 2) - delta.x;
      overlap.x = -overlap.x;
      overlap.y = 0;
      block.s3.move((sf::Vector2f)overlap);
      block.s2.move((sf::Vector2f)overlap);
      block.s4.move((sf::Vector2f)overlap);
      block.s1.move((sf::Vector2f)overlap);

    } else if (block.s3.getGlobalBounds().findIntersection(
                   s2.getGlobalBounds()) &&
               block.type == 3 && block.bottom == false &&
               block.rotation == 1) {
      // L shape left wall
      sf::Vector2i delta = {abs(block.s3.getPosition().x - s2.getPosition().x),
                            abs(block.s3.getPosition().y - s2.getPosition().y)};
      sf::Vector2i overlap;
      overlap.x = (block.s3.getSize().x / 2) + (s2.getSize().x / 2) - delta.x;
      overlap.x = -overlap.x;
      overlap.y = 0;
      block.s3.move((sf::Vector2f)overlap);
      block.s2.move((sf::Vector2f)overlap);
      block.s4.move((sf::Vector2f)overlap);
      block.s1.move((sf::Vector2f)overlap);
    } else if (block.s3.getGlobalBounds().findIntersection(
                   s2.getGlobalBounds()) &&
               block.type == 3 && block.bottom == false &&
               block.rotation == 2) {
      sf::Vector2i delta = {abs(block.s3.getPosition().x - s2.getPosition().x),
                            abs(block.s3.getPosition().y - s2.getPosition().y)};
      sf::Vector2i overlap;
      overlap.x = (block.s3.getSize().x / 2) + (s2.getSize().x / 2) - delta.x;
      overlap.x = -overlap.x;
      overlap.y = 0;
      block.s3.move((sf::Vector2f)overlap);
      block.s2.move((sf::Vector2f)overlap);
      block.s4.move((sf::Vector2f)overlap);
      block.s1.move((sf::Vector2f)overlap);

    } else if (block.s4.getGlobalBounds().findIntersection(
                   s2.getGlobalBounds()) &&
               block.type == 3 && block.bottom == false &&
               block.rotation == 3) {
      sf::Vector2i delta = {abs(block.s4.getPosition().x - s2.getPosition().x),
                            abs(block.s4.getPosition().y - s2.getPosition().y)};
      sf::Vector2i overlap;
      overlap.x = (block.s4.getSize().x / 2) + (s2.getSize().x / 2) - delta.x;
      overlap.x = -overlap.x;
      overlap.y = 0;
      block.s3.move((sf::Vector2f)overlap);
      block.s2.move((sf::Vector2f)overlap);
      block.s4.move((sf::Vector2f)overlap);
      block.s1.move((sf::Vector2f)overlap);

    } else if (block.s4.getGlobalBounds().findIntersection(
                   s2.getGlobalBounds()) &&
               block.type == 3 && block.bottom == false &&
               block.rotation == 4) {
      sf::Vector2i delta = {abs(block.s4.getPosition().x - s2.getPosition().x),
                            abs(block.s4.getPosition().y - s2.getPosition().y)};
      sf::Vector2i overlap;
      overlap.x = (block.s4.getSize().x / 2) + (s2.getSize().x / 2) - delta.x;
      overlap.x = -overlap.x;
      overlap.y = 0;
      block.s3.move((sf::Vector2f)overlap);
      block.s2.move((sf::Vector2f)overlap);
      block.s4.move((sf::Vector2f)overlap);
      block.s1.move((sf::Vector2f)overlap);

    } else if (block.s2.getGlobalBounds().findIntersection(
                   s2.getGlobalBounds()) &&
               block.type == 1 && block.bottom == false) {
      // Square shape
      sf::Vector2i delta = {abs(block.s2.getPosition().x - s2.getPosition().x),
                            abs(block.s2.getPosition().y - s2.getPosition().y)};
      sf::Vector2i overlap;
      overlap.x = (block.s2.getSize().x / 2) + (s2.getSize().x / 2) - delta.x;
      overlap.x = -overlap.x;
      overlap.y = 0;
      block.s2.move((sf::Vector2f)overlap);
      block.s1.move((sf::Vector2f)overlap);
      block.s3.move((sf::Vector2f)overlap);
      block.s4.move((sf::Vector2f)overlap);
    } else if (block.s4.getGlobalBounds().findIntersection(
                   s2.getGlobalBounds()) &&
               block.type == 2 && block.bottom == false) { // Long boi left side
      sf::Vector2i delta = {abs(block.s4.getPosition().x - s2.getPosition().x),
                            abs(block.s4.getPosition().y - s2.getPosition().y)};
      sf::Vector2i overlap;
      overlap.x = (block.s3.getSize().x / 2) + (s2.getSize().x / 2) - delta.x;
      overlap.x = -overlap.x;
      overlap.y = 0;
      block.s3.move((sf::Vector2f)overlap);
      block.s2.move((sf::Vector2f)overlap);
      block.s4.move((sf::Vector2f)overlap);
      block.s1.move((sf::Vector2f)overlap);
    }

    //---------------------------_BOTTOM---------------------------------------------------
    if (block.s4.getPosition().y + 15 > b1.getPosition().y - 10 &&
        block.type == 2) {
      sf::Vector2i delta = {abs(block.s4.getPosition().x - b1.getPosition().x),
                            abs(block.s4.getPosition().y - b1.getPosition().y)};
      sf::Vector2i overlap;
      overlap.y = (block.s4.getSize().y / 2) + (b1.getSize().y / 2) - delta.y;
      overlap.y = -overlap.y;
      overlap.x = 0;
      block.s4.move((sf::Vector2f)overlap);
      block.s2.move((sf::Vector2f)overlap);
      block.s3.move((sf::Vector2f)overlap);
      block.s1.move((sf::Vector2f)overlap);
      block.bottom = true;
    } else if (block.s4.getPosition().y + 15 > b1.getPosition().y - 10 &&
               block.type == 1) {
      sf::Vector2i delta = {abs(block.s4.getPosition().x - b1.getPosition().x),
                            abs(block.s4.getPosition().y - b1.getPosition().y)};
      sf::Vector2i overlap;
      overlap.y = (block.s4.getSize().y / 2) + (b1.getSize().y / 2) - delta.y;
      overlap.y = -overlap.y;
      overlap.x = 0;
      block.s4.move((sf::Vector2f)overlap);
      block.s3.move((sf::Vector2f)overlap);
      block.s2.move((sf::Vector2f)overlap);
      block.s1.move((sf::Vector2f)overlap);
      block.bottom = true;
    } else if (block.s1.getGlobalBounds().findIntersection(
                   b1.getGlobalBounds()) &&
               block.type == 4 && block.rotation == 1) {
      sf::Vector2i delta = {abs(block.s1.getPosition().x - b1.getPosition().x),
                            abs(block.s1.getPosition().y - b1.getPosition().y)};
      sf::Vector2i overlap;
      overlap.y = (block.s1.getSize().y / 2) + (b1.getSize().y / 2) - delta.y;
      overlap.y = -overlap.y;
      overlap.x = 0;
      block.s1.move((sf::Vector2f)overlap);
      block.s2.move((sf::Vector2f)overlap);
      block.s3.move((sf::Vector2f)overlap);
      block.s4.move((sf::Vector2f)overlap);
      block.bottom = true;
    } else if (block.s3.getGlobalBounds().findIntersection(
                   b1.getGlobalBounds()) &&
               block.type == 4 && block.rotation == 2) {
      sf::Vector2i delta = {abs(block.s3.getPosition().x - b1.getPosition().x),
                            abs(block.s3.getPosition().y - b1.getPosition().y)};
      sf::Vector2i overlap;
      overlap.y = (block.s3.getSize().y / 2) + (b1.getSize().y / 2) - delta.y;
      overlap.y = -overlap.y;
      overlap.x = 0;
      block.s1.move((sf::Vector2f)overlap);
      block.s2.move((sf::Vector2f)overlap);
      block.s3.move((sf::Vector2f)overlap);
      block.s4.move((sf::Vector2f)overlap);
      block.bottom = true;

    } else if (block.s4.getGlobalBounds().findIntersection(
                   b1.getGlobalBounds()) &&
               block.type == 4 && block.rotation == 3) {
      sf::Vector2i delta = {abs(block.s4.getPosition().x - b1.getPosition().x),
                            abs(block.s4.getPosition().y - b1.getPosition().y)};
      sf::Vector2i overlap;
      overlap.y = (block.s4.getSize().y / 2) + (b1.getSize().y / 2) - delta.y;
      overlap.y = -overlap.y;
      overlap.x = 0;
      block.s1.move((sf::Vector2f)overlap);
      block.s2.move((sf::Vector2f)overlap);
      block.s3.move((sf::Vector2f)overlap);
      block.s4.move((sf::Vector2f)overlap);
      block.bottom = true;

    } else if (block.s1.getGlobalBounds().findIntersection(
                   b1.getGlobalBounds()) &&
               block.type == 4 && block.rotation == 4) {
      sf::Vector2i delta = {abs(block.s1.getPosition().x - b1.getPosition().x),
                            abs(block.s1.getPosition().y - b1.getPosition().y)};
      sf::Vector2i overlap;
      overlap.y = (block.s1.getSize().y / 2) + (b1.getSize().y / 2) - delta.y;
      overlap.y = -overlap.y;
      overlap.x = 0;
      block.s1.move((sf::Vector2f)overlap);
      block.s2.move((sf::Vector2f)overlap);
      block.s3.move((sf::Vector2f)overlap);
      block.s4.move((sf::Vector2f)overlap);
      block.bottom = true;

    } else if (block.s1.getGlobalBounds().findIntersection(
                   b1.getGlobalBounds()) &&
               block.type == 3 && block.rotation == 1) {
      sf::Vector2i delta = {abs(block.s1.getPosition().x - b1.getPosition().x),
                            abs(block.s1.getPosition().y - b1.getPosition().y)};
      sf::Vector2i overlap;
      overlap.y = (block.s1.getSize().y / 2) + (b1.getSize().y / 2) - delta.y;
      overlap.y = -overlap.y;
      overlap.x = 0;
      block.s1.move((sf::Vector2f)overlap);
      block.s2.move((sf::Vector2f)overlap);
      block.s3.move((sf::Vector2f)overlap);
      block.s4.move((sf::Vector2f)overlap);
      block.bottom = true;
    } else if (block.s1.getGlobalBounds().findIntersection(
                   b1.getGlobalBounds()) &&
               block.type == 3 && block.rotation == 2) {
      sf::Vector2i delta = {abs(block.s1.getPosition().x - b1.getPosition().x),
                            abs(block.s1.getPosition().y - b1.getPosition().y)};
      sf::Vector2i overlap;
      overlap.y = (block.s1.getSize().y / 2) + (b1.getSize().y / 2) - delta.y;
      overlap.y = -overlap.y;
      overlap.x = 0;
      block.s1.move((sf::Vector2f)overlap);
      block.s2.move((sf::Vector2f)overlap);
      block.s3.move((sf::Vector2f)overlap);
      block.s4.move((sf::Vector2f)overlap);
      block.bottom = true;

    } else if (block.s4.getGlobalBounds().findIntersection(
                   b1.getGlobalBounds()) &&
               block.type == 3 && block.rotation == 3) {
      sf::Vector2i delta = {abs(block.s4.getPosition().x - b1.getPosition().x),
                            abs(block.s4.getPosition().y - b1.getPosition().y)};
      sf::Vector2i overlap;
      overlap.y = (block.s4.getSize().y / 2) + (b1.getSize().y / 2) - delta.y;
      overlap.y = -overlap.y;
      overlap.x = 0;
      block.s1.move((sf::Vector2f)overlap);
      block.s2.move((sf::Vector2f)overlap);
      block.s3.move((sf::Vector2f)overlap);
      block.s4.move((sf::Vector2f)overlap);
      block.bottom = true;

    } else if (block.s3.getGlobalBounds().findIntersection(
                   b1.getGlobalBounds()) &&
               block.type == 3 && block.rotation == 4) {
      sf::Vector2i delta = {abs(block.s3.getPosition().x - b1.getPosition().x),
                            abs(block.s3.getPosition().y - b1.getPosition().y)};
      sf::Vector2i overlap;
      overlap.y = (block.s3.getSize().y / 2) + (b1.getSize().y / 2) - delta.y;
      overlap.y = -overlap.y;
      overlap.x = 0;
      block.s1.move((sf::Vector2f)overlap);
      block.s2.move((sf::Vector2f)overlap);
      block.s3.move((sf::Vector2f)overlap);
      block.s4.move((sf::Vector2f)overlap);
      block.bottom = true;
    } else if (block.s4.getGlobalBounds().findIntersection(
                   b1.getGlobalBounds()) &&
               block.type == 3 && block.rotation == 5) {
      sf::Vector2i delta = {abs(block.s4.getPosition().x - b1.getPosition().x),
                            abs(block.s4.getPosition().y - b1.getPosition().y)};
      sf::Vector2i overlap;
      overlap.y = (block.s4.getSize().y / 2) + (b1.getSize().y / 2) - delta.y;
      overlap.y = -overlap.y;
      overlap.x = 0;
      block.s1.move((sf::Vector2f)overlap);
      block.s2.move((sf::Vector2f)overlap);
      block.s3.move((sf::Vector2f)overlap);
      block.s4.move((sf::Vector2f)overlap);
      block.bottom = true;
    }

    for (int x = 0; x < myblocks.size() - 1; x++) {

      if (Lblock.s1.getGlobalBounds().findIntersection(
              myblocks[x].s1.getGlobalBounds())) {
        sf::Vector2i delta = {
            abs(Lblock.s1.getPosition().x - myblocks[x].s1.getPosition().x),
            abs(Lblock.s1.getPosition().y - myblocks[x].s1.getPosition().y)};
        sf::Vector2i overlap;
        overlap.y = (Lblock.s1.getSize().y / 2) +
                    (myblocks[x].s1.getSize().y / 2) - delta.y;
        overlap.y = -overlap.y;
        overlap.x = 0;

        Lblock.s1.move((sf::Vector2f)overlap);
        Lblock.s2.move((sf::Vector2f)overlap);
        Lblock.s3.move((sf::Vector2f)overlap);
        Lblock.s4.move((sf::Vector2f)overlap);

        Lblock.bottom = true;
      }

      if (Lblock.s1.getGlobalBounds().findIntersection(
              myblocks[x].s2.getGlobalBounds())) {
        sf::Vector2i delta = {
            abs(Lblock.s1.getPosition().x - myblocks[x].s2.getPosition().x),
            abs(Lblock.s1.getPosition().y - myblocks[x].s2.getPosition().y)};
        sf::Vector2i overlap;
        overlap.y = (Lblock.s1.getSize().y / 2) +
                    (myblocks[x].s2.getSize().y / 2) - delta.y;
        overlap.y = -overlap.y;
        overlap.x = 0;

        Lblock.s1.move((sf::Vector2f)overlap);
        Lblock.s2.move((sf::Vector2f)overlap);
        Lblock.s3.move((sf::Vector2f)overlap);
        Lblock.s4.move((sf::Vector2f)overlap);

        Lblock.bottom = true;
      }

      if (Lblock.s1.getGlobalBounds().findIntersection(
              myblocks[x].s3.getGlobalBounds())) {
        sf::Vector2i delta = {
            abs(Lblock.s1.getPosition().x - myblocks[x].s3.getPosition().x),
            abs(Lblock.s1.getPosition().y - myblocks[x].s3.getPosition().y)};
        sf::Vector2i overlap;
        overlap.y = (Lblock.s1.getSize().y / 2) +
                    (myblocks[x].s3.getSize().y / 2) - delta.y;
        overlap.y = -overlap.y;
        overlap.x = 0;

        Lblock.s1.move((sf::Vector2f)overlap);
        Lblock.s2.move((sf::Vector2f)overlap);
        Lblock.s3.move((sf::Vector2f)overlap);
        Lblock.s4.move((sf::Vector2f)overlap);

        Lblock.bottom = true;
      }

      if (Lblock.s1.getGlobalBounds().findIntersection(
              myblocks[x].s4.getGlobalBounds())) {
        sf::Vector2i delta = {
            abs(Lblock.s1.getPosition().x - myblocks[x].s4.getPosition().x),
            abs(Lblock.s1.getPosition().y - myblocks[x].s4.getPosition().y)};
        sf::Vector2i overlap;
        overlap.y = (Lblock.s1.getSize().y / 2) +
                    (myblocks[x].s4.getSize().y / 2) - delta.y;
        overlap.y = -overlap.y;
        overlap.x = 0;

        Lblock.s1.move((sf::Vector2f)overlap);
        Lblock.s2.move((sf::Vector2f)overlap);
        Lblock.s3.move((sf::Vector2f)overlap);
        Lblock.s4.move((sf::Vector2f)overlap);

        Lblock.bottom = true;
      }

      if (Lblock.s2.getGlobalBounds().findIntersection(
              myblocks[x].s1.getGlobalBounds())) {
        sf::Vector2i delta = {
            abs(Lblock.s2.getPosition().x - myblocks[x].s1.getPosition().x),
            abs(Lblock.s2.getPosition().y - myblocks[x].s1.getPosition().y)};
        sf::Vector2i overlap;
        overlap.y = (Lblock.s2.getSize().y / 2) +
                    (myblocks[x].s1.getSize().y / 2) - delta.y;
        overlap.y = -overlap.y;
        overlap.x = 0;

        Lblock.s1.move((sf::Vector2f)overlap);
        Lblock.s2.move((sf::Vector2f)overlap);
        Lblock.s3.move((sf::Vector2f)overlap);
        Lblock.s4.move((sf::Vector2f)overlap);

        Lblock.bottom = true;
      }

      if (Lblock.s2.getGlobalBounds().findIntersection(
              myblocks[x].s2.getGlobalBounds())) {
        sf::Vector2i delta = {
            abs(Lblock.s2.getPosition().x - myblocks[x].s2.getPosition().x),
            abs(Lblock.s2.getPosition().y - myblocks[x].s2.getPosition().y)};
        sf::Vector2i overlap;
        overlap.y = (Lblock.s2.getSize().y / 2) +
                    (myblocks[x].s2.getSize().y / 2) - delta.y;
        overlap.y = -overlap.y;
        overlap.x = 0;

        Lblock.s1.move((sf::Vector2f)overlap);
        Lblock.s2.move((sf::Vector2f)overlap);
        Lblock.s3.move((sf::Vector2f)overlap);
        Lblock.s4.move((sf::Vector2f)overlap);

        Lblock.bottom = true;
      }

      if (Lblock.s2.getGlobalBounds().findIntersection(
              myblocks[x].s3.getGlobalBounds())) {
        sf::Vector2i delta = {
            abs(Lblock.s2.getPosition().x - myblocks[x].s3.getPosition().x),
            abs(Lblock.s2.getPosition().y - myblocks[x].s3.getPosition().y)};
        sf::Vector2i overlap;
        overlap.y = (Lblock.s2.getSize().y / 2) +
                    (myblocks[x].s3.getSize().y / 2) - delta.y;
        overlap.y = -overlap.y;
        overlap.x = 0;

        Lblock.s1.move((sf::Vector2f)overlap);
        Lblock.s2.move((sf::Vector2f)overlap);
        Lblock.s3.move((sf::Vector2f)overlap);
        Lblock.s4.move((sf::Vector2f)overlap);

        Lblock.bottom = true;
      }

      if (Lblock.s2.getGlobalBounds().findIntersection(
              myblocks[x].s4.getGlobalBounds())) {
        sf::Vector2i delta = {
            abs(Lblock.s2.getPosition().x - myblocks[x].s4.getPosition().x),
            abs(Lblock.s2.getPosition().y - myblocks[x].s4.getPosition().y)};
        sf::Vector2i overlap;
        overlap.y = (Lblock.s2.getSize().y / 2) +
                    (myblocks[x].s4.getSize().y / 2) - delta.y;
        overlap.y = -overlap.y;
        overlap.x = 0;

        Lblock.s1.move((sf::Vector2f)overlap);
        Lblock.s2.move((sf::Vector2f)overlap);
        Lblock.s3.move((sf::Vector2f)overlap);
        Lblock.s4.move((sf::Vector2f)overlap);

        Lblock.bottom = true;
      }

      if (Lblock.s3.getGlobalBounds().findIntersection(
              myblocks[x].s1.getGlobalBounds())) {
        sf::Vector2i delta = {
            abs(Lblock.s3.getPosition().x - myblocks[x].s1.getPosition().x),
            abs(Lblock.s3.getPosition().y - myblocks[x].s1.getPosition().y)};
        sf::Vector2i overlap;
        overlap.y = (Lblock.s3.getSize().y / 2) +
                    (myblocks[x].s1.getSize().y / 2) - delta.y;
        overlap.y = -overlap.y;
        overlap.x = 0;

        Lblock.s1.move((sf::Vector2f)overlap);
        Lblock.s2.move((sf::Vector2f)overlap);
        Lblock.s3.move((sf::Vector2f)overlap);
        Lblock.s4.move((sf::Vector2f)overlap);

        Lblock.bottom = true;
      }

      if (Lblock.s3.getGlobalBounds().findIntersection(
              myblocks[x].s2.getGlobalBounds())) {
        sf::Vector2i delta = {
            abs(Lblock.s3.getPosition().x - myblocks[x].s2.getPosition().x),
            abs(Lblock.s3.getPosition().y - myblocks[x].s2.getPosition().y)};
        sf::Vector2i overlap;
        overlap.y = (Lblock.s3.getSize().y / 2) +
                    (myblocks[x].s2.getSize().y / 2) - delta.y;
        overlap.y = -overlap.y;
        overlap.x = 0;

        Lblock.s1.move((sf::Vector2f)overlap);
        Lblock.s2.move((sf::Vector2f)overlap);
        Lblock.s3.move((sf::Vector2f)overlap);
        Lblock.s4.move((sf::Vector2f)overlap);

        Lblock.bottom = true;
      }

      if (Lblock.s3.getGlobalBounds().findIntersection(
              myblocks[x].s3.getGlobalBounds())) {
        sf::Vector2i delta = {
            abs(Lblock.s3.getPosition().x - myblocks[x].s3.getPosition().x),
            abs(Lblock.s3.getPosition().y - myblocks[x].s3.getPosition().y)};
        sf::Vector2i overlap;
        overlap.y = (Lblock.s3.getSize().y / 2) +
                    (myblocks[x].s3.getSize().y / 2) - delta.y;
        overlap.y = -overlap.y;
        overlap.x = 0;

        Lblock.s1.move((sf::Vector2f)overlap);
        Lblock.s2.move((sf::Vector2f)overlap);
        Lblock.s3.move((sf::Vector2f)overlap);
        Lblock.s4.move((sf::Vector2f)overlap);

        Lblock.bottom = true;
      }

      if (Lblock.s3.getGlobalBounds().findIntersection(
              myblocks[x].s4.getGlobalBounds())) {
        sf::Vector2i delta = {
            abs(Lblock.s3.getPosition().x - myblocks[x].s4.getPosition().x),
            abs(Lblock.s3.getPosition().y - myblocks[x].s4.getPosition().y)};
        sf::Vector2i overlap;
        overlap.y = (Lblock.s3.getSize().y / 2) +
                    (myblocks[x].s4.getSize().y / 2) - delta.y;
        overlap.y = -overlap.y;
        overlap.x = 0;

        Lblock.s1.move((sf::Vector2f)overlap);
        Lblock.s2.move((sf::Vector2f)overlap);
        Lblock.s3.move((sf::Vector2f)overlap);
        Lblock.s4.move((sf::Vector2f)overlap);

        Lblock.bottom = true;
      }

      if (Lblock.s4.getGlobalBounds().findIntersection(
              myblocks[x].s1.getGlobalBounds())) {
        sf::Vector2i delta = {
            abs(Lblock.s4.getPosition().x - myblocks[x].s1.getPosition().x),
            abs(Lblock.s4.getPosition().y - myblocks[x].s1.getPosition().y)};
        sf::Vector2i overlap;
        overlap.y = (Lblock.s4.getSize().y / 2) +
                    (myblocks[x].s1.getSize().y / 2) - delta.y;
        overlap.y = -overlap.y;
        overlap.x = 0;

        Lblock.s1.move((sf::Vector2f)overlap);
        Lblock.s2.move((sf::Vector2f)overlap);
        Lblock.s3.move((sf::Vector2f)overlap);
        Lblock.s4.move((sf::Vector2f)overlap);

        Lblock.bottom = true;
      }

      if (Lblock.s4.getGlobalBounds().findIntersection(
              myblocks[x].s2.getGlobalBounds())) {
        sf::Vector2i delta = {
            abs(Lblock.s4.getPosition().x - myblocks[x].s2.getPosition().x),
            abs(Lblock.s4.getPosition().y - myblocks[x].s2.getPosition().y)};
        sf::Vector2i overlap;
        overlap.y = (Lblock.s4.getSize().y / 2) +
                    (myblocks[x].s2.getSize().y / 2) - delta.y;
        overlap.y = -overlap.y;
        overlap.x = 0;

        Lblock.s1.move((sf::Vector2f)overlap);
        Lblock.s2.move((sf::Vector2f)overlap);
        Lblock.s3.move((sf::Vector2f)overlap);
        Lblock.s4.move((sf::Vector2f)overlap);

        Lblock.bottom = true;
      }

      if (Lblock.s4.getGlobalBounds().findIntersection(
              myblocks[x].s3.getGlobalBounds())) {
        sf::Vector2i delta = {
            abs(Lblock.s4.getPosition().x - myblocks[x].s3.getPosition().x),
            abs(Lblock.s4.getPosition().y - myblocks[x].s3.getPosition().y)};
        sf::Vector2i overlap;
        overlap.y = (Lblock.s4.getSize().y / 2) +
                    (myblocks[x].s3.getSize().y / 2) - delta.y;
        overlap.y = -overlap.y;
        overlap.x = 0;

        Lblock.s1.move((sf::Vector2f)overlap);
        Lblock.s2.move((sf::Vector2f)overlap);
        Lblock.s3.move((sf::Vector2f)overlap);
        Lblock.s4.move((sf::Vector2f)overlap);

        Lblock.bottom = true;
      }

      if (Lblock.s4.getGlobalBounds().findIntersection(
              myblocks[x].s4.getGlobalBounds())) {
        sf::Vector2i delta = {
            abs(Lblock.s4.getPosition().x - myblocks[x].s4.getPosition().x),
            abs(Lblock.s4.getPosition().y - myblocks[x].s4.getPosition().y)};
        sf::Vector2i overlap;
        overlap.y = (Lblock.s4.getSize().y / 2) +
                    (myblocks[x].s4.getSize().y / 2) - delta.y;
        overlap.y = -overlap.y;
        overlap.x = 0;

        Lblock.s1.move((sf::Vector2f)overlap);
        Lblock.s2.move((sf::Vector2f)overlap);
        Lblock.s3.move((sf::Vector2f)overlap);
        Lblock.s4.move((sf::Vector2f)overlap);

        Lblock.bottom = true;
      }

      //------Working one lol----- kinda-----
      // if ((Lblock.s1.getGlobalBounds())
      //         .findIntersection(myblocks[x].s1.getGlobalBounds()) ||
      //     (Lblock.s1.getGlobalBounds())
      //         .findIntersection(myblocks[x].s2.getGlobalBounds()) ||
      //     (Lblock.s1.getGlobalBounds())
      //         .findIntersection(myblocks[x].s3.getGlobalBounds()) ||
      //     (Lblock.s1.getGlobalBounds())
      //         .findIntersection(myblocks[x].s4.getGlobalBounds()) ||
      //     (Lblock.s2.getGlobalBounds())
      //         .findIntersection(myblocks[x].s1.getGlobalBounds()) ||
      //     (Lblock.s2.getGlobalBounds())
      //         .findIntersection(myblocks[x].s2.getGlobalBounds()) ||
      //     (Lblock.s2.getGlobalBounds())
      //         .findIntersection(myblocks[x].s3.getGlobalBounds()) ||
      //     (Lblock.s2.getGlobalBounds())
      //         .findIntersection(myblocks[x].s4.getGlobalBounds()) ||
      //     (Lblock.s3.getGlobalBounds())
      //         .findIntersection(myblocks[x].s1.getGlobalBounds()) ||
      //     (Lblock.s3.getGlobalBounds())
      //         .findIntersection(myblocks[x].s2.getGlobalBounds()) ||
      //     (Lblock.s3.getGlobalBounds())
      //         .findIntersection(myblocks[x].s3.getGlobalBounds()) ||
      //     (Lblock.s3.getGlobalBounds())
      //         .findIntersection(myblocks[x].s4.getGlobalBounds()) ||
      //     (Lblock.s4.getGlobalBounds())
      //         .findIntersection(myblocks[x].s1.getGlobalBounds()) ||
      //     (Lblock.s4.getGlobalBounds())
      //         .findIntersection(myblocks[x].s2.getGlobalBounds()) ||
      //     (Lblock.s4.getGlobalBounds())
      //         .findIntersection(myblocks[x].s3.getGlobalBounds()) ||
      //     (Lblock.s4.getGlobalBounds())
      //         .findIntersection(myblocks[x].s4.getGlobalBounds())) {
      //   Lblock.bottom = true;
      //   break;
      // }
    }
  }
}
