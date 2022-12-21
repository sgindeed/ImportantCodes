#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,x;
	    scanf("%d%d",&n,&x);
	    int a[n],i;
	    for(i=1;i<n;i++) scanf("%d",&a[i]);
	    
	    int sum=0;
	    for(i=1;i<n;i++){
	        sum=sum+a[i];
	    }
	    int p=(x*n)-sum;
	    if(p>0) printf("%d\n",p);
	    else printf("0\n");
	}
	return 0;
}
