#include <iostream> 
using namespace std; 

int main()
{
int liczba[ 10 ];
for(int i=0; i <10; i++)
{
    cin >> liczba[ i ];
}

cout << "Parzyste liczby: ";
for(int i=0; i <10; i++)
{
    cout << liczba[ i ] << ", ";
}


}