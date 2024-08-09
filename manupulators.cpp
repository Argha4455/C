#include<iostream>
#include<iomanip>
//it is like field width specifiers in c;
  using namespace std;
    int main()
    {
        int a=90,b=98,c=78;
        cout<<"Without using manupulator:"<<a;
        cout<<"with using manupultor:"<<setw(4)<<a;
    }
