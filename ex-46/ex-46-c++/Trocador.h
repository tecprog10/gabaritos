#pragma once

template <typename P>
class Trocador {
private:
    P obj1;
    P obj2;

public:
    // Construtor: recebe dois objetos e os troca
    Trocador(P objeto1, P objeto2) {
        obj1 = objeto2;
        obj2 = objeto1;
    }

    P getPrimeiro() {
        return obj1;
    }

    P getSegundo() {
        return obj2;
    }
};