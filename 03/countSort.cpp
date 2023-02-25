#include "countSort.h"

void countSort(int* arr, const size_t arrSize)
{
	//int arrBeginOfValue = LONG_MAX;
	////Находим минимальный элемент 10
	//for (size_t i = 0; i < arrSize; i++)
	//{
	//	if (arr[i] < arrBeginOfValue)
	//	{
	//		arrBeginOfValue = arr[i];
	//	}
	//};
	//std::cout << "arrBeginOfValue: " << arrBeginOfValue << std::endl;
	
	int arrMaxOfValue = LONG_MIN;
	//Находим максимальный элемент
	for (size_t i = 0; i < arrSize; i++)
	{
		if (arr[i] > arrMaxOfValue)
		{
			arrMaxOfValue = arr[i];
		}
	};
	std::cout << "arrMaxOfValue: " << arrMaxOfValue << std::endl;

	//создаем новый массив размером макс значения arrMaxOfValue
	int* arrForCount = new int[arrMaxOfValue + 1] {0};

	// Подсчет значений в arr[] и запись кол-ва значения в arr[] в arrForCount[]
	// Индексами с arrForCount[] выступают значения из arr[]
	// Например значение arr[i]==9, то в arrForCount[9] плюсуем 1 и т.д.
	for (size_t i = 0; i < arrSize; i++)
	{
		arrForCount[arr[i]]++;
	};

	// Запись в arr[] значений столько раз сколько раз они записаны в arrForCount[]
	// Например значение arrForCount[9]==3, то в arr[i] выводим три раза тройку и т.д.
	int arrIndex = 0;
	for (size_t i = 0; i < arrMaxOfValue; i++)
	{
		for (size_t j = 0; j < arrForCount[i]; j++)
		arr[arrIndex++] = i;
	};

	delete[] arrForCount;
	arrForCount = nullptr;
};