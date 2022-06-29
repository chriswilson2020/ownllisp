// C program to put a simple while loop that prints a string 4 times in a function

#include <stdio.h>

int loop(int n); // Prototype the function so we don't catch the compiler by surprise


int main (int argc, char** argv){

	loop(10); // call the function

}

//function containing our while loop
int loop(int n){
	while (n > 0){
		puts("Hello World!");
		n = n - 1;
	}
	return 0;
}
