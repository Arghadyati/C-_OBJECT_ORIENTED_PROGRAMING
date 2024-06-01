#include<bits/stdc++.h>
using namespace std;

//parameterised constructor have parameters inside the constructor

class Hero{
    public:
    int health;
    char level;
    Hero(int h,char l){
        health=h;
        level=l;
    }
};

int main(){
ios::sync_with_stdio(0);
cin.tie(0);

//creating a object
Hero arghadyati(100,'a');
Hero batman(95,'b');

cout<<"Values for hero arghadyati is "<<arghadyati.health<<" "<<arghadyati.level<<endl;
cout<<"Values for hero batman is "<<batman.health<<" "<<batman.level<<endl;
}