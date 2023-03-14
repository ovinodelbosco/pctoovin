#include <stdio.h>
int main()
{
 int x;
 int y;
 int z; 
printf ("inserisci tre numeri ");
scanf("%d", &x);
scanf("%d", &y);
scanf("%d", &z);

if(x+y > z && y+z> x && x+z> y)
{
    printf( "triangolo\n" );
    if( x == y && y == z)
    { 
        printf( "triangolo equilatero\n");
    }
    else if( x == y && z!= y)
    {
        printf("triangolo isoscele\n");
    }
    else
    {
        printf("triangolo scaleno");
    }
}
else
{
    printf( "no trangolo\n");
}
}


