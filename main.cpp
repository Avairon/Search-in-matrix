#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;


int main()
{
    int array[3][3] = {{1, 2, 3}, 
                     {4, 5, 6}, 
                     {7, 8, 9}};

    int len1 = 3;

    int input;

    cout << "Input the search number\n";
    cin >> input;

    int flag = 0;

    for (int y = 0; y < 3; y++) { //n^2
        for (int x = 0; x < 3; x++) {
            if (array[x][y] == input)  {cout << x << " " << y << " n^2\n"; flag = 1;}
        }
    }
    if  (flag == 0) cout << "This number is missing from the array";

    flag = 0;


    for(int i = 0; i < len1; i ++){ //2n
        if(array[i][len1 - 1] > input){
            for(int a = 0; a < len1; a++){
                if(array[i][a] == input) cout << i << " " << a << " 2n\n";
            }
        }
    }

    return 0;
}