#ifndef CENTRAL_HPP
#define CENTRAL_HPP

#include "alerta.hpp"
#include <vector>
#include <memory>

class central {
private:
    std::vector<std::unique_ptr<alerta>> alertas_;
public:
    void registrar(std::unique_ptr<alerta> a);
    void exibir_todos() const;
    int total() const noexcept;
};

#endif