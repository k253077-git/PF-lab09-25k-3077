#include<stdio.h>

int main(){
	int i,j,num;
	int arr[3][3];
	int (*ptr)[3];
	ptr= arr;
	for (i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter numbers:arr[%d][%d]: \n",i,j);
			scanf("%d",&(*(*(ptr+i)+j)));
		}
	}
	
	printf("Enter number of search: ");
	scanf("%d",&num);
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(*(*(ptr+i)+j)==num){
				printf("index are: %d %d",i,j);
				
			}
		}
	}
}
