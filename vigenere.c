#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(int argc, string argv[])
{
    if(argc!=2)
    {
        return 1;
    }
    for(int i = 0 ; i < strlen(argv[1]) ; i++)
    {
        if(!(isalpha(argv[1][i])))
        {
            printf("Usage: ./vigenere keyword\n");
            return 1;
        }
    }
    string key = argv[1];
    int keylen = strlen(key);
    string ptext = get_string("plaintext: ");
    printf("\n");
    char ch[] = {' '};
    key = strcat(key,ch);
    int j=0;
    printf("ciphertext: ");
    int n = strlen(ptext);
    for(int i = 0 ; i < n ; i++)
    {
        if(key[j]==' ')
            j=0;
        if(ptext[i]>=65 && ptext[i]<=90 && key[j]>=65 && key[j]<=90)
        {
            ptext[i] = (((ptext[i] - 65) + (key[j] - 65)) % 26) + 65;
            j++;
        }
        else if(ptext[i]>=65 && ptext[i]<=90 && key[j]>=97 && key[j]<=122)
        {
            ptext[i] = (((ptext[i] - 65) + (key[j] - 97)) % 26) + 65;
            j++;
        }
        else if(ptext[i]>=97 && ptext[i]<=122 && key[j]>=97 && key[j]<=122)
        {
            ptext[i] = (((ptext[i] - 97) + (key[j] - 97)) % 26) + 97;
            j++;
        }
        else if(ptext[i]>=97 && ptext[i]<=122 && key[j]>=65 && key[j]<=90)
        {
            ptext[i] = (((ptext[i] - 97) + (key[j] - 65)) % 26) + 97;
            j++;
        }
    }
    for(int i = 0 ; i < n ; i++)
    {
        printf("%c",ptext[i]);
    }
    printf("\n");
}
