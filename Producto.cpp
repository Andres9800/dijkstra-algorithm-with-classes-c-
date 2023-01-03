//
// Created by Andres Cordero on 30/4/2021.
//

#include "Producto.h"

Producto::Producto(const string &nombre, float precio, int cantidad, int id) : nombre(nombre), precio(precio),
                                                                               cantidad(cantidad), id(id) {}


const string &Producto::getNombre() const {
    return nombre;
}

void Producto::setNombre(const string &nombre) {
    Producto::nombre = nombre;
}

float Producto::getPrecio() const {
    return precio;
}

void Producto::setPrecio(float precio) {
    Producto::precio = precio;
}

int Producto::getCantidad() const {
    return cantidad;
}

void Producto::setCantidad(int cantidad) {
    Producto::cantidad = cantidad;
}
int Producto::getId() const {
    return id;
}

void Producto::setId(int id) {
    Producto::id = id;
}

string Producto::toString() {
    stringstream ss;
    ss << "ID: " << getId() << " ";
    ss << "Nombre: " << getNombre() << " ";
    ss << "Precio: " << getPrecio() << " ";
    ss << "cantidad: " << getCantidad() << endl;
    return ss.str();
}

Producto::~Producto() {

}

