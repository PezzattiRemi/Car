#include <iostream>
#include <stdio.h>
using namespace std;

class Car {
    private:
    string marca;
    string modello;
    int cavalli;
    int lunghezza;
    int larghezza;
    int altezza;
    int passo;
    int massa;
    string stile;
    int esemplari;
    int porte;
    int product_i;
    int product_f;

    string getMarca() {
        return marca;
    }
    string getModello() {
        return modello;
    }
    int getCavalli() {
        return cavalli;
    }
    int getLunghezza() {
        return lunghezza;
    }
    int getLarghezza() {
        return larghezza;
    }
    int getAltezza() {
        return altezza;
    }
    int getPasso() {
        return passo;
    }
    int getMassa() {
        return massa;
    }
    string getStile() {
        return stile;
    }
    int getEsemplari() {
        return esemplari;
    }
    int getProduct_i() {
        return product_i;
    }
    int getProduct_f() {
        return product_f;
    }



    public:
    void setMarca(string marca) {
        this->marca = marca;
    }
    void setModello(string modello) {
        this->modello = modello;
    }
    void setCavalli(int cavalli) {
        this->cavalli = cavalli;
    }
    void setLunghezza(int lunghezza) {
        this->lunghezza = lunghezza;
    }
    void setLarghezza(int larghezza) {
        this->larghezza = larghezza;
    }
    void setAltezza(int altezza) {
        this->altezza = altezza;
    }
    void setPasso(int passo) {
        this->passo = passo;
    }
    void setMassa(int massa) {
        this->massa = massa;
    }
    void setStile(string stile) {
        this->stile = stile;
    }
    void setEsemplari(int esemplari) {
        this->esemplari = esemplari;
    }
    void setProudct_i(int product_i) {
        this->product_i = product_i;
    }
    void setProduct_f(int product_f) {
        this->product_f = product_f;
    }
    


    void printAll() {
        cout << "Marca: " << getMarca() << "\n"
             << "Modello: " << getModello() << "\n"
             << "---------Dimensioni e pesi--------\n"
             << "Lunghezza: " << getLunghezza() << " mm\n"
             << "Larghezza: " << getLarghezza() << " mm\n"
             << "Altezza: " << getAltezza() << " mm\n"
             << "Passo: " << getPasso() << " mm\n"
             << "Massa: " << getMassa() << " kg\n"
             << "--------------Altro---------------\n"
             << "Stile: " << getStile() << "\n"
             << "Anni di produzione: " << getProduct_i() << " - " << getProduct_f() << "\n"
             << "Esemplari prodotti: " << getEsemplari() << "\n"
             << "-------------Motore---------------\n"
             << "Cavalli: " << getCavalli() << " CV\n";
    }
};


int main(void) {
//-------------------------------------------------------------------------
    Car c1;
    c1.setMarca("Nissan");
    c1.setModello("Skyline GT-R R34");
    c1.setProudct_i(1999);
    c1.setProduct_f(2002);
    c1.setLunghezza(4600);
    c1.setLarghezza(1785);
    c1.setAltezza(1360);
    c1.setPasso(2665);
    c1.setMassa(1536);
    c1.setStile("Kozo Watanabe");
    c1.setEsemplari(11577);
    c1.setCavalli(280);
//-------------------------------------------------------------------------


   c1.printAll();
}