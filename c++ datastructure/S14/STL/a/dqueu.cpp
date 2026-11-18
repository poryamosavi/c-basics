#include <iostream>
#include <deque>
using namespace std;
//////////////////////////////////////////////////////  
int main()
{
    deque <int> dq;
    deque <int> :: iterator it;
    
    dq.push_back(3);
    dq.push_front(2);
    dq.push_back(4);
    dq.push_front(1);
    
 	for (it = dq.begin(); it != dq.end(); ++it)
        cout << *it<< '\t' ;
    cout << '\n';
	 
    cout << dq.size() << endl;
    
    cout << dq.at(2)<< endl;
    
    cout << dq.front()<< endl;
    
    cout << dq.back()<< endl;
 
    dq.pop_front();
    
    dq.pop_back();
    
    for (it = dq.begin(); it != dq.end(); ++it)
        cout << *it<< '\t' ;
    cout << '\n';
}
