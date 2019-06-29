#include<bits/stdc++.h>
using namespace std;

const int size = 1000000;

int primes[1000005];

int main()
{

  clock_t tStart = clock();
  
  for(int i = 2 ;i <= size; ++i)
    primes[i] = i;

  int sq = sqrt(size);


  for(int i = 2 ;i <= sq; ++i)
  {
    if(primes[i] != 0)
    {
    for(int j = 2; i*j <= size; ++j)
      primes[i*j] = 0;
    }
    
  }

  for(int i = 2; i< size; ++i)
  { 
    if(primes[i] != 0) 
     cout<<primes[i]<<endl;
   // primes[i] = 0+i;
  }

  printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);



  return 0;
}
