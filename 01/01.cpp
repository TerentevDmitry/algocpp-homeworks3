// 01.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

#include <iostream>

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
   
	// 3, 43, 38, 29, 18, 72, 57, 61, 2, 33
	// 88, 91, 87, 59, 53, 49, 29, 16, 4, 27, 28, 89, 2, 25, 74
	// 24, 66, 20, 79, 30, 16, 19, 62, 94, 59, 0, 7, 59, 90, 84, 60, 95, 62
	
	int arr[] = { 3, 43, 38, 29, 18, 72, 57, 61, 2, 33 };
	
	arrPrint(arr, std::size(arr));
	
	
	
	
	
	
	
	
	
	
	
	
	std::cout << "Hello World!\n";
}

