#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin >> n;
   
   int mask = 1;
   while(mask <= n){
       mask <<= 1;
   }
   mask --;
   
   cout << (n ^ mask);
 

    return 0;
}
