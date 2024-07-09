#ifndef PESSOA_H// Guarda de inclusão para evitar múltiplas inclusões
#define PESSOA_H

#include <string>

class Pessoa {
    private:
        std::string nome;
        int idade;
    public: 
        std::string getNome(){
            return nome;
        }
        void setNome(std::string nome){
            this->nome = nome;
        }
        int getIdade(){
            return idade;
        }
        void setIdade(int idade){
            this->idade = idade;
        }

};

class Funcionario : public Pessoa{
    private:
        float salario;

    public:
        float getSalario(){
            return salario; 
        }
        void setSalario(float salario){
            this->salario = salario;
        }
};

#endif // PESSOA_H