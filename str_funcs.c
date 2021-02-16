#include <stdio.h>
#include <string.h>
#define     SIZE    50


char* strrchr1(const char* p, int c)
{
    const char* pfound = NULL;

    while(*p) {
        if (*p == c)
            pfound = p;
        ++p;
    }

    if (c == '\0')
        return (char*) p;
    

    return (char*)pfound;
}

char* strcpy1(char* pdest, const char* psource)
{
    char* ptemp = pdest;
    while (*pdest++ = *psource++)
        ;
    
    return ptemp;
}

char* strcat1(char* pdest, const char* psource) 
{
    char* ptemp = pdest;

    while(*pdest)
        ++pdest;

    while (*pdest++ = *psource++)
        ;
        
    return ptemp;
}
