'''
* Autor: Maria Eduarda Wanderley
* Linguagem:Python
* Data: 10/12/2024
* Descrição:indica cores que combinem para cada estação.
* Funcionalidades:digita a estação (inverno, verão, primavera ou outono), ai ele te informa a melhor paleta de cores para a ocasião, pode ser útil para escolher as melhores cores para roupas, make ou calçados.
* Versão: 1.0
'''

def cores(estacao):#uma função pra dizer as cores que mais combinam com a estação
    verao=["branco", "nude", "verde menta", "laranja/coral", "azul serenity", "rosa pink", "rosa claro", "amarelo"]#lista das cores que mais combinam com o verão
    outono=["marrom", "vermelho caqui", "verde militar", "bordô", "mostarda", "telha", "terracota"]#lista das cores que mais combinam com o outono
    inverno=["azul", "branco", "damasco", "vermelho frio", "preto e cinza", "verde esmeralda", "rosa médio quente"]#lista das cores que mais combinam com inverno
    primavera=["tons vibrantes e pasteis", "roxo", "verde grama", "laranja", "azul royal", "rosé", "vermelho vivo"]#lista das cores que mais combinam com a primavera
    print("Essas são as cores que mais combinam com essa estação:")#diz que vai aparecer as cores que mais combinam
    if estacao == "verão" or estacao == "verao" or estacao == "Verão" or estacao == "Verao":#vê se a pessoa escreveu verão
        for i in range(8):#repete 8 vezes
            print(verao[i])#mostra as melhores cores pro verão
    elif estacao == "outono" or estacao == "Outono":#vê se a pessoa escreveu outono
        for i in range(7):#repete 7 vezes
            print(outono[i])#mostra as melhores cores pro outono
    elif estacao == "inverno" or estacao == "Inverno":#vê se a pessoa escreveu inverno
        for i in range(7):#repete 7 vezes
            print(inverno[i])#mostra as melhores cores pro inverno
    elif estacao == "primavera" or estacao == "Primavera":#vê se a pessoa escreveu primavera
        for i in range(7):#repete 7 vezes
            print(primavera[i])#mostra as melhores cores pra primavera

estacao = input("Digite a estação do ano: ")#pergunta ao usuário qual a estação do ano
cores(estacao)#chama a função pra mostrar as cores