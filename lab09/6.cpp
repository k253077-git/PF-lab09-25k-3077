#include <stdio.h>

void input(int arr[4][5]){
	int i,j;
	int (*ptr)[5];
	ptr = arr;
	for(i=0;i<4;i++){
		printf("Student %d\n",i+1);
		for(j=0;j<5;j++){
			printf("Attendance 1=present 0=absent: ",j+1);
			scanf("%d",&(*(*(ptr+i)+j)));
		}
	}
}
void calc(int arr[4][5]){
		int i,j;
	int (*ptr)[5];
	ptr = arr;
	for(i=0;i<4;i++){
		printf("Student %d\n",i+1);
		for(j=0;j<5;j++){
			printf("Attendance %d\n",*(*(ptr+i)+j));
		}
			printf("\n");
	}
}
void percen(int arr[4][5]){
		int i,j,p;
	int (*ptr)[5];
	ptr = arr;
	for(i=0;i<4;i++){
		p=0;
		for(j=0;j<5;j++){
			if(*(*(ptr+i)+j)==1)
			p++;
	}
		float per=(p/5)*100;
		if(per<75){
			printf("Warning!, student %d attendance below 75\n",i+1);
		}
   }
}

int main(){
	int data[4][5];
	
	input(data);
	calc(data);
	percen(data);
	
}
