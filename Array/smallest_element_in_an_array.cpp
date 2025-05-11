#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    // Ask the user for the size of the array
    cout << "Enter Array Size : ";
    cin >> N;
    // Create a Array to store N elements
    int DATA[N];
    for( int i = 0; i < N; i++)
    {
        cin >> DATA [i];
    }
  int MIN = DATA[0];// Initialize MIN with the first element of the array
  int LOC = 0;// LOC stores the index of the minimum value, initialized to 0
  int K = 0; // K is a loop counter starting from 1

  while( K < N )
  {
    if(MIN > DATA [K])
    {
        MIN = DATA[K];
        LOC = K;
    }
    K+=1;
  }
// Output the location and value of the minimum element
  cout << "The Location of MIN Value : " << LOC <<endl;
  cout << "The MIN Value Of Array : " << MIN <<endl;

    return 0;
}
