#include <stdio.h>

void mat(int runs[11]){
	int i,j;
	int *p=runs;
	
	for(i=0;i<11;i++){
		printf("Player %d score: ",i+1);
		scanf("%d",&(*(p+i)));
	}
}
void calc(int runs[11]){
	int i,j,max=0,pl=0;
	float t=0,avg=0;
	int *p=runs;
	
	for(i=0;i<11;i++){
		if(max<(*(p+i))){
			max=*(p+i);
			pl=i+1;
		}
		t += (*(p+i));
	}
	avg=t/11;
	printf("Total score by 11 player is: %.1f\n",t);
	printf("Avg of player is: %.1f\n",avg);
	printf("Max score is %d by player %d",max,pl);
}

int main(){
	int arr[11];
	mat(arr);
	calc(arr);
}
