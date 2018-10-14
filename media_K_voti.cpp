// Calcolare la media di K voti inseriti
#include <iostream>

int main() 
{
    
    float somma_voti = 0;
    int numero_voti_inseriti = 0;
    float voto_inserito;

    std::cout << "Inserisci i tuoi voti, 0 per concludere l'elenco." << std::endl;

    while (true) // Continua a ciclare all'infinito
    {
        std::cin >> voto_inserito;
        if (voto_inserito != 0) 
        {
            somma_voti += voto_inserito; // Somma il voto se diverso da zero
            numero_voti_inseriti++; /* Incrementa il numero ogni volta che inserisco un voto
                                        quindi sa quanti numeri ho inserito */
        }
        else 
        {
            if ( numero_voti_inseriti != 0)
            {
                std::cout << "La media dei voti inseriti è: " << somma_voti / numero_voti_inseriti << std::endl;
            }
            else
            {
                std::cout << "Non è stato inserito alcun voto, non è possibile calcolare la media."
                          << std::endl;
            }
            break; // Interrompe il ciclo
        }
    }
 
    return 0;
}

