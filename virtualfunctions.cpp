#include<bits/stdc++.h>
using namespace std;
class baseclass{
public:
int var_base=24;
virtual void display(){
cout<<var_base<<endl;
}
};

class derivedclass:public baseclass{
    public:
    int var_derived=44;
    void display(){
     cout<<var_base<<" "<<var_derived<<endl;
    }
};
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
baseclass *baseclassptr;
baseclass baseobj;
derivedclass derivedobj;
baseclassptr=&derivedobj;
baseclassptr->display();
}

//In case of abstract base class there should be one pure virtual function
//example of pure virtual function for the following code will be virtual void display()=0;