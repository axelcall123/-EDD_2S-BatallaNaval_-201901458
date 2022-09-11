#include "../hpp/listas.hpp" //llama al archivo
#include <iostream>
// Nombreclass:NombreConstructor

template <typename T>ListaDobleCirH<T>::ListaDobleCirH()
{
    tam=0;
    lc=nullptr;
}
//tipo|void NombreClass::NombreMetodo(valores...)
template <typename T>
//NULL PARA NO CREAR DOS VARIABLES CON EL MISMO APUNTADOR
void ListaDobleCirH<T>::Insertar(Nodo<T> *nuevo, T info)
{
    nuevo=new struct Nodo<T>();
    nuevo->info=info;
    nuevo->sig=nuevo;
    nuevo->ant=nuevo;
    if(lc!=NULL){
        nuevo->ant = lc;
        lc->sig->ant = nuevo;
        nuevo->sig=lc->sig;       
        lc->sig=nuevo;
    }
    lc=nuevo;
    tam+=1;
    //delete nuevo;
}

template <typename T>
void ListaDobleCirH<T>::modificar(Nodo<T> *aux,string nuevoNick,string edad, string password){
    shadcsH change;
    aux->info.ob_nick(nuevoNick);
    aux->info.ob_password(change.codificado(password));
    aux->info.ob_edad(edad);
};

template <typename T>
Nodo<T> *ListaDobleCirH<T>::buscarU(Nodo<T> *aux, string nombre)//BUSCAR SOLO POR NICK
{
    aux = new struct Nodo<T>();
    aux=lc;
    int tamSig=0;
    while (tam >= tamSig && nombre != aux->info.re_nick())//BUSCAR POR NICK
    {
        aux = aux->sig;
        tamSig += 1;
    }
    if (tam <= tamSig)
    { // SI NO EXISTE
        aux=NULL;
    }
    return aux;
};

template <typename T>
Nodo<T> *ListaDobleCirH<T>::buscarD(Nodo<T> *aux, string nombre, string pass)//BUSCA POR NICK Y PASSWORD
{
    //FIXME:PUEDE PONERSE ESTE MISMO CODIGO EN OTRA FUNCION DIFRENTE DESDE aux=;; while
    aux = new struct Nodo<T>();
    aux = lc;
    int tamSig = 0;
    while (tam >= tamSig && nombre != aux->info.re_nick())//BUSCAR POR NICK
    {
        aux = aux->sig;
        tamSig += 1;
    }
    //VERIFICAR SI EL PASSWORD ES IGUAL
    shadcsH ver;
    string verificar=ver.codificado(pass);//CONVIERTE EN 256 PARA VERIFICAR

    if (tam <= tamSig | aux->info.re_password()!=verificar)//SI ALGUNO DE LOS 2 NO CUMPLE NO DEJA
    { // SI NO EXISTE
        aux = NULL;
    }
    return aux;
};
template <typename T>
Nodo<T> *ListaDobleCirH<T>::buscarNick(Nodo<T> *aux, string nombre) // BUSCA POR NICK Y PASSWORD
{
    // FIXME:PUEDE PONERSE ESTE MISMO CODIGO EN OTRA FUNCION DIFRENTE DESDE aux=;; while
    aux = new struct Nodo<T>();
    aux = lc;
    int tamSig = 0;
    while (tam >= tamSig && nombre != aux->info.re_nick()) // BUSCAR POR NICK
    {
        aux = aux->sig;
        tamSig += 1;
    }
    return aux;
};
template <typename T>
void ListaDobleCirH<T>::eliminar(Nodo<T> *aux,Nodo<T> *aux2){
    cout<<aux<<endl;
    aux2 = aux->ant;
    if (tam == 1)
    {
        delete aux;
        lc = nullptr;
        tam -= 1;
    }else if (aux == lc)
    {
        lc=aux->sig;
        aux2->sig = lc;
        delete aux;
        aux2->sig->ant = aux2;
        tam -= 1;
    }
    else{
        aux2->sig = aux->sig; 
        delete aux;
        aux2->sig->ant = aux2;
        tam -= 1;
    }
};

template <typename T>
string ListaDobleCirH<T>::graficarTXT(Nodo<T> *aux){
    aux = new struct Nodo<T>();
    aux=lc;
    // rankdir=LR; L->R GENERAL
    string dotI = "subgraph usuario {\nrankdir=LR;\n"; // INICO
    string dotM="";//MEDIO
    string dotF = "}";//FINAL
    string dotAt="";// A1[label="info1"]
    string dotConSig="";//A1->A2
    string dotConAnt = ""; //A2->A1
    int id=1;
    //CICLO
    for(int i=0;i<tam;i++){
        //CONVETIR INT
        stringstream ss;
        stringstream aa;
        ss << i;
        //US1[label=""]
        dotAt+="US"+ss.str()+//A1 A2
            "[label=\""+
                // nick,password,edad,monedas,contra
                "nick:"+aux->info.re_nick()+"\n"+
                "password:"+aux->info.re_password()+"\n"+
                "edad:"+aux->info.re_edad()+"\n"+
                "monedas:"+aux->info.re_moneda()+
            +"\"]\n";
        //US1->US2
        dotConSig+="US"+ss.str()+"->";
        aa << (tam - i - 1);
        //US3->US2
        dotConAnt+="US"+aa.str()+"->";
        aux=aux->sig;
    }
    if(tam!=0){
        // CONVETIR INT
        stringstream ss;
        stringstream aa;
        //US3;
        ss << (0);
        dotConSig += "US" + ss.str()+";\n";
        aa << (tam - 1);
        //US1;
        dotConAnt += "US" + aa.str()+";\n";
    }
    dotM=dotAt+dotConSig+dotConAnt;
    dotF=dotI+dotM+dotF;
    return dotF;
};