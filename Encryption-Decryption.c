// encryption and decryption algorithm
// Enter a text to encrypt and decrypt automatically
// Lower case and upper case
// usable for lower and upper case
// enter number of shifts
// shift operation: right or left


#include<stdio.h>
 
int main()
{
	char text[100];
	int i, key;
	char shift;
	int x;
	
	printf("Enter a text to encrypt: ");
	gets(text);
	printf("Enter number of shift: ");
	scanf("%d", &x);
	if(x<0){
		printf("x must be greater than 0");
		return 1;
	}
	x=x%26;
	printf("Right=r\tLeft=l\nEnter shift(r-l): ");
	scanf(" %c", &shift); // %c öncesi boþluk býrak!
	if( shift!='r' && shift!='l' ){
		printf("%c",shift);
		printf(" is an invalid operation");
		return 1;
	}
	
	//Encrypt
	for(i=0; text[i]!='\0';++i){
		
		if(text[i]>='a' && text[i]<='z'){
			if(shift=='r'){
				text[i]=text[i]+x;
			}
			else if(shift=='l'){
				text[i]=text[i]-x;
				if(text[i]<'a'){
					text[i]=text[i]+'z'-'a'+1;
				}
			}
			
			
			if(text[i]>'z'){

				text[i]=text[i]-'z'+'a'-1;
			}	
		}
		else if(text[i]>='A'&&text[i]<='Z'){
			if(shift=='r'){
				text[i]=text[i]+x;
			
				if(text[i]>'Z'){
					text[i]=text[i]-'Z'+'A'-1;
					}
			}
			
			else if(shift=='l'){
				text[i]=text[i]-x;
			
				if(text[i]<'A'){
					text[i]=text[i]+'Z'-'A'+1;
					}
			}

		}
	}
	
	printf("Encrypted text: %s", text);
	
	//Decrypt
	for(i = 0; text[i] != '\0'; ++i){
		
		if(text[i]>='a'&&text[i]<='z'){
			
			//r
			if(shift=='r'){
				text[i]=text[i]-x;
			
				if(text[i]<'a'){
					text[i]=text[i]+'z'-'a'+1;
				}
			}
			
			//l
			else if(shift=='l'){
				text[i]=text[i]+x;
				if(text[i]>'z'){
					text[i]=text[i]-'z'+'a'-1;
				}
			}
					
		}
		
		else if(text[i]>='A' && text[i]<='Z'){
			
			//r
			if(shift=='r'){
				text[i]=text[i]-x;
			
				if(text[i]<'A'){
					text[i]=text[i]+'Z'-'A'+1;
					}
			}
			//l
			else if(shift=='l'){
				text[i]=text[i]+x;
				if(text[i]>'Z'){
					text[i]=text[i]-'Z'+'A'-1;
					}
			}
		}
	}
	
	printf("\nDecrypted text: %s", text);
	return 0;
}
