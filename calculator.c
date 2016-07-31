#include <stdio.h>

int main(){
	
	int input;
	int var1 ,var2 , ans;
		   
		   printf("Choose \n 1.Add \n 2.Subtract \n 3.Divide \n 4.Multiply \n");
		     
		   scanf("%d",&input);   
		       
	switch(input){
	case 1:
	       printf("You choose add\n");
	      
	      printf("Enter the first no:");
	      scanf("%d",&var1);
	      
	      printf("\nEnter the second no:\n");
	      scanf("%d",&var2);
	      
	      ans = var1+var2;
	      
	      printf("The answer is\n %d",ans);
	      break;
	case 2:
	       printf("You choose subtraction\n");
	       printf("Enter the first no:");
	      scanf("%d",&var1);
	      
	      printf("\nEnter the second no:\n");
	      scanf("%d",&var2);
	      
	      ans = var1-var2;
	
	      printf("The answer is\n %d",ans);
	       break;
	       
	case 3:
	       printf("You choose division\n");
	       printf("Enter the first no:");
	      scanf("%d",&var1);
	      
	      printf("\nEnter the second no:\n");
	      scanf("%d",&var2);
	      
	      ans = var1/var2;
	      
	      printf("The answer is\n %d",ans);
	       break;
	case 4:
	       printf("You choose multiplication\n");
	       printf("Enter the first no:");
	      scanf("%d",&var1);
	      
	      printf("\nEnter the second no:\n");
	      scanf("%d",&var2);
	      
	      ans = var1*var2;
	      
	      printf("The answer is\n %d",ans);
	       break;
	   }
	   
	   
	   return 0;
	   
   }
	               
