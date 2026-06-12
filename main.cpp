/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <iostream>
#include <map>
                    using namespace std;
                int main () {
                    int chave;
                    map<int, string> mapa;

                    mapa[1] = "KLS";
                    mapa[2] = "KROTON";
                    mapa[3] = "ESTRUTURA DE DADOS";
cout << "Tamanho da estrutura de Mapa: " << mapa.size()
                         << endl; /* Função size retorna o tamanho do mapeamento */
                    printf("Digite a chave: \n");
                    scanf("%d", &chave);
                    if (mapa.find(chave) == mapa.end())  /* Verifica se a chave existe na estrutura */
                        cout << "\nChave NAO existe!\n\n"; /* Caso negativo informa que não existe */
                    else
                        cout << "\nChave existe! - Valor: " + mapa[chave] +
                                "\n\n";           /* Caso afirmativo é informado que existe a chave e o valor dela */
                    return 0;
                }
