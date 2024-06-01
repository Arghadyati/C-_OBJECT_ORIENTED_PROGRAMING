#include<bits/stdc++.h>
using namespace std;

//copy constructor have parameters inside the constructor and this case one object copies atrributes of a other object

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

//it is the example of copy constructor
Hero ironman(batman);

cout<<"Values for hero arghadyati is "<<arghadyati.health<<" "<<arghadyati.level<<endl;
cout<<"Values for hero batman is "<<batman.health<<" "<<batman.level<<endl;

//after copying the value from batman object
cout<<"Values for hero ironman is "<<ironman.health<<" "<<ironman.level<<endl;
}