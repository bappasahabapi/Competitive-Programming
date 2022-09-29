#include<iostream>
#include<list>
using namespace std;
int main()
{

    list<int>l1 {11,22,33,};
    list<int>:: iterator p=l1.begin();

     while(p!=l1.end() )
      {
          cout<<*p<<" ";
          p++;
      }
       cout<<"\n";



     //  l1.pop_back();      ///last value delet hbe;
       l1.pop_front();       /// first value delet hbe;
       list<int>:: iterator q=l1.begin();

      while(q!=l1.end() )
      {
          cout<<*q<<" ";
          q++;
      }
      cout<<"\n";
      //cout<<"total value in the list are : "<<l1.size() ;   ///size();




}

