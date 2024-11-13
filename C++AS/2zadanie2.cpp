#include <iostream>
#include <cmath>
using namespace std;
bool czymozna(int a, int b, int c){
return (a+b>c) && (a+c>b) && (b+c>a);
}
int poletrojkata(int a, int b, int c){
    int s = (a+b+c) / 2;
    return static_cast<int>(sqrt(s*(s-a)*(s-b)*(s-c)));
}
int 2zadanie2(){
int a, b, c;

cout << "podaj dlugosci bokow";
cin >> a >> b >> c;
if(czymozna(a,b,c)){
int pole = poletrojkata(a,b,c);
cout << "pole trojkata wynosi" << pole << endl;
}
else{
    cout << "nie mozna utworzyc pola trojkata";
}
}