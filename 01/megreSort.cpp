#include "megreSort.h"


//Функция слияния
void mergeSortedArr(int* arr, const int arrSize, int* arrLeft, const int arrLeftSize, int* arrRight, const int arrRightSize)
{
	int iLeft = 0, iRight = 0, i = 0;

	while (arrLeftSize > iLeft && arrRightSize > iRight)
	{
		if (arrLeft[iLeft] <= arrRight[iRight])
		{
			arr[i++] = arrLeft[iLeft++];
		}
		else
		{
			arr[i++] = arrRight[iRight++];
		}
	}
	while (arrLeftSize > iLeft)
	{
			arr[i++] = arrLeft[iLeft++];
	}
	while (arrRightSize > iRight)
	{
			arr[i++] = arrRight[iRight++];
	}
}

//Функция сортировки слиянием
void mergeSort(int* arr, const int arrSize)
{
	if (arrSize <= 1)
	{
		return;
	}
	if(arrSize == 2)
	{
		if(arr[0] > arr[1])
		std::swap(arr[0], arr[1]);
		return;
	}
	
	
	int arrLeftSize = arrSize / 2;
	int arrRightSize = arrSize - (arrSize / 2);

		int* arrLeft = new int[arrLeftSize];
		int* arrRight = new int[arrRightSize];

		for (int i = 0; i < arrLeftSize; i++)
		{
			arrLeft[i] = arr[i];
		}
		for (int i = 0; i < arrRightSize; i++)
		{
			arrRight[i] = arr[i + arrLeftSize];
		}

		mergeSort(arrLeft, arrLeftSize);
		mergeSort(arrRight, arrRightSize);


		mergeSortedArr(arr, arrSize, arrLeft, arrLeftSize, arrRight, arrRightSize);
	


	delete[] arrLeft;
	arrLeft = nullptr;
	delete[] arrRight;
	arrRight = nullptr;
}
