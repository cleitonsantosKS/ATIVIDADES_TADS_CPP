/* 1) Uma loja tem 15 clientes cadastrados e deseja enviar uma correspondência a cada um deles
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


/* 2) Faça um programa que leia o tamanho do conjunto de dados a serem lidos do teclado. Estes
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


  /* 3) Faça um programa que apresente um menu com as seguintes opções:

● média aritmética
● média ponderada
● sair do programa

Leia a opção escolhida pelo usuário e com base nela:

● média aritmética: ao escolher esta opção, solicite duas notas, calcule e
mostre a média aritmética na tela.
● média ponderada: ao escolher esta opção, solicite três notas e seus
respectivos pesos. Calcule a média ponderada e mostre o valor na tela.
● sair do programa: o laço de repetição se encerra.*/

#include <iostream>

using namespace std;

    int main ()
    {
        int X;
        cout<<"SELECIONE O MENU \n"
               "(1) = média aritmética\n"
               "(2) = média ponderada\n"
               "(0) = sair do programa\n"<<endl;
               
        cin>>X; 
        
        while (X != 0) // ou while (X > 0)
        {
            
            
           switch (X)
           {
               case 1:
                {
                   cout<<" média aritmética"<<endl;
                   float valor[2];
                   float contador1=0; // armazena as somas dos valores
                   float media;
                   
                  for (int i =0 ; i<2; i++)
                    {
                     cout<< "digite o "<<i + 1 << "° valor" <<endl;
                     cin>>valor[i];
                     
                     contador1 = contador1 + valor[i];
                     
                    }
                    
                    media = contador1 / 2;
                    
                    cout<<"média aritmética = "<<media<<"\n"<<endl; // o \n e para da espaco para ficar mais organizado!
                    
                    break;
                }
               
               case 2:
                {
                    cout<<" média ponderada"<<endl;
                    float valor[3];
                    int peso[3];
                   float contador1=0; // multiplica a nota pelo peso para armazenar as somas do resultado
                   float contador2=0; // soma os pesos
                   float media;
                   
                  for (int i =0 ; i<3; i++)
                    {
                     cout<< "digite o "<<i + 1 << "° valor" <<endl;
                     cin>>valor[i];
                     
                     cout<< "digite o peso de "<< valor[i] <<endl;
                     cin>>peso[i];
                     
                     contador1 =contador1 + ( valor[i] * peso[i] ); // multiplica a nota pelo peso e soma as multiplicacão
                     contador2 = contador2 + peso[i];  // soma os pesos
                    // contador3 = contador1 + contador1; // soma todas as notas multiplicadas pelos pesos
                     
                     
                    }
                    
                    media = contador1 / contador2;
                    
                    cout<<" média ponderada = "<<media<<"\n"<<endl;
                    
                    
                    break;
                }
               
               default:
                    cout<<"NUMERO INVALIDO\n"<<endl;
               
           }
           
           // repete a opsão de escolha do menu
           cout<<"SELECIONE O MENU \n"
               "(1) = média aritmética\n"
               "(2) = média ponderada\n"
               "(0) = sair do programa\n"<<endl;
               
            cin>>X;
        }
        
        
        if (X==0)
        {
          cout<<"SAINDO"<<endl;  
        }
        
        //TESTE DE SAIDA
        
      //  cout<<X<<endl;
        
        return 0;
    }


/* 4) Em uma competição de salto em distância cada atleta tem direito a cinco saltos. No total
existem 10 atletas. Em cada série, e para cada atleta, os 05 saltos devem ser lidos do
teclado, sendo necessário, calcular a média alcançada por cada um deles. Você deve
armazenar a maior e a menor média. Para identificação de cada atleta, considere que cada
um deles recebe um código iniciado de 1. Logo o seu programa deve em cada execução do
laço:

Leitura da série do candidato 1:
1.5
6.5
3
4.75
5.2
Média do candidato 1: 4.19
Leitura da série do candidato 2:
2
2
2
2
2
Média do candidato 2: 2
Só ao final você deve mostrar o campeão e o desclassificado deste campeonato. */

#include <iostream>
#include <string>

using namespace std;

    int main ()
    {
        int X; // para armazenar o número de vetores "Numero de candidatos" 
        
        cout << "DIGITE O NÚMERO DE CANDIDATOS:" << endl;
        cin>>X;
        
        string candidato[X];
        float media[X];
        
        float valor[5];
        
        for (int i=0; i<X; i++) // esse laço eu criei para adicionar o número referente ao candidato
        {
          candidato[i] = "candidato_"  +  to_string (i + 1);
        }
        
        for (int i=0; i<X; i++)
        
        {
            
            cout <<candidato[i]<<endl;
            
            float cont=0;
            
            
            for (int j=0; j<5; j++) //coleta os valores de cada salto dentro do laco de cada candidato
            {
                 cout<<j+1<< "° salto"<<endl;
                 cin>>valor[j];
                 
                 cont=cont+valor[j];
            }
            
            media[i] = cont / 5;
        }
        
       
        
        float indice_maior = media[0];
        float indice_menor = media[0];
        int vetor_X; //Armazena a posição do índice do vetor de maior média
        int vetor_Y; //Armazena a posição do índice do vetor de menor média
        
         for (int i=0; i<X; i++)
        {   
            if (indice_maior<media[i]) // compara as médias e Armazena a maior
            {
             indice_maior = media[i];
             vetor_X=i; // Armazena a posição do índice maior
             
            }
            
            if (indice_menor>media[i]) // compara as médias e Armazena a menor
            {
             indice_menor = media[i];
             vetor_Y=i;  // Armazena a posição do índice maior
             
            }
        }
        
        
       cout<<"O "<<candidato[vetor_X]<<" é campeão com média = "<<indice_maior<<endl;
       
       cout<<"O "<<candidato[vetor_Y]<<" é desclassificado com média = "<<indice_menor<<endl;
       
        
        return 0;
    }
