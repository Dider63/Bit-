#include<iostream>
#include<string.h>
using namespace std;
int main()
{
int n,i,s=0;
cin>> n;
cin.ignore();
if(n>=1 && n<=150)
{
for(i=0;i<n;i++)
{

  string x;
  getline(cin,x);
  if(x=="x++" || x=="X++" || x=="++x" || x=="++X")
  {
      s++;
  }
      if(x=="x--" || x=="X--" || x=="--x" || x=="--X")
      {
          s--;
      }

}

cout<< s;

}















    return 0;
}


