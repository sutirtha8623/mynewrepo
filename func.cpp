#include<iostream>
using namespace std;

int func(int a)
{
  if(a==1)
  {
    return 1;
  }
  else
    return a*func(a-1);
}


