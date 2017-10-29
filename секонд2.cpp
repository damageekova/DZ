#include <iostream>
using namespace std;
double a;
int k;
double pow(double a, int k)
 {
    if(k == 0) return 1;
    if(k < 0) return pow ( 1/a, -k);
    if(k%2==1) return a * pow (a, k-1);
    else return pow(a*a, k/2);
 }
int main (){
  cin>>a>>k;
  cout<<pow(a,k);
  return 0;
}

