#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<math.h>


void count() {
printf("Enter lines of text here: .../n");
int c,  nt = 0, nbackslash = 0, nl = 0;
double nc = 0;

while ((c = fgetc(stderr)) != EOF) {
if (c == '\n') { ++nl;
}
else if (c == '\t') { ++nt;
}
else if (c == '\\') { nbackslash += 1;
}
else if (isspace(c)) { ++nc; }
printf("lines: %d\n", nl);
printf("tabs: %i\n", nt);
printf("backslashes: %u\n", nbackslash);
printf("alphanumeric: %f\n", nc);
}
}
int main(int argc, const char* argv[]) {
count();
return 0;
}



// (3 pts) (2) Find the first character c in a const char* s:  strchr (s, 'c');
// (3 pts) (3) Find the length of the prefix of const char* s that has characters in const char* t: strspn (s, t);
// (3 pts) (4) Terminate a program immediately  exit (status);
// (3 pts) (5) Open the file “midterm.txt” in read mode  fopen ("midterm.txt", "r");

ill in the program code below for the square ADT (abstract data type)
//------ POINT ----------------------------------------------------------------
typedef struct point point;
struct point { double x, y; };
//------ SQUARE -----------------------------------------------------------------
typedef struct square square;
struct square { point ul; double side; };

square* square_init(double ulx, double uly, double side);// TODO

{
          return ((ulx->x >= uly->ul.x) &&
          (uly->y>= uly->ul.y) &&
          (ulx->x >= side->side.x) &&
          (uly->y >= side->side.y));

}
void square_delete(square* sq); // TODO
{
    double x = 0, y = 0, side = 0;

  return 0;
}

void square_move(square* sq, double x, double y);// TODO
{

          double r->x = x;
          double r->y = y;
}
void square_expandby(square* sq, double expandby);// TODO
{
  r -> expandby += r;
  return r;
}
double square_area(square* sq); // TODO
{

       double height, width, area;

       height = ((r ->ul.x) - (r ->br.x));
       width = ((r->ul.y) - (-->ul.y));
       area = height * width;
       return (area);
}

double square_perimeter(square* r); // TODO
{
  double height, width, perimeter;

  height = ((r ->ul.x) - (r ->ul.y));
  width = ((r->br.y) - (-->br.x));
  area = (height * 2) + (width * 2);
  return (area);
}
// print location, side, area and perimeter

void square_print(const char* msg, square* sq); // TODO
{
  printf("%d,the location, %d, the side, %d the area, %d the perimeter \n", );
}


void test_square(double ulx, double uly, double side) {
square* sq = square_init(ulx, uly, side);
square_print(“sq is: “, sq);
square_move(2, 2);
square_print(“sq is now: “, sq);
square_expandby(sq, 10);
square_print(“sq has expanded to: “, sq);
square_delete(sq);
printf(“\n\n”);
}
void tests_square() {
test_square(0, 0, 10);
test_square(1, 1, 5);
// add other tests if you wish
}
int main(int argc, const char* argv[]) {
tests_square();
return 0;
}
