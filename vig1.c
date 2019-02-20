#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void pruu(char a, char b)
{
    printf("%c", ((a - 65 + b - 65) % 26) + 65);
}

void prul(char a, char b)
{
    printf("%c", ((a - 65 + b - 97) % 26) + 65);
}

void prlu(char a, char b)
{
    printf("%c", ((a - 97 + b - 65) % 26) + 97);
}

void prll(char a, char b)
{
    printf("%c", ((a - 97 + b - 97) % 26) + 97);
}


int main(int argc, string argv[])
{

     if (argc != 2)
    {
        printf("not valid key\n");
        return 1;
    }

    string key = argv[1];
    int n = strlen(key);
    int j;

    for (int i = 0; i < n; i++)
    {
        if (isdigit (key[i]))
        {
            printf("not valid key!\n");
            return 1;
        }
    }


    string s = get_string("get your sentence to code!\n");
    int p = strlen(s);

   for (int i = 0, y = 0; i < p; i++)
    {

         j = y % n;


        if (isalpha (s[i]))
        {
                if (isupper (s[i]))
            {
                if (isupper (key[j]))
                {
                    pruu(s[i], key[j]);
                }
                else
                {
                    prul(s[i], key[j]);
                }
            }
            else
            {
                if (isupper (key[j]))
                {
                    prlu(s[i], key[j]);
                }
                else
                {
                    prll(s[i], key[j]);
                }
            }

        y++;
        }

        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}