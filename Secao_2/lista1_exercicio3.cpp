/* 3) Utilizando o comando System(COLOR CorFundoCorTexto) e altere a cor de exibição da
fonte no terminal de saída para uma cor de sua preferência.*/

#include <iostream> // Inclui a biblioteca para entrada e saída de dados (cout, cin, etc.)

int main()
{
  // Define as cores do console:
  // "COLOR 47" -> Fundo: vermelho (4), Texto: branco (7)
  // Essa configuração é específica do terminal do Windows
  system("COLOR 47");

  // Imprime a frase, com cada palavra em uma nova linha usando '\n'
  std::cout << "Vou\n aprender\n a\n programar\n na\n Linguagem C++" << std::endl;

  // Pausa o programa até o usuário pressionar uma tecla (funciona no Windows)
  system("PAUSE");

  // Retorna 0 indicando que o programa terminou corretamente
  return 0;
}
