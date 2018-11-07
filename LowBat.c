/**
 * @brief Display Low Battery on BadgeWX
 * @author Michael Burmeister
 * @date November 7, 2018
 * @version 1.0
 * 
*/
#include "LowBat.h"
#include "simpletools.h"

int i;
i2c *m;
int s;

int main()
{
  high(17);
  
  low(18);
  
  // lets hide are self from the loader startup code
  s = 0xfff7;
  m = i2c_newbus(28, 29, 0);
  i2c_in(m, 0x50, 10, 2, (char*)&i, 2);
  i2c_out(m, 0x50, i-2, 2, (char*)&s, 2);
//  printi("value: %x\n", i);
  
  i = 0;
 
  while(i < 1024)
  {
    shift_out(21, 20, MSBFIRST, 8, LowBat[i++]);
  }
  
  exit(1); 
}
