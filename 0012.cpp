// Desenvolva um programa que aceita e valida o CPF- Cadastro de Pessoa Física.

#include "stdio.h"
#include "stdlib.h"

void main() {
    int sm, i, r, num;
    char dig10, dig11, cpf[11];
    printf("Informe o valor do CPF:\n");
    gets(cpf);

// calcula o 1o. digito verificador do CPF
    sm = 0;
    for (i=0; i<9; i++) {
        num = cpf[i] - 48;	// transforma o caracter '0' no inteiro 0
        // (48 eh a posição de '0' na tabela ASCII)
        sm = sm + (num * (10 - i));
    }
    r = 11 - (sm % 11);
    if ((r == 10) || (r == 11))
        dig10 = '0';
    else
        dig10 = r + 48;

// calcula o 2o. digito verificador do CPF
    sm = 0;
    for (i=0; i<10; i++) {
        num = cpf[i] - 48;
        sm = sm + (num * (11 - i));
    }
    r = 11 - (sm % 11);
    if ((r == 10) || (r == 11))
        dig11 = '0';
    else
        dig11 = r + 48;

// compara os dígitos calculados com os dígitos informados
    if ((dig10 == cpf[9]) && (dig11 == cpf[10]))
        printf("\nO CPF informado eh válido.");
    else
        printf("\nO CPF informado eh inválido.");
}