#include<bits/stdc++.h>
using namespace std;
class a{
public:
void func(){
    cout<<"This is a function"<<endl;
}
};

class b:public a{
    public:
    void func(){
        cout<<"This is derived class method"<<endl;
    }
};
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
b obj;
obj.func();
}