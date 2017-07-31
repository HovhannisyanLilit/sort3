// Example program
#include <iostream>
#include <string>


void insertion_sort(int arr[], int n) {
	int i, j;
	int key;
	for (i = 1; i<n; ++i) {
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j]>key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;

	}
}
void print_array(int arr[], int n) {
	int i;
	for (i = 0; i <= n; ++i)
		std::cout << arr[i] << " ";
}

int main()
{
	int arr[] = { 4,6,2,10,5,20,3 };
	int n = 6;
	insertion_sort(arr, n);
	print_array(arr, n);

}
