#include<stdio.h>
int main()
{
     //To initialize variables  
      int temp,square,count=1,number;

      //To take user input
      printf("enter any number : ");
      scanf("%d",&number);

    //To store duplicity value 
       temp=number;

    //find square of a number
     square=number*number;

    //display square of a number 
     printf("square of a number %d ",square);

      //use this loop and check this condition
      while (number!=0)
     {
          count=count*10;
          number=number/10;
     }
     //check number is automorphic 
      if(square%count==temp)  
           printf(" \n  So It is Automorphic Number");
      //to false condition
      else
           printf("\n It is Not Automorphic Number");
      return 0;
}