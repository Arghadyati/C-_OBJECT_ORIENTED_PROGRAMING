#include<bits/stdc++.h>
using namespace std;
class Hero{
public:
int health;
char level;
static int timetocomplete;

};
int Hero::timetocomplete=20;
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
cout<<Hero::timetocomplete<<endl;
}
//static keyword is nothing but a keyword with the help of static or static data memebers and functions of a class can be acessed with out a object
//:: is scope resolution operator