#include <stdio.h>

void print(void *ptr,char type){
	switch (type){
		case 'i':
			printf("Product ID: %d\n", *((int*)ptr));
            break;
		case 'f':
			printf("Price: %f\n", *((float*)ptr));
            break;
		case 'c':
			printf("Character: %c\n", *((char*)ptr));
            break;
	}
}

int main(){
	int id;
	float price;
	char alpha;
	char type;
	printf("Enter choice i, f, c: ");
	scanf("%c",&type);
	switch (type){
		case 'i':
			id=1001;
			print(&id,type);
			break;
		case 'f':
			price=25.6;
			print(&price,type);
			break;
		case 'c':
			alpha='A';
			print(&alpha,type);
			break;
        default:
        	printf("Invalid");
			
	}
}
