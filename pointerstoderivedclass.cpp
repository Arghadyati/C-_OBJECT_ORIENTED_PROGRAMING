#include<bits/stdc++.h>
using namespace std;
class baseclass{
    public:
    int var_base;
    void display(){
        cout<<var_base<<endl;
    }
};
class derivedclass:public baseclass{
    public:
    int var_derived;
    void display(){
        cout<<var_base<<endl;
        cout<<var_derived<<endl;
    }
};
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
baseclass baseobj;
derivedclass derivedobj;
baseclass *ptr1=&derivedobj;
ptr1->var_base=34;
ptr1->display();
derivedclass *ptr2=&derivedobj;
ptr2->var_base=24;
ptr2->var_derived=44;
ptr2->display();
}
//A pointer of base class pointing to derived class can only temper it's own values but not derived class values