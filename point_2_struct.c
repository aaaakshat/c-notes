#include <string.h>
#include <stdlib.h>
#include <stdio.h>

struct s {
	int x;
	struct s *next;
};

int main() {

struct s *p1 = NULL;
     struct s *p2 = NULL;
     struct s *p3 = NULL;
     struct s *p4 = NULL;
     struct s *p5 = NULL;

   p5 = malloc(sizeof(struct s));
   p5->x = 5;
   p5->next = NULL;
   p4 = malloc(sizeof(struct s));
   p4->x = 4;
   p4->next = p5;
   p3 = malloc(sizeof(struct s));
   p3->x = 3;
   p3->next = p4;
   p2 = malloc(sizeof(struct s));
   p2->x = 2;
   p2->next = p3;
   p1 = malloc(sizeof(struct s));
   p1->x = 1;
   p1->next = p2;

   printf("%d %d\n",
          p1->next->next->next,
          p2->next);

   return 0;
}

