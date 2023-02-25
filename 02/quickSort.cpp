#include "quickSort.h"

void quickSort(int* arr, int arrLeft, int arrRight)
{
	// если индекс лева массива >= индекса права массива = конец рекурсии
	if (arrLeft >= arrRight)
	{
		return;
	}
	// если индекс лева массива минус индекс права массива = два элемента
	// то нужно их swap, если первый элемент больше второго
	if ((arrRight - arrLeft) == 2)
	{
		if (arr[arrLeft] > arr[arrRight])
		std::swap(arr[arrLeft], arr[arrRight]);
		return;
	}

	// значение из индекса где-то середины массива
	int pivot = arr[(arrLeft + arrRight) / 2];

	int i = arrLeft; //индекс лева массива
	int j = arrRight; //индекс права массива

	// цикл quickSort
	while (i <= j)
	{
		while (arr[i] < pivot)
		{
			i++;
		}
		while (arr[j] > pivot)
		{
			j--;
		}
		if (i <= j)
		{
			std::swap(arr[i], arr[j]);
			i++;
			j--;
		};
	}

	quickSort(arr, arrLeft, j);
	quickSort(arr, i, arrRight);
};