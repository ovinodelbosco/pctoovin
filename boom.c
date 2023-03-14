#include <stdio.h>

int main()
{
 int x;
 int y;
 int z; 
printf ("inserisci tre numeri");
scanf("%d", &x);
scanf("%d", &y);
scanf("%d", &z);

if(x+y > z && y+z> x && z+x > y)
{
    printf( "triangolo" );
}
else
{
    printf( "no trangolo");
}



}
