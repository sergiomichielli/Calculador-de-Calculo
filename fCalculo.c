#include <stdio.h>
#include <stdlib.h>
#include <conio.h>>
#include <locale.h>
#include <math.h>
#define PI 3.1416

int menu1(int num);
int menu2(int num);
double valorX(double x);
double valorK(double k);
double valorA(double a);
double valorB(double b);
double valorAgraus(double a);
double valorBgraus(double b);
double convRadiano(double angulo);
int fim(int end);
// criar funcao para resolver potencia de expoente negativo
// tentar simplificar os scanf em chamada
// funcao pedir x e k
int main()
{

    int menuUm;
    int menuDois;
    double a, b, k, k0, x, result, pot, angulo, sen, coss, tg;
    double e = 2.7183;
    int end = 1;

    while(end == 1) {
    menuUm = menu1(menuUm); // 1 a 11

    if (menuUm == 11) {
        switch(menuUm) {
            case 11:
                end = 0;
                 break;
        }
        return 0;
    }


    if (menuUm >= 1 && menuUm < 11 ) { // 1 a 10
        menuDois = menu2(menuDois); // 1 a 4

        switch(menuUm){
    case 1:
        switch(menuDois){
            // 1.1
    case 1:
        system("cls");
        printf("\n\n\t\t Funcao Constante de k\n\n");
        k = valorK(k);
        x = valorX(x);
        printf("\n\t f(x) = k");
        printf("\n\t onde x = %.2lf e k = %.2lf", x, k);
        printf("\n\t f(%.2lf) = %.4lf\n", x, k);
        end = fim(end);
        break;
        
            // 1.2
    case 2:
        system("cls");
        printf("\n\n\t\t Derivada da Funcao Constante de k\n\n");
        k = valorK(k);
        x = valorX(x);
        printf("\n\t f'(x) = |k|'");
        printf("\n\t onde a constante k = %.2lf", k);
        printf("\n\t f'(%.2lf) = |%.2lf|'", x, k);
        printf("\n\t O resultado da derivada de um constante eh sempre 0\n");
        end = fim(end);
        break;
            // 1.3
    case 3:
        system("cls");
        printf("\n\n\t\t Integral Definida da Constante k\n\n");
        a = valorA(a);
        b = valorB(b);
        k = valorK(k);
        printf("\n\t Int = f(k) dx");
        printf("\n\t onde a Integral Definida da funcao eh f(x) = k.x dx + C");
        printf("\n\t num intervalo de a ah b, sendo a = %.2lf e b = %.2lf", a, b);
        printf("\n\t Int = f(b) - f(a)");
        printf("\n\t Int = %.2lfx - %.2lfx", b, a);
        a *= k;
        b *= k;
        result = b - a;

        if(result == 0){
            printf("\n\t Int = 0\n");
        } else {
            printf("\n\t Int = %.4lf\n", result);
        }
        end = fim(end);
        break;
    case 4:
        break;
    default:
        system("cls");
        printf("\n\n\t Opcao Invalida! Digite um numero entre 1 e 4\n");
        system("pause");
        break;
        }
        break;
    case 2:
        switch(menuDois){
            // 2.1
    case 1:
        system("cls");
        printf("\n\n\t\t Funcao Exponencial Natural de x\n\n");
        // exponencial natural de x
        x = valorX(x);
        k = valorK(k);
        if(k == 0){
            printf("\n\t f(x) = %.2lf^(%.2lf)", x, k);
            printf("\n\t f(%.4lf) = 1\n", x);
        }
        if (k < 0){
        pot = 1/(pow(x, (-k)));
        printf("\n\t f(x) = x^(k)");
        printf("\n\t onde a base x = %.2lf e exponente k = %.2lf", x, k);
        printf("\n\t f(%.2lf) = %.2lf^(%.2lf)", x, x, k);
        printf("\n\t f(%.2lf) = %.4lf\n", x, pot);
        end = fim(end);
        break;
        }
        printf("\n\t f(x) = x^(k)");
        printf("\n\t onde a base x = %.2lf e exponente k = %.2lf", x, k);
        printf("\n\t f(%.2lf) =%.2lf^(%.2lf)", x, x, k);
        pot = pow(x, k);
        printf("\n\t f(%.2lf) = %.4lf\n", x, pot);
        end = fim(end);
        break;
            // 2.2
    case 2:
        system("cls");
        printf("\n\n\t\t Deriva da Funcao Exponencial Natural de x\n\n");
        x = valorX(x);
        k = valorK(k);
        if(k < 0){
            k0 = k - 1;
            pot = pow(x, -k0);
            result = (k*1)/pot;
            printf("\n\t f'(x) = x^(k)");
            printf("\n\t f'(x) = |k.x^(k-1)|'");
            printf("\n\t onde a base x = %.2lf e exponente k = %.2lf", x, k);
            printf("\n\t f'(%.2lf) = %.2lf.%.2lf^(%.2lf-1)", x, k, x, k);
            printf("\n\t f'(%.2lf) = %.2lf.%.2lf^(%.2lf)", x, k, x, k0);
            printf("\n\t f'(%.2lf) = %.4lf\n", x, result);
            end = fim(end);
            break;
        }
        k0 = k - 1;
        result = k*(pow(x, k0));
        printf("\n\t f'(x) = x^(k)");
        printf("\n\t f'(x) = |k.x^(k-1)|'");
        printf("\n\t onde a base x = %.2lf e exponente k = %.2lf", x, k);
        printf("\n\t f'(%.2lf) = %.2lf.%.2lf^(%.2lf-1)", x, k, x, k);
        printf("\n\t f'(%.2lf) = %.2lf.%.2lf^(%.2lf)", x, k, x, k0);    
        printf("\n\t f'(%.2lf) = %.4lf\n", x, result);
        end = fim(end);
        break;
            // 2.3
    case 3:
        system("cls");
        printf("\n\n\t\t Integral Definida da Funcao Exponencial Natural de x\n\n");
        a = valorA(a);
        b = valorB(b);
        k = valorK(k);
        while(k == -1){
            system("cls");
            printf("\n\t Valor Invalido! Digite valores diferentes de -1");
            k = valorK(k);
        }
        printf("\n\t Int = f(x)= x^k dx");
        printf("\n\t onde a Integral Definida da funcao f(x) = x^k = x^(k+1)/k + 1 + C");
        printf("\n\t num intervalo de a ah b, sendo a = %.2lf, b = %.2lf e k = %.2lf", a, b, k);
        a = (pow(a, (k+1)))/(k + 1);
        b = (pow(b, (k+1)))/(k + 1);
        result = b - a;
        printf("\n\t Int = f(b) - f(a)");
        printf("\n\t Int = %.2lfx - %.2lfx", b, a);
        printf("\n\t Int = %.4lf\n", result);
        end = fim(end);
        break;
    case 4:
        break;
    default:
        system("cls");
        printf("\n\n\t Opcao Invalida! Digite um numero entre 1 e 4\n");
        system("pause");
        break;
        }
        break;
    case 3:
        switch (menuDois){
            // 3.1.
    case 1:
        system("cls");

        printf("\n\n\t\t Funcao Exponencial Natural de k\n\n");
        k = valorK(k);
        x = valorX(x);
        if(x == 0){
            printf("\n\t f(%.2lf) = %.2lf^(%.2lf)", k, k, x);
            printf("\n\t f(%.2lf) = 1\n", x);
            end = fim(end);
            break;

        }
         if(x < 0){
            pot = pow(k, -x);
            result = 1/pot;
            printf("\n\t f(x) = k^(x)");
            printf("\n\t onde a base k = %.2lf e exponente x = %.2lf", k, x);
            printf("\n\t f(%.2lf) = %.2lf^(%.2lf)", x, k, x);
            printf("\n\t f(%.2lf) = 1/%.2lf^(%.2lf)", x, k, -x);
            printf("\n\t f(%.2lf) = %.4lf\n", x, result);
            end = fim(end);
            break;
        }
        result = pow(k, x);
            printf("\n\t f(x) = k^(x)");
            printf("\n\t onde a base k = %.2lf e exponente x = %.2lf", k, x);
            printf("\n\t f(%.2lf) = %.2lf^(%.2lf)", x, k, x);
            printf("\n\t f(%.2lf) = %.4lf\n", x, result);
        end = fim(end);
        break;
            // 3.2
    case 2:
        system("cls");
        printf("\n\n\t\t Deriva da Funcao Exponencial Natural de k\n\n");
        k = valorK(k);
        while(k <= 0){
            printf("\n\t Dados invalidos! Insira valores positivos apenas para K!\n");
            k = valorK(k);
        x = valorX(x);
        }
        pot = pow(k, x);
        // k^x.ln(k)
        result = pot*log(k);
        printf("\n\t f'(x) = k^(x)");
        printf("\n\t f'(x) = |k^x.ln(k)|'");
        printf("\n\t onde a base k = %.2lf e exponente x = %.2lf", k, x);
        printf("\n\t f'(%.2lf) = %.2lf^(%.2lf).ln(%.2lf)", x, k, x, k);
        printf("\n\t f'(%.2lf) = %.4lf\n", x, result);
        end = fim(end);
        break;
            // 3.3
    case 3:
        system("cls");
        printf("\n\n\t\t Integral Definida da Funcao Exponencial Natural de k\n\n");
        k = valorK(k);
        while(k < 2){
            system("cls");
            printf("\n\t Valor Invalido! Digite valores maiores que 0 e diferente de 1");
            k = valorK(k);
        }
        a = valorA(a);
        b = valorB(b);
        printf("\n\t Int = f(x) = k^(x) dx");
        printf("\n\t onde a Integral Definida da funcao f(x) = ((k^x) / (ln(k))) + C");
        printf("\n\t num intervalo de a ah b, sendo a = %.2lf, b = %.2lf e k = %.2lf", a, b, k);
        pot = pow(k, a);
        // k^x / ln(k)
        a = pot / (log(k));
        pot = pow(k, b);
        // k^x / ln(k)
        b = pot / (log(k));
        result = b - a;
        printf("\n\t Int = f(b) - f(a)");
        printf("\n\t Int = %.2lf - %.2lf", b, a);
        printf("\n\t Int = %.4lf\n", result);
        end = fim(end);
        break;
    case 4:
        break;
    default:
        system("cls");
        printf("\n\n\t Opcao Invalida! Digite um numero entre 1 e 4\n");
        system("pause");
        break;
        }
        break;
    case 4:
        switch (menuDois){
    case 1:
            // 4.1
        system("cls");
        printf("\n\n\t\t Funcao Exponencial de e (neperiano)\n\n");
        printf("\n\t e = %.4lf", e);
        x = valorX(x);
        if(x == 0){
            printf("\n\t f(x) = e^x");
            printf("\n\t onde a base e = %.4lf e x = %.2lf", e, x);
            printf("\n\t f(%.2lf) = %.4lf^%.2lf", x, e, x);
            printf("\n\t f(%.2lf) = 1\n", x);
            end = fim(end);
            break;
        }
        if(x < 0){
            pot = pow(e, -x);
            result = 1/pot;
            printf("\n\t f(x) = e^x");
            printf("\n\t onde a base e = %.4lf e x = %.2lf", e, x);
            printf("\n\t f(%.2lf) = %.4lf^(%.2lf)", x, e, x);
            printf("\n\t f(%.2lf) = 1/%.4lf^(%.2lf)", x, e, -x);
            printf("\n\t f(%.2lf) = %.4lf\n", x, result);
            end = fim(end);
            break;
        }
        result = pow(e, x);
        printf("\n\t f(x) = e^x");
        printf("\n\t onde a base e = %.4lf e x = %.2lf", e, x);
        printf("\n\t f(%.2lf) = %.4lf^(%.2lf)", x, e, x);
        printf("\n\t f(%.2lf) = %.4lf\n", x, result);
        end = fim(end);
        break;
    case 2:
            // 4.2.
        system("cls");
        printf("\n\n\t\t Deriva da Funcao Exponencial de e (neperiano)\n\n");
        printf("\n\t e = %.4lf", e);
        x = valorX(x);
        if(x == 0){
            printf("\n\t f'(x) = e^x");
            printf("\n\t f'(x) = |e^x|' = e^x");
            printf("\n\t onde a base e = %.4lf e x = %.2lf", e, x);
            printf("\n\t f'(%.2lf) = %.4lf^%.2lf", x, e, x);
            printf("\n\t f'(%.2lf) = 1\n", x);
            end = fim(end);
            break;
        }
        if(x < 0){
            pot = pow(e, -x);
            result = 1/pot;
            printf("\n\t f'(x) = e^x");
            printf("\n\t f'(x) = |e^x|' = e^x");
            printf("\n\t onde a base e = %.4lf e x = %.2lf", e, x);
            printf("\n\t f'(%.2lf) = %.4lf^%.2lf", x, e, x);
            printf("\n\t f'(%.2lf) = 1/%.4lf^(%.2lf)", x, e, -x);
            printf("\n\t f'(%.2lf) = %.4lf\n", x, result);
    
            break;
        }
        result = pow(e, x);
        printf("\n\t f'(x) = e^x");
        printf("\n\t f'(x) = |e^x|' = e^x");
        printf("\n\t onde a base e = %.4lf e x = %.2lf", e, x);
        printf("\n\t f'(%.2lf) = %.4lf^%.2lf", x, e, x);
        printf("\n\t f'(%.2lf) = %.4lf\n", x, result);
        end = fim(end);
        break;
        // 4.3
    case 3:
        system("cls");
        printf("\n\n\t\t Integral Definida da Funcao Exponencial de e (neperiano)\n\n");
        printf("\n\t e = %.4lf", e);
        a = valorA(a);
        b = valorB(b);
        printf("\n\t Int = f(x) = e^x dx");
        printf("\n\t a Integral Definida da funcao f(x) = e^x + C");
        printf("\n\t num intervalo de a ah b, onde a = %.2lf e b = %.2lf", a, b);
        printf("\n\t Int = f(b) - f(a)");
        if(a == 0){
            a = 1;
        } else if(a < 0){
            pot = pow(e, -a);
            a = 1/pot;
        } else {
            a = pow(e, a);
        }
        if (b == 0){
            b = 1;
        } else if(b < 0){
            pot = pow(e, -b);
            b = 1/pot;
        } else {
            b = pow(e, b);
        }
        result = b - a;
        printf("\n\t Int = %.2lf - %2.lf", b, a);
        printf("\n\t Int = %.4lf\n", result);
        end = fim(end);
        break;
    case 4:
        break;
    default:
        system("cls");
        printf("\n\n\t Opcao Invalida! Digite um numero entre 1 e 4\n");
        system("pause");
        break;
        }
        break;
    case 5:
        switch (menuDois){
    case 1:
            // 5.1
            system("cls");
            printf("\n\n\t\t Funcao Logaritmica da base k\n\n");
            k = valorK(k);
            x = valorX(x);
        while(k <= 1 || x <= 0){
                printf("\n\t Valor invalido! Digite valores positivos, sendo a base k maior que 1");
               k = valorK(k);
               x = valorX(x);
            }
        result = (log(x))/(log(k));
        printf("\n\t f(x) = logk(x), onde a base k = %.2lf e x = %.2lf.", k, x);
        printf("\n\t Entao f(x) = log%.2lf(%.2lf)", k, x);
        printf("\n\t f(%.2lf) = %.4lf\n", x, result);
        end = fim(end);
        break;
    case 2:
            // 5.2
            system("cls");
            printf("\n\n\t\t Derivada da Funcao Logaritmica da base k\n\n");
            b = valorB(b);
            x = valorX(x);
        while(b <= 0 || x <= 0){
                printf("\n\t Valor invalido! Digite um valor positivo, maiores que 0");
               b = valorB(b);
               x = valorX(x);
            }
            result = 1 /(x*(log(b)));
            printf("\n\t f'(x) = |logk(x)|' = 1 / x.ln(k), onde a base k = %.2lf e x = %.2lf.", k, x);
            printf("\n\t Entao f'(x) = |log%.2lf(%.2lf)|'", k, x);
            printf("\n\t f'(%.2lf) = 1 / %.2lf.ln(%.2lf)", x, x, b);
            printf("\n\t f'(x%.2lf) = %.4lf\n", x, result);
            end = fim(end);
            break;
            // 5.3
    case 3:
            system("cls");
            printf("\n\n\t\t Integral Definida da Funcao Logaritmica da base k\n\n");
            k = valorK(k);
            a = valorA(a);
            b = valorB(b);
            printf("\n\t Int = f(x) = logk(x) dx");
            printf("\n\t Int = logk(x) dx = x*ln(x)-x/ln(k) + C");
            printf("\n\t Int = f(x) = logk(x) dx. Num intervalo de a = %.2lf, b = %.2lf e k = %.2lf", a, b, k);
            printf("\n\t Int = f(b) - f(a)");
            a = ((a*(log(a)))- a)/(log(k));
            b = ((b*(log(b)))- b)/(log(k));
            result = b - a;
            printf("\n\t Int = %.4lf - %.4lf", b, a);
            printf("\n\t Int = %.4lf\n", result);
        end = fim(end);
        break;
    case 4:
        break;
    default:
        system("cls");
        printf("\n\n\t Opcao Invalida! Digite um numero entre 1 e 4\n");
        system("pause");
        break;
        }
        break;
    case 6:
        switch (menuDois){
            // 6.1
    case 1:
        system("cls");
        printf("\n\n\t\t Funcao Logaritmica de x\n\n");
        x = valorX(x);
        while(x <= 1){
            printf("\n\t Valor invalido! Digite somente valores positivos maiores que 1");
            x = valorX(x);
        }
        result = log(x);
        printf("\n\t f(x) = ln(x), onde x = %.2lf.", x );
        printf("\n\t Entao f(%.2lf) = ln(%.2lf)", x, x);
        printf("\n\t f(%.2lf) = %.4lf\n", x, result);
        end = fim(end);
        break;
            // 6.2
    case 2:
        system("cls");
        printf("\n\n\t\t Derivada da Funcao Logaritmica de x\n\n");
        x = valorX(x);
        while(x <= 0){
            printf("\n\t Valor invalido! Digite somente valores positivos maiores que 0");
            x = valorX(x);
        }
        result = (1/x);
        printf("\n\t f'(x) = |ln(x)|' = 1 / x, onde x = %.4lf.", x);
        printf("\n\t Entao f'(%.2lf) = 1/%.4lf", x, x);
        printf("\n\t f'(%.2lf) = %.4lf\n", x, result);
        end = fim(end);
        break;
        // 6.3
    case 3:
            system("cls");
            printf("\n\n\t\t Integral Definida da Funcao Logaritmica Natual de x\n\n");
            // Logaritmo de x na base e
            a = valorA(a);
            b = valorB(b);
            printf("\n\t f(x) = ln(x) dx");
            printf("\n\t Int = Int ln(x) dx = x*ln(x)-x + C");
            printf("\n\t Int = Int ln(x) dx. Num intervalo de a = %.2lf ah b = %.2lf", a, b);
            printf("\n\t Int = F(b) - F(a)");
            a = ((a*(log(a)))- a);
            b = ((b*(log(b)))- b);
            result = b - a;
            printf("\n\t Int = %.4lf - %.4lf", b, a);
            printf("\n\t Int = %.4lf\n", result);
        end = fim(end);
        break;
    case 4:
        break;
    default:
        system("cls");
        printf("\n\n\t Opcao Invalida! Digite um numero entre 1 e 4\n");
        system("pause");
        break;
        }
        break;
    case 7:
        switch (menuDois){
            // 7.1.
    case 1:
        system("cls");
        printf("\n\n\t\t Funcao de 1 / x\n\n");
        x = valorX(x);
        while(x == 0){
            printf("\n\t Valor Invalido! Nao ha divisao por 0");
            x = valorX(x);
        }
        result = 1/x;
        printf("\n\t f(x) = 1 / x, onde x = %.4lf.", x);
        printf("\n\t Entao f(%.2lf) = 1 / %.4lf", x, x);
        printf("\n\t f(%.2lf) = %.4lf\n", x, result);
        end = fim(end);
        break;
        // 7.2.
    case 2:
        system("cls");
        printf("\\nn\t\t Derivada da Funcao de 1 / x\n\n");
        x = valorX(x);
        while(x == 0){
            printf("\n\t Valor Invalido! Nao ha divisao por 0");
            x = valorX(x);
        }
        pot = pow(x, 2);
        result = -1/pot;
        printf("\n\t f'(x) = |1 / x|' = |x^(-1)|'.");
        printf("\n\t Entao f'(x) = -1.x^(-1-1)");
        printf("\n\t f'(x) = |-1.x^(-2)|'");
        printf("\n\t f'(x) = |- 1 / x^2|', onde x = %.4lf.", x);
        printf("\n\t Entao f'(%.2lf) = |- 1 / %.4lf^2|'", x, x);
        printf("\n\t f'(%.2lf) = %.4lf\n", x, result);
        end = fim(end);
        break;
        // 7.3
    case 3:
        system("cls");
        printf("\n\n\t\t Integral Definida da Funcao de 1 / x\n\n");
        a = valorA(a);
        b = valorB(b);
        while(a == 0){
            printf("\n\t Valor Invalido! Nao ha divisao por 0");
            a = valorA(a);
        }
        while(a == 0){
            printf("\n\t Valor Invalido! Nao ha divisao por 0");
            b = valorA(b);
        }
        a = log(a);
        b = log(b);
        result = b - a;
        printf("\n\t Int = f(x) = 1 / x dx = ln(x) + C.");
        printf("\n\t Int = f(b) - (a)");
        printf("\n\t Int = %.4lf - %.4lf", b, a);
        printf("\n\t Int = %.4lf\n", result);
        end = fim(end);
        break;
    case 4:
        break;
    default:
        system("cls");
        printf("\n\n\t Opcao Invalida! Digite um numero entre 1 e 4\n");
        system("pause");
        break;
        }
        break;
    case 8:
        switch (menuDois){
    case 1:
        system("cls");
        printf("\n\n\t\t Funcao seno de x \n\n");
        printf("\n\t Que valor em graus deseja aplicar para o angulo de x? ");
        scanf("%lf", &angulo);
        sen = sin(convRadiano(angulo));
        printf("\n\t f(x) = sen(x)");
        printf("\n\t f(%.2lf) = %.4lf\n", angulo, sen);
        // 8.2
    case 2:
        system("cls");
        printf("\n\n\t\t Derivada da Funcao seno de x \n\n");
        printf("\n\t Que valor em graus deseja aplicar para o angulo de x? ");
        scanf("%lf", &angulo);
        coss = cos(convRadiano(angulo));
        printf("\n\t f'(x) = |sen(x)|' = cos(x)");
        printf("\n\t f'(%.2lf) = %.4lf\n", angulo, coss);
        end = fim(end);
        break;
        // 8.3
    case 3:
        system("cls");
        printf("\n\n\t\t Integral Definida da Funcao seno de x \n\n");
        a = valorAgraus(a);
        b = valorBgraus(b);
        a = -cos(convRadiano(a));
        b = -cos(convRadiano(b));
        result = b - a;
        printf("\n\t Int = f(x) = sen(x) dx = -cos(x) + C");
        printf("\n\t Int = f(b) - f(a)");
        printf("\n\t Int = (%.4lf) - (%.4lf)", b, a);
        printf("\n\t Int = %.4lf\n", result);
        end = fim(end);
        break;
    case 4:
        break;
    default:
        system("cls");
        printf("\n\n\t Opcao Invalida! Digite um numero entre 1 e 4\n");
        system("pause");
        break;
        }
        break;
    case 9:
        switch(menuDois){
    case 1:
        system("cls");
        printf("\n\n\t\t Funcao cosseno de x \n\n");
        printf("\n\t Que valor em graus deseja aplicar para o angulo de x? ");
        scanf("%lf", &angulo);
        coss = cos(convRadiano(angulo));
        printf("\n\t f(x) = cos(x)");
        printf("\n\t f(%.2lf) = %.4lf\n", angulo, coss);
        end = fim(end);
        break;
        // 9.2
    case 2:
        system("cls");
        printf("\n\n\t\t Derivada da Funcao cosseno de x \n\n");
        printf("\n\t Que valor em graus deseja aplicar para o angulo de x? ");
        scanf("%lf", &angulo);
        sen = -sin(convRadiano(angulo));
        printf("\n\t f'(x) = |cos(x)|' = -sen(x)");
        printf("\n\t f'(%.2lf) = %.4lf\n", angulo, sen);
        end = fim(end);
        break;
        // 9.3
    case 3:
        system("cls");
        printf("\n\n\t\t Integral Definida da Funcao cosseno de x \n\n");
        a = valorAgraus(a);
        b = valorBgraus(b);
        a = sin(convRadiano(a));
        b = sin(convRadiano(b));
        result = b - a;
        printf("\n\t Int = f(x) = cos(x) dx = sen(x) + C");
        printf("\n\t Int = f(b) - f(a)");
        printf("\n\t Int = (%.4lf) - (%.4lf)", b, a);
        printf("\n\t Int = %.4lf\n", result);
        end = fim(end);
        break;
    case 4:
        break;
    default:
        system("cls");
        printf("\n\n\t Opcao Invalida! Digite um numero entre 1 e 4\n");
        system("pause");
        break;
        }
        break;
    case 10:
        switch(menuDois){
    case 1:
        system("cls");
        printf("\n\n\t\t Funcao tangente de x \n\n");
        printf("\n\t Que valor em graus deseja aplicar para o angulo de x? ");
        scanf("%lf", &angulo);
        tg = tan(convRadiano(angulo));
        printf("\n\t f(x) = tg(x)");
        printf("\n\t f(%.4lf) = %.4lf\n", angulo, tg);
        end = fim(end);
        break;
        // 10.2
    case 2:
        system("cls");
        printf("\n\n\t\t Derivada da Funcao tangente de x \n\n");
        printf("\n\t Que valor em graus deseja aplicar para o angulo de x? ");
        scanf("%lf", &angulo);
        sen = sin(convRadiano(angulo));
        printf("\n\t f'(x) = |tg|' = sen^2(x)");
        printf("\n\t f(x) = sen(x)");
        printf("\n\t f(%.2lf) = %.2lf\n", angulo, sen);
        tg = sen * sen;
        printf("\n\t f'(x) = sen^2(x)");
        printf("\n\t f'(%.2lf) = %.2lf^2(%.2lf)", angulo, sen, angulo);
        printf("\n\t f'(%.2lf) = %.4lf\n", angulo, tg);
        end = fim(end);
        break;
        // 10.3
    case 3:
        system("cls");
        printf("\n\n\t\t Integral Definida da Funcao tangente de x \n\n");
        a = valorAgraus(a);
        b = valorBgraus(b);
        a = -log(cos(convRadiano(a)));
        b = -log(cos(convRadiano(b)));
        result = b - a;
        printf("\n\t Int = f(x) = tg(x) dx = -ln(cos(x)) + C");
        printf("\n\t Int = f(b) - f(a)");
        printf("\n\t Int = (%.2lf) - (%.2lf)", b, a);
        printf("\n\t Int = %.4lf\n", result);
        end = fim(end);
        break;
    case 4:
        break;
    default:
        system("cls");
        printf("\n\n\t Opcao Invalida! Digite um numero entre 1 e 4\n");
        system("pause");
        break;
        }
        break;
    }
    } else {
        switch (menuUm) {
        default:
            system("cls");
            printf("\n\t Valor Invalido! Digite um valor entre 1 e 11\n");
            system("pause");
            break;
        }
    }
        
    }
    return 0;
}

