#include <stdio.h>
#include <stdlib.h>

int main(){
  int age;
  printf("Please enter your age: \n");
  scanf("%d", &age);
  if(age > 21){
    printf("You can drink legally.\n");
    if(age > 25){
      printf("...But damn you is old.\n");
    }
  } else if(age == 21){
    printf("Have you celebrated your birthday recently?\n");
  } else {
    printf("Not adult enough to drink legally.\n");
  }
  printf(":)\n");
  return 0;
}
