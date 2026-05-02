#pragma once         
#include <vector>    
#include <iostream>


class Matrix{
private:
    size_t row,col;
    std::vector<std::vector<double>> data;
    

public:
    // constrcutor init. data w/ writing code in body of func
    // data(rows * columns)
    Matrix(size_t rows, size_t columns): row(rows), col(columns){}


    //setter
    void set_matrix(){}

    //getter
    int get_rows(){
        return row;
    }
    int get_columns(){
        return col;
    }
    


    //operations
    /*

    add
    subtract
    multiply

    diagonalize
    etc

    */


};