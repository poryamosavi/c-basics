#include <iostream>
#include <queue>
 
using namespace std;
////////////////////////////////// 
 
int main()
{
    queue <int> q;
    
    q.push(10);
    q.push(6);
    q.push(12);

    cout << q.size() << endl;
    
    cout << q.front()<< endl;
    
    cout << q.back() << endl;
     
	while (!q.empty())
    {
        cout << q.front()<< '\t';
        q.pop();
    } 
}
