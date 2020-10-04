#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int words(const char *sentence);
int main(void)
{
    //initialize with 0
    int letter = 0, sentence = 0, word = 0; 
    //get input to the user
    string s = get_string("Text: ");
    
    for (int i = 0, len = strlen(s); i < len; i++)
    {
        if (isalpha(s[i])) // using isaplha function to make lifee easier
        {
            letter++;
        }
            
        if ((i == 0 && s[i] != ' ') || (i != len - 1 && s[i] == ' ' && s[i + 1] != ' ')) // find a word and count that
        {
            word++;
        }
           
        if (s[i] == '.' || s[i] == '?' || s[i] == '!') // find all sentence that have '.' '!' '?'
        {
            sentence++;
        }
    }
    float L = (letter / (float)word) * 100;// average the number of letter per 100 words
    float S = (sentence / (float)word) * 100;// average number of sentence per 100 words
    int index = round(0.0588 * L - 0.296 * S - 15.8);
    
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
        

}