#include <iostream>
#include <list>
#include <iterator>
using namespace std; 
/////////////////////////////////////////// 
int main()
{ 
    list <int> l;
 	
	 l.push_back(10);
 	 l.push_back(6);
 	 l.push_back(12);
     cout << l.front()<<endl;
     cout << l.back()<<endl;
 
    //l.pop_front();
 
   // l.pop_back();
 
   // l.reverse();
 
   // l.sort();
    
	list <int> :: iterator i;

	for(i = l.begin(); i != l.end(); ++i)
        cout << *i<< '\t' ; 
 
}
