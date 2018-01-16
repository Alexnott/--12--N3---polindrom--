// Polindrom.cpp: определяет точку входа для консольного приложения.
//


#include "stdafx.h"
#include <iostream>
#include <conio.h> 
#include <Windows.h>
using namespace std ;



int _tmain(int argc, _TCHAR* argv[])
{
        SetConsoleOutputCP(1251);
char *Fraza=new char[100];
    cin>>Fraza;
    cout<<strlen(Fraza)<<endl;

    for(int i=0,j=strlen(Fraza)-1;
        i<j;
        i++,j--)
    {
        if(Fraza[i]!=Fraza[j]){
            cout<< "Не полиндром"<<endl;
            _getch();
            return 0;
        }
    }
    cout<< "полиндром"<<endl;
    _getch();
    return 0;
}
