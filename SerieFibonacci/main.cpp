/**
 * Naomi Macias Honti a01282098
 * 8 de octubre 2016
 * 35 lineas mas 7 de comentarios. 42 en total.
 * 11 min.
 * Pide un numero y da la cantidad pedida de numeros siguiendo la serie Fibonacci.
 */
 #include <iostream>

using namespace std;

void Fibonacci(int iN)
{
    int icontador, ic1,ic2, iR;
    if (iN>=1)
    {
        ic1=1;
        cout << ic1 << " ";
    }
    if (iN>=2)
    {
        ic2=1;
        cout << ic2 << " ";
    }
    if (iN>=3)
    {
        iR=2;
        cout << iR << " ";
    }
    for (icontador=1;icontador<=iN-3;icontador++)
    {
        ic1=iR+ic2;
        cout << ic1 << " ";
        icontador++;
        if (icontador<=iN-3)
        {
            ic2=ic1+iR;
            cout << ic2 << " ";
            icontador++;
            if (icontador<=iN-3)
            {
                iR=ic1+ic2;
                cout << iR << " ";
            }
        }
    }
}

int main()
{
    int iN;

    cout << "N= ";
    cin >> iN;

    Fibonacci(iN);

    return 0;
}
