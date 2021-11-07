// root finder by increasing
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define f(x) (x-exp(-x))
int main(){
	double root=0;
	float error=0.00000001;
	if(f(root) < 0){
		while(f(root) < error){
			root+=0.0000001;
		}
	}
	else if(f(root) > 0){
		while(f(root) > error){
			root+=0.0000001;
		}
	}
	
	printf("root is %f",root);
	
}
