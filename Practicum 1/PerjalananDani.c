#include <stdio.h>

int main()
{
    long long N; // Penggunaan long long atau long int adalah untuk memenuhi syarat interval dari soal
    scanf("Jumlah Test Data : %lld", &N); // Untuk menerima input dari user
    if (N >=0 && N <= 1000000000000000) // sebagai syarat interval
    {
        // kondisi jika jumlah data dibagi 5 secara merata
        if ((N % 5) == 0) printf("Epsilon"); 
        else if ((N % 5) == 1) printf("Alpha");
        else if ((N % 5) == 2) printf("Beta");
        else if ((N % 5) == 3) printf("Gamma");
        else if ((N % 5) == 4) printf("Theta");     
                
    }
    return 0;
}
