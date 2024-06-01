#include<bits/stdc++.h>
using namespace std;
class myClass{
public:
void myFunction(){
    cout<<"Here is my function"<<endl;
}
//this was the way defining method inside class , we have another way of defining a mehtod that is outside of class

void myFunction2();
};

void myClass::myFunction2(){
    cout<<"This is my function 2"<<endl;
}

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
myClass myObj;
myObj.myFunction();

myObj.myFunction2();

}

//Methods are nothing but functions belongs to the class