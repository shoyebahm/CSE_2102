#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N, ITEM, LOC = 0, K = 0; // N = number of elements, ITEM = value to search, LOC = location, K = loop index
    cin >> N;
    int DATA[N];
    for(int i=0; i<N; i++)
    {
      cin >> DATA[i];
    }

    cin >> ITEM;
    bool flag = false; // A flag to track whether ITEM is found or not
    while(K < N )
    {
        if(ITEM == DATA[K])
        {
            LOC = K;
            flag  = true;
            break; // Exit loop early since we found the item
        }
        K += 1;
    }
    if(!flag)
    cout <<" ITEM is not in the array DATA"<<endl;
    else
    cout <<" The LOC of ITEM is : "<< LOC <<endl;
    return 0;
}
