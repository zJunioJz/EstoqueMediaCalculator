#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

float mediaEstoque(float val1, float val2, float val3)
{
    float media;
    media = (val1 + val2 + val3) / 3;
    return media;
}

void calcularPorcentagem(float val1, float val2, float val3, float porcentagem)
{
    float resultInicial, resultFinal;

    resultInicial = mediaEstoque(val1, val2, val3);
    porcentagem = porcentagem / 100;

    resultFinal = round(resultInicial + (round(resultInicial) * porcentagem));
    cout << "\nO Resultado da divisao..:" << resultInicial;
    cout << "\nO Resultado do Valor arredondado..:" << round(resultInicial);
    cout << "\n\nO Resultado com Acrescimo da porcentagem..:" << round(resultFinal);
}

void exibirMedia(float val1, float val2, float val3)
{
    float resultInicial;

    resultInicial = mediaEstoque(val1, val2, val3);
    cout << "\nO Resultado da divisao..:" << resultInicial;
    cout << "\nO Resultado do Valor arredondado..:" << round(resultInicial);
}

int main(int argc, char const *args[])
{
    int opcao;
    float val1, val2, val3, porcentagem;

    while (true)
    {
        cout << fixed << setprecision(2);
        cout << "Bem-vindo a calculadora de produtos contida no Estoque.\n\n";
        cout << "Informe o primeiro Valor..:";
        cin >> val1;
        cout << "Informe o segundo Valor..:";
        cin >> val2;
        cout << "Informe o terceiro Valor..:";
        cin >> val3;
        cout << "\nDeseja Calcular a Porcentagem?\n\n";
        cout << "1: Porcentagem Acrescimo.\n";
        cout << "2: Porcentagem Diminutiva.\n";
        cout << "3: Exibir somente a media.\n";
        cout << "4: Encerrar o Programa.\n";
        cout << "\nInforme a Opcao..:";
        cin >> opcao;

        if (opcao == 4)
        {
            cout << "Programa encerrado!";
            break;
        }

        switch (opcao)
        {
        case 1:
            cout << "Informe a Porcentagem..:";
            cin >> porcentagem;
            calcularPorcentagem(val1, val2, val3, porcentagem);
            break;

        case 2:
            cout << "Informe a Porcentagem..:";
            cin >> porcentagem;
            calcularPorcentagem(val1, val2, val3, -porcentagem);
            break;

        case 3:
            exibirMedia(val1, val2, val3);
            break;

        default:
            cout << "Opcoes Invalidas. Tente outra vez.";
        }
        cout << "\n";
        cout << "\n-------------------------------------------------\n";
        cout << "\n";
    }
    return 0;
}
