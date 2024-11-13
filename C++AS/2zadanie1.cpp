#include <iostream>
using namespace std;
int 2zadanie1()
{
    int punkty;
    cin>>punkty;
    if(punkty>98 && punkty<101)
    {
    cout << "ocena celująca";
    }
    else if (punkty>85 && punkty<99){
    cout << "ocena bardzo dobra";
}
    else if (punkty>70 && punkty<84){
    cout << "ocena dobra";
}
    else if (punkty>55 && punkty<69){
    cout << "ocena dostateczna";
}
    else if (punkty>40 && punkty<54){
    cout << "ocena dopuszczająca";
}
    else if (punkty>0 && punkty<39){
    cout << "ocena bardzo dobra";
}
    else 
    cout << "nie ma takiej ilosci punktow";
    

}