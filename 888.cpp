#include <iostream>
int main(){
    using namespace std; setlocale(0, "");
    cout<<"Времена года:"<<endl<<"[ 1 ] Лето"<<endl<<"[ 2 ] Осень"<<endl<<"[ 3 ] Зима"<<endl<<"[ 4 ] Весна"<<endl;
    int a; cout <<"Выберете время года: "<<endl; cin>>a;
    if (a==1){cout<<"Сейчас лето, не стоит одеваться тепло"<<endl;}
    else if (a==2){cout<<"Сейчас осень, следует одеться тепло и взять с собой зонт"<<endl;}
    else if (a==3){cout<<"Сейчас зима, стоит одеться тепло и взять перчатки"<<endl;}
    else if (a==4){cout<<"Сейчас весна, можно одеться легче чем зимой"<<endl;}
    else{cout<<"Такого сезона нет!"<<endl;}exit(0);
    int _; cin>> _;
}
