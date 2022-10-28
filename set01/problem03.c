#include<stdio.h>
int add(int a, int b, int sum);
int main(){
  int a, b, sum;
  printf("enter two no's: ");
  scanf("%d%d",&a,&b);
  sum = add(a, b, sum);
  printf("sum of two no's is: %d\n", sum);
}
int add(int a, int b, int sum){
  sum = a + b;
  return sum;
}