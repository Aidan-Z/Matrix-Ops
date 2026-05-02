#include <iostream>
#include "../include/matrix.h" 

// using vectors for matricies - to run without issues use below for compile: 
// clang++ -std=c++11 src/main.cpp



std::vector<std::vector<int>> addMatricies(const std::vector<std::vector<int>>& matA, const std::vector<std::vector<int>>& matB);
std::vector<std::vector<int>> multMatricies(const std::vector<std::vector<int>>& matA, const std::vector<std::vector<int>>& matB);
void printMatVals(const std::vector<std::vector<int>>& matrix);

int main(){

    std::vector<std::vector<int>> A = {{1, 1},{4, 1}};    
    std::vector<std::vector<int>> B = {{2, 3},{1, 2}};                                        

    // add matricies:
    std::vector<std::vector<int>> A_plus_B = addMatricies(A,B);

    // mult matricies:
    std::vector<std::vector<int>> AB = multMatricies(A,B);

    // print matrix:
    printMatVals(AB);
    


    return 0;
}


void printMatVals(const std::vector<std::vector<int>>& matrix){
    for(int i = 0; i<matrix.size();i++){
        for(int j=0;j<matrix.size();j++){
            std::cout << matrix[i][j] << std::endl;

        }
    }
}


std::vector<std::vector<int>> multMatricies(const std::vector<std::vector<int>>& matA, const std::vector<std::vector<int>>& matB){
    int s = matA.size();

    std::vector<std::vector<int>> AB(s, std::vector<int>(s, 0));

    for(int i=0;i<s;i++){
        for(int j=0;j<s;j++){
            int sum = 0;
        
            for(int k=0;k<s;k++){
                sum = sum + matA[i][k]*matB[k][j];
            }
        AB[i][j] = sum;
        }
    }

    return AB;
}

std::vector<std::vector<int>> addMatricies(const std::vector<std::vector<int>>& matA, const std::vector<std::vector<int>>& matB){

    std::vector<std::vector<int>> AB; // return type

    // check size A = size B ?? add later
    int s = matA.size();

    std::vector<int> temporaryRow; // Create an empty row

    for(int i = 0;i<s;i++){
        for(int j = 0; j<s;j++){
            temporaryRow.push_back(matA[i][j] + matB[i][j]);
            if (temporaryRow.size() == 2) {
                AB.push_back(temporaryRow);     // to the main matrix
                temporaryRow.clear();           // Empty the row 
            }

        }

    }

    return AB;
}
