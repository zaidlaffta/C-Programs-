#include<iostream>
#include<string>
#include<list>
using namespace std;
 //helper function
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

// A function to implement bubble sort 
void bubbleSort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
		for (j = 0; j < n - i - 1; j++)
			if (arr[j] < arr[j + 1])
				swap(arr[j], arr[j + 1]);
}

int main(){

	int test[10] = { 2, 22, 23, 1, 44, 4, 5, 55, 6, 66 };
	bubbleSort(test, 10);
	for (int i = 0; i < 10; i++) {
		cout << test[i] << " ";
	}



	system("pause");
	return 0;
}