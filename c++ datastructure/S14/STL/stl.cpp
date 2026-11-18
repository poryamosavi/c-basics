#include <iostream>
#include <array> 
#include <vector>
#include <queue>
#include <stack>
#include <list>
#include <forward_list> 
#include <iterator>
using namespace std;
/////////////////////////////////////
int main()
{
    cout <<"--------------array-------------------"<<endl;
    array<int,3> arr;
		
	arr = {10,6,12};
    cout << arr.front() << endl;
    cout << arr.back()  << endl;
    cout << arr.at(1)   << endl;

    array <int,3> :: iterator i;
	for (i = arr.begin(); i != arr.end(); ++i)
        cout << *i << '\t';
    ///////////////////////////////////
    cout << endl<<"--------------vector------------------"<<endl;
	vector <int> v;    
	
    v.push_back(10); 
    v.push_back(6); 
    v.push_back(12); 
		   
    cout << v.size()     << endl;    
    cout << v.capacity() << endl;        
    cout << v.front()    << endl;    
    cout << v.back()     << endl;  	
	cout << v.at(1)      << endl;

	vector <int> :: iterator iv;
	for (iv = v.begin(); iv != v.end(); ++iv)
        cout << *iv << '\t';
    
    ////////////////////////////////////////////////////
    cout << endl<<"--------------stack-------------------"<<endl;
	stack <int> s;
    
    s.push(10);
    s.push(6);
    s.push(12);
 
    cout << s.size() << endl;    
    cout << s.top()  << endl;
 
	while (!s.empty())
      {
        cout << s.top() << '\t' ;
        s.pop();
      }
    ////////////////////////////
    cout << endl<<"---------------List-------------------"<<endl;
	list <int> l;
 	
	 l.push_back(10);
 	 l.push_back(6);
 	 l.push_back(12);
 	 
     cout << l.front()<<endl;
     cout << l.back()<<endl;
 
     l.sort();
    
	 list <int> :: iterator il;

	 for(il = l.begin(); il != l.end(); ++il)
        cout << *il<< '\t' ; 
    ////////////////////////////////////////////
    cout << endl<<"---------------forward-list-----------"<<endl;
    
	forward_list<int> fl;
    
    fl.assign({10,6,12});
	   
    fl.push_front(1);
       
 	for (int&a : fl)
        cout << a << " ";    
    cout << endl;
		 
    forward_list<int>::iterator p;	    
    p =  fl.insert_after(fl.begin(), {2, 3});  	      
		 
	for (int&t : fl) 
        cout << t << " ";    
}
