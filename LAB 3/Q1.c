/*To check pallindrome*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
	char *str;
	int i;
	int size;
	str =(char*) malloc(sizeof(char) * size);
	printf("Enter a string : ");
	scanf("%s",str);
	size = strlen(str);
	for(i = 0; i < size ;i++){
	 	if((str[i]) != (str[size - 1 -i])){
	 		printf("Not a palindrome string.\n");
	 		break;
	 	}
	}
	if(i==size){
	 	printf("Entered string is palindrome.\n");
	}
}