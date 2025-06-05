/* 02) Altere o programa do exercício 01) para que cada palavra da frase Vou aprender a
 programar na Linguagem C++ apareça em linhas diferentes da seguinte forma:
 Vou
 aprender
 a
 programar
 na
 Linguagem C++
 Obs: a) Use primeiramente comando std::endl para quebra de linha(pular uma linha – ENTER)
 b) Depois substitua o comando std::endl pelo caractere de escape nova linha \n –
 New Line */

// Inclui a biblioteca padrão de entrada e saída, necessária para usar std::cout
#include <iostream>

// Função principal do programa, onde a execução começa
int main()
{
  // Imprime a palavra "Vou" e pula para a próxima linha
  std::cout << "Vou" << std::endl;

  // Imprime a palavra "aprender" e pula para a próxima linha
  std::cout << "aprender" << std::endl;

  // Imprime a palavra "a" e pula para a próxima linha
  std::cout << "a" << std::endl;

  // Imprime a palavra "programar" e pula para a próxima linha
  std::cout << "programar" << std::endl;

  // Imprime a palavra "na" e pula para a próxima linha
  std::cout << "na" << std::endl;

  // Imprime a expressão "Linguagem C++" e pula para a próxima linha
  std::cout << "Linguagem C++" << std::endl;

  // Pausa o programa até o usuário pressionar uma tecla (Windows)
  system("PAUSE");

  // Indica que o programa terminou com sucesso
  return 0;
}
