#include<bits/stdc++.h>
using namespace std;
class Animal{
public:
void speak(){
    cout<<"Animal speaking"<<endl;
}
};

class Human{
public:
void talk(){
    cout<<"Human talks"<<endl;
}
};

class hybrid:public Human,public Animal{

};
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
hybrid project;
project.speak();
project.talk();
}