#include<iostream>
#include<vector>
using namespace std;
int main()
{

    vector<int> v1 ;
    cout<<"initial capacity: "<<v1.capacity()<<endl;

    v1.push_back(10);
     cout<<"new capacity: "<<v1.capacity()<<endl;

     v1.push_back(20);
     cout<<"new capacity: "<<v1.capacity()<<endl;

      v1.push_back(30);
     cout<<"new capacity: "<<v1.capacity();

}

