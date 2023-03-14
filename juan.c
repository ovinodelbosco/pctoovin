#include <stdio.h>
int main()
{
    char sesso;
    printf("dimmi di che sesso sei");
    scanf(" %c" , &sesso);
    if (sesso == 'm')
    {
        printf("sei un manzo\n");
    }
 else if (sesso == 'f')
 {
    printf("sei una lavatrice\n");
 }
 else if (sesso == 'n')
 {
    printf("aiutoooo\n");
 }
 else
 {
    printf("ërrore\n");
 }
}