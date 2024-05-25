#include <iostream>
#include <string>
using namespace std;


void ingresardatos();
int suma(int a,int b);
float resta(float a,float b);
float Multiplicar(int a,float b);
double division(float a,float b);
bool verificacion(int a,float b);

int main(){
    do{
        ingresardatos();
    }while(true);
    return 0;
}

void ingresardatos(){
    int x,a,b;
    int rs;
    float rr;
    bool vr=false;
    string mensaje;
    mensaje = "\nBienvenido al menu de operaciones\n";
    mensaje+="1-) Sumar\n";
    mensaje+="2-) Restar\n";
    mensaje+="3-) Multiplicar\n";
    mensaje+="4-) Dividir\n";
    mensaje+="5-) Verificar\n";
    mensaje+="6-) Salir\n";
    
    cout<<mensaje;
    cin>>x;
        switch (x)
    {
    case 1:
        cout<<"Ingrese 2 numeros a sumar:"<<endl;
        cout<<"Ingrese numero 1:";
        cin>>a;
        cout<<"Ingrese numero 2:";
        cin>>b;
        rs=suma(a,b);
        cout<<"La suma es:"<<rs;
        break;      
    case 2:
        cout<<"Ingrese 2 numeros a restar:"<<endl;
        cout<<"Ingrese numero 1:";
        cin>>a;
        cout<<"Ingrese numero 2:";
        cin>>b;
        rr=resta(a,b);
        cout<<"La resta es:"<<rr;
        break;
    case 3:
        float ml;
        cout<<"Multiplicar suma por resta:"<<endl;
        ml=Multiplicar(rs,rr);
        cout<<"Resultado de la operacion:["<<rs<<"]*["<<rr<<"]="<<ml<<endl;
        break;
    case 4:
        double dv;
        cout<<"Dividir la multiplicacion para la resta:"<<endl;
        dv=division(ml,rr);
        cout<<"Resultado de la operacion:["<<ml<<"]/["<<rr<<"]="<<dv<<endl;
        break;
    case 5:
        cout<<"Verificar si la suma es mayor a la resta"<<endl;
        vr=verificacion(rs, rr);
        if(!vr){
            cout<<"La suma no es mayor a la resta."<<endl;
        }else{
            cout<<"La suma es mayor a la resta."<<endl;
        }
        break;
        
    case 6:
        cout<<"Saliendo:";
        exit (0);
    default:
        break;
    }

    
}

int suma (int a,int b){
    return a+b;
}

float resta(float a,float b){
    return a-b;
}

float Multiplicar(int a,float b){
    return a*b;
}

double division(float a,float b){
    return a/b;
    
}

bool verificacion(int a, float b) {
    return a>b;
}