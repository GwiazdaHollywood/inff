#include <iostream>
using namespace std;

int main() {
	    // Zmiana count na 0 aby �ledzi� liczby bez powt�rze�
    int count = 0;

    // P�tla dla pierwszej cyfry (setki)
    for (int i = 1; i <= 9; ++i) {
    	        // P�tla dla drugiej cyfry (dziesi�tki)
        for (int j = 0; j <= 9; ++j) {
        	            // P�tla dla trzeciej cyfry (jedno�ci)
            for (int k = 0; k <= 9; ++k) {
            	                // Sprawdzamy czy cyfry sie roznia od siebie
                if (i != j && j != k && i != k) {
                	
                 //Wypisanie trzycyfrowych liczb i wyswietlanie

                    int number = i * 100 + j * 10 + k;
                    cout << number << endl;
                    count++;
                }
            }
        }
    }
 // tu wyswietli liczby bez powtorzen gdy powyzsza petla sie zakonczy
    cout << "Liczba liczb bez powtarzajacych sie cyfr: " << count << endl;

    return 0;
}
