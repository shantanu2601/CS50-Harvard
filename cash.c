#include <cs50.h>
#include <stdio.h>
#include <math.h>
int main(void)
{
    for(;;)
    {
        printf("Change owed: ");
        float dollar = get_float("");
        printf("\n");
        if(dollar>=0.00)
        {
            int cents = round(dollar*100);
            int c;
            c = cents/25;
            cents = cents%25;
            c += cents/10;
            cents = cents%10;
            c += cents/5;
            cents = cents%5;
            c += cents/1;
            printf("%i\n",c);
            break;
        }
        else
            continue;
    }
}
