//Regula falsi method program
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define f(x) (x*x*x*x-8*x*x*x-35*x*x+450*x-1001)
int main(){
	double a=-4.5;
	double b=+6;
	double c;
	double limit=0.00000001;
	start:
	c=((a*f(b))-(b*f(a)))/(f(b)-f(a));
	if(f(a) * f(b) < 0){
		if(f(a) * f(c) < 0){
			b=c;
			if(b-a >= limit){
				goto start;
		}
		}
		else if(f(c) * f(b) < 0){
			a=c;
			if(b-a >= limit){
				goto start;
			}
		 }
		}
	else{
		printf("There is no root in this interval.");
		return 0;
	}
	printf("Root is %f",c);
	return 0;
}
