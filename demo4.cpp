#include <stdio.h>
int main(){
	int tk = 4000;
	int ls = 8;
	int i=1;
	for(i;i <= 4; i++){
		
		tk = tk + tk*ls/100;
		
	}
	printf("so tien sau 4 nam : %d" ,tk);
}		
