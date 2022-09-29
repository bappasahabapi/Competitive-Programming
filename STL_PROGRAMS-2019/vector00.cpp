#include<iostream>
#include<vector>
using namespace std;
int main()
{





    vector<int>v1  {10,20,30,40,50};        ///declear+initiallize;
    cout<<"v1 vector cacpacity: "<<v1.capacity()<<endl;         ///vector capacity;

    for(int i =0; i<=4; i++)
        cout<<v1[i]<<" ";          /// working with [];
        cout<<"\n";



    vector<char>v2(4);
    vector<int>v3(5,10);
    vector<string>v4(3,"hellow");

    ///print vector
    cout<<v4[0]<<endl;
    cout<<v4[1]<<endl;
    cout<<v4[2]<<endl;


}
