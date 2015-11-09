/* How many Oreos? random number generator */
#include <stdio.h>      
#include <stdlib.h>    
   

int main ()
{
  printf ("How Many Oreos does Kyle eats a day?? : %d\n", rand()%100);
  printf ("How Many Oreos Lama eats a day!?: %d\n", rand()%100);
  
  return 0;
}