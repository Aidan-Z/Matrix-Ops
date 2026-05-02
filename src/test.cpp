#include <iostream>
#include <vector>


// clang++ -std=c++11


int main(){

    std::vector<std::vector<int>> A = {{1, 5},{4, 6}};    
    std::vector<std::vector<int>> B = {{2, 3},{9, 7}};   
/*
a =  1 5
     4 6

b = 2 3
    9 7

c = 
*/



    int s = A.size();
    int temp_val = 0;

    std::vector<std::vector<int>> matrix(s, std::vector<int>(s, 0));

    // // std::cout << matrix.size();
    // for(int i=0;i<s;i++){
    //     for(int j=0;j<s;j++){
    //         std::cout << "pos i: " << i << " pos j: " << j << " : " << A[i][j] << std::endl;
    //     }
    // }

    //c11 = 1*2 + 5*9 = 47 || Row 1 Col 1
    //c12 = 1*3 + 5*7 = 38 || Row 1 Col 2
    //c21 = 4*2 + 6*9 = 62 || Row 2 Col 1
    //c22 = 4*3 + 6*7 = 54 || Row 2 Col 2

    int c11,c12,c21,c22 = 0;

    //works
    // for(int i=0;i<1;i++){
    //     for(int j=0;j<s;j++){
    //         c11 += A[i][j] * B[j][i];
    //         // c12 += A[i][j] * B[j][i];
    //         // std::cout << c11 << std::endl;
    //     }
    // }

    // std::cout << c11 << std::endl;

    // for(int i=0;i<1;i++){
    //     for(int j=0;j<s;j++){
    //         c11 += A[i][j] * B[j][i];
    //         // c12 += A[i][j] * B[j][i];
    //         // std::cout << c11 << std::endl;
    //     }
    // }


    /*
           s
    Cij = SUM[ Aik * Bkj ]
          k=0
    */
   for(int i=0;i<s;i++){
    for(int j=0;j<s;j++){
        int sum = 0;
        
        for(int k=0;k<s;k++){
            sum = sum + A[i][k]*B[k][j];
        }
        matrix[i][j] = sum;
    }
   }


    for(int i=0;i<s;i++){
            for(int j=0;j<s;j++){
                std::cout << "pos i: " << i << " pos j: " << j << " : " << matrix[i][j] << std::endl;
            }
        }

    



    // std::vector<std::vector<int>> c[s][s]; //

    // for(int i=0;i<s;i++){
    //     for(int j=0;j<s;j++){
    //         temp_val = A[i][j] * B[i][j];
    //         std::cout << "A: " << A[i][j] << '\n';
    //         std::cout << "B: " << B[i][j] << '\n';
    //         std::cout << "temp: " << j << temp_val << '\n';
    //         temp_val += A[i][j] * B[j][i];
    //         std::cout << temp_val << '\n';
    //         // c[i][i] = 3;
    //         // temp_val = 0;

    //     }
    // }

    // std::cout << c.size();

    return 0;
}