#include <iostream>
#include "Trocador.h"
#include "ClasseQualquer.h"
#include <ctime>

using namespace std;

int main() {
    srand(time(nullptr));

    int num = rand() % 10;
    int num2 = rand() % 10;

    cout << "Primeiro numero: "<< num << endl;
    cout << "Segundo numero: "<< num2 << endl;

    ClasseQualquer obj1(num);
    ClasseQualquer obj2(num2);

    // Cria o Trocador e troca os objetos
    Trocador<ClasseQualquer> t(obj1, obj2);

    // Recupera os objetos trocados
    obj1 = t.getPrimeiro();
    obj2 = t.getSegundo();

    // Exibe os valores
    cout << "Primeiro = " << obj1.getValor() << endl;
    cout << "Segundo = " << obj2.getValor() << endl;

    return 0;
}
