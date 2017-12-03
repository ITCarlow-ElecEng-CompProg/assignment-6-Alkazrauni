/** Salman Al-kazrauni
 *  c00199530
 *  Exercise 6
 *  Decimal / Binary Numbering Systems Conversion */


#include <iostream>
#include <cstdio>
#include <windows.h>
#include <cmath>

using namespace std;

/** functions declarations */
void menu(void);
long Bin_dec(long n);
long Dec_bin(long n);


/** Main Function*/
int main()
{
   long n;

    /** Call menu function*/
    menu();
    char input = getchar();
    system("cls");
    getchar() ;



    /** switch case input*/
    switch(input)
    {

        /**convert binary to decimal , Call function */
        case 'b':
            cout << " please enter a binary number: " ;
            cin >> n ;
            fflush(stdin);

            cout << "\n " << n << " in binary = " << Bin_dec(n) << " in decimal\n" << endl ;
            break;

        /** convert decimal to binary , Call function */
        case 'd':
            cout << " please enter a decimal number: " ;
            cin >> n ;
            fflush(stdin);

            cout << " \n" << n << "in decimal = " << Dec_bin(n) << " in binary\n" << endl ;
            break;

        /** Close the Programme*/
        case 'q':
            cout << " Close the Programme\n\n" << endl ;
            fflush(stdin);

            return 0;
            break;

        /** default for invalid input */
        default:
            cout << " invalid character\n\n" << endl ;
            fflush(stdin);
            break;
    }

    return 0;

    }

/** Decimal to binary function */
long Dec_bin(long n)
{
    /**declaring intigers*/
    long binary=0,rem, i=1;

    while (n!=0)
    {
        rem=n%2;
        n/=2;
        binary+=rem*i;
        i*=10;
    }
    return binary;
}

/**Binary to decimal convertor function*/
long Bin_dec(long n)

{
    /**declaring intigers*/
    long d=0,r,i=0;

    while (n!=0)
    {
        r = n%10;
        n/=10;
        d += r*pow(2,i);
        ++i;
    }
    return d;
}
/**menu function*/
void menu(void)
{
    system("cls");

    cout << "\n To convert Binary to Decimal 'b'" ;
    cout <<"\n To convert Decimal to Binary 'd'" ;
    cout <<"\n To quit the programme select 'q'\n\n" ;

    return ;
}

