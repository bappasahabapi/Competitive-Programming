#include<iostream>
using namespace std;

class student
{
    private:
       string name;
       int age;
    public:
        void setStudent(string s, int a)
        {
           name =s; age =a;
        }
        void showStudent()
        {
            cout<<"\nName :"<<name;
            cout<<"\nAge :"<<age;
        }

};

int main()
{
    pair<string , int>pair_obj1;
    pair<string , string>pair_obj2;
    pair<string , float>pair_obj3;
    pair<int ,student>pair_obj4;                ///nijessso type banate parbo

    pair_obj1 =make_pair(" Rahul",16);
    pair_obj2 =make_pair(" bangla"," dhaka");
    pair_obj3=make_pair(" book", 345.5f);

    student s1;
    s1.setStudent("bappa bappa", 19);
    pair_obj4=make_pair(101,s1);

    cout<<"\npair_obj 1";
    cout<<"\n"<<pair_obj1.first<<" "<<pair_obj1.second<<endl;


     cout<<"\npair_obj 2";
    cout<<"\n"<<pair_obj2.first<<" "<<pair_obj2.second<<endl;

    cout<<"\npair_obj 3";
    cout<<"\n"<<pair_obj3.first<<" "<<pair_obj3.second<<endl;

    cout<<"\npair_obj 4";
    cout<<"\n"<<pair_obj4.first<<" ";
    student s2 =pair_obj4.second;
    s2.showStudent();




}
