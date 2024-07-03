#pragma once
#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <string>
using namespace std;


template <typename T>
class Calc {
private:
public:
	T mul(T num1, T num2);
	T div(T num1, T num2);
	T add(T num1, T num2) { return num1 + num2; };
	T sub(T num1, T num2);
	T remainder(T num1, T num2);
	T power(T num1, T num2); 
};

//return num1 to the power of num2
template <typename T>
T Calc<T>::power(T num1, T num2) {
	return pow(num1, num2);
}

//return multiplication of num1 to num2
template <typename T>
T Calc<T>::mul(T num1, T num2) {
	return num1 * num2;
}

//return divition of num1 to num2
template <typename T>
T Calc<T>::div(T num1, T num2) {
	return num1 / num2;
}

//return subtraction of num1 of num 2
template <typename T>
T Calc<T>::sub(T num1, T num2) {
	return num1 - num2;
}

//return remainder of two variables divided
template <typename T>
T Calc<T>::remainder(T num1, T num2) {
		return num1 % num2;
	}


#endif // !CALCULATOR_H
