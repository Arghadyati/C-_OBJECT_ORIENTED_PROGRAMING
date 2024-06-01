#include<bits/stdc++.h>
using namespace std;
class A{
public:
void func1(){
    cout<<"Inside function 1"<<endl;
}
};
class B:public A{
public:
void func2(){
    cout<<"Inside function 2"<<endl;
}

};

class C:public A{
public:
void func3(){
    cout<<"Inside function 3"<<endl;
}

};
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
C obj;
obj.func3();
obj.func1();
}