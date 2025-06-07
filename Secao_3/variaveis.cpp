#include <iostream> // Biblioteca padrão para entrada e saída (cout, cin, etc.)
#include <locale.h> // Biblioteca para configurar a localização (idioma, acentuação, etc.)

int main()
{
  setlocale(LC_ALL, "Portuguese");
  // Configura a localização para o idioma português (permite acentos e caracteres especiais em alguns consoles)

  int NumVidas = 5;     // Declara e inicializa a variável com o número de vidas do jogador
  int Pontuacao = 1350; // Declara e inicializa a variável com a pontuação inicial do jogador

  std::cout << "**************" << std::endl;
  std::cout << "Vidas do Jogador: " << NumVidas << std::endl;
  // Exibe o número de vidas do jogador

  std::cout << "Endereco que NumVidas ocupa na memoria RAM: " << &NumVidas << "\n";
  // Exibe o endereço de memória da variável NumVidas (em hexadecimal)

  std::cout << "Pontuacao: " << Pontuacao << std::endl;
  // Exibe a pontuação atual

  std::cout << "**************" << std::endl;

  std::cout << "*****DURANTE O JOGO*****" << std::endl;
  // Simula uma mudança no estado do jogo

  Pontuacao = Pontuacao + 150; // Adiciona 150 pontos à pontuação atual
  NumVidas = NumVidas - 1;     // Subtrai 1 vida (como se o jogador tivesse perdido uma)

  std::cout << "Vidas Jogador: " << NumVidas << std::endl;
  // Exibe o novo número de vidas

  std::cout << "Pontuacao: " << Pontuacao << std::endl;
  // Exibe a nova pontuação

  std::cout << "********************" << std::endl;

  system("PAUSE");
  // Pausa o programa (funciona apenas no Windows) até o usuário pressionar uma tecla

  return 0;
  // Encerra o programa com sucesso
}
