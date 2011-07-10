#include <soup/bowl.h>
#include <soup/bowls/woodenbowl.h>
#include <soup/soups/lentilsoup.h>
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
  Bowl* woodBowl = new WoodenBowl(Bowl::kSmall);
  cout << "Wood bowl says what? " << *woodBowl << endl;
  cout << endl;
  Soup* lentilSoup = new LentilSoup();
  cout << "How does it taste? " << *lentilSoup << endl;

  delete woodBowl;
  delete lentilSoup;
  return 0;
}

