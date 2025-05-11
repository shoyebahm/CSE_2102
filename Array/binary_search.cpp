#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N, Q;
    cin >> N >> Q;// Read number of elements in the array (N) and number of queries (Q)
    vector<int>v(N);
    for(int i = 0; i < N; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(),v.end());// Sort the vector to prepare it for binary search

    while(Q--)
    {
        int value;
        cin >> value;
        int L = 0,R = v.size() - 1;// Initialize left and right pointers for binary search
        bool flag = false;// Flag to indicate if the value is found
        while(L <= R)
        {
            int mid = (L+R)/2;
            if( v[mid] == value)
            {
                flag = true;
                break;
            }
            else if(v[mid] > value)
            {
                R = mid - 1; 
            }
            else
            {
                L = mid + 1;
            }
        }

        if(flag)
        {
            cout<<"Found"<<endl;
        }
        else
        {
            cout<<"Not Found"<<endl;
        }
    }

    return 0;
}