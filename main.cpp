/*
* Autor: Maria Eduarda Wanderley
* Linguagem: C++
* Data: 11/12/2024
* Descrição:indica cores que combinem para cada estação.
* Funcionalidades:digita a estação (inverno, verão, primavera ou outono), ai ele te informa a melhor paleta de cores para a ocasião, pode ser útil para escolher as melhores cores para roupas, make ou calçados.
* Versão: 1.0
*/

#include <iostream>
#include <string.h> // Para usar a função strcmp
using namespace std;


void cores(char estacao[]){//uma função pra dizer as cores que mais combinam com a estação
    char verao[8][20]={"branco", "nude", "verde menta", "laranja/coral", "azul serenity", "rosa pink", "rosa claro", "amarelo"};//lista das cores que mais combinam com o verão
    char outono[7][20]={"marrom", "vermelho caqui", "verde militar", "bordô", "mostarda", "telha", "terracota"};//lista das cores que mais combinam com o outono
    char inverno[7][20]={"azul", "branco", "damasco", "vermelho frio", "preto e cinza", "verde esmeralda", "rosa médio quente"};//lista das cores que mais combinam com inverno
    char primavera[7][30]={"tons vibrantes e pasteis", "roxo", "verde grama", "laranja", "azul royal", "rosé", "vermelho vivo"};//lista das cores que mais combinam com a primavera
    printf("Essas são as cores que mais combinam com essa estação:\n");//diz que vai aparecer as cores que mais combinam
    if (strcmp(estacao, "verão") == 0 || strcmp(estacao, "verao") ==0|| strcmp(estacao, "Verão")==0  || strcmp(estacao, "Verao") ==0){//vê se a pessoa escreveu verão
        for (int i =0;i<8;i++){//repete 8 vezes
           cout << verao[i] << "\n";//mostra as melhores cores pro verão
        }
    }else if (strcmp(estacao, "outono") == 0 || strcmp(estacao, "Outono") ==0){//vê se a pessoa escreveu outono
        for (int i =0;i<7;i++){//repete 7 vezes
            cout << outono[i] << "\n";//mostra as melhores cores pro outono
        }
    }else if (strcmp(estacao, "inverno") == 0 || strcmp(estacao, "Inverno") ==0){//vê se a pessoa escreveu inverno
        for (int i =0;i<7;i++){//repete 7 vezes
            cout << inverno[i] << "\n";//mostra as melhores cores pro inverno
        }
    }else if (strcmp(estacao, "primavera") == 0 || strcmp(estacao, "Primavera") ==0){//vê se a pessoa escreveu primavera
        for (int i =0;i<7;i++){//repete 7 vezes
            cout << primavera[i] << "\n";//mostra as melhores cores pra primavera
        }
    }
}




int main() {
   char estacao[10];
   cout << "Digite a estação do ano: ";//pergunta ao usuário qual a estação do ano
   cin >> estacao;//armazena a resposta do usuário
   cores(estacao);//chama a função pra mostrar as cores

    
    return 0;
}

