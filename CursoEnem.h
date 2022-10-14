#ifndef CURSOENEM_H
#define CURSOENEM_H
#include <iostream>
#include <vector>

using namespace std;

class CursoEnem{

    private:
    string nomeDisciplina;
    string nomeProfessor;
    int numDisciplinas; // número de disciplinas, incrementado em CursoEnem::CursoEnem()
    int numMaterias;
    int numMateriasCad;
    static const int NUMMATERIALDIDATICO; // Número de materias didáticos em cada disciplina/objeto // DECLARADA NO .CPP
    bool atividade; // booleana referente ao envio da atividade
    int numAtividadeEnv; //Número de atividades enviadas em cada disciplina
    vector <string *> materias;
    float notaCorte; //referente a média necessária para passar
    const int MAXSIZENAME;

    int *histAtPtr; // alocação de memória que guarda o hostórico de atividades enviadas;
    int histAtSize; // Tamanho alocado para HistAtPtr
    int proxReg;

    
    void printHistAt()const; //printa o histórico de atividades enviadas
    void alocHistAt(int); //método para aumentar a memória disponível no ponteiro do histórico

    public:

    CursoEnem();
    CursoEnem(int);
    CursoEnem(string, string, int = 0, int = 0, float = 0.0);
    ~CursoEnem(); //destrutor

    //getters para retorno das privates
    string getNomeDisciplina();
    string getNomeProfessor();
    int getNumDisciplinas();
    int getNumMaterias();
    int getNumMaterialDidatico();
    int getNumAtividadesEnv();
    bool getAtividade();
    float getNotaCorte();
    int getNumMateriasCad();

    void cadMateriasInDisciplina(const string &);
    void printMaterias() const; //printa as materias de cada disciplina
    void printSaida();
    

    //setters para modificação
    void setNomeDisciplina(string);
    void setNomeProfessor(string);
    void setNumAtividadesEnv(int);
    void setAtividade(int, bool=false);
    void setNumMaterias(int);
    void setNotaCorte(float);
    
    
    void cadastrarRegInHist(int);

    
    

};


#endif