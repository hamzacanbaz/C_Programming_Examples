#include<stdio.h>
int main(){
	int array[100], size, temp, i, j;
	
	printf("Size of array\n");
	scanf("%d", &size);
	
	for(i=0; i < size; i++){
		printf("enter %d. element: \n",i+1);
		scanf("%d", &array[i]);
		
	}
	for(j=0; j<size-1; j++){
		
		for(i=0;i<size-j-1;i++){
			
			if(array[i]>array[i+1]){
				temp=array[i];
				array[i]=array[i+1];
				array[i+1]=temp;
			}
		
		}
		
	}
	printf("Sorted list in ascending order:\n");
	for(i=0;i<size;i++){
		printf("%d ", array[i]);
	}
	
	
	return 0;
}
