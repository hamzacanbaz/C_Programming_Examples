#include<stdio.h>
int main(){
	int arr[100];
	int i,j;
	int size;
	int min;
	int enKucuk,temp;
	printf("number of array: ");
	scanf("%d", &size);
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	
	for(i=0; i<size-1; i++){
		min=i;
		for(j=i+1;j<size;j++){
			if(arr[j]<arr[min]){
				min=j;
			}
		}
			
		temp=arr[i];
		arr[i]=arr[min];
		arr[min]=temp;
		
	}
	
	for(i=0; i<size; i++){
		printf("%d ",arr[i]);
	}
	
	return 0;
}
