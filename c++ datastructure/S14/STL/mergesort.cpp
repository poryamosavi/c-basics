// mergesort 
#include <bits/stdc++.h>
using namespace std;
////////////////////////////////////////// 
int main()
{
    vector<int> a = { 10,6,12 };
 
    vector<int> b = { 1,15,30,10 };
 
    vector<int> c(7);
 
    sort(a.begin(), a.end());
    
    sort(b.begin(), b.end());
 
    merge(a.begin(), a.end(), b.begin(), b.end(), c.begin());
 

    for (int i = 0; i < c.size(); i++)
        cout << c[i] << " ";
}
