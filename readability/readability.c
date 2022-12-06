#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include<ctype.h>
#include<math.h>

// breadcrumbs for created functions
int count_letters(string s);
int count_words(string s);
int count_sentences(string s);
int is_period(char s);
int is_questionmark(char c);
int is_comma(char c);
int is_exclamation(char c);
int is_doubleinverted(char c);
int is_colon(char c);
int is_semicolon(char c);

int main(void)

{
    string text = get_string("Text:");
    //count letters
    float letters = count_letters(text);
    //to count words
    float words = count_words(text);
    //to count sentences
    float sentences = count_sentences(text);
    float L = (letters / words) * 100;
    float S = (sentences / words) * 100;
    //to calculate Index
    float index1 = (0.0588 * L) - (0.296 * S) - 15.8;
    //to round index
    int index = round(index1);


    if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}















// to count letters
int count_letters(string s)
{
    int l = strlen(s);
    int L = 0;
    for (int i = 0; i < l; i++)
    {
        if (isalpha(s[i]))
        {
            L++;
        }
    }
    return L;
}

//to count words
int count_words(string s)
{
    int l = strlen(s);
    int w = 0;

    for (int i = 0; i < l; i++)
    {
        if (isalpha(s[i]))
        {
            if (isspace(s[i + 1]))
            {
                w++;
            }
            else if (is_period(s[i + 1]))
            {
                w++;
            }
            else if (is_questionmark(s[i + 1]))
            {
                w++;
            }
            else if (is_comma(s[i + 1]))
            {
                w++;
            }
            else if (is_exclamation(s[i + 1]))
            {
                w++;
            }
            else if (is_doubleinverted(s[i + 1]))
            {
                w++;
            }
            else if (is_colon(s[i + 1]))
            {
                w++;
            }
            else if (is_semicolon(s[i + 1]))
            {
                w++;
            }
            else
            {
                w = w + 0;
            }
        }
    }
    return w;
}

//to count sentences
int count_sentences(string s)
{
    int l = strlen(s);
    int K = 0;

    for (int i = 0; i < l; i++)
    {
        if (is_period(s[i]))
        {
            K++;
        }
        else if (is_questionmark(s[i + 1]))
        {
            K++;
        }
        else if (is_exclamation(s[i + 1]))
        {
            K++;
        }
        else
        {
            K = K + 0;
        }
    }
    return K;
}

//to check if period
int is_period(char c)
{
    if (c == '.')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

//to check if questionmark
int is_questionmark(char c)
{
    if (c == '?')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


//to check if comma
int is_comma(char c)
{
    if (c == ',')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

//to check if exclamation
int is_exclamation(char c)
{
    if (c == '!')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

//to check if double inverted comma
int is_doubleinverted(char c)
{
    if (c == '"')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

//to check if colon
int is_colon(char c)
{
    if (c == ':')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

//to check if semicolon
int is_semicolon(char c)
{
    if (c == ';')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
