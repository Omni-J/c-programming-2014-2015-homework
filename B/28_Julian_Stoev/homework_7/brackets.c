#include <stdio.h>
#include <string.h>
int are_the_brackets_balanced(char string[100]) {
	int counter=0, case0=0, case1=0, case2=0;
	while(counter!=strlen(string)) {
		if(string[counter]=='{') case0++;
		if(string[counter]=='}') case0--;
		if(case0<0) return 0;
		if(string[counter]=='(') case1++;
		if(string[counter]==')') case1--;
		if(case1<0) return 0;
		if(string[counter]=='[') case2++;
		if(string[counter]==']') case2--;
		if(case2<0) return 0;
		counter++;
	}
	if ((case0==0)&&(case1==0)&&(case2==0)) return 1; 
	else return 0;		
}
int main() {
	char brackets[100];
	scanf("%s", brackets);
	if(are_the_brackets_balanced(brackets)) printf("Balanced\n");
	else printf("Not Balanced\n");	
	return 0;
}
