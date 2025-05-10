#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N, Q;
    cin >> N >> Q;
    vector<int>v(N);
    for(int i = 0; i < N; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(),v.end());
    while(Q--)
    {
        int value;
        cin >> value;
        int l = 0,r = v.size() - 1;
        bool flag = false;
        while(l <= r)
        {
            int mid = (l+r)/2;
            if( v[mid] == value)
            {
                flag = true;
                break;
            }
            else if(v[mid] > value)
            {
               r = mid - 1; 
            }
            else
            {
                l = mid + 1;
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