// Find LCM and GCD AMONG ANY NUMBERS

#include<stdio.h>
int main(){
	int n,i,j,k;
	printf("enter the number of numbers: ");
	scanf("%d",&n);
	
	int array[n];
	for(i=0;i<n;i++){
		printf("%d. number: ",i+1);
		scanf("%d",&array[i]);
	}
	
	int lowest = 0;
	int biggest = 0;
	for(i=1;i<n;i++){
		if(array[i]<array[lowest]){
			lowest=i;
		}
		if(array[i]>array[biggest]){
			biggest=i;
		}
	}
	int gcdFinding=0;
	i=array[lowest];
	
	while(i>0 && gcdFinding==0){
		int allCorrect=1;
		j=0;
		
		while(j<n && allCorrect==1){
			
			if(array[j]%i!=0){
				allCorrect=0;
			}
			
			j++;
			
		}
		
		if (allCorrect == 1){
			printf("gcd: %d ",i);
			gcdFinding=1;
		}
		
		i--;
	}
	
	int lcmFinding=0;
	int ekok;
	k=array[biggest];
	while(lcmFinding == 0){
		int divisible=1;
		i=0;
		for(i=0;i<n;i++){       // while'a cevirebilirsin
			if(k % array[i]!=0){
				divisible=0;
			}
		}
		
		if(divisible == 1){
			printf("lcm: %d",k);
			lcmFinding=1;
		}
		else{
			k++;
		}
			
	}
	
	
	return 0;
}
