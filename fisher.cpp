// C++ Program to shuffle a given array
#include<bits/stdc++.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
    char arr[0][26]="abcdefghijklmnopqrstuvwxyz",
// A utility function to swap to integers

// A utility function to print an array
void printArray (char ar[], int n)
{
    for (int i = 0; i < n; i++)
        cout << ar[i] << " ";
    cout << "\n";
}

// A function to generate a random
// permutation of arr[]
void randomize (char ar[], int n)
{
    // Use a different seed value so that
    // we don't get same result each time
    // we run this program
    srand (time(NULL));

    // Start from the last element and swap
    // one by one. We don't need to run for
    // the first element that's why i > 0
    for (int i = n - 1; i > 0; i--)
    {
        // Pick a random index from 0 to i
        int j = rand() % (i + 1);

        // Swap arr[i] with the element
        // at random index
//        swap(&arr[i], &arr[j]);
        string temp;
        temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}

// Driver Code
int main()
{

    //int n = sizeof(arr) / sizeof(arr[0]);
    randomize (arr, 25);
    printArray(arr, 25);

    return 0;
}
