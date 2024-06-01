#include<bits/stdc++.h>
using namespace std;
class a{
public:
void sayhello(){
    cout<<"Hello Everyone"<<endl;
}
void sayhello(string name){
    cout<<"Hello"<<" "<<name<<endl;
}
};
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
a obj;
obj.sayhello("argha");
}

//function overloading is a proccess of compile time polymorphism,in this case a class will have same named methods so if we want to 
//access one of them we need to change the parameter of the function that's how we achieve function overloading in compile time polymorphism