// Fib_oppgave.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "stdio.h"


int PosFib(int N);


int main()
{
    // fibonacci-tallene for n fra 0 til 20
    for (int t = 0; t <= 20; t++) {
        printf("%d ", PosFib(t));
    }
    printf("+\n\n");
    // Tester tall mellom 8 og 34 om de hører hjemme blant fib-tallene
    int n;
    for (int tall = 8; tall <= 34; tall++) {

        for (n = 0; PosFib(n) < tall; n++) {
            // printf("n: %d tall: %d fib: %d\n", n, tall, PosFib(n));
        }

        if (PosFib(n) == tall) {
            printf("%d\n", tall);
        }
    }


}



int PosFib(int N) {
    if (N < 0)
        return -1;

    if (N == 0 || N == 1)
        return N;

    int fib_n_1 = 1;
    int fib_n_2 = 0;
    int fib = 0;

    for (int n = 2; n <= N; n++) {
        fib = fib_n_2 + fib_n_1;
        fib_n_2 = fib_n_1;
        fib_n_1 = fib;
    }
    return fib;
}

int PosFib_rekursiv(int N) {

    if (N < 0)
        return -1;

    if (N == 0 || N == 1)
        return N;

    return PosFib(N - 2) + PosFib(N - 1);
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
