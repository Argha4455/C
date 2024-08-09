#include<iostream>
  using namespace std;
   int main()
   {
       int a,b,c;
       cout<<"Enter your password:";
       cin>>a;
       for(int b=0;b<5;b++)
       {
           cout<<"\nEnter the correct password:";
           cin>>c;
           if(c==a){
                b=5;
            cout<<"\noooo";}
           else{
            cout<<"\nTry again,you have left "<<4-b<<" chances";
       }}
       cout<<"Sorry";
          }
