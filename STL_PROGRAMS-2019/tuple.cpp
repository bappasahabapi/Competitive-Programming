#include<iostream>
#include<tuple>
using namespace std;
int main()
{
    tuple<string,  int, int>t1;              ///tuple structure;
    t1 =make_tuple("bappa",15,30);    ///inserting value;
    cout<<get<0>(t1)<<" ";                        ///accessing tuple members
    cout<<get<1>(t1)<<" ";                        ///accessing tuple members
    cout<<get<2>(t1);  <<" ";                      ///accessing tuple members

}

