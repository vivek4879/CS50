#include <cs50.h>
#include <stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

bool only_digits(string s);
char rotate(char c, int n);

int main(int argc, string argv[])
{
    // check if argument has only 2 strings
    if (argc == 2)
    {
        //to check if the first string of the argument has only digits
        if (only_digits(argv[1]))
        {
            // converting to intiger
            int a = atoi(argv[1]);
            string s = get_string("plaintext: ");
            int l = strlen(s);
            printf("ciphertext: ");
            for (int i = 0; i < l; i++)
            {
                //rotating the chars accrding to the key
                char S = rotate(s[i], a);
                printf("%c", S);
            }
            printf("\n");
        }
        else
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
}


// function to check for only digits
bool only_digits(string s)
{
    bool g = false;
    int n = strlen(s);
    for (int i = 0; i < n; i++)
    {
        // check if digit
        if (isdigit(s[i]))
        {
            g = true;
        }
        else
        {
            g = false;
        }
    }
    return g;
}

// function to rotate according to the key
char rotate(char c, int n)
{
    //check if alphabet
    if (isalpha(c))
    {
        //check if upper letter
        if (isupper(c))
        {
            //get remainder after dividing by 26
            n = n % 26;
            c = c + n;
            //91 and 64 as those are limits for upper case etters in ASCII
            if (c < 91 && c > 64)
            {
                return c;
            }
            else if (c > 90 || c < 0)
            {
                c = c - 26;
                return c;
            }
        }
        else if (islower(c))
        {
            n = n % 26;
            c = c + n;
            if (c < 123 && c > 96)
            {
                return c;
            }
            else if (c > 122 || c < 0)
            {
                c = c - 26;
                return c;
            }
        }
    }
    else
    {
        return c;
    }
    return c;
}
