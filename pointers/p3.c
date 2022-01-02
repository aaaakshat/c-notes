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

void intcpy(int *source, int *target, int n) {
    for (int i=0; i<n; i++) {
        *target++ = *source++;
    }
}


int main(void)
{
    my_strcpy(strB, strA);
//    puts(strB);


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

    int a[10] = {1,2,3,4,5};
    int b[10] = { };

    intcpy(a, b, 3);

    int *b_ptr= b;
    int *a_ptr = a;
   
    for (int i=0; i < 10; i++) {
        printf("%i", *a_ptr++);
    }
    printf("\n");
    for (int i=0; i < 10; i++) {
        printf("%i", *b_ptr++);
    }
    printf("\n");

    return 0;
}


