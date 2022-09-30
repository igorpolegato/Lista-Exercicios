#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct residentsData {
    float payAv;
    float childrenAv;
    float bt350;
};

residentsData dataColector();


int main(int argc, char *argv[]) {
    residentsData rd;

    rd = dataColector();

    printf("\n------------------ RESULTADOS ------------------\n");
    printf("Salario medio: R$%.2f\nMedia de filhos: %.2f\nSalarios ate R$350.00: %.2f%", rd.payAv, rd.childrenAv, rd.bt350);



    return 0;
}

residentsData dataColector() {
    residentsData rd;
    char op;
    float pay, pm=0, cm=0, bt=0, ch=0;
    int hb = 0;

    do {
        printf("-----------------------\n");
        printf("Qual o salario do habitante?: ");
        scanf("%f", &pay);
        printf("Quantos filhos o habitante possui?: ");
        scanf("%f", &ch);

        pm += pay;
        cm += ch;
        hb += 1;

        if (pay <= 350) {
            bt += 1;            
        }

        printf("\nDeseja adicionar novo habitante?[s/n]: ");
        scanf(" %c", &op);
        op = toupper(op);

    } while (op == 'S');


    pm /= hb;
    cm /= hb;
    bt = (bt / hb) * 100;

    rd.payAv = pm;
    rd.childrenAv = cm;
    rd.bt350 = bt;

    return rd;
}

