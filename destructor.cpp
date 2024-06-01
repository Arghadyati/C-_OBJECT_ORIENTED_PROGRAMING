#include<bits/stdc++.h>
using namespace std;
class Hero{
public:
~Hero(){
    cout<<"Destructor bhai is called"<<"\n";
}
};
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
Hero a;
Hero *b=new Hero();
delete b;
}