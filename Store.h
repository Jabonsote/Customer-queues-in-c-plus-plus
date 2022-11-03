#ifndef HEADERFILE_Store
#define HEADERFILE_Store

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>
#include <vector>

using namespace std;

class Store
{
private:
    int num_of_cashiers;
    //vector< *Cashier > cashiers;

public:
    Store();
    void StoreSimulation();
    void Customer_revenue();
    void Cashier_revenue(); //ganancias de caja
    void customer_outflow();



    ~Store();
};

Store::Store()
{

    cout<<"Store simmulation"<<endl;
    


}

Store::~Store()
{
}
