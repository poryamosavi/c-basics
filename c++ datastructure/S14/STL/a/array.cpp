#include <iostream>
#include <array> 
#include <tuple> // for get()
using namespace std;
/////////////////////////////////////
int main()
{
    array<int,3> arr;
	int size=3;
	
	arr = {1,2,3};
    cout << arr.front() << endl;
    cout << arr.back()  << endl;
/////////////	
    for ( int i=0; i<size; i++)
    	cout << arr.at(i) << " ";
    cout << endl;
 /////////
    cout << get<0>(arr) << " " << get<1>(arr) << " "<< get<2>(arr)  ;
    //////////////
    array <int,3> :: iterator i;
	for (i = arr.begin(); i != arr.end(); ++i)
        cout << *i << '\t';
    cout << endl;
}
