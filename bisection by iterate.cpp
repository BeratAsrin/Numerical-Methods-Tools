//Numerical methods bisection method solver
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define f(x) (x+1/(x*x)-3)
double c;
int limit;
void bisection(double a, double b){
	if(f(a)*f(b) >= 0){
		printf("root does not exist");
		return;
	}
	while(limit != 0){
		c=(a+b)/2;
		if(f(c) == 0){
			printf("root is %f",c);
			return;
		}
		else if(f(a)*f(c) < 0){
			b=c;
			limit--;
		}
		else if(f(c)*f(b) < 0){
			a=c;
			limit--;
		}
		
	}
	
}
int main(){
	double a,b;
	a=-1000;
	b=1000;
	printf("enter the iterate number\n");
	scanf("%d",&limit);
	bisection(a,b);
	if((f(c) != 0) && f(a) * f(b) < 0){
		printf("approximate root is %lf",c);
	}

}
