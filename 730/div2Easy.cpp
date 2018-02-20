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
class IntervalIntersections{
  public:int minLength(int x1, int y1, int x2, int y2){
    int tmp = max(x1, x2) - min(y1, y2);
    cerr << max(0, tmp) << endl;
    return max(0, tmp);
  }
};
