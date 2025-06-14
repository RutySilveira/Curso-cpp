#include <iostream> // Biblioteca para entrada e saída padrão (cin, cout)

int main()
{
  int numero;  // Declara uma variável inteira chamada 'numero'
  numero = 45; // Atribui o valor 45 à variável

  // Imprime o valor da variável
  std::cout << "Numero: " << numero << std::endl;

  // Imprime o tamanho da variável em bytes (geralmente 4 bytes para int em sistemas modernos)
  std::cout << "Tamanho da Variavel Numero: " << sizeof(numero) << "Bytes" << "\n";

  // Imprime o endereço de memória onde a variável está armazenada
  std::cout << "Endereco Carregado na Memoria: " << &numero << "\n";

  // Pausa a execução do programa (funciona apenas em sistemas Windows)
  system("PAUSE");
}
