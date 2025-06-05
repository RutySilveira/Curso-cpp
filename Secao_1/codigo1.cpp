// Inclusão da biblioteca padrão de entrada e saída
#include <iostream>

// Função principal do programa - ponto de entrada, as chaves indicam o inicio de um bloco
int main()
{
  // Exibe o texto "Primeiro Codigo" no console seguido de uma quebra de linha
  // cout comando de saída de dados
  // neste caso está solicitando para colocar na saída padrão (tela) a frase especificada
  // endl indica a inserção de um caractere de quebra de linha
  std::cout << "Primeiro Codigo" << std::endl;

  // Pausa a execução do programa até que o usuário pressione alguma tecla
  // chama o shell do windows (DOS) e coloca o comando PAUSE
  system("PAUSE");

  // Retorna 0, indicando que o programa terminou corretamente
  return 0;
} // indica o final de um bloco
