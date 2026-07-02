#ifndef ALERTA_HPP
#define ALERTA_HPP

#include <string>
#include <iostream>

class formatavel {
public:
    virtual ~formatavel() = default;
    virtual std::string formatar() const = 0;
};

class alerta : public formatavel {
private:
    std::string origem_;
    int severidade_;

public:
    alerta(std::string origem, int sev);
    std::string origem() const { return origem_; }
    int severidade() const { return severidade_; }
    
    virtual std::string tipo() const = 0;
    void exibir() const;
};

#endif