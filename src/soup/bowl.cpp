#include "bowl.h"
#include <iostream>
#include <map>

std::ostream& operator<<(std::ostream& os, const Bowl::Size size)
{
  if (size == Bowl::kSmall) os << "small";
  else if (size == Bowl::kMedium) os << "medium";
  else if (size == Bowl::kBig) os << "large";
  else os << "impossibly sized!";
  return os;
}

Bowl::Bowl(Size size):
  _size(size)
{ 
  std::cout << "A new " << size << " bowl is born!\n";
}

Bowl::~Bowl()
{
}

std::ostream& operator<<(std::ostream& os, const Bowl& rhs)
{
  os << "This " << rhs.size() << " bowl goes " 
     << rhs.soundWhenHit() << " when hit.";
  return os;
}

