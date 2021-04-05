#include <stdio.h>
#include <string.h>
#include <locale.h>

int main () {

//Desafio cria��o de formul�rio para doa��o de sangue

setlocale(LC_ALL, "Portuguese");

float massa;
int idade, doacao, meses;
char doc, febre, viagem, covid, primeira_doacao, gravida, sexo;

printf("\t\t\t\t\t\t\t\t\t\t\t\t\tHEMOCENTRO DE S�O PAULO\n");

printf("\n\n");

printf("\tPara ser doador de sangue, � necess�rio considerar os poss�veis riscos para o doador e para os receptores. Entre os requisitos para doar durante a pandemia do COVID-19 destacamos:\n");
printf("\n");
printf("-Massa corporal m�nima: 50 KG\n");
printf("-Idade entre 16 a 69 anos\n");
printf("-Se menor de 18, apresentar consetimento formal dos respons�veis\n");
printf("-Se maior de 60, j� deve ter sido doador antes\n");
printf("-N�o ter tido febre ou sintomas gripais nos �ltimos 14 dias\n");
printf("-N�o ter viajado ao exterior nos �ltimos 30 dias\n");
printf("-N�o ter tido contato com caso suspeito ou confirmado de COVID-19 nos �ltimos 30 dias\n");
printf("-Para o sexo biol�gico masculino:\n");
    printf("\tM�ximo de doa��es anuais:4\n");
    printf("\tIntervalo  m�nimo entre as doa��es: 2 meses\n");
printf("-Para o sexo biol�gico feminino:\n");
    printf("\tM�ximo de doa��es anuais: 3\n");
    printf("\tIntervalo m�nimo entre as doa��es: 3 meses\n");
    printf("\tN�o estar gr�vida ou amamentando beb� menor de 12 meses\n");

printf("\n");

printf("Lido os termos, caso queira prosseguir com a doa��o de sangue, responda as perguntas abaixo:\n");

printf("\n");

printf("Digite seu sexo biol�gico (F para feminino ou M para masculino):");
scanf("%c", &sexo);

switch (sexo)
{
    case 'f':
        printf("Digite sua massa corporal:");
            scanf("%f", &massa);

        printf("Digite sua idade:");
            scanf("%d", &idade);

        printf("Voc� teve febre ou sintomas gripais no �ltimos 14 dias (Digite S para sim ou N para n�o)?");
            fflush(stdin);
            scanf("%c", &febre);

        printf("Voc� viajou ao exterior nos �ltimos 30 dias (Digite S para sim ou N para n�o)?");
            fflush(stdin);
            scanf("%c", &viagem);

        printf("Voc� teve contato com caso suspeito ou confirmado de COVID-19 nos �ltimos 30 dias (Digite S para sim ou N para n�o)?");
            fflush(stdin);
            scanf("%c", &covid);

        printf("Essa ser� sua primeira doa��o (Digite S para sim ou N para n�o)?");
            fflush(stdin);
            scanf("%c", &primeira_doacao);

        printf("Caso n�o seja sua primeira doa��o, digite o n�mero de doa��es realizadas nos �ltimos 12 meses (Caso for sua primeira vez, digite 0):");
            fflush(stdin);
            scanf("%d", &doacao);

        printf("Caso n�o seja sua primeira doa��o, digite a quantos meses voc� realizou sua �ltima doa��o (Caso for sua primeira vez, digite 0):");
            scanf("%d", &meses);

        printf("Voc� est� gr�vida ou amamentando (Digite S para sim ou N para n�o)?");
            fflush(stdin);
            scanf("%c", &gravida);

printf("\n");

printf("Segue abaixo, resultado do question�rio:\n");

printf("\n");

massa >= 50? printf("") : printf("Impedimento: abaixo da massa corporal\n");
idade >= 16? printf("") : printf("Impedimento: menor de 16 anos\n");
idade > 69? printf("Impedimento: maior que 69 anos\n") : printf("");
febre == 'n'? printf("") : printf("Impedimento: febre ou sintomas gripais\n");
viagem == 'n'? printf("") : printf("Impedimento: viagem recente ao exterior\n");
covid == 'n'? printf("") : printf("Impedimento: contato com caso de COVID-19\n");
doacao <= 3? printf("") : printf("Impedimento: numero m�ximo de doa��es anuais foi atingido\n");
meses >= 3? printf("") : printf("Impedimento: intervalo m�nimo de doa��es n�o foi respeitado\n");
gravida =='n'? printf("") : printf("Impedimento: gr�vida ou amamentando\n");

massa >= 50 && idade >= 16 && febre == 'n' && viagem == 'n' && covid == 'n' && doacao <= 3 && meses >= 3 && gravida == 'n' ? printf("APTO: Agende um hor�rio para triagem completa") : printf("");

    break;


    case 'm':
        printf("Digite sua massa corporal:");
        scanf("%f", &massa);

        printf("Digite sua idade:");
            scanf("%d", &idade);

        printf("Voc� teve febre ou sintomas gripais no �ltimos 14 dias (Digite S para sim ou N para n�o)?");
            fflush(stdin);
            scanf("%c", &febre);

        printf("Voc� viajou ao exterior nos �ltimos 30 dias (Digite S para sim ou N para n�o)?");
            fflush(stdin);
            scanf("%c", &viagem);

        printf("Voc� teve contato com caso suspeito ou confirmado de COVID-19 nos �ltimos 30 dias (Digite S para sim ou N para n�o)?");
            fflush(stdin);
            scanf("%c", &covid);

        printf("Essa ser� sua primeira doa��o (Digite S para sim ou N para n�o)?");
            fflush(stdin);
            scanf("%c", &primeira_doacao);

        printf("Caso n�o seja sua primeira doa��o, digite o n�mero de doa��es realizadas nos �ltimos 12 meses (Caso for sua primeira vez, digite 0):");
            fflush(stdin);
            scanf("%d", &doacao);

        printf("Caso n�o seja sua primeira doa��o, digite a quantos meses voc� realizou sua �ltima doa��o (Caso for sua primeira vez, digite 0):");
            scanf("%d", &meses);

printf("\n");

printf("Segue abaixo, resultado do question�rio:\n");

printf("\n");

massa >= 50? printf("") : printf("Impedimento: abaixo da massa corporal\n");
idade >= 16? printf("") : printf("Impedimento: menor de 16 anos\n");
idade > 69? printf("Impedimento: maior que 69 anos\n") : printf("");
febre == 'n'? printf("") : printf("Impedimento: febre ou sintomas gripais\n");
viagem == 'n'? printf("") : printf("Impedimento: viagem recente ao exterior\n");
covid == 'n'? printf("") : printf("Impedimento: contato com caso de COVID-19\n");
doacao <= 4 || doacao == 'n'? printf("") : printf("Impedimento: numero m�ximo de doa��es anuais foi atingido\n");
meses >= 2? printf("") : printf("Impedimento: intervalo m�nimo de doa��es n�o foi respeitado\n");

massa >= 50 && idade >= 16 && febre == 'n' && viagem == 'n' && covid == 'n' && doacao <= 4 && meses >= 2 ? printf("APTO: Agende um hor�rio para triagem completa") : printf("");

    break;
}









return 0;
}
