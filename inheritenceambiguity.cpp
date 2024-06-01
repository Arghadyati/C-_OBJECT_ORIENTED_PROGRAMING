#include<bits/stdc++.h>
using namespace std;
class a{
    public:
    void func(){
        cout<<"This is class a "<<endl;
    }
};
class b{
    public:
    void func(){
        cout<<"This is class b"<<endl;
    }
};
class c:public a,public b{
    public:
    
};
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
c obj;
obj.a::func();
obj.b::func();
}