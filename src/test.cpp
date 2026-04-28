#include <iostream>
#include <vector>

int main(){

    std::vector<std::vector<int>> A = {{1, 1},{4, 1}};    
    std::vector<std::vector<int>> B = {{2, 3},{1, 2}};                                        


    int s = A.size();
    int temp_val = 0;

    std::vector<std::vector<int>> c[2][2];

    for(int i=0;i<s;i++){
        for(int j=0;j<s;j++){
            temp_val = A[i][j] * B[i][j];
            std::cout << "A: " << A[i][j] << '\n';
            std::cout << "B: " << B[i][j] << '\n';
            std::cout << "temp: " << j << temp_val << '\n';
            temp_val += A[i][j] * B[j][i];
            std::cout << temp_val << '\n';
            // c[i][i] = 3;
            // temp_val = 0;

        }
    }


    return 0;
}