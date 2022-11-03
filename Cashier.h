#ifdef HEADERFILE_Cashier
#define HEADERFILE_Cashier

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>
#include <vector>
#include "Client.h"

using namespace std;

class Cashier
{
private:
    int number;
    int capacidad;
    static int num_cajas;
    vector<Client *> caja;

public:
    Cashier();
    ~Cashier();
};

Cashier::Cashier()
{
}

Cashier::~Cashier()
{
}
