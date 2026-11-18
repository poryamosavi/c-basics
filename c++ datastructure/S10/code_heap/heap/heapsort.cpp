// Heap Sort
#include <iostream>
#include <conio.h>
using namespace std;
/////////////////////////////////////////////////////////////////// 
void heapify(int x[], int i, int n)
{
    int largest=i ;      
    int l = 2*i + 1;  
    int r = 2*i + 2;  
 
    if (l < n && x[l] > x[largest])
        largest = l;
    
 
    if (r < n && x[r] > x[largest])
        largest = r;
 
    if (largest != i)
    {
        swap(x[i], x[largest]);
        heapify(x, largest, n);
    }
}
 
/////////////////////////////////////////////////////////////////// 
void heapsort(int a[], int n)
{
    int i;
	for ( i = n / 2 - 1; i >= 0; i--)
        heapify(a, i, n);
 
    for ( i=n-1; i>=0; i--)
    {
        swap(a[0], a[i]);
        heapify(a, 0, i);
    }
}
 
/////////////////////////////////////////////////////////////////// 
int main()
{
    int a[] = {6, 3, 1, 5, 4, 2};

    heapsort(a, 6);
 
    for (int i=0; i<6; ++i)
        cout << a[i] << " ";
    
    getch();
}
