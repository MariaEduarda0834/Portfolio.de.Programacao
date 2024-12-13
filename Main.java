/* 
* Autor: Maria Eduarda Wanderley
* Linguagem:Java
* Data: 10/12/2024
* Descrição:indica cores que combinem para cada estação.
* Funcionalidades:digita a estação (inverno, verão, primavera ou outono), ai ele te informa a melhor paleta de cores para a ocasião, pode ser útil para escolher as melhores cores para roupas, make ou calçados.
* Versão: 1.0
*/
import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void cores(String estacao){//uma função pra dizer as cores que mais combinam com a estação
        String[] verao={"branco", "nude", "verde menta", "laranja/coral", "azul serenity", "rosa pink", "rosa claro", "amarelo"};//lista das cores que mais combinam com o verão
        String[] outono={"marrom", "vermelho caqui", "verde militar", "bordô", "mostarda", "telha", "terracota"};//lista das cores que mais combinam com o outono
        String[] inverno={"azul", "branco", "damasco", "vermelho frio", "preto e cinza", "verde esmeralda", "rosa médio quente"};//lista das cores que mais combinam com inverno
        String[] primavera={"tons vibrantes e pasteis", "roxo", "verde grama", "laranja", "azul royal", "rosé", "vermelho vivo"};//lista das cores que mais combinam com a primavera
        System.out.printf("Essas são as cores que mais combinam com essa estação:\n");//diz que vai aparecer as cores que mais combinam
        if (estacao.equalsIgnoreCase("verão") || estacao.equalsIgnoreCase("verao") ){//vê se a pessoa escreveu verão
            for (int i =0;i<8;i++){//repete 8 vezes
                System.out.printf("%s\n",verao[i]);//mostra as melhores cores pro verão
            }
        }else if (estacao.equalsIgnoreCase("outono")){//vê se a pessoa escreveu outono
            for (int i =0;i<7;i++){//repete 7 vezes
                System.out.printf("%s\n",outono[i]);//mostra as melhores cores pro outono
            }
        }else if (estacao.equalsIgnoreCase("inverno")){//vê se a pessoa escreveu inverno
            for (int i =0;i<7;i++){//repete 7 vezes
                System.out.printf("%s\n",inverno[i]);//mostra as melhores cores pro inverno
            }
        }else if (estacao.equalsIgnoreCase("primavera") ){//vê se a pessoa escreveu primavera
            for (int i =0;i<7;i++){//repete 7 vezes
                System.out.printf("%s\n",primavera[i]);//mostra as melhores cores pra primavera
            }
        }
    }
    
    public static void main(String[] args) throws IOException {
        Scanner entrada = new Scanner(System.in);
        String estacao;//declara a variável estação
        System.out.printf("Digite a estação do ano: ");//pergunta ao usuário qual a estação do ano
        estacao = entrada.nextLine();//armazena a resposta do usuário
        cores(estacao);//chama a função pra mostrar as cores

        entrada.close();
    }
}
