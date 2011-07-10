#ifndef BOWL_H
#define BOWL_H

#include <string>
#include <iosfwd>

class Bowl
{
  public:
    enum Size
    {
      kSmall,
      kMedium,
      kBig
    };

    Bowl(Size size = kMedium);
    virtual ~Bowl();

    virtual std::string soundWhenHit()const = 0;
    Size size()const { return _size; }

  private:
    Size _size;
};

std::ostream& operator<<(std::ostream& os, const Bowl::Size size);

std::ostream& operator<<(std::ostream& os, const Bowl& rhs);

#endif

