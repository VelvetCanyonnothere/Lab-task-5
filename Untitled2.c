#include<stdio.h>


int main(){
	char ch1,ch2,ch3;
	int vowelcount = 0, consonantcount = 0;
	printf("Enter 3 characters:\n");
	ch1 = getchar();
	getchar();
	ch2 = getchar();
	getchar();
	ch3 = getchar();
	getchar();
	
	if(ch1 =='a' ||ch1 == 'e' || ch1 == 'i' || ch1 == 'o' || ch1 == 'u' || ch1 == 'A' || ch1 == 'E' || ch1 == 'I' || ch1 == 'O' || ch1 == 'U'){
		vowelcount++;
		
	}else{
		consonantcount++;
	}
	if (ch2 =='a' || ch2 == 'e' || ch2 == 'i' || ch2 == 'o' || ch2 == 'u' || ch2 == 'A' || ch2 == 'E' || ch2 == 'I' || ch2 == 'O' || ch2 == 'U'){
		vowelcount++;
	}else{
		consonantcount++;
	}
	if (ch3 == 'a' || ch3 == 'e' || ch3== 'i' || ch3 == 'o' || ch3 == 'u' || ch3 == 'A' || ch3 == 'E' || ch3 == 'I' || ch3 == 'O' || ch3 == 'U'){
		vowelcount++; 
	}else{
		consonantcount++;
	}
	
	printf("The number of vowels are %d \n",vowelcount);
	printf("The number of consonants are %d \n",consonantcount);
	
	return 0;
}
