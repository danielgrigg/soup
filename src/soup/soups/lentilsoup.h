#include <soup/soup.h>

class LentilSoup : public Soup
{
  public:
    LentilSoup():
      Soup("lentil")
  {}
    virtual std::string taste()const
    {
      return "like bark";
    }
};

