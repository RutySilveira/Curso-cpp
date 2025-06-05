/* 01) Desenvolva um programa que escreve na tela a frase: Vou aprender a programar na
 Linguagem C++ */

// Inclui a biblioteca padrão de entrada e saída (input/output),
// necessária para usar comandos como std::cout
#include <iostream>

// Função principal do programa, onde a execução começa
int main()
{
  // Imprime a mensagem no console: "Vou aprender a programar na Linguagem C++"
  // O std::endl serve para quebrar a linha e "limpar" o buffer de saída
  std::cout << "Vou aprender a programar na Linguagem C++" << std::endl;

  // Comando que pausa a execução do programa até que o usuário pressione uma tecla
  // Funciona apenas em sistemas Windows
  system("PAUSE");

  // Retorna 0 indicando que o programa foi executado com sucesso
  return 0;
}
