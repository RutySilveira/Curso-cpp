/* Crie um programa em C++ que:
Declara uma variável do tipo int de nome NumComputadores
Declara uma variável do tipo int de nome SerialComputadores
Inicia a variável NumComputadores com valor de 100;
Inicia a variável SerialComputadores cm o valor 11111;
Coloca na tela uma linha com cifrões $$$$$$$$$$$$$$$$
Coloca na tela o nome e os valores das variáveis NumComputadores
e SerialComputadores
Coloca no final na tela uma linha com cifrões $$$$$$$$$$$$$$$$$$
Obs: Lembre-se de colocar o comando para pausar a tela   */

#include <iostream>  // Biblioteca padrão de entrada e saída em C++
using namespace std; // Permite usar nomes padrão como "cout" e "endl" sem o prefixo "std::"

int main() // Função principal, ponto de entrada do programa
{
  // Declaração e inicialização de variáveis inteiras
  int NumComputadores = 100;      // Armazena a quantidade de computadores
  int SerialComputadores = 11111; // Armazena o número de série dos computadores

  // Impressão de informações no console
  cout << "$$$$$$$$$$$$$$$$$$$$$$$" << endl;                     // Imprime uma linha decorativa
  cout << "NumComputadores = " << NumComputadores << endl;       // Mostra o valor da variável NumComputadores
  cout << "SerialComputadores = " << SerialComputadores << endl; // Mostra o valor da variável SerialComputadores
  cout << "$$$$$$$$$$$$$$$$$$$$$$$" << endl;                     // Imprime novamente a linha decorativa

  system("PAUSE"); // Pausa a execução para que o usuário veja a saída (funciona apenas no Windows)

  return 0; // Indica que o programa terminou com sucesso
}
