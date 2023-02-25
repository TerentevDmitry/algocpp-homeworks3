#include "countSort.h"

void countSort(int* arr, const int arrSize)
{
	int arrMaxOfValue = -1;
	//Ќаходим максимальный элемент
	for (int i = 0; i < arrSize; i++)
	{
		if (arr[i] > arrMaxOfValue)
		{
			arrMaxOfValue = arr[i];
		}
	};
	std::cout << "arrMaxOfValue: " << arrMaxOfValue << std::endl;

	int arrForCountSize = arrMaxOfValue + 1;

	//создаем новый массив размером макс значени€ arrMaxOfValue
	int* arrForCount = new int[arrForCountSize] {};

	// ѕодсчет значений в arr[] и запись кол-ва значени€ в arr[] в arrForCount[]
	// »ндексами с arrForCount[] выступают значени€ из arr[]
	// Ќапример значение arr[i]==9, то в arrForCount[9] плюсуем 1 и т.д.
	for (int i = 0; i < arrSize; i++)
	{
		arrForCount[arr[i]]++;
	};

	// «апись в arr[] значений столько раз сколько раз они записаны в arrForCount[]
	// Ќапример значение arrForCount[9]==3, то в arr[i] выводим три раза тройку и т.д.
	int arrIndex = 0;
	for (int i = 0; i < arrForCountSize; ++i)
	{
		for (int j = 0; j < arrForCount[i]; ++j)
		arr[arrIndex++] = i;
	};

	delete[] arrForCount;
	arrForCount = nullptr;
};