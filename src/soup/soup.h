#ifndef SOUP_H
#define SOUP_H

#include <string>
#include <iosfwd>

class Soup
{
  public:
    Soup(const std::string& variety);
    virtual ~Soup();

    virtual std::string taste()const = 0;
    const std::string& variety()const { return _variety; }

  private:
    std::string _variety;
};

std::ostream& operator<<(std::ostream& os, const Soup& rhs);

#endif

