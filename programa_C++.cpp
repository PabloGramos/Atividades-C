#include <iostream>
#include <math.h>
using namespace std;


/* run this program 
using the console pauser or add
 your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	//declaração de variáveis
	float peso,altura,imc;
	int op;
	//leitura das variáveis
	cout << "\nDigite seu peso: ";
	cin >> peso;
	cout << "\nDigite sua altura: ";
	cin >> altura;
	//cálculo
	imc = peso / pow(altura,2);
	cout << "\nSeu IMC eh: " << imc;
	system("pause");
	cout << "\nDigite 1 para limpar a tela e 2 para listar os arquivos: ";
	cin >> op;
	
	switch(op){
		case 1:
			{
				cout << "\nOk... limpar atela...";
				system("cls");
				break;
			}
		case 2:
			{
				cout << "\nOk... listar diretórios...";
				system("dir");
				break;
			}
	}
	
	
	
	return 0;
}

