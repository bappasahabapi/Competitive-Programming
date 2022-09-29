#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int>l1 {11,22,33,};
    list<string>l2 {" india", " katchmandu", " pakistan", " Dhaka"};

    l2.push_back("bappa");     ///push_back; last e value add hbe ;
    l2.push_front("error");      ///push_front; first e value add hbe;

      list<string>:: iterator p=l2.begin();

      while(p!=l2.end() )
      {
          cout<<*p<<" ";
          p++;
      }
      cout<<"\n";
      cout<<"total value in the list are : "<<l2.size() ;   ///size();




}
