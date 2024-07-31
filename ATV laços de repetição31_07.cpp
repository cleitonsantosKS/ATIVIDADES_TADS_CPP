// Uma estatística realizada em 05 cidades brasileiras recuperou dados sobre os acidentes de trânsito, você deve construir um algoritmo que: 
// a) Leia a quantidade de acidentes de trânsito no mês corrente de 05 cidades.
// b) faça a média de acidentes de trânsito nestas cidades; 
// c) mostre a maior e a menor quantidade de acidentes informada p2or estas cidades.


#include <iostream> // Inclui a biblioteca iostream para entrada e saída de dados

using namespace std; // Usa o namespace padrão para evitar escrever std:: antes de cada padrão

int main () { // Início da função principal
    int numerodecidades; // Declara uma variável para armazenar o número de cidades
    
    // Coletar o valor de numerodecidades antes de declará-lo em outras variáveis
    cout <<"Digite o numero de cidades a serem analisadas:"  << endl; // Mensagem para o usuário
    cin >> numerodecidades; // Leitura do número de cidades
    
    // Declara arrays para armazenar os nomes das cidades e o número de acidentes
    string cid[numerodecidades]; // Array de strings para os nomes das cidades
    int acd[numerodecidades]; // Array de inteiros para o número de acidentes

    float media; // Declara uma variável para armazenar a média dos acidentes
    
    // Inicializa as variáveis para encontrar o maior e o menor número de acidentes
    float maior = -4; // Inicializa maior com um valor bem baixo
    float menor = 9999; // Inicializa menor com um valor bem alto
    
    int soma = 0; // Inicializa soma em 0
    
    // Loop para coletar os nomes das cidades
    for(int i = 0; i < numerodecidades; i++)
    { 
        cout << "DIGITE O NOME DA " << i + 1 << "° CIDADE QUE SERÃO ANALISADAS" << endl; // Mensagem para o usuário
        cin >> cid[i]; // Leitura do nome da cidade e armazenamento no array
    }
    
    // Loop para coletar o número de acidentes em cada cidade
    for(int i = 0; i < numerodecidades; i++)
    {
        cout << "Numeros de acidentes na cidade: " << cid[i] << endl; // Mensagem para o usuário
        cin >> acd[i]; // Leitura do número de acidentes e armazenamento no array
        soma += acd[i]; // Adiciona o número de acidentes à variável soma
    }
    
    // Loop para exibir o número de acidentes por cidade
    for(int i = 0; i < numerodecidades; i++)
    {
        cout << cid[i] << " = " << acd[i] << "\n"; // Exibe o nome da cidade e o número de acidentes
    }
    
    // Cálculo da média fora do loop
    media = static_cast<float>(soma) / numerodecidades; // Calcula a média, garantindo que a divisão seja em ponto flutuante
    
    // Loop para encontrar o maior e o menor número de acidentes
    for(int i = 0; i < numerodecidades; i++)
    {
        // Atualiza o maior número de acidentes encontrado
        if (acd[i] > maior)
        {
            maior = acd[i]; // Atribui o valor atual a maior se for maior
        }

        // Atualiza o menor número de acidentes encontrado
        if (acd[i] < menor)
        {
            menor = acd[i]; // Atribui o valor atual a menor se for menor
        }
    } 
    
    // Exibe a média, maior e menor número de acidentes
    cout << media << " = média \n" // Exibe a média
         << maior << " = maior \n" // Exibe o maior número de acidentes
         << menor << " = menor" << endl; // Exibe o menor número de acidentes
    
    return 0; // Retorna 0 para indicar que o programa terminou corretamente
}
