#include<bits/stdc++.h>
using namespace std;
class Human{
public:
int op;
void sleep(){
    cout<<"Every human sleeps"<<endl;
}
void eat(){
    cout<<"Every human needs to eat to sustain"<<endl;
}
};
class Male:public Human{
public:
int height;
int weight;
int age;
};
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
Male sigma;
sigma.height=167;
sigma.age=22;
sigma.weight=65;
sigma.eat();
sigma.sleep();
sigma.op=100;
cout<<sigma.op<<endl;
}
//Inheritence is a proccess where a class inherits properties from their parent class
//It's a example of single level inheritence


//But inheritence is of 5 types 1.single 2.multiple 3.multilevel 4.hybrid 5.hirerchial