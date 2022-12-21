#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d\n",&t);
	 
	
	while(t--){
	    char c;
	    scanf("%c\n",&c);
	    
	    if(c=='b'||c=='B'){
	        printf("BattleShip\n");
	    }
	    else if(c=='c'||c=='C'){
	        printf("Cruiser\n");
	    }
	    else if(c=='d'||c=='D'){
	        printf("Destroyer\n");
	    }
	    else if(c=='f'||c=='F'){
	        printf("Frigate\n");
	    }
	    
	}
	return 0;
}
