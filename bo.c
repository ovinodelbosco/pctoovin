#include <stdio.h>
int main()
{
 int x;
 
 
 
 printf ("inserisci un anno");
 scanf("%d", &x);
 int y = 1969-x;
 
 int z = x-1969;
 

 if( x == 1969)
 {
    printf( "sei nato durante lo sbarco sulla luna\n");
 }
 else if(x<1969)
 {
    printf( "se nato %d anni prima dello sbarco\n",y);
 }
 else  if(x>1969)
 {
    printf("sei nato %d anni dopo lo sbarco\n", z);
 }

}