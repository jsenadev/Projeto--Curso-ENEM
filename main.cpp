#include "CursoEnem.h"


int main(){

    int esc1;
    int esc2;

    cout<<"======= SISTEMA DE INFORMAÇÕES DO CURSO ENEM =======\n\n";
    cout<<"Escolha uma Disciplina: ";
    cout<<"\n[1] - Portugues\n[2] - Matematica\n[3] - Biologia\n[4] - Sair";
    cout<<"\nEscolha: ";
    cin>>esc1;

    if(esc1 == 1){
        // DECLARAÇÃO DA MATERIA PORTUGUES
        CursoEnem *portuguesPtr;
        

        vector< string *> materiasPort;
        materiasPort.push_back(new string("acentuacao"));
        materiasPort.push_back(new string("fonetica"));
        materiasPort.push_back(new string("interpretacao"));
        materiasPort.push_back(new string("morfologia I"));
        materiasPort.push_back(new string("morfologia II"));
        materiasPort.push_back(new string("sintaxe I"));
        materiasPort.push_back(new string("sintaxe II"));
        materiasPort.push_back(new string("morfosintaxe I"));
        materiasPort.push_back(new string("morfosintaxe II"));

        portuguesPtr = new CursoEnem("portugues", "Romulo", 7, 3, 756.3);

        for(int i = 0; i< materiasPort.size(); i++)
            portuguesPtr->cadMateriasInDisciplina(*materiasPort[i]);
        
        portuguesPtr->printSaida();
        
        delete[] portuguesPtr; // deletando ponteiro

        }else if(esc1 == 2){
        // DECLARAÇÃO DA MATERIA MATEMATICA
        CursoEnem *matematicaPtr;
        

        vector< string *> materiasMat;
        materiasMat.push_back(new string("Conjuntos"));
        materiasMat.push_back(new string("Funcao"));
        materiasMat.push_back(new string("Matriz"));
        materiasMat.push_back(new string("Triogonometria"));
        materiasMat.push_back(new string("Geometria plana"));
        materiasMat.push_back(new string("Geometria espacial"));
        materiasMat.push_back(new string("Geometria Analitica"));
        materiasMat.push_back(new string("Sequencias"));
        materiasMat.push_back(new string("Calculo"));
        materiasMat.push_back(new string("Calculo II"));

        matematicaPtr = new CursoEnem("Matematica", "Israel", 10, 8, 845.56);

        for(int i = 0; i< materiasMat.size(); i++)
            matematicaPtr->cadMateriasInDisciplina(*materiasMat[i]);
        
        matematicaPtr->printSaida();

        delete[] matematicaPtr; // deletando ponteiro

    }else if(esc1 == 3){
        // DECLARAÇÃO DA MATERIA BIOLOGIA
        CursoEnem *biologiaPtr;
        

        vector< string *> materiasBio;
        materiasBio.push_back(new string("Agua"));
        materiasBio.push_back(new string("Meio Ambiente"));
        materiasBio.push_back(new string("Reino Animal"));
        materiasBio.push_back(new string("Reino Vegetal"));
        materiasBio.push_back(new string("Genetica"));
        materiasBio.push_back(new string("Botanica"));
        materiasBio.push_back(new string("Anatomia"));
        materiasBio.push_back(new string("Planeta Terra"));

        biologiaPtr = new CursoEnem("Biologia", "Priscila", 8, 5, 645.23);

        for(int i = 0; i< materiasBio.size(); i++)
            biologiaPtr->cadMateriasInDisciplina(*materiasBio[i]);
        
        biologiaPtr->printSaida();

        delete [] biologiaPtr;

    }else{
        cout<<"Obrigado e volte sempre!";
    }
    
    return 0;
}