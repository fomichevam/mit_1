#include <iostream>

int fib(int n){
	if (n == 1) {
		return 0;
	}
	if (n == 2){
		return 1;
	}
	return fib(n - 1) + fib(n - 2);
}

int main(){
	std::cout << "Hello world";
	std::cout << "\n";
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++){
		std::cout << fib(i) << "\n";
	}
	return 0;
}
