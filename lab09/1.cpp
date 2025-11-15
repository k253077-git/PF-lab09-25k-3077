#include <stdio.h>
#include <string.h>

void input(int bed[3][5]){
	char *ward[3]={"Gen","ICU","PRIV"};
	int i,j;
	
		printf("Enter 1: occupied 0:free:\n");
	for(i=0;i<3;i++){
		printf("%s ward\n",ward[i]);
		for(j=0;j<5;j++){
			printf("Bed %d: ",j+1);
			scanf("%d",&bed[i][j]);
		}
	}
}
void show(int bed[3][5]){
	char *ward[3]={"Gen","ICU","PRIV"};
	int i,j;
	int (*ptr)[5];
	ptr=bed;
	for(i=0;i<3;i++){
		printf("%s ward ",ward[i]);
		for(j=0;j<5;j++){
          printf("%d ",(*(*(ptr+i)+j)));
		}
		printf("\n");
	}
	
}
void calc(int bed[3][5]){
	int i,j,em=0,fil=0;
	int (*ptr)[5];
	ptr=bed;
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
		  if(*(*(ptr+i)+j)==1){
		  	fil++;
		  }else{
		  	em++;
		  }
		}	
	}
	printf("Occupied beds: %d",fil);
	printf("Availible bed: %d",em);
}




int main(){
	int hosp[3][5];
	input(hosp);
	show(hosp);
	calc(hosp);
}
