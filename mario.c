#include <cs50.h>
#include <stdio.h>

int main(void)
{
    for(;;)
    {
        printf("Height: ");
        int ht = get_int("");
        printf("\n");
        if(ht>=1 && ht<=8)
        {
            int i,j,k,h;
            for(i=1;i<=ht;i++)
            {
                for(k=i;k<ht;k++)
                printf(" ");   
            for(j=1;j<=i;j++)
                printf("#");
            printf("  ");
            for(h=1;h<=i;h++)
                printf("#");
            printf("\n");
        }
        break;
    }
        else
            continue;
    }
}
