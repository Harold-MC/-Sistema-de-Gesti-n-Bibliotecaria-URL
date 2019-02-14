#include "Pila.h"

Pila::Pila() : _ultimo(NULL) {
}

void Pila::Agregar(Elemento* elemento) {
    /* Llenar este método con su implementación de Agregar elemento a la pila */

    if (!_ultimo == NULL) {

        elemento->SetSiguiente(_ultimo);
        _ultimo = elemento;

    } else {
        _ultimo = elemento;
    }
}

Elemento* Pila::Extraer() {
    /* Llenar este método con su implementación de Extraer un elemento de la pila */
    if (!_ultimo == NULL) {
         Elemento* retorno = _ultimo;
        _ultimo = retorno->GetSiguiente();
        return retorno;
        
    } else {
       return NULL;
    }
}
