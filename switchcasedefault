// Questão 01) Escreva um programa que indique o número de dias existentes em um
// mês.

//questão 1 switch

#include <iostream>

using namespace std;

int main () {
    int n;
    cout<<"Escolha um Mes e esconha ok nunero referente a ele:\n"
    <<"1 janeiro\n"
    <<"2 fevereiro\n"
   << "3 março\n"
   << "4 abril\n"
    << "5 maio\n"
    << "6 junho\n"
    << "7 julho\n"
    << "8 agosto\n"
   <<  "9 setembro\n"
   <<  "10 outubro\n"
   <<  "11 novembro\n"
   <<  "12 Desenbro\n"
    <<endl;
    cin>>n;
    
    switch (n) {
        
        case 2:
            cout<<"Esse mes tem 28 dias"<<endl;
            break;
        
        case 4:
        case 6:
        case 9:
        case 11:
            cout<<"Esse mes tem 30 dias"<<endl;
            break;
        
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout<<"Esse mes tem 31 dias"<<endl;
            break;
        
        
        
        default:
            cout<<"MES NÃO ENCONTRADO"<<endl;
        
        
        
     return 0;
    }
    
}

// Questão 02) Desenvolva um programa em C++ para simular um sistema de menu de
// restaurante. O programa deve exibir um menu principal com diferentes opções, sendo elas:
// pratos principais, bebidas, sobremesas usando switch case. Cada opção selecionada deve
// exibir um submenu correspondente. Exemplo para pratos principais: strogonoff, feijoada,
// risoto.

//questão 2 switch

#include <iostream>

using namespace std;

int main () {
    int n;
    cout<<"SELECIONE UM MENU:\n"
    <<"1 Pratos principais\n"
    <<"2 Bebidas\n"
    <<"3 Sobremesas\n"
    <<endl;
    cin>>n;
    
    switch (n) {
        
        case 1:
            cout<<"Pratos principais"<<endl;
             int Pratos_principais;
                cout<<"SELECIONE UM MENU:\n"
                <<"1 strogonoff\n"
                <<"2 feijoada\n"
                <<"3 risoto\n"
                <<endl;
                cin>>Pratos_principais;
                
                switch (Pratos_principais) {
                    case 1:
                        cout<<"strogonoff"<<endl;
                        break;
                    
                    case 2:
                        cout<<"feijoada"<<endl;
                        break;
                        
                    case 3:
                        cout<<"risoto"<<endl;
                        break;
                        
                    default:
                        cout<<"Menu não encontrado"<<endl;
                    
                }
        break;
        
        case 2:
            cout<<"Bebidas"<<endl;
            
            int Bebidas;
                cout<<"SELECIONE UM MENU:\n"
                <<"1 Suco\n"
                <<"2 Refrigerante\n"
                <<"3 Agua\n"
                <<endl;
                cin>>Bebidas;
                
                switch (Bebidas) {
                    case 1:
                        cout<<"Suco"<<endl;
                        break;
                    
                    case 2:
                        cout<<"Refrigerante"<<endl;
                        break;
                        
                    case 3:
                        cout<<"Agua"<<endl;
                        break;
                        
                    default:
                    cout<<"Menu não encontrado"<<endl;
                } 
        break;
        
        case 3:
        cout<<"Sobremesas"<<endl;
            int SObremesas;
                cout<<"SELECIONE UM MENU:\n"
                <<"1 pudin\n"
                <<"2 doce de coco\n"
                <<"3 doce de banana\n"
                <<endl;
                cin>>SObremesas;
                
                switch (SObremesas) {
                    case 1:
                        cout<<"pudin"<<endl;
                        break;
                    
                    case 2:
                        cout<<"doce de coco"<<endl;
                        break;
                        
                    case 3:
                        cout<<"doce de Banana"<<endl;
                        break;
                    default:
                    cout<<"Menu não encontrado"<<endl;
                }
            
        break;
        
        
        
        default:
            cout<<"Menu não encontrado"<<endl;
        
        
        
     return 0;
    }
    
}
// Questão 03) Desenvolva um sistema bancário simples em C++. O programa deve permitir
// ao usuário realizar as seguintes operações usando switch case:
// ● Consultar saldo
// ● Depositar dinheiro
// ● Sacar dinheiro

#include <iostream>

using namespace std;

int main () {
    float saldo;
    
     cout<<"Digite o saldo da sua conta"<<endl;
      cin>>saldo;
      
      int n;
      
      cout<<"Digite a sua operação:\n"
        "(1) Consultar saldo\n"
        "(2) Depositar dinheiro\n"
        "(3) Sacar dinheiro\n"<<endl;
        
     cin>>n;
       
        float oper, valor;
        
      switch (n) {
          case 1:
          
          
            cout<<"CONSULTANDO"<<endl;
            cout<<"Seu saldo é "<< saldo<<endl;
          break;
          
          case 2:
          cout<<"Digite o valor do deposito:"<<endl;
          cin>>valor;
          
          oper = saldo + valor;
          
          cout<<"CONSULTANDO"<<endl;
          cout<<"você depositou: "<<valor<<endl;
          cout<<"Seu saldo é "<< oper;
          break;
          
          case 3:
          cout<<"Digite o valor do Saque:"<<endl;
          cin>>valor;
          
          oper = saldo - valor;
          
          cout<<"CONSULTANDO"<<endl;
          cout<<"você sacou: "<<valor<<endl;
          cout<<"Seu saldo é "<< oper;
          break;
         
         default:
         
         cout<<"Numero invalido"<<endl;
         
        }
        return 0;    
    }

// questão 4 
// Escreva um algoritmo que leia o código do item adquirido pelo consumidor e a quantidade,
// calculando e mostrando o valor a pagar. x

#include <iostream>
using namespace std;

int main () {
    int qtd, cdg, cal;

      cout<<"escolha o produto digitando o seu codigo\n"
        "{100} Cachorro quente\n"
        "{101} Bauru Simples\n"
        "{102} Bauru com ovo\n"
        "{103} Hamburguer\n"
        "{104} Cheeseburguer\n"
        "{105} Refrigerante\n"<<endl;
        cin >>cdg ;
        cout<<"escolha a quantidade do produto"<<endl;
        cin >>qtd;
        
        switch (cdg) {
            
            case 100:
            cout <<qtd<< " Cachorro quente = "<<1.70*qtd<<"$" <<endl;
            break;
            
            case 101:
            cout <<qtd<< " Bauru Simple = "<<2.30*qtd<<"$" <<endl;
            break;
            
            case 102:
            cout <<qtd<< " Bauru com ovo = "<<2.60*qtd<<"$" <<endl;
            break;
            
            case 103:
            cout <<qtd<< " Hamburguer = "<<2.40*qtd<<"$" <<endl;
            break;
            
            case 104:
            cout <<qtd<< " Cheeseburguer = "<<2.50*qtd<<"$" <<endl;
            break;
            
            case 105:
            cout <<qtd<< " Refrigerante = "<<1.00*qtd<<"$" <<endl;
            break;
            
            
            default:
            cout<<"Numero invalido"<<endl;
            
            
            
        }
       return 0;
}

