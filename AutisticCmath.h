#pragma once
#include <SFML\Graphics.hpp>
#include <cmath>

inline float abs_f(float);

inline sf::Vector2f crossVS(const sf::Vector2f &v, float a);
inline sf::Vector2f crossSV(float a, const sf::Vector2f &v);
inline float crossVV(const sf::Vector2f &a, const sf::Vector2f &b);

inline float dot(const sf::Vector2f &a, const sf::Vector2f &b);

inline float vecLenght(const sf::Vector2f &a);
inline float vecLenghtSq(const sf::Vector2f &a);
inline sf::Vector2f vecNormalize(sf::Vector2f &a);
inline float distance(const sf::Vector2f &a, const sf::Vector2f &b);
inline float distanceSq(const sf::Vector2f & a, const sf::Vector2f & b);