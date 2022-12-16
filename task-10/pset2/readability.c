#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void ){
    string text=get_string("Text: ");
    int l=0;
    int wc=1;
    int sc=0;
    for(int i=0;i<strlen(text);i++)
    {
        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
        {
            l++;
        }

    else if (text[i] == ' ')
        {
            wc++;
        }
     else if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sc++;
        }
    }
    float L=(float)l/(float)wc*100;
    float S=(float)sc/(float)wc*100;
    float index = 0.0588 * L - 0.296 * S - 15.8;
    int grade = round(index);
    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %d\n", grade);
    }
}