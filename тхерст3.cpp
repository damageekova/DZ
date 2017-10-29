#include <iostream>
using namespace std;
/*Напишите программу находящую в массиве сумму элементов делящихся 
либо на 72 либо на 27(не вместе).*/
int main (){
int n,s;
s=0;
int A[n];
cin>>n;
 for (int i=0; i<n;i++){
      cin>>A[i];
}
for (int i=0;i<n;i++){
if (A[i]%27==0){if (A[i]%72!=0) s=s+A[i];};
if (A[i]%72==0){if (A[i]%27!=0) s=s+A[i];};
}
cout<<s;
return 0;
}

