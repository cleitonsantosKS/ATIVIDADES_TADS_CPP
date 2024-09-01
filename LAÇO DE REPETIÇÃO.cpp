/* Uma loja tem 15 clientes cadastrados e deseja enviar uma correspondência a cada um deles
anunciando um bônus especial. Faça um programa que leia o valor das compras destes 15
clientes. Calcule e mostre um bônus de 10% se o valor das compras for menor que R$ 1.000,
e 15% caso seja maior que R$ 1.000.*/ 

#include <iostream>
#include <string>

using namespace std;

    int main ()
    {
        int X; // para armazenar o numero de vetores "Numero de clientes" 
        
        cout << "DIGITE O NUMERO DE CLIENTES:" << endl;
        cin>>X;
        
        string cliente[X];
        float valor[X];
        
        for (int i=0; i<X; i++) // esse laco eu criei para que adicione o numero referente ao cliente
        {
          cliente[i] = "Cliente " +  to_string (i + 1);
        }
        
        for (int i=0; i<X; i++)
        {
             cout << cliente[i]<<endl;
             cin>>valor[i];
        }
        
        for (int i=0; i<X; i++)
        {
             cout<<cliente[i]<< " = "<< valor[i]<< endl;
        }
        
        for (int i=0; i<X; i++)
        {   
            if (valor[i]<1000)
            {
             cout<<cliente[i]<< " = "<< valor[i]<<" BONUS DE 10%"<< endl;
            }
            
            else
            {
             cout<<cliente[i]<< " = "<< valor[i]<<" BONUS DE 15%"<< endl;  
            }
        }
        
        
        return 0;
    }
