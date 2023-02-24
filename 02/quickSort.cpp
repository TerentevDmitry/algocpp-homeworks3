#include "quickSort.h"

void quickSort(int* arr, size_t arrLeft, size_t arrRight) //10
{
	if (arrLeft >= arrRight)
	{
		return;
	}
	if ((arrRight - arrLeft) == 2)
	{
		if (arr[arrLeft] > arr[arrRight])
		std::swap(arr[arrLeft], arr[arrRight]);
		return;
	}
	//else
	//{
		//		i				  j
		//		4, 9, 7, 6, 2, 3, 8
		//arrLeft				  arrRight
		// 3, 43, 38, 29, 18, 72, 57, 61, 2, 33

		//size_t arrLeft = 0; //индекс начала массива слева //0
		//size_t arrRight = arrSize - 1; //индекс конца массива справа //9
		//size_t arrMiddle = (arrLeft + arrRight) / 2; //индекс из середины массива //4
		//18
	int pivot = arr[(arrLeft + arrRight) / 2]; // значение из индекса arrMiddle середины массива

	size_t i = arrLeft; //индекс слева массива
	size_t j = arrRight; //индексы справа массива



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



















	//};



};