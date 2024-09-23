//QUESTÃO 1

#include <iostream>
#include <string>

using namespace std;

void Nome (string n )
     {
       cout<<"Seja Bem Vindo "<<n<<endl;
    }

int main()
     {
        string n;
        cout<<"Digite o Nome"<<endl;
        getline (cin,n);



        Nome(n);

        return 0;
    }

// QUESTÃO 2

/*
#include <iostream>

using namespace std;

float Media (int n1, int n2, int n3 )
     {
       float media = (n1 + n2 + n3) / 3.0;

       return media;
    }

int main()
     {
        int n1, n2, n3;
        cout<<"Digite os 3 valores"<<endl;
        cin>>n1 >> n2 >> n3;



       float R = Media(n1, n2, n3);

       cout<<"MEDIA = "<<R<<endl;

        return 0;
    }

*/
/*

3) Crie um programa que tenha uma função fatorial() que receba um número inteiro e
retorne o fatorial desse número. Use o tipo void.
*/

/*
#include <iostream>
using namespace std;

void Fatorial (int n){
   int resultado = 1;

    for (int i=1; i<=n; i++)
     {
        resultado *= i;
    }
cout<<"O FATORIAL E = "<< resultado<<endl;

}

int main (){
    int n;
    cin>>n;

    Fatorial(n);

    return 0;
} */


/*
4) Faça um programa que use a função valorPagamento para determinar o valor a ser
pago por uma prestação de uma conta. O programa deverá solicitar ao usuário o
valor da prestação e o número de dias em atraso e passar estes valores para a
função valorPagamento, que calculará o valor a ser pago e devolverá este valor ao
programa que a chamou. O programa deverá então exibir o valor a ser pago. Use o
tipo void.
*/

/*
#include <iostream>
using namespace std;

void valorapagar (float valorpresta, int dias ){

    double taxa = 0.01;

    double total = valorpresta + (valorpresta*taxa*dias);

    cout<<"O valor a ser pago = "<<total<<endl;
}

int main (){
    float VP;
    int dias;

    cin>>VP>>dias;

    valorapagar(VP, dias);

    return 0;
}
*/

/*
5) Faça uma função que receba a idade de uma pessoa e retorne a categoria:
"Criança" (0-12), "Adolescente" (13-17), "Adulto" (18-64) ou "Idoso" (65+).
*/

/*
#include <iostream>
using namespace std;

void Categoria(int idade){
    if (idade<13)
     {
        cout<<"Criança"<<endl;
    }
    else if (idade>12 && idade<18 )
     {
        cout<<"Adolescente"<<endl;
    }
    else if (idade>17 && idade<65 )
     {
        cout<<"Adulto"<<endl;
    }
    else{
        cout<<"Idoso"<<endl;
    }

}
int main(){
    int i;
    cin>>i;

    Categoria(i);

    return 0;
}
*/

/*6) Crie uma função que receba um valor em reais e a cotação atual do dólar, e retorne
o valor convertido para dólares.*/

/*
#include <iostream>
using namespace std;

void conver (float V){
 V = V * 5.40;

   cout<<"O VALOR EM DOLAR = "<< V <<endl; 
}

int main (){
    float V;
    cin>>V;

    conver(V);

    return 0;
}
*/

/*Faça uma função que receba, por parâmetro, um valor inteiro e positivo e retorne o número de divisores desse valor.*/

/*
#include <iostream>

using namespace std;

void divisores (int n) {
    int divisoresn[n];
    int contador = 0;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisoresn[contador] = i;
            contador++;
        }
    }

    cout << "OS DIVISORES SAO = ";
    for (int i = 0; i < contador; i++) {
        cout << divisoresn[i]<<" / ";
    }
    cout << endl;
}

int main2() {
    int n;
    cin >> n;
    divisores(n);

    return 0;
}

*/