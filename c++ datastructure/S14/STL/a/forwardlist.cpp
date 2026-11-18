// forward list 
#include<iostream>
#include<forward_list> 
using namespace std;
/////////////////////////////////////////// 
int main()
{
    forward_list<int> fl;
    fl.assign({10,6,12});
	
	for (int&a : fl)
        cout << a << " ";    
    cout << endl;
    
    fl.push_front(1);
       
    fl.pop_front();
 	for (int&a : fl)
        cout << a << " ";    
    cout << endl;
    /////////////////////////////
		 
    forward_list<int>::iterator p;	    
    p =  fl.insert_after(fl.begin(), {2, 3});  
	   
    for (int&i : fl) 
        cout << i << " ";
    cout << endl;
    /////////////////////////////
		 
	p = fl.erase_after(p);  
	for (int&i : fl) 
        cout << i << " ";
        
        
}
