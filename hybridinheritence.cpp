#include<bits/stdc++.h>
using namespace std;
class baseclass{
public:
void funcbase(){
    cout<<"Inside base function"<<endl;
}
};
class A:public baseclass{
public:
void funcA(){
cout<<"Inside func a"<<endl;
}
};
class B:public baseclass{
public:
void funcB(){
cout<<"Inside func b"<<endl;
}
};
class C:public A,public B{
public:
void funcC(){
    cout<<"Inside func C"<<endl;
}
};
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
C obj;
obj.funcC();
}

// Hybrid inhertience is the type of inheritence where two types of inheritence tooks place together