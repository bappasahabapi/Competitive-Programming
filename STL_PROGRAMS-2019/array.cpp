#include<iostream>
#include<array>
using namespace std;
int main()
{
    array <int ,5> obj_array ={11,22,33,44,55};
    cout<<"array size is: "<<obj_array.size()<<endl;
    cout<<obj_array.at(2)<<endl;                                    ///at();
    cout<<obj_array[3]<<endl;                                      ///  [] ;
    cout<<obj_array.front()<<endl;                              /// .front()  ;
    cout<<obj_array.back()<<endl<<"\n";                 ///   .back();

    obj_array.fill(10);                                                   /// .fill()  ;
    for(int i =0; i<=4;i++)
        cout<<obj_array[i]<<endl<<"\n";

        array <int ,5> obj_array1 ={1,2,3,4,5};            /// array swap, where array type & array size is same;
        array <int ,5> obj_array2 ={10,20,30,40,50};
        obj_array1.swap(obj_array2);
         cout<<"obj_array1 value:"<<endl;

        for(int i =0; i<=4;i++)
            cout<<obj_array1[i]<<" "<<"\n";

            for(int i =0; i<=4;i++)
            cout<<obj_array2[i]<<endl<<"\n";





}


