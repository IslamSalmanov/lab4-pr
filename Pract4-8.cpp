#include <iostream>
#include <string>
using namespace std;
int main(){
    int a;
    cout << "Введите номер месяца: ";
    cin >> a;
    if(a==12 || a==1 || a==2){cout << "Сезон - зима" << "\n"; return 0;}
    else if(a==3 || a==4 || a==5){cout << "Сезон - весна" << "\n"; return 0;}
    else if(a==6 || a==7 || a==8){cout << "Сезон - лето" << "\n"; return 0;}
    else if(a==9 || a==10 || a==11){cout << "Сезон - осень" << "\n"; return 0;}
    else{cout << "Ошибка - это не номер месяца" << "\n"; return 0;}
}