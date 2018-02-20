#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<vector>
#include<string>
#include<sstream>
using namespace std;
int inf = 1000000000;
class ExpectedMinimumPowerDiv2{
  public:double findExp(int n, int x){
    double ret = 0.0;

    double tmp = 1.0;
    for(int i=n-x+1; i>=1; i--){
      ret += pow(2.0, i) * tmp;
      tmp *= (n - i + 1.0);
      tmp /= (n - x - i + 2.0);
    }
    tmp *= ( n - x + 1 );
    tmp /= x;
    ret /= tmp;
    return ret;
  }
};
