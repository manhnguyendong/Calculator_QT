#include "model.h"
#include <iostream>
#include <QApplication>
#include <cmath>
Model::Model(){
    this->store = "";
    this->prev = "";
    this->result = "";
    this->pair_add = make_pair("add", 0);
    this->pair_multi = make_pair("multi", 0);
    this->pair_minous = make_pair("minous", 0);
    this->pair_divide = make_pair("divide", 0);
}

void Model::enter_store(QString x) {
    this->store += x;
}

void Model::add() {
    this->prev = this->store;
    this->store = "";
    this->pair_add.second = 1;
}

void Model::minous() {
    this->prev = this->store;
    this->store = "";
    this->pair_minous.second = 1;
}

void Model::multil() {
    this->prev = this->store;
    this->store = "";
    this->pair_multi.second = 1;
}

void Model::divide() {
    this->prev = this->store;
    this->store = "";
    this->pair_divide.second = 1;
}

void Model::invert() {
    double store = this->store.toFloat();
    double result = 1 / store;
    this->store = QString::number(result);
}

void Model::square() {
    double store = this->store.toFloat();
    double result = store * store;
    this->store = QString::number(result);
}

void Model::sqrt() {
    double store = this->store.toFloat();
    double result = pow(store, 1/2);
    this->store = QString::number(result);
}
