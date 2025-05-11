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
  int MAX = DATA[0];// Initialize MAX with the first element of the array
  int LOC = 0;// LOC stores the index of the maximum value, initialized to 0
  int K = 0; // K is a loop counter starting from 1

  while( K < N )
  {
    if(MAX < DATA [K])
    {
        MAX = DATA[K];
        LOC = K;
    }
    K+=1;
  }
// Output the location and value of the maximum element
  cout << "The Location of MAX Value : " << LOC <<endl;
  cout << "The MAX Value Of Array : " << MAX <<endl;

    return 0;
}
