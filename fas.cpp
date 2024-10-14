#include <bits/stdc++.h>
using namespace std;
int main (){
    double x1, x2, y1, y2;
    cin>>x1>>x2>>y1>>y2;
    long double Distancia;

    Distancia=sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));
    cout<<"Programa para calcular la distamciaq entre dos puntos"<<endl;
    cout<<"x1="<<x1<<endl;
    cout<<"y1="<<y1<<endl;
    cout<<"x2="<<x2<<endl;
    cout<<"y2="<<y2<<endl;
    cout<<"La distancia entre los puntos es: "<<Distancia;



}
