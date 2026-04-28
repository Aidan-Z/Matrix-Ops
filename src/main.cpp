#include <iostream>
#include <vector>

// using vectors for matricies - to run without issues use below for compile: 
// clang++ -std=c++11 diag.cpp

/*

add
sub
multiply




sub
get eigen -> find det
find det

multiply vector
multiply matrix

diagonalize 

*/
std::vector<std::vector<int>> addMatricies(const std::vector<std::vector<int>>& matA, const std::vector<std::vector<int>>& matB);
std::vector<std::vector<int>> multMatricies(const std::vector<std::vector<int>> matA, const std::vector<std::vector<int>> matB);


int main(){

    std::vector<std::vector<int>> A = {{1, 1},{4, 1}};    
    std::vector<std::vector<int>> B = {{2, 3},{1, 2}};                                        

    // add matricies:
    std::vector<std::vector<int>> AB = addMatricies(A,B);

    // print add:
    for(int i = 0; i<AB.size();i++){
        for(int j=0;j<AB.size();j++){
            std::cout << AB[i][j] << std::endl;

        }
    }


    return 0;
}


std::vector<std::vector<int>> multMatricies(const std::vector<std::vector<int>> matA, const std::vector<std::vector<int>> matB){
    
    std::vector<std::vector<int>> AB;

    int s = matA.size();
    int temp_val = 0;

    std::vector<std::vector<int>> c(2, std::vector<int>(2, 0));

    for(int i=0;i<s;i++){
        for(int j=0;j<s;j++){
            temp_val = matA[i][j] * matB[i][j];
            temp_val += matA[i][j] * matB[j][i];
            std::cout << temp_val;
            c[i][i] = temp_val;

        }
    }

    return AB;
}





// check this for logic
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
