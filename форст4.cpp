#include <iostream>
using namespace std;
int main(){
int n,min;
int*a=new int (n);
cin>>n;
 for (int i=0; i<n;i++){
cin>>a[i];
 }
 min=a[0]+a[4];
 for(int i;i++;i<n){
   for(int g=i+4;g<(n-1);g++){
    if (a[i]+a[g]<min) {min=a[i]+a[g];
    return 0;}
}
}
cout<<min;
 return 0;
}
