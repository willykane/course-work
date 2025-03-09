/* a program representing 1d,2d ,3d arrays that allows user prompting
AUTHOR :WILLYCE OJWANG GWARA
REG NO : BSE-05-0044/2024

DATE : 9TH MARCH 2025

*/

#include<iostream>
#define SIZE 3

using namespace std;

int main(){
    int arr1[SIZE];
    cout << " INPUT FOR 1D ARRAY " << endl;
    cout << "Enter " << SIZE << " elements of the 1D array:\n";
    for(int i = 0; i < SIZE; i++){
        cin >> arr1[i];
    }

    int arr2D[SIZE][SIZE];
    cout << "\n INPUT FOR 2D ARRAY " << endl;
    cout << "Enter " << SIZE * SIZE << " elements for the 2D array:\n";
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cin >> arr2D[i][j];
        }
    }

    int arr3D[SIZE][SIZE][SIZE];
    cout << "\n INPUT FOR 3D ARRAY " << endl;
    cout << "Enter " << SIZE * SIZE * SIZE << " elements for the 3D array:\n";
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            for (int k = 0; k < SIZE; k++) {
                cin >> arr3D[i][j][k];
            }
        }
    }

    // Printing 1D array
    cout << "\nOUTPUT FOR 1D ARRAY " << endl;
    cout << "1D Array: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    // Printing 2D array
    cout << "\n OUTPUT FOR 2D ARRAY " << endl;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << arr2D[i][j] << " ";
        }
        cout << endl;
    }

    // Printing 3D array
    cout << "\n OUTPUT FOR 3D ARRAY " << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Layer " << i + 1 << ":\n";
        for (int j = 0; j < SIZE; j++) {
            for (int k = 0; k < SIZE; k++) {
                cout << arr3D[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}

