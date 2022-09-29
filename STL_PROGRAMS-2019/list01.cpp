#include<iostream>
#include<list>
using namespace std;
int main()
{

    list<int>l1 {55 ,22, 77, 44 , 66 , 99 , 44, 88, 11};
    list<int>:: iterator p=l1.begin();

     while(p!=l1.end() )
      {
          cout<<*p<<" ";
          p++;
      }
      cout<<endl;

        // cout<<"\n after sorting"<<endl;
       //  l1.sort();
      // l1.reverse();
      l1.remove(44);
       list<int>:: iterator q=l1.begin();

      while(q!=l1.end() )
      {
          cout<<*q<<" ";
          q++;
      }
      cout<<"\n after reverse";
      //cout<<"total value in the list are : "<<l1.size() ;   ///size();




}


