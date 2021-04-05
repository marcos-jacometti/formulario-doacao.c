#include <stdio.h>
#include <string.h>
#include <locale.h>

int main () {

//Desafio criação de formulário para doação de sangue

setlocale(LC_ALL, "Portuguese");

float massa;
int idade, doacao, meses;
char doc, febre, viagem, covid, primeira_doacao, gravida, sexo;

printf("\t\t\t\t\t\t\t\t\t\t\t\t\tHEMOCENTRO DE SÃO PAULO\n");

printf("\n\n");

printf("\tPara ser doador de sangue, é necessário considerar os possíveis riscos para o doador e para os receptores. Entre os requisitos para doar durante a pandemia do COVID-19 destacamos:\n");
printf("\n");
printf("-Massa corporal mínima: 50 KG\n");
printf("-Idade entre 16 a 69 anos\n");
printf("-Se menor de 18, apresentar consetimento formal dos responsáveis\n");
printf("-Se maior de 60, já deve ter sido doador antes\n");
printf("-Não ter tido febre ou sintomas gripais nos últimos 14 dias\n");
printf("-Não ter viajado ao exterior nos últimos 30 dias\n");
printf("-Não ter tido contato com caso suspeito ou confirmado de COVID-19 nos últimos 30 dias\n");
printf("-Para o sexo biológico masculino:\n");
    printf("\tMáximo de doações anuais:4\n");
    printf("\tIntervalo  mínimo entre as doações: 2 meses\n");
printf("-Para o sexo biológico feminino:\n");
    printf("\tMáximo de doações anuais: 3\n");
    printf("\tIntervalo mínimo entre as doações: 3 meses\n");
    printf("\tNão estar grávida ou amamentando bebê menor de 12 meses\n");

printf("\n");

printf("Lido os termos, caso queira prosseguir com a doação de sangue, responda as perguntas abaixo:\n");

printf("\n");

printf("Digite seu sexo biológico (F para feminino ou M para masculino):");
scanf("%c", &sexo);

switch (sexo)
{
    case 'f':
        printf("Digite sua massa corporal:");
            scanf("%f", &massa);

        printf("Digite sua idade:");
            scanf("%d", &idade);

        printf("Você teve febre ou sintomas gripais no últimos 14 dias (Digite S para sim ou N para não)?");
            fflush(stdin);
            scanf("%c", &febre);

        printf("Você viajou ao exterior nos últimos 30 dias (Digite S para sim ou N para não)?");
            fflush(stdin);
            scanf("%c", &viagem);

        printf("Você teve contato com caso suspeito ou confirmado de COVID-19 nos últimos 30 dias (Digite S para sim ou N para não)?");
            fflush(stdin);
            scanf("%c", &covid);

        printf("Essa será sua primeira doação (Digite S para sim ou N para não)?");
            fflush(stdin);
            scanf("%c", &primeira_doacao);

        printf("Caso não seja sua primeira doação, digite o número de doações realizadas nos últimos 12 meses (Caso for sua primeira vez, digite 0):");
            fflush(stdin);
            scanf("%d", &doacao);

        printf("Caso não seja sua primeira doação, digite a quantos meses você realizou sua última doação (Caso for sua primeira vez, digite 0):");
            scanf("%d", &meses);

        printf("Você está grávida ou amamentando (Digite S para sim ou N para não)?");
            fflush(stdin);
            scanf("%c", &gravida);

printf("\n");

printf("Segue abaixo, resultado do questionário:\n");

printf("\n");

massa >= 50? printf("") : printf("Impedimento: abaixo da massa corporal\n");
idade >= 16? printf("") : printf("Impedimento: menor de 16 anos\n");
idade > 69? printf("Impedimento: maior que 69 anos\n") : printf("");
febre == 'n'? printf("") : printf("Impedimento: febre ou sintomas gripais\n");
viagem == 'n'? printf("") : printf("Impedimento: viagem recente ao exterior\n");
covid == 'n'? printf("") : printf("Impedimento: contato com caso de COVID-19\n");
doacao <= 3? printf("") : printf("Impedimento: numero máximo de doações anuais foi atingido\n");
meses >= 3? printf("") : printf("Impedimento: intervalo mínimo de doações não foi respeitado\n");
gravida =='n'? printf("") : printf("Impedimento: grávida ou amamentando\n");

massa >= 50 && idade >= 16 && febre == 'n' && viagem == 'n' && covid == 'n' && doacao <= 3 && meses >= 3 && gravida == 'n' ? printf("APTO: Agende um horário para triagem completa") : printf("");

    break;


    case 'm':
        printf("Digite sua massa corporal:");
        scanf("%f", &massa);

        printf("Digite sua idade:");
            scanf("%d", &idade);

        printf("Você teve febre ou sintomas gripais no últimos 14 dias (Digite S para sim ou N para não)?");
            fflush(stdin);
            scanf("%c", &febre);

        printf("Você viajou ao exterior nos últimos 30 dias (Digite S para sim ou N para não)?");
            fflush(stdin);
            scanf("%c", &viagem);

        printf("Você teve contato com caso suspeito ou confirmado de COVID-19 nos últimos 30 dias (Digite S para sim ou N para não)?");
            fflush(stdin);
            scanf("%c", &covid);

        printf("Essa será sua primeira doação (Digite S para sim ou N para não)?");
            fflush(stdin);
            scanf("%c", &primeira_doacao);

        printf("Caso não seja sua primeira doação, digite o número de doações realizadas nos últimos 12 meses (Caso for sua primeira vez, digite 0):");
            fflush(stdin);
            scanf("%d", &doacao);

        printf("Caso não seja sua primeira doação, digite a quantos meses você realizou sua última doação (Caso for sua primeira vez, digite 0):");
            scanf("%d", &meses);

printf("\n");

printf("Segue abaixo, resultado do questionário:\n");

printf("\n");

massa >= 50? printf("") : printf("Impedimento: abaixo da massa corporal\n");
idade >= 16? printf("") : printf("Impedimento: menor de 16 anos\n");
idade > 69? printf("Impedimento: maior que 69 anos\n") : printf("");
febre == 'n'? printf("") : printf("Impedimento: febre ou sintomas gripais\n");
viagem == 'n'? printf("") : printf("Impedimento: viagem recente ao exterior\n");
covid == 'n'? printf("") : printf("Impedimento: contato com caso de COVID-19\n");
doacao <= 4 || doacao == 'n'? printf("") : printf("Impedimento: numero máximo de doações anuais foi atingido\n");
meses >= 2? printf("") : printf("Impedimento: intervalo mínimo de doações não foi respeitado\n");

massa >= 50 && idade >= 16 && febre == 'n' && viagem == 'n' && covid == 'n' && doacao <= 4 && meses >= 2 ? printf("APTO: Agende um horário para triagem completa") : printf("");

    break;
}









return 0;
}
