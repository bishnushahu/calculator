#include <stdio.h>
#include <math.h>

int addition();
int subtraction();
int multiplication();
int division();
int squared();
int root();

char repeat;

float int1, int2, int3, int4, total;
int main(){
int input;


repeat = 'y';

//top:
printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Squaring\n6. Square_Root : ");
scanf("%d",&input);

switch(input){

      case 1:
      printf("You Choose Addition : ");
      addition();
      break;

      case 2:
      printf("You Choose Substraction : ");
      subtraction();
      break;

      case 3:
      printf("You Choose Multiplication : ");
      multiplication();
      break;

      case 4:
      printf("You Choose Division : ");
      division();
      break;

      case 5:
      printf("You Choose Squaring the interger : \n");
      squared();
      break;

      case 6:
      printf("You Choose SquareRoot of the integer : \n ");
      root();
      break;
//goto top;
}

return 0;
}

int addition(){

    while(repeat=='y'){
    printf("\nEnter first variable : ");
    scanf("%f",&int1);
    printf("\nEnter second variable : ");
    scanf("%f",&int2);

    total = int1+int2;

    printf("\n%f\t+\t%f\t=\t%f\nEnter y to repeat the program and n to stop\n :: ",int1,int2,total);

     scanf(" %c",&repeat);

     if (repeat=='n'){
     printf("Stopped");
     }

}
return 0;

}

int subtraction(){

   while(repeat=='y'){
    printf("\nEnter the first variable : ");
    scanf("%f",&int1);

    printf("\nEnter the second variable : ");
    scanf("%f",&int2);

    total = int1-int2;

    printf("\n%f - %f = %f\nEnter y to repeat the program and n to stop\n::",int1,int2,total);

    scanf(" %c",&repeat);

   }

return 0;

}

int multiplication(){

    while(repeat=='y'){
    printf("\nEnter the first variable : ");
    scanf("%f",&int1);

    printf("\nEnter the second variable : ");
    scanf("%f",&int2);

    total = int1*int2;

    printf("\n%f x %f = %f\nEnter y to repeat the program and n to stop the program ",int1,int2,total);

    scanf(" %c",&repeat);
    }
return 0;

}

int division(){

   while(repeat=='y'){
    printf("Enter first variable : ");
    scanf("%f",&int1);

    printf("Enter second variable : ");
    scanf("%f",&int2);

    total = int1/int2;

    printf("\n%f / %f = %f\nEnter y to repeat the program and n to stop the program\n :: ",int1,int2,total);

    if(repeat=='n'){

    printf("Stopped!! Close the program and re-compile!!");

    }

    }

return 0;

}
int squared(){

while(repeat=='y'){

printf("Enter the integer to be squared\n : ");
scanf("%f",&int1);

total = int1*int1;

printf("\n The squared of %f is %f\nEnter y to repeat and n to stop the program\n :: ",int1,total);

if(repeat=='n'){

printf("The program has been stopped ! Please re compile to use it again!!");

}

}
return 0;
}

int root(){

while (repeat=='y'){

printf("\nEnter the integer to be squared\n : ");
scanf("%f",&int1);

total = (int1*int1)/int1;

printf("\nThe SquareRoot of %f is %f\nEnter y to repeat and n to stop the program\n :: ",int1,total);

if(repeat=='n'){
printf("The program has been stopped ! Please re-compile to use it again!!");
}
}

return 0;
}

int sum(){


}
