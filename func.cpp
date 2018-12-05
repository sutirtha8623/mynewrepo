#include<iostream>
using namespace std;

int fact(int a)
{
  if(a==1)
  {
    return 1;
  }
  else
    return a*func(a-1);
}


