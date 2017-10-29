#include <iostream>
using namespace std;
float min1,max1,avg1,a,b,c;
float max (float a, float b, float c){
float max1=a;
if (b>max1) max1=b;
if (c>max1) max1=c;
return max1;
}
float min (float a, float b, float c){
float min1=a;
if (b<min1) min1=b;
if (c<min1) min1=c;
return min1;
}
float avg (float a, float b, float c){
float avg1=(a+b+c)/3;
return avg1;
}
void swap_1(float a, float b, float c) {
float d = c;
c = b;
b = a;
a = d;
cout<<a<<b<<c;
}
float med (float a,float b,float c);
if (a>b) {if (b>c) {x=a;y=b;z=c;}
else {if (c>a) {x=c;y=a;z=b;
}
else {x=a;y=c;z=b;
}
}
}
else { if (a>c) {x=b;y=a;z=c;
}
else {if (c>b){x=c;y=b;z=a;
}
else {x=c;y=b;z=a;
}
}
}
int main () {
cin>> a >> b >> c;
cout<<min (a,b,c)<<" "<<max (a,b,c)<<" "<<avg (a,b,c)<<" "<< swap_1 (a,b,c)<<" "<<med (a,b,c);
return 0;
}
