#include <stdio.h>

int main()
{
    int eta;
    printf("metti la tua eta:");
    scanf("%d", &eta);
    if(eta < 18)
    { 
        printf ("se minorenne\n");
    }
    else if (eta== 18)
    {
        printf("sei appena diventato maggiorenne!\n");
    }
    else
    {
        printf("hai piu di 18 anni");
    }




}