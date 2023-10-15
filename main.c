#include <stdio.h>


int display[10][10];

typedef struct Point{
   int x;
   int y;
}point;

void drawPoint(point p, char on) {
   display[9-p.y][p.x] = on;
}

void drawLine(point p, int len, char on) {
   
   for(int i =0; i < len; i++)
   {
      drawPoint(p, 0);
      p.y = p.y + 1;
   }
}

int main()
{
   float m;


   for (int y = 0; y < 10; y++)
   {
      for (int x = 0; x < 10; x++)
      {
         display[y][x] = 1;
      }
   }
   point p;
   p.x = 1;
   p.y = 1;

   point pf;
   pf.x = 5;
   pf.y = 7;

   float x1 = 1.0;
   float y1 = 1.0;
   float x2 = 5.0;
   float y2 = 7.0;

   m = (y2 - y1)/(x2 - x1);

   printf("slope = %f\n", m);

   int current_y = 0;
   for (int current_x = p.x; current_x < (6); current_x++)
   {
      drawPoint(p, 0);
      current_y = m*(current_x);
      p.x++;
      p.y = current_y;
   }


   


   for (int y = 0; y < 10; y++)
   {
      for (int x = 0; x < 10; x++)
      {
         printf("[%d]", display[y][x]);
      }
      printf("\n");
   }

   return 0;
}

