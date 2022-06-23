#include <stdio.h>
#define MAXLINE 1000 

// section 1.9

// function prototypes
int getline(char line[], int maxline);
void copy(char to[], char from[]);

// print longest input line
int main()
{
    int len; // current line length
    int max; // max line length seen so far
    char line[MAXLINE]; // current input line
    char longest[MAXLINE]; // longest line saved here

    max = 0;
    while ((len = getline(line, MAXLINE)) > 0)
    {
        if (len > max)
        {
            max = len;
            copy(longest, line); 
        }
    }

    if (max > 0) // there was a line
    {
        printf("%s", longest);
    }

    return 0;
}

// read a line into s, return length.
// args: line char array, max line length
int getline(char s[], int lim)
{
    int c, i;

    // i is less than MAXLINE and is not EOF and is not newline
    for (i=0; i<lim-1 && (c=getchar()) != EOF && c != '\n'; ++i)
    {
        s[i] = c; // store each char
    }

    if (c == '\n')
    {
        s[i] = c; // why
        ++i;
    }

    s[i] = '\0'; // null character - denotes end of string
    return i;
}

// copy contents of 'from' into 'to'. Assume they are big enough 
void copy(char to[], char from[])
{
    int i = 0;
    while((to[i] = from[i]) != '\0')
    {
        ++i;
    }
}
