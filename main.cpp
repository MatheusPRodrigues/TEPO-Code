#include <iostream>
using namespace std;

class Pessoa {
    private: // Atributos da minha classe
        string nome;
        int idade;
        string hobby;
        
        public: // Construtor da classe pessoa
            Pessoa(string nome, int idade, string hobby){
                this->nome = nome;
                this->idade = idade;
                this->hobby = hobby;
            }

    // Get e Set do atributo nome
    void inserirNome(string nome) {
        this->nome = nome;
    }
    string exibirNome() {
        return this->nome;
    }

    // Get e Set do atributo idade
    void inserirIdade(int idade) {
        this->idade = idade;
    }
    int exibirIdade() {
        return this->idade;
    }

    // Get e Set do atributo nome
    void inserirHobby(string hobby) {
        this->hobby = hobby;
    }

    string exibirHobby() {
        return this->hobby;
    }

    // Método de apresentação da classe
    string meApresentar() { 
        string idadeConvertidoParaString = to_string(exibirIdade());
        string apresentacao =  "Olá, me chamo " + exibirNome() + "! Tenho " + idadeConvertidoParaString +
        " anos de idade e meu hobby é " + exibirHobby() + ".";
        
        return apresentacao;
    }
};

int main() {
    string nome, hobby;
    int idade;
    
    cout << "Insira seu nome: "; // pronuncia-se 'see-out'
    getline(cin, nome); // pronuncia-se 'see-in'

    cout << "Insira sua idade: ";
    cin >> idade;

    cin.ignore(); // ignora um ou mais caracteres do buffer de entrada 'nesse caso o /n'

    cout << "Insira um hobby que possua: ";
    getline(cin, hobby);

    Pessoa pessoa(nome, idade, hobby);

    cout << pessoa.meApresentar() << endl;

    return 0;
}