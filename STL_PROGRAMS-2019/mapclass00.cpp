#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string>customer;        ///here int is key means index number;
                                                        /// string is here value;
    customer[100] = "goga";
    customer[123] = "doga";
    customer[145] = "aoga";
    customer[171] = "soga";
    customer[200] = "roga";
    customer.insert(pair<int,string>(205,"bappa"));

                                               ///secong processs to create map;

    map<int , string> c{ { 100," goga"},{123,"doga"},{145,"aoga"},{171,"soga"},{200,"roga"}};
       // cout<<customer[100]<<endl;
        //cout<<customer[123];
        map<int, string>:: iterator p = customer.begin();
        while(p!=customer.end()){
            cout<<p->second<<endl;              ///p-> second means it indicates the value;
            p++;
        }
                             cout<<"using at() method: "<< customer.at(145)<<endl;
                             cout<<"using [] operator "<< customer[145]<<endl;
                             cout<<"using size() method: "<< customer.size()<<endl;
                             cout<<"using empty method: "<< customer.empty()<<endl;


}
