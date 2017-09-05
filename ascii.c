#include <stdio.h>

void main(){
	 char ch;		
	
	ch=32; 

	while(ch<=127){
		printf("%c [%d] ",ch,ch);
		ch++;
	}
	printf("\n");
	
	
}
