
#include <iostream>
using namespace std;
/*Íàïèøèòå ïðîãðàììó íàõîäÿùóþ ìèíèìàëüíóþ ñóììó ïàðû ýëåìåíòîâ ìàññèâà îòñòîÿùèõ äðóã îò äðóãà
íå ìåíåå ÷åì íà 4 ýëåìåíòà(ïåðâûé è ïÿòûé ýëåìåíò ìîãóò ïîäõîäèòü, à ïåðâûé è òðåòèé - íåò).
Ýôôåêòèâíîñòü â äàííîé ïðîãðàììå íå ïðèîðèòåòíà. */

int main(){
int n, min1;
cin >> n;
int a[n];
for (int i = 0; i < n; i++){
cin >> a[i];
}
if (n < 5) cout << "error";
else{
min1 = a[0] + a[4];
for(int i = 0; i <= (n-5); i++){
    for (int g = i + 4; g <= n - 1; g++){
         if (min1 > a[i]+a[g]) min1 = a[i]+a[g];
         }
    }
cout << min1;
}
return 0;
}