int menu1(int num){
    int menu = num;
    system("cls");
    printf("\n\n\t\t F(calculo)\n\n");
    printf("\t 1. f(x) = k\n");
    printf("\t 2. f(x) = x^k\n");
    printf("\t 3. f(x) = k^x\n");
    printf("\t 4. f(x) = e^x\n");
    printf("\t 5. f(x) = logb(x)\n");
    printf("\t 6. f(x) = ln(x)\n");
    printf("\t 7. f(x) = 1/x\n");
    printf("\t 8. f(x) = sen(x)\n");
    printf("\t 9. f(x) = cos(x)\n");
    printf("\t 10.f(x) = tg(x)\n");
    printf("\t 11. SAIR\n");
    printf("\t Escolha uma das funcoes no menu: ");
    scanf("%d", &menu);
    return menu;
}
int menu2(int num){
    int menu = num;
    system("cls");
    printf("\n\n\t\t \"Expressao da Funcao Escolhida Impressa\"\n\n");
    printf("\t 1. Funcao\n");
    printf("\t 2. Derivada\n");
    printf("\t 3. Integral Definida\n");
    printf("\t 4. VOLTAR AO MENU ANTERIOR\n");
    printf("\t Escolha uma das funcoes no menu: ");
    scanf("%d", &menu);
    return menu;
    }

    double valorX(double x){
        double valor = x;
        printf("\n\t Que valor de x deseja aplicar? ");
        scanf("%lf", &valor);
        return valor;
    }

    double valorK(double k){
        double valor = k;
        printf("\n\t Que valor de k deseja aplicar? ");
        scanf("%lf", &valor);
        return valor;
    }

    double valorA(double a){
        double valor = a;
        printf("\n\t Que valor de a deseja aplicar? ");
        scanf("%lf", &valor);
        return valor;
    }

    double valorB(double b){
        double valor = b;
        printf("\n\t Que valor de b deseja aplicar? ");
        scanf("%lf", &valor);
        return valor;
    }

    double valorAgraus(double a){
        double valor = a;
        printf("\n\t Que valor em graus de a deseja aplicar? ");
        scanf("%lf", &valor);
        return valor;
    }

    double valorBgraus(double b){
        double valor = b;
        printf("\n\t Que valor em graus de b deseja aplicar? ");
        scanf("%lf", &valor);
        return valor;
    }

    double convRadiano(double angulo){
        double radiano = (angulo * PI)/180;
        return radiano;
    }

    int fim(int end){
        char sair;
        printf("\n\t Deseja sair? (S)/(N):");
        do {
        scanf("%c", &sair);
        if(sair == 'S' || sair == 's'){
            return end = 0;

        } else if (sair == 'N' || sair == 'n') {
            return end = 1;
        }
        } while (sair != 'S' || sair != 's' || sair != 'N' || sair != 'n');
    }