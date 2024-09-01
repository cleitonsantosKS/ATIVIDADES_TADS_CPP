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


/* Faça um programa que leia o tamanho do conjunto de dados a serem lidos do teclado. Estes
dados são: idade, peso, altura. Calcule e mostre:
● a média das idades das pessoas;
● a quantidade de pessoas com peso superior a 90kg e altura inferior a 1m50cm;
● A porcentagem entre a quantidade de pessoas com idade entre 10 e 30 anos, com a
quantidade de pessoas que medem mais que 1m90cm. */

#include <iostream>
#include <string>

using namespace std;

    int main ()
    {
        int X; // para armazenar o numero de vetores "Numero de clientes" 
        
        cout << "DIGITE O NUMERO DE PESSOAS:" << endl;
        cin>>X;
        
        string pessoas[X];
        int idade[X];
        float peso[X], altura[X];
        
        int cont1=0; // idade contador
        int cont2=0; // a quantidade de pessoas com peso superior a 90kg e altura inferior a 1m50cm
        float cont3=0; // pessoas com idade entre 10 e 30 anos //contadores declarados em float por conta da divisão futura
        float cont4=0; // quantidade de pessoas que medem mais que 1m90cm. //contadores declarados em float por conta da divisão futura
        
        for (int i=0; i<X; i++) 
        {
           cout<<"digite o nome da " << (i + 1) << "°: " <<endl; // iprime a pergunta do nome das pessias para armazenar no indice da variavel
           cin>>pessoas[i];
           
           pessoas[i] = to_string (i + 1) + "° " + pessoas[i];
        }
        
        for (int i=0; i<X; i++) 
        {
           cout<<"qual a idade de "<<pessoas[i]<<endl;
           cin>>idade[i];
           
           cout<<"qual o peso de "<<pessoas[i]<<endl;
           cin>>peso[i];
           
           cout<<"qual a altura de "<<pessoas[i]<<endl;
           cin>>altura[i];
           
           cont1 = cont1 + idade[i];
           
        }
        
        for (int i=0; i<X; i++) 
        {
            if (peso[i] > 90 && altura[i] < 1.50)
            {
                cont2++;
            }
            
            if (idade[i] > 10 && idade[i] < 30)
            {
                cont3++;
            }
            
            if (altura[i] > 1.90)
            {
                cont4++;
            }
        }
        
        
        // LACO DE TESTE DE VETORES
        /*
        for (int i=0; i<X; i++) 
        {
           cout<<pessoas[i]<<endl;
           cout<<idade[i]<<endl;
           cout<<peso[i]<<endl;
           cout<<altura[i]<<endl;
           
           
        }
        */
        
        // RESPOSTAS DA ATIVIDADE
        
        float porcentagem1, porcentagem2, mediaI ;
        mediaI = cont1 / X;
        
        porcentagem1 =( cont3 / X) * 100 ; //contadores declarados em float por conta da divisão 
        porcentagem2 =( cont4 / X) * 100 ; //contadores declarados em float por conta da divisão 
        
        cout<<"SOMA DAS IDADES = "<<cont1<<endl;
         cout<<"MEDIA DAS IDADES = "<<mediaI<<endl;
        cout<<" quantidade de pessoas com peso superior a 90kg e altura inferior a 1m50cm = "<<cont2<<endl;
        cout<<" pessoas com idade entre 10 e 30 anos = "<<cont3<<" = "<<porcentagem1<<"% "<<endl;
        cout<<"  quantidade de pessoas que medem mais que 1m90cm. = "<<cont4<<" = "<<porcentagem2<<"% "<<endl;
        
        
        
        
        
       return 0;
       
    }

