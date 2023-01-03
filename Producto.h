//
// Created by Andres Cordero on 30/4/2021.
//

#ifndef LISTASCONTEMPLATES_PRODUCTO_H
#define LISTASCONTEMPLATES_PRODUCTO_H


#include <iostream>
#include <sstream>
using namespace std;

class Producto {

private:
    string nombre;
    float precio;
    int cantidad;
    int id;
public:

    Producto(const string &nombre="", float precio=0, int cantidad=0, int id=0);


    virtual ~Producto();


    string toString();

    const string &getNombre() const;

    void setNombre(const string &nombre);

    float getPrecio() const;

    void setPrecio(float precio);

    int getCantidad() const;

    void setCantidad(int cantidad);

    int getId() const;

    void setId(int id);



};


#endif //LISTASCONTEMPLATES_PRODUCTO_H
