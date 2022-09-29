
#include<iostream>
#include<vector>
using namespace std;
int main()
{

    vector<int> v1 ;
    cout<<"initial capacity: "<<v1.capacity()<<endl;
    for(int i =0; i<=9;i++)
         v1.push_back(10*(i+1));
    cout<<"new capacity: "<<v1.capacity()<<endl;
    for(int i =0;i<v1.size();i++)
        cout<<endl<<v1[i]<<"\n";



    v1.pop_back();
    cout<<"after pop :\n";
    cout<<"new capacity: "<<v1.capacity()<<endl;

     v1.pop_back();
    cout<<"after pop :\n";
    cout<<"new capacity: "<<v1.capacity()<<endl;

    v1.pop_back();
    cout<<"after pop :\n";
    cout<<"new capacity: "<<v1.capacity()<<endl;

    cout<<"total number of elements are : "<<v1.size()<<endl;

      cout<<" value at index is "<<v1.at(3)<<endl;
      cout<<"first value is "<<v1.front()<<endl;
      cout<<"last value is "<<v1.back()<<endl;

      vector<int>:: iterator it =v1.begin();
      v1.insert(it+3, 35);
         for(int i =0;i<v1.size();i++)
        cout<<endl<<v1[i]<<"\n";


}

