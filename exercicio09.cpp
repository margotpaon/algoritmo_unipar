#include <stdio.h>
#include <stdlib.h>

struct Cadastro{
    int codigo;
    char nome[30];
    char endereco[50];
    int data[3];
    char sexo[1];
    double valor_total_devido;
    double valor_total_credito;
    int idade;
    char status_cadastro[1];
};

Cadastro cliente[5];

int cadastro(){
    int x = 0;
    for(x = 0; x < 1; x++){
        printf("\n\n Cadastro de clientes\n");
        printf("\n\nDigite o código do cliente\n");
        scanf("%d", &cliente[x].codigo);
        getchar();
        printf("\n\nDigite o nome do cliente\n");
        fgets(cliente[x].nome,30,stdin);
        printf("\n\nDigite o endereço do cliente\n");
        fgets(cliente[x].endereco,50,stdin);
        printf("\n\nDigite o dia que o cliente nasceu\n");
        scanf("%d",&cliente[x].data[0]);
        getchar();
        printf("\n\nDigite o mes que o cliente nasceu\n");
        scanf("%d",&cliente[x].data[1]);
        getchar();
        printf("\n\nDigite o ano que o cliente nasceu\n");
        scanf("%d",&cliente[x].data[2]);
        getchar();
        printf("\n\nDigite o sexo do cliente\n");
        scanf("%s", cliente[x].sexo);
        printf("\n\nDigite o valor que seu cliente deve\n");
        scanf("%lf", &cliente[x].valor_total_devido);
        printf("\n\nDigite o valor que seu cliente tem de credito\n");
        scanf("%lf", &cliente[x].valor_total_credito);
        printf("\n\nQual idade do seu cliente?\n");
        scanf("%d", &cliente[x].idade);
        printf("\n\nQual status da conta de seu cliente?");
        printf("\n\nA para ativo e I para inativo\n");
        scanf("%s", cliente[x].status_cadastro);
    }
    return 0;
}

void relatorio(){
    int x = 0;
    printf("\n\nAqui está o relatório de seu(s) cliente(s)");
    for(x = 0; x < 1; x++){
        printf("\n\nCódigo..: %i", cliente[x].codigo);
        printf("\n\nNome..: %s", cliente[x].nome);
        printf("\n\nEndereço..: %s", cliente[x].endereco);
        printf("\n\nDia de nascimento..: %i", cliente[x].data[0]);
        printf("\n\nMês de nascimento..: %i", cliente[x].data[1]);
        printf("\n\nAno de nascimento..: %i", cliente[x].data[2]);
        printf("\n\nSexo..: %s", cliente[x].sexo);
        printf("\n\nValor total devido..: %lf", cliente[x].valor_total_devido);
        printf("\n\nValor total de crédito..: %lf", cliente[x].valor_total_credito);
        printf("\n\nIdade do cliente..: %d", cliente[x].idade);
        printf("\n\nSituação cadastral..: %s", cliente[x].status_cadastro);
        printf("\n\n\n");
    }
}

int main(void){

char continua;

    do{
        cadastro();
        relatorio();
        printf("\n\nDeseja continuar o programa S/N?\n");
        scanf("%s", &continua);
    }while(continua == 'S' || continua == 's');
    printf("\n\nO programa foi encerrado!!!\n");    
}