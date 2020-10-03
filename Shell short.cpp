#include<iostream>
using namespace std;

void Shell(int arr[], int n)
{

    for (int gap = n/2; gap > 0; gap=gap/ 2)
    {

        for (int i = gap; i < n; i=i+1)
        {

            int temp = arr[i];


            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j=j-gap)
                arr[j] = arr[j - gap];


            arr[j] = temp;
        }
    }
}
int main()
{
    int n = 10;
    int arr[n] = { 2, 8, 6, 4, 10, 9, 4, 3, 1, 2 }
    Shell(arr, n);
    For(int i = 0; i < n; i++)
    {
	cout<<arr[i]<<endl;
    }

    return 0;
}
