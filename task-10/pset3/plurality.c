#include <cs50.h>
#include <stdio.h>
#include <string.h>


#define max 9

typedef struct
{
    string n;
    int votes;
}
cand;


cand c[max];


int c;
bool vote(string n)
{
    for (int i = 0; i < c; i++)
    {
        if (strcmp(c[i].n, n) == 0)
        {
            c[i].votes++;
            return true;
        }
    }
    return false;
}

void winner(void)
{
    int maxvotes = 0;
    for (int i = 0; i < c; i++)
    {
        if (c[i].votes > maxvotes)
        {
            maxvotes = c[i].votes;
        }
    }
    for (int i = 0; i < c; i++)
    {
        if (c[i].votes == maxvotes)
        {
            printf("%s\n", c[i].n);
        }
    }

    return;
}


int main(int argc, string argv[])
{

    if (argc < 2)
    {
        printf("Usage: plurality [candidate ...]\n");
        return 1;
    }
    c = argc - 1;
    if (c > max)
    {
        printf("maximum number of candiadates is %i\n", max);
        return 2;
    }
    for (int i = 0; i < c; i++)
    {
        c[i].n = argv[i + 1];
        c[i].votes = 0;
    }

    int vc = get_int("No of voters: ");

    for (int i = 0; i < vc; i++)
    {
        string n = get_string("Vote: ");
        if (!vote(n))
        {
            printf("Invalid vote.\n");
        }
    }
    winner();
}
