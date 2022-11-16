#include<stdio.h>
void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);
int main(){
 char string1[100], string2[100];
  int result;
 input_two_strings(string1, string2);
 result = stringcompare(string1, string2);
}
void input_two_strings(char *string1, char *string2){
  printf("Enter the first string: ");
  scanf("%s", *string1);
  printf("Enter the second string: ");
  scanf("%s", *string2);
}
int stringcompare(char *string1, char *string2){
  
}