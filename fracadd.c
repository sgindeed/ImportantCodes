#include<stdio.h>
int main()
{
    //for initialize variables
    int numerator1, denominator1, numerator2, denominator2, x, y, c, gcd_no;
    
    //To take user input of numerators and denominators
    printf("Enter the numerator for 1st number   : ");
    scanf("%d",&numerator1);
    printf("Enter the denominator for 1st number : ");
    scanf("%d",&denominator1);
    printf("Enter the numerator for 2nd number   : ");
    scanf("%d",&numerator2);
    printf("Enter the denominator for 2nd number : ");
    scanf("%d",&denominator2);
    
    //numerator
    x=(numerator1*denominator2)+(denominator1*numerator2); 
    
    //denominator
    y=denominator1*denominator2; 
    
	// Trick part. Reduce it to the simplest form by using gcd.
    for(c=1; c <= x && c <= y; ++c)
    {
       if(x%c==0 && y%c==0)
          gcd_no = c;
    }
    
    //To display fraction of givien numerators and denominators
    printf("(%d / %d) + (%d / %d) = (%d / %d)", numerator1, denominator1, numerator2, denominator2, x/gcd_no, y/gcd_no);
    
    return 0;
}