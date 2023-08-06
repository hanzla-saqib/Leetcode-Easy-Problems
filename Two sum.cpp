#include<stdio.h>

 //***Prototype***   void input(int arr[],int limit);
 //***Prototype***   int sumCheck(int arr[],int lim,int targ);

int main() {
	
	int lim,target;
	
	printf("Enter a limit: ");
	scanf("%d",&lim);
	
	int arr[lim];
	input(arr,lim);
	
	printf("Enter a target: ");
	scanf("%d",&target);
	

	
	
	sumCheck(arr,lim,target);
}

 /* **taking input** */ void input(int arr[],int limit) {
	printf("Enter element of array\n");
	for(int i = 0; i < limit; i++) {
		scanf("%d",&arr[i]);
	}
}

 /* **checking sum** */int sumCheck(int arr[],int lim,int targ) {
	
	for(int i = 0; i< lim-1; i++) {
		for(int j = i; j < lim; j++) {
		
		if(arr[i]+arr[j+1] == targ){
			printf("[");
			printf("%d,%d",i,j + 1);
			printf("]");
			
		}
	}
	}
}
