//  priority_queue 
#include <bits/stdc++.h>
using namespace std;
///////////////////////////////////////// 
int main ()
{
    priority_queue <int> pq;
    
    pq.push(10);
    pq.push(6);
    pq.push(12);
    
    while (pq.empty() == false)
    {
        cout << pq.top() << " ";
        pq.pop();
    }
 
    return 0;
}
