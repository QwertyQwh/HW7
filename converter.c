/*
 * Trivial implementation of converter function.
 * You may override this file or create your own.
 */
#include "converter.h"

#include <stdlib.h>

void convert_all(unsigned nlines, char *lines[], quote_t nums[])
{
  for (unsigned i = 0; i < nlines; i++) {
    //nums[i] = atoi(lines[i]);
     int j = 0;
     char b = lines[i][j];
    quote_t count = 0;
  	while(b != 0x00)
  	{
        count = count* 10;
        count += (int)b-48;
        j++;
        b = lines[i][j];
  	}
    nums[i] = count;
  }
}
