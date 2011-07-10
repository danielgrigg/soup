#include <soup/bowl.h>

class WoodenBowl : public Bowl
{
  public:
    WoodenBowl(Size size = kMedium); 
    virtual std::string soundWhenHit()const;
};
