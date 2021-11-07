//Numerical methods bisection method solver
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define f(x) (x-exp(-x))
double c;
double limit=0.0000001;
void bisection(double a, double b){
	if(f(a)*f(b) >= 0){
		printf("root does not exist");
		return;
	}
	while(b-a> limit){
		c=(a+b)/2;
		if(f(c) == 0){
			printf("root is %f",c);
			return;
		}
		else if(f(a)*f(c) < 0){
			b=c;
		}
		else if(f(c)*f(b) < 0){
			a=c;
		}
		
	}
	
}
int main(){
	double a,b;
	a=0;
	b=20;
	bisection(a,b);
	if((f(c) != 0) && f(a) * f(b) < 0){
		printf("approximate root is %f",c);
	}

}
