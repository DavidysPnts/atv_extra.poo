#include "alerta.hpp"
#include <stdexcept>

alerta::alerta(std::string origem, int sev) : origem_(origem), severidade_(sev) {
    if (sev < 1 || sev > 3) {
        throw std::invalid_argument("Erro: Severidade deve estar entre 1 e 3.");
    }
}

void alerta::exibir() const {
    std::cout << "[" << tipo() << "] " << origem_ << ": " << formatar() << "\n";
}