#include <stdio.h>

int main(){
	int i,j;
	char arr[1][27]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','N','O',
	'P','Q','R','S','T','U','V','W','X','Y','Z'};
    char (*ptr)[27];
    ptr = arr;
	
 for(i=0;i<1;i++){
    	for(j=0;j<27;j++){
    		if((*(*(ptr+i)+j)=='A')|| (*(*(ptr+i)+j)=='E') || (*(*(ptr+i)+j)=='I')|| (*(*(ptr+i)+j)=='O')
			|| (*(*(ptr+i)+j)=='U')){
    		ptr[i][j]='*';
		}
	}
}
printf("New characters");
    for(i=0;i<1;i++){
    	for(j=0;j<27;j++){
    		printf(" %c",(*(*(ptr+i)+j)));
		}
	}

   
	
	
}
