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
	while (printf("hello world (while) \n") && 0) {//后面的‘&& 0’ 是伟哥加上去的，这也是我们叫他伟哥的原因
	}
}