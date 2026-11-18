#include <iostream>
#include <algorithm> 
using namespace std;
///////////////////////////////////////////////  
int main()
{
    int a[8]= {1, 5, 8, 2, 6, 7, 3, 4};
    int size=8;
    int key=15;
    
    sort(a, a + size);
           
    if (binary_search(a, a + size, key)) 
       cout << "found ";
    else
       cout << "not found ";       
}
