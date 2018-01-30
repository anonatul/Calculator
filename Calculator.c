#include <stdio.h>
#include <conio.h>
void main()
{
  int n,a,b,c=0;
  printf("\nEnter the first number : ");
  scanf("%d",&a);
  printf("\nEnter the second number :" );
  scanf("%d",&b);
  printf("\nSelect the case 1 for add , 2 for substract , 3 for multiply, 4 for division : ");
  scanf("%d",&n);
  switch (n)
  {
    case 1:
      c=a+b;
      printf("\nThe Sum is = %d",c);
      break;
    case 2:
      c= a-b;
      printf("\nThe substitution is = %d",c);
      break;
    case 3:
      c=a*b;
      printf("\n The Multiplication is = %d",c);
      break;
    case 4:
      c=a/b;
      printf("\nThe division is = %d",c);
      break;
  }
}
