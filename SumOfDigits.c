#include <stdio.h>
int main()
{
  printf("Enter number:");
  int a,b,c;
  b=0,c=0;
  scanf("%d",&a);
  while(b<a){
    b++;
    c=b+c;
  }
  printf("%d",c);
}
