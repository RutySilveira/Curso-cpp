// Inclusão da biblioteca padrão de entrada e saída
#include <iostream>

// Função principal do programa - ponto de entrada
int main()
{
  // Exibe o texto "Primeiro Codigo" no console seguido de uma quebra de linha
  std::cout << "Primeiro Codigo" << std::endl;

  // Pausa a execução do programa até que o usuário pressione alguma tecla
  // OBS: 'system("PAUSE")' é específico do Windows e não é recomendável em programas portáveis
  system("PAUSE");

  // Retorna 0, indicando que o programa terminou corretamente
  return 0;
}
