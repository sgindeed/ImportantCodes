#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	for(int i=0;i<T;i++){
	    float x,y,z;
	    scanf("%f %f %f",&x,&y,&z);
	    if(x>50 && y<0.7 && z>5600){
	        printf("%d\n",10);
	    }
	    else if(x>50 && y<0.7 && z<=5600){
	        printf("%d\n",9);
	    }
	    else if(x<=50 && y<0.7 && z>5600){
	        printf("%d\n",8);
	    }
	    else if(x>50 && y>=0.7 && z>5600){
	        printf("%d\n",7);
	    }
	    else if(x>50 || y<0.7 || z>5600){
	        printf("%d\n",6);
	    }
	    else if(x<=50 && y>=0.7 && z<=5600){
	        printf("%d\n",5);
	    }
	}
	return 0;
}
