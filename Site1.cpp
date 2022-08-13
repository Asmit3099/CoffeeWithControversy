#include<iostream>
using namespace std;

int main()
{
      int trans;
  float n,bal;
  scanf("%d %f",&trans,&bal);
  if(trans%5==0 && trans<=bal-0.50)
  {
      n=bal-(trans+0.50);
  }
  else
  {n=bal;}

  printf("%.2f",n);
    return 0;
}