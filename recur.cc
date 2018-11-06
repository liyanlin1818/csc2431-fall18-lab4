#include <iostream>

//TODO #1.1: add a function prototype for fib
int fib(int n);		

//TODO #2.1: add a function prototype for fact
int fac(int n);

int main()
{
	//TODO: #1.2 call your fib function, print the result
	fib(5);
	fac(10);	
	return 0;
}

//TODO #2.3: add your recursive fib function from class

int fib(int n){
	if(n == 0 || n ==1){
	
	return n;
	}
	
	return fib(n-2)+ fib(n-1);
}
//TODO #2.4: add your recursive fact function from class 
int fac(int n){
	if(n == 0){
	return 1;	
	}
	
	return n*fact(n-1);

}


