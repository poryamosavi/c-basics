#include <iostream>
#include <stack> 
using namespace std;
////////////////////////////////////////////////////////  
int main ()
{
    stack <int> s;
    
    s.push(10);
    s.push(6);
    s.push(12);
 
 
    cout << s.size() <<endl;
    
    cout << s.top()  <<endl;
 
	while (!s.empty())
    {
        cout << s.top() << '\t' ;
        s.pop();
    }
    
    return 0;
}
