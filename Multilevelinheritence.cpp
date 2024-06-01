#include<bits/stdc++.h>
using namespace std;
class animal{
public:
void bark(){
cout<<"dog is barking"<<endl;
}
};

class dog:public animal{

};
class germanshepard:public dog{

};
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
germanshepard g1;
g1.bark();


}