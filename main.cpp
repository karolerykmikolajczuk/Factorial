#include <iostream>
#include <vector>
#include <string>
#include "src/Multiplication.h"

/**
 *
 * interpretowanie liczby jako tablica znakow(bo malo zajmuje) 
 * gdzie dokonujemy mnozenia pisemnego
 *
 * 	1 8 2
 *    *   2 3
 *    _________
 *    	5 4 6
 *    3	6 4 0
 *    _________
 *    4 1 8 6
 */


void PrintNumber(char* number) {
	std::cout << "Printing a number: ";
	bool flag = true;
	for(int i=0; i<=19; i++) {
		if((int)number[i]!=0) flag = false;
		if(flag && (int)number[i]==0)continue;
		if(flag && i==19) std::cout << 0;
		else std::cout << (int)number[i];
	}
	std::cout << '\n';
}

char* ParseNumber(unsigned long* number) {
	char* parsed_number = new char[20] {0};
	short index = 19;
	while((*number)>0) {
		parsed_number[index] = (*number)%10;
		(*number)/=10;
		index--;
	}
	return parsed_number;
}

void PrintResult(char* result) {
	std::cout << "Result:" << std::endl;
	bool dropZero = true;
	for(int i=0; i<=360; i++) {
		if((int)result[i] != 0) dropZero = false;
		if(dropZero && i==360) std::cout << 0;
		else std::cout<<(int)result[i];
		if(dropZero) continue;
	}
}

int main(int argc, char **argv) {

	if (argc != 3) {
		std::cerr << "2 arguments";
	}
	
	std::string str_a = std::string(argv[1]);
	std::string str_b = std::string(argv[2]);
	unsigned long a = std::strtoul(str_a.c_str(), NULL, 0);
	unsigned long b = std::strtoul(str_b.c_str(), NULL, 0);

	std::cout << a << " and " << b << std::endl;
	
	PrintResult(MultiplyingBigNumbers(&a, &b));

	return 0;
}
