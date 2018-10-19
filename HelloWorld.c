#include<stdio.h>

void greetYourName(char first_name, char last_name);
int main(void)
{
  //getting user details

char F_N;
printf("Enter First Letter of FirstName");
scanf("%c",&F_N);

char L_N;
printf("Enter First Letter of LastName");
scanf("%c",&L_N);

  
  greetYourName(F_N,L_N);
  return 0;
}

  
// creating a function that greets somebody based on the first and last name

void greetYourName(char first_name, char last_name){

printf("Hello %c.%c",first_name,last_name);


}




