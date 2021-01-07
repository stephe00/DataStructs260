// marbles .cpp
// stephen oium
// cs 260

#include <iostream>
#include <cstdlib>

using namespace std;

void marbles(void)
{
  int max = 3000000000;
  int randomnum;

  int red = 2;
  int blue = 2;
  int green = 2;
  int yellow = 1;
  int black = 1;
  int white = 1;
  int randomcolor = 1;

  int bag = red+green+blue;
}

srandtime(0));

do {
  randomnum = (rand() % max) + 1;

  if (randomnum == 1 && white > 0)
  {
      white--;
      count << "The random white marble was removed. "<< endl;
      else if (randomnum == 2 && red && blue && green > 0)
      {
          cout << "The random marble removed was a red or blue or green marble" << endl;
          red--;
          blue--;
          green--:
      }


  } while (
      randomnum == 1 && yellow > 0 ||
      randomnum == 1 && black > 0 ||
      randomnum == 1 && white > 0 ||
      randomnum == 2 && red > 0 ||
      randomnum == 2 && blue > 0 ||
      randomnum == 2 && green > 0 ||
      randomnum == 1 && randomcolor > 0 ||


  bag--;

  std::cout << "red = " << red << ".\n";
  std::cout << "blue = " << blue << ".\n";
  std::cout << "green = " << green << ".\n";
  std::cout << "yellow = " << yellow << ".\n";
  std::cout << "black = " << black << ".\n";
  std::cout << "white = " << white << ".\n";
  std::cout << "bag = " << bag << ".\n";
  std::cout << "Random Color is = " << Random Color << ".\n";
}


int main(void)
{
  marbles();
}
