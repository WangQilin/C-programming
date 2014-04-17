#include <stdio.h>

int main(int argc, char const *argv[])
{
	// use switch statement
	switch (printf("hello world (switch) \n")) {
	}

	// use if statement
	if (printf("hello world (if) \n")) {
	}

	//use while statement, it will print countless times
	while (printf("hello world (while) \n") && 0) {	// "&& 0" was added by 伟哥
													// so that this while-statement won't print countless times
	}
	
	//above three methods work, because the printf statement returns the number of characters that was printed
	
	// 伟哥 suggested there is another way, which is to use the comma expression
	// in comma expression, say A,B,C, the execution order is A->B->C, and finally returns the value of C
	while(printf("hello world (comma expression)\n"), 0) {
	} 
}