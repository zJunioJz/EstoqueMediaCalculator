#include <iostream>
#include <locale.h>
#include <iomanip>
#include <math.h>

using namespace std;

float mediaEstoq(float val1, float val2, float val3)
{
	float media;
	media = (val1 + val2 + val3)/3;
	return media;
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	int opcao;
	float val1, val2, val3, resultInicial, porcentage, resultFinal;
	
	for(int i=0; i<=30 ;i++)
	{

	cout << fixed << setprecision(2);
	cout << "Informe o primeiro Valor..:";
	cin >> val1;
	cout << "Informe o segundo Valor..:";
	cin >> val2;
	cout << "Informe o terceiro Valor..:";
	cin >> val3;
	cout << "\nDeseja Calcular a Porcentagem?\n\n";
	cout << "1: Porcentagem Acréscimo.\n";
	cout << "2: Porcentagem Diminutiva.\n";
	cout << "3: Exibir somente a média.\n";
	cout << "\nInforme a Opção..:";
	cin >> opcao;
	
	switch(opcao)
	{
		case 1:
		    cout << "Informe a Porcentagem..:";
			cin >> porcentage;
			resultInicial = mediaEstoq(val1, val2, val3);
			porcentage = porcentage/100;
            resultFinal = round(resultInicial+(round(resultInicial)* porcentage));
	        cout << "\nO Resultado da divisão..:" << resultInicial;
	        cout << "\nO Resultado do Valor arredondado..:" << round(resultInicial);
			cout << "\n\nO Resultado com Acréscimo da porcentagem..:" << round(resultFinal);
			break;
			
		case 2:
			cout << "Informe a Porcentagem..:";
			cin >> porcentage;
			resultInicial = mediaEstoq(val1, val2, val3);
            porcentage = porcentage/100;
            resultFinal = round(resultInicial-(round(resultInicial)* porcentage));
            cout << "\nO Resultado da divisão..:" << resultInicial;
	        cout << "\nO Resultado do Valor arredondado..:" << round(resultInicial);
			cout << "\n\nO Resultado com a Subtração da porcentagem..:" << round(resultFinal);
			break;
			
		case 3:
			resultInicial = mediaEstoq(val1, val2, val3);
			cout << "\nO Resultado da divisão..:" << resultInicial;
	        cout << "\nO Resultado do Valor arredondado..:" << round(resultInicial);
	        break;
	        
		default:
	    	cout <<"Opcões Invalidas. Tente outra vez.";
	    	
	}
	cout << "\n";
	cout << "\n-------------------------------------------------\n";
	cout << "\n";
	
}
	return 0;
}
