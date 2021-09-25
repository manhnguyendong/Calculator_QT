#ifndef MODEL_H
#define MODEL_H
#include <cmath>
#include <string>
#include <utility>
#include <QApplication>
using namespace std;

class Model{

public:
    QString store;
    QString prev;
    QString result;
    pair<string, int>pair_add;
    pair<string, int>pair_minous;
    pair<string, int>pair_multi;
    pair<string, int>pair_divide;
    Model();
    void enter_store(const QString);
    void add();
    void minous();
    void multil();
    void divide();
    void invert();
    void square();
    void sqrt();
};

#endif // MODEL_H
