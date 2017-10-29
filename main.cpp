#include <iostream>
using namespace std;
/*Ќапишите программу дл€ работы с датами согласно григорианскому календарю. ¬ программе должны присутствовать:
 структура хран€ща€ год,мес€ц, число и умеюща€(с помощью соответствующего метода) определ€ть по дате день недели
функции определ€ющие сколько лет, мес€цев и дней прошло между двум€ датами*/
struct calendar{
int number;
char *month;
int century;
int year;
};
int main(){
calendar date;
cout << "Number ";
cin >> date.number;
cout <<endl << "Month";
cin >> date.month;
cout << endl << "Century";
cin >> date.century;
cout << endl << "Year ";
cin >> date.year;
int base1,base2,base3,base4;
if (date.number%7 == 0) base1 = 0;
if (date.month == "April", date.month == "July") base2 = 0;
if (date.century%4 == 0) base3 = 0;
if (date.year == 1, date.year == 7, date.year == 18, date.year ==  24, date.year ==  29, date.year ==  35, date.year ==  46, date.year ==  52, date.year ==  57, date.year ==  63, date.year ==  74, date.year ==  80, date.year ==  85, date.year ==  91) base4 = 0;
if (date.number % 7 == 1; date.number == 1) base1 = 1;
if (date.month == "January"; date.month == "October") base2 = 1;
if (date.year == 2; date.year == 8; date.year == 13; date.year ==  19; date.year ==  30; date.year ==  36; date.year ==  41; date.year == 47; date.year ==  58; date.year ==  64; date.year == 64; date.year ==  69; date.year ==  75; date.year ==  86; date.year == 92; date.year ==  97) base4 = 1;
if (date.number%7 == 2;date.number == 2) base1 = 2;
if (date.month = "May") base2 = 2;
if (date.century%4 == 3)base3 = 3;=
if (date.year == 3; date.year == 14; date.year == 20; date.year ==  25; date.year ==  31; date.year ==  42; date.year ==  48; date.year ==  53; date.year ==  59; date.year ==  70; date.year ==  76; date.year == 81; date.year ==  87; date.year ==  98) base4 = 2;
if (date.number%7 == 3;date.number == 3) base1 = 3;
if (date.month == "August") base2 = 3;
if (date.century%4 == 3)base3 =3;
if (date.year == 4; date.year == 9; date.year == 15; date.year ==  26; date.year ==  32; date.year ==  37; date.year ==  43; date.year ==  54; date.year ==  59; date.year ==  60; date.year ==  65; date.year ==  71; date.year == 82; date.year ==  88; date.year ==  93; date.year ==  99) base4 = 3;
if (date.number%7 == 4;date.number == 04) base1 = 4;
if (date.month == "March"; date.month == "February"; date.month == "November") base2 = 4;
if (date.century%4 == 2)base3 = 4;
if (date.year == 10; date.year == 16; date.year == 21; date.year ==  27; date.year ==  38; date.year ==  44; date.year ==  49; date.year ==  55; date.year ==  66; date.year ==  72; date.year == 77; date.year == 83; date.year == 94; date.year == 00) base4 = 4;
if (date.number%7 == 5;date.number == 5) base1 = 5;
if (date.month == "June") base2 = 5;
if (date.year == 5; date.year == 11; date.year == 22; date.year ==  28; date.year ==  33; date.year ==  39; date.year ==  50; date.year ==  56; date.year ==  67; date.year ==  78; date.year == 84; date.year == 89; date.year == 95) base4 = 5;
if (date.number%7 == 6;date.number == 6) base1 = 6;
if (date.month == "September"; date.month == "December") base2 = 6;
if (date.century%4 == 1)base3 = 6;
if (date.year == 6; date.year == 12; date.year == 17; date.year ==  23; date.year ==  34; date.year ==  40; date.year ==  45; date.year ==  51; date.year ==  62; date.year ==  68; date.year == 73; date.year == 79; date.year == 90; date.year == 96) base4 = 6;
if (date.century%4 == 0){
if (date.month == "March"; date.month == "April"; date.month == "May"; date.month == "June"; date.month == "July"; date.month == " August"; date.month == "September"; date.month == "November"; date.month == "December";) base 2 = base 2 + 1;
}
int sum;
sum = base1 + base2 + base3 + base4;
if (sum%7 == 0) cout << "Sunday";
if (sum%7 == 1) cout << "Monday";
if (sum%7 == 2) cout << "Tuesday";
if (sum%7 == 3) cout << "Wednesday";
if (sum%7 == 4) cout << "Thursday";
if (sum&7 == 5) cout << "Friday";
if (sum%7 == 6) cout << "Saturday";
return 0;
}


