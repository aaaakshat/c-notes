#include <stdio.h>

char strA[80] = "A string to be used for demonstration purposes";
char strB[80];

char *my_strcpy(char *destination, char *source)
{
    char *p = destination;
    while (*source != '\0')
    {
        *p++ = *source++;
    }
    *p = '\0';
    return destination;
}   

void my_strcpy2(char *destination, char *source)
{
    while (*source != '\0')
    {
        *destination++ = *source++;
    }
    *destination = '\0';
}   

void intcpy(int *source, int *target, int n) {
    for (int i=0; i<n; i++) {
        *target++ = *source++;
    }
}


int main(void)
{
    my_strcpy2(strB, strA);
    puts(strB);

    char *pA;     // a pointer to type character
    char *pB;     // another pointer to type character 
//    puts(strA);   // show string A 
    pA = strA;    // point pA at string A 
 //   puts(pA);     // show what pA is pointing to 
    pB = strB;    // point pB at string B 
  //  putchar('\n');       // move down one line on the screen 
    while(*pA != '\0')   // line A (see text) 
    {
        *pB++ = *pA++;   // line B (see text)
    }
    *pB = '\0';          // line C (see text) 
   // puts(strB);          // show strB on screen 


    return 0;
}


