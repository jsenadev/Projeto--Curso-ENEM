#include <iostream>
# include <cmath>
#include "CursoEnem.h"

using namespace std;

//instanciando as variáveis statics
const int CursoEnem::NUMMATERIALDIDATICO = 4;



CursoEnem::CursoEnem()
:histAtPtr(0), nomeDisciplina(""), nomeProfessor(""), numMaterias(0),
atividade(false), numAtividadeEnv(0), MAXSIZENAME(15), notaCorte(0){
    numDisciplinas++;
}

CursoEnem::CursoEnem(string named,string namep, int numat, int numatv, float ncorte)
:MAXSIZENAME(15), atividade(false){
    proxReg = 0;
    histAtSize = 0;
    setNomeDisciplina(named);
    setNomeProfessor(namep);
    setNumMaterias(numat);
    setNumAtividadesEnv(numatv);
    setNotaCorte(ncorte);

    numDisciplinas++;
}

CursoEnem::~CursoEnem(){
    cout<<"Objeto destruido";
    delete[] histAtPtr;

}

//getters para retorno das privates
string CursoEnem::getNomeDisciplina(){
    return nomeDisciplina;
}

string CursoEnem::getNomeProfessor(){
    return nomeProfessor;
}

int CursoEnem::getNumDisciplinas(){
    return numDisciplinas;
}

int CursoEnem::getNumMaterias(){
    return numMaterias;
}

int CursoEnem::getNumMaterialDidatico(){
    return NUMMATERIALDIDATICO;
}

int CursoEnem::getNumAtividadesEnv(){
    return numAtividadeEnv;
}

bool CursoEnem::getAtividade(){
    return atividade;
}
float CursoEnem::getNotaCorte(){
    return notaCorte;
}

int CursoEnem::getNumMateriasCad(){
    return numMateriasCad;
}

void CursoEnem::printMaterias() const{
    for(int i = 0; i < materias.size(); i++)
        cout<<materias[i] << '\t' << *materias[i] << endl;
}

void CursoEnem::printSaida(){
    int opc1;
    int opc2 = 1;

    cout<<"\n===== CURSO ENEM ONLINE =====\n";
    cout<<"\nEscolha a opcao desejada: ";
    cout<<"\n[1] - Ver informacoes da disciplina;\n";
    cout<<"[2] - Sair.\n";
    cout<<"Escolha: ";

    cin>>opc1;
    
    while (opc1 == 1)
    {
        cout<<"\n== BEM VINDO AO CENTRO DE INFORMACOES DA DISCIPLINA ==\n";
        cout<<"\nNumero total de disciplinas: "<< getNumDisciplinas()<< ";";



        cout<<"\n\nNome da Disciplina: "<< getNomeDisciplina();
        cout<<"\nNumero de Materias: "<< getNumMaterias();
        cout<<"\nNumero de materia castradas: " <<  getNumMateriasCad();
        cout<<"\nNome do Professor: "<< getNomeProfessor();
        cout<<"\nNumero de Materiais Didaticos: "<< NUMMATERIALDIDATICO;
        cout<<"\nNota de corte no Enem: "<< getNotaCorte() <<"\n\n";

        cout<<"Materias de "<<getNomeDisciplina()<<" do professor " <<getNomeProfessor()<<": \n\n";
        
        printMaterias();

        cout<<"\nDigite [0] para sair: ";
        cin>> opc1;
    }
    
   
    
    
}

//setters para modificação
void CursoEnem::setNomeDisciplina(string named){
    if(named.length() <= MAXSIZENAME)
        nomeDisciplina = named;
    else{
        cout <<"O nome inserido ultrapassou o numero maximo de caracteres (15)";
    }
}
void CursoEnem::setNomeProfessor(string nomeprof){
    nomeProfessor = nomeprof;
}
void CursoEnem::setAtividade(int at, bool atv){
    if(at == 1){
        atv = true;
        atv = atividade;
    }
}
void CursoEnem::setNotaCorte(float notac){
    notaCorte = notac;
}
void CursoEnem::setNumMaterias(int nmat){
    numMaterias = nmat;
}
void CursoEnem::setNumAtividadesEnv(int nummatenv){
    numAtividadeEnv = nummatenv;
}


void CursoEnem::cadastrarRegInHist(int numMat){
    if (proxReg < histAtSize)
    {
        histAtPtr[proxReg++] = numMat;
        return;
    }

    if(histAtSize == 0){
        histAtSize = 1;
        histAtPtr = new int[histAtSize];
        histAtPtr[proxReg++] = numMat;
        return;
    }
}

void CursoEnem::cadMateriasInDisciplina(const string &novaMateria){

    if(materias.size() < numMaterias){
        materias.push_back(new string(novaMateria));
        numMateriasCad++;
    }

}

void CursoEnem::printHistAt()const{
    for(int i = 0; i < proxReg; i++)
    cout << histAtPtr[i] << '\n';
}

void CursoEnem::alocHistAt(int numMat){
    int *histTemp = new int [histAtSize];
    for(int i = 0 ; i < proxReg; i++)
    histTemp[i] = histAtPtr[i];

delete[] histAtPtr;

histAtSize += int(ceil(histAtSize*0.5)); //aumenta  a memória se necessário

int *histAtPtr = new int [histAtSize];
for(int i = 0; i < proxReg; i++)
    histAtPtr[i] = histTemp[i];
histAtPtr[proxReg++] = numMat;

delete [] histTemp;
}
