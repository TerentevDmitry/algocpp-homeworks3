// Домашнее задание к занятию «Сортировки».
// Задача 3. Быстрая сортировка

#include <iostream>
#include "countSort.h"

//Функция печати массива
void arrPrint(int* arr, const size_t arrSize)
{
	for (size_t i = 0; i < arrSize; i++)
	{
		std::cout << arr[i] << "\t";
	};
	std::cout << std::endl;
};


int main()
{
	setlocale(LC_ALL, "Russian");

	// 19, 14, 22, 22, 17, 22, 13, 21, 20, 24, 18, 10, 17, 16, 17, 20, 22, 11, 20, 16, 14, 13, 10, 22, 18, 14, 16, 24, 19, 17
	// 
	// 

	int arr[] = { 18, 14, 22, 22, 10, 22, 13, 21, 20, 24 };

	std::cout << "Массив до сортировки: \n";
	arrPrint(arr, std::size(arr));

	countSort(arr, std::size(arr));

	std::cout << "Массив после сортировки: \n";
	arrPrint(arr, std::size(arr));
}