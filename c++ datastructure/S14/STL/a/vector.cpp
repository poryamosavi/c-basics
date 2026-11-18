#include <iostream>
#include <vector>
 
using namespace std;
///////////////////////////////////////////// 
int main()
{
    vector <int> v;    
	
    v.push_back(10); 
    v.push_back(6); 
    v.push_back(12); 

		   
    cout << v.size()      <<endl;
    
    cout << v.capacity()  <<endl;
        
    cout << v.front() << endl;
    
    cout << v.back()  << endl; 
 	
	cout << v.at(1)   << endl;

    /////////////////
	vector <int> :: iterator i;
	for (i = v.begin(); i != v.end(); ++i)
        cout << *i << '\t';
    cout << endl;
    ////////////////////
	vector <int> :: reverse_iterator ir;
    for (ir = v.rbegin(); ir != v.rend(); ++ir)
        cout  << *ir<< '\t';
}
