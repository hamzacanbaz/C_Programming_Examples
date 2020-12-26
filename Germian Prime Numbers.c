// FIND GERMAÝN PRIME NUMBERS BETWEEN TWO NUMBERS (X-Y)
// X MUST BE LESS THAN Y
// GERMAIN PRIME NUMBER = A is a prime number and 2*A+1 must be a prime number as well

#include<stdio.h>
int main(){
	int number;
	int k,i;
	int newArrayElement=0;
	int smallNumber;
	int bigNumber;
	int count;
	int temp;
	
	int array[100]={0};

	
	printf("Enter the small number: ");
	scanf("%d",&smallNumber);
	
	printf("Enter the big number: ");
	scanf("%d",&bigNumber);
	
	for(number=smallNumber;number<bigNumber;number++){
		count=0;
		temp=(number*2)+1;
		for(k=2;k<number;k++){
       if(number%k==0 ){
           count++;
       }  
	     if(temp%k==0){
			count++;
		}
    }

    if (count==0){
		array[newArrayElement] = number;
    	newArrayElement++;
	}
    
	}
	 i=0;
			while(array[i]!=0){
				printf("%d-",array[i]);
				i++;
			}
				
	return 0;
}
