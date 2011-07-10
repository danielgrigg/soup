#include "soup.h"
#include <iostream>

Soup::Soup(const std::string& variety):
  _variety(variety)
{
  std::cout << "Mmm, I smell " << variety << " soup!" << std::endl;
}

Soup::~Soup()
{
}

std::ostream& operator<<(std::ostream& os, const Soup& rhs)
{
  os << "This " << rhs.variety() << " soup tastes " << rhs.taste() << ".\n";
  return os;
}

