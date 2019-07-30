#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

class stringfun
{
    char name[19];
    public:
	   void concatString(char a[],char b[])
	   {
	      strcat(a,b);
	      strcpy(name,a);
	   }
	   void display()
	   {
	      cout<<"\nCadenas unidas: "<<name<<endl;
	   }
};

int main()
{
    char str1[19], str2[10];

    stringfun sf;
    cout<<"Concatenar dos palabras!!!"<<endl;
    cout<<"ingrese 9 caracteres max: ";
    cin>>str1;
    cout<<"ingrese otra palabra 9 ccaracteres max: ";
    cin>>str2;
    sf.concatString(str1,str2);

    sf.display();
}
