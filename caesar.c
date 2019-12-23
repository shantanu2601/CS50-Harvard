#include <cs50.h>
#include <stdio.h>
#include <string.h>
int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Nope\n");
        return 1;
    }
    
    // once I check for correct argv put key into an int k
    int k = atoi(argv[1]);

    // check if the integer is non-negative
    if (k < 0)
    {
        printf("Nope\n");
        return 1;
    }
    else
    {
    string ptext = get_string("plaintext: ");
    printf("\n");
    printf("ciphertext: ");
    int n = strlen(ptext);
    for(int i = 0 ; i < n ; i++)
    {
        if(ptext[i]>=65 && ptext[i]<=90)
        {
            ptext[i] = (((ptext[i] - 65) + k) % 26) + 65;
        }
        else if(ptext[i]>=97 && ptext[i]<=122)
        {
            ptext[i] = (((ptext[i] - 97) + k) % 26) + 97;
        }
    }
    for(int i = 0 ; i < n ; i++)
        printf("%c",ptext[i]);
    printf("\n");
    return 0;
    }
}
