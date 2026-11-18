// heap sort
#include<iostream>
#include<algorithm> 
#include<vector>
using namespace std;
//////////////////////////////////////////// 
int main()
{
    vector<int> h = { 1,5,3,4,7};
     
    make_heap(h.begin(),h.end());
    	         
   	sort_heap(h.begin(), h.end());
   	
    for (int&a : h)
        cout << a << " ";    
}
