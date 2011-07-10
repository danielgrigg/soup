#include "woodenbowl.h"
#include <string>

WoodenBowl::WoodenBowl(Size size):
  Bowl(size)
{ }

std::string WoodenBowl::soundWhenHit()const
{
  return "Donk!";
}

