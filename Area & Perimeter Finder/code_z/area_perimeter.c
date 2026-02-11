#include <stdio.h>
int main(){
  printf("Welcome to the program to calculate area and perimeter of Parallelogram\n");

  float l, w, h;
  printf("Enter base/length of Parallelogram: ");
  scanf("%f", &l);
  printf("Enter width of Parallelogram: ");
  scanf("%f", &w);
  printf("Enter height of Parallelogram: ");
  scanf("%f", &h);

  printf("The area of Parallelogram = %.2f\n", l * h);
  printf("The perimeter of Parallelogram = %.2f\n", 2 * (l + w));

  printf("Thank you for seeing the world of Maths specially Parallelogram");
  return 0;
}