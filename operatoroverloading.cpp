#include<bits/stdc++.h>
using namespace std;
class B{
public:
int a;
void operator +(B &obj){
    cout<<this->a-obj.a<<endl;
}
};
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
B obj1,obj2;
obj1.a=7;
obj2.a=4;
obj1+obj2;
}
//with + operator we can do addition but here with operator overloading we are doing substraction