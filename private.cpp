#include<bits/stdc++.h>
using namespace std;
class hero{
    private:
    int health;
    //health is a private access modified element but we can acess that out side of the class using getter and setter

    //first let's begin with setter to set value to health attribute
    public:
    void sethealth(int h){
        health=h;
    }

    //now we will implement getter to get the value of health attribute

    void gethealth(){
        cout<<"The health of the hero is : "<<health<<endl;
    }
};
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
//intialise the object

hero arghadyati;
//setter assigning
arghadyati.sethealth(100);
//getting with getter
arghadyati.gethealth();

//dynamic allocation of a object
hero *h1=new hero;

}