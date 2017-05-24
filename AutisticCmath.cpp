#include "AutisticCmath.h"

inline float abs_f(float x)
{
	return(x*(1 - (2 * (x < 0))));
}

inline sf::Vector2f crossVS(const sf::Vector2f & v, float a)
{
	return sf::Vector2f(v.y*a,-v.x*a);
}

inline sf::Vector2f crossSV(float a, const sf::Vector2f & v)
{
	return sf::Vector2f(-v.y*a, v.x*a);
}

inline float crossVV(const sf::Vector2f & a, const sf::Vector2f & b)
{
	return a.x * b.y + a.y * b.x;
}

inline float dot(const sf::Vector2f & a, const sf::Vector2f & b)
{
	return a.x * b.x + a.y*b.y;
}

inline float vecLenght(const sf::Vector2f & a)
{
	return sqrt(dot(a, a));
}

inline float vecLenghtSq(const sf::Vector2f & a)
{
	return dot(a,a);
}

inline sf::Vector2f vecNormalize(sf::Vector2f & a)
{
	return a / vecLenght(a);
}

inline float distance(const sf::Vector2f & a, const sf::Vector2f & b)
{
	return sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
}

inline float distanceSq(const sf::Vector2f & a, const sf::Vector2f & b)
{
	return ((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
}