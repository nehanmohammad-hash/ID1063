#include <stdio.h>

int main(){
	int a,b;
	int *p;

	scanf("%d %d", &a, &b);

	if(a >b){
		p = &a;
	}else if (b>a){
		p = &b;
	}else{
		p = b;
	}

	*p += 10 

	printf("%d %d", a, b);
	
	
	return 0;
}
