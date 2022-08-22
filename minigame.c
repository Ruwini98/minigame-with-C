#include <stdio.h>
#include <stdlib.h>
int main() {
  int n,i;
  int j,k;
  int count =0;
  char name[30];
  
  printf("What is your name?");
   scanf("%s",&name);
  printf("Input the low level of elements you want to generate:");
   scanf("%d",&j);
  printf("Input the upper level of elements you want to generate:");
   scanf("%d",&k);
  printf("*****************************************\n");
  printf("Generating A Random Number from %d to %d\n",j,k);
  printf("*****************************************\n");
  
  printf("Guess the Number. You have 10 chances.\n");
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
  
    n = rand() % k + j;// Generating a random number acccording to upper and low levels
  
  
  while(1)
    {

	    printf("Input your guess\n");
	    if(scanf("%d",&i))//If the input is an integer check it is small,big or equal the the actual number.
		    
			{
		    if(i>n){
		      printf("Your input is bigger than the generated number.\n");
			  count+=1;
		    }
		    else if(i<n){
			  printf("Your input is smaller than the generated number.\n");
			  count+=1;
		    }
		    else if(i==n){
			  printf("Congragulations %s! You guess the generated number.You won the game.\n",name);
			  break;
		    }
		    if(count==10){//If the user ues all the attemps then break the game.
            printf("\nMaximum limit of atttempt finished, BAD LUCK %s!!!\n",name);
			printf("TRY AGAIN\n");
			printf("The correct answer is %d\n", n);
			break;
            }
		    }
			
		else if (scanf("%d",&i)==0){// If it is not an integer print it is invalid.
			printf("Invalid! Input numbers only.\n");
			scanf("%*s");
		}
		    
  }

  return 0;
}
