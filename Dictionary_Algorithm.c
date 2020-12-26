//Design an algorithm
// which sorts the given words alphabetically within a matrix.
// which finds the start position of each letter and saves it into an array.
// which searches the given word within the sorted matrix exploiting the starting positions of the letters.
// which finds number of search steps.

#include<stdio.h>
int main(){
	char arr[20][20];
	int i;
	char word[20];
	int j=0;

	int n; // number of words
	printf("Enter number of words: ");
    scanf("%d",&n);

    printf("Enter words one under the other:\n");
    for(i=0;i<=n;i++){
   	gets(arr[i]);  
   	
   }
   // lower case to upper case to sort properly
   for(i=0;i<=n;i++){
   	j=0;
	while (arr[i][j]!='\0') {
	  if(arr[i][j] >= 'a' && arr[i][j] <= 'z') {
	     arr[i][j] = arr[i][j] + 'A' - 'a';
	  }
	  j++;
	}
   }
   
   // read searched word and convert into upper case
   printf("which word are you searching: ");
   scanf("%s",word);
   
   i=0;
   while (word[i]!='\0') {
	  if(word[i] >= 'a' && word[i] <= 'z') {
	     word[i] = word[i] + 'A' - 'a';
	  }
	  i++;
	}


// compare
int k;
char temp[20];


int m;
k=n;
j=1;
while(j<k){
	for(i=0;i<n-j+1;i++){
		
	// check first letters
	if(arr[i+1][0]<arr[i][0]){
            int ele=0;
				for(ele=0;ele<15;ele++){
					temp[ele] = arr[i+1][ele];
				    arr[i+1][ele] = arr[i][ele];
				    arr[i][ele] = temp[ele];
					}
		
	}
	//compare other letters after the first letter
	else if(arr[i+1][0]==arr[i][0]){
		int flag =1;
		m=1;
		while(flag==1){
			if(arr[i+1][m]<arr[i][m]){
				int ele=0;
				for(ele=0;ele<15;ele++){
					temp[ele] = arr[i+1][ele];
				    arr[i+1][ele] = arr[i][ele];
				    arr[i][ele] = temp[ele];
					}

            	flag=0;
			}
			else if(arr[i+1][m]==arr[i][m]){
				m++;
			}
			else {
				flag=0;
			}
		}

	}	
}
j++;

}


   	int howmany=0;
   	int isthere=0;
   	char initial=word[0];
   	
// print out sorted array
int which=0;
char array[26]={0};
	printf("Sorted: \n");
    for(i=0; i<= n ; i++){
      printf("%s\n",arr[i]);
      array[i]=arr[i][0];
      
// find words with same first letter
     if(array[i]==initial){
			howmany++;
		}
// search word in ditionary
		int t = 0;
		
   		while (arr[i][t] == word[t] && arr[i][t] != '\0'){
   		t++;
   		
   }
      
   if (arr[i][t] == word[t]){
   		isthere=1;
   		which=howmany;
   	}
   	
   }
      		

   
	

	int arrTemp[26] = {0};
//	i=0;

	// new array with first letters
	for(i=0;i<26;i++){
		if(arrTemp[array[i]-'A']==0){
			arrTemp[array[i]-'A']=i;
		
		}
	}
	// tablo seklinde initialtirma
	for(i=0;i<26;i++){
		printf("%c %d \n",i+'a',arrTemp[i]);
		
	}
	
	
	//kelimenin durumu ve searching steps
	if(isthere){
		printf("Word: %s exists in the dictionary\n",word);
		printf("Number of search steps: %d",which);
	}
	
	else{
		printf("Word: %s doesnt exist in the dictionary\n",word);
		printf("Number of search steps: 1");
	}
	
	return 0;
}

