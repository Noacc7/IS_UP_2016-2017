#include <iostream>


using namespace std;

void swap(int& number1, int& number2)
{
	int temp = number1;
	number1 = number2;
	number2 = temp;
}

int * initArray(int * arr, size_t size)
{
	for(size_t i = 0; i < size; ++i)
	{
		cin >> arr[i];
	}
	return arr;
}

void printArray(int* arr, size_t size)
{
	for(size_t i = 0; i < size; ++i)
	{
		cout << arr[i];
	}
}
int& getMin(int* arr, size_t size)
{
	int min = arr[0];
	for( size_t i = 1; i < size ; ++i)
	{
		if(min > arr[i])
		{
			min = arr[i];
		}
	}
	return min;
}

int* getMax(int* arr, size_t size)
{
	int* max = &arr[0];

	for( size_t i = 1; i < size; ++i)
	{
		if(*max < arr[0])
		{
			*max = arr[i];
		}
	}
	return max;
}
void calcMinAndMax(int* arr, size_t size, int& min, int& max)
{
	for(size_t i = 0; i < size; ++i)
	{
		if(min > arr[i])
		{
			min = arr[i];
		}
		if( max < arr[i])
		{
			max = arr[i];
		}
	}

}
int main(){
	return 0;
}