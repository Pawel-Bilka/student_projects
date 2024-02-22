#include <iostream>
using namespace std;

int main(){
int osoby; //ilosc osob
float odleglosc; //przejechana ogleglosc
float spalanie=6; //spalanie samochodu
int paliwo=50;  //ilosc paliwa w baku
float cena=5.50;  //cena za litr paliwa
int cenaosoba; //cena za osobe


cout<<"Ile przejechales?"<<endl;
cin>>odleglosc;
cout<<"Ile spala samochod?"<<endl;
cin>>spalanie;
cout<<"Ile jest paliwa w baku?"<<endl;
cin>>paliwo;
cout<<"Jaka jest cena za litr paliwa?"<<endl;
cin>>cena;
cout<<"Ile osob jedzie?"<<endl;
cin>>osoby;

float spalonepaliwo=(odleglosc*spalanie)/100;
cout<<"zuzyto"<<endl<<spalonepaliwo<<"litrow paliwa"<<endl;

float cenazaspalonepal= cena*spalonepaliwo;
cout<<"Cena za osobe wynosi"<<endl<< cenazaspalonepal/osoby<<"zl"<<endl;
cout<<"Cena za spalone paliwo wynosi"<<endl<<cenazaspalonepal<<"zl"<<endl;

float ilosctankowan=(spalonepaliwo/40)+1;
cout<<"Ilosc tankowan wynosi"<<endl<<ilosctankowan<<endl;

return 0;
}