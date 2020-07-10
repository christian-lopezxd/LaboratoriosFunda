#include <iostream>
using namespace std;

float media(float students[25]);
float comparador(float y, float students[25]);

int main()
{

    float students[25];
    for (int i = 0; i < 25; i++)
    {
        cout << "ingrese altura N." << i + 1 << endl;
        cin >> students[i];
    }
    float y = media(students);
    cout << "la media es " << y << endl;

    float k = comparador(y, students);
    return 0;
}

float media(float students[25])
{

    float suma;
    suma = students[0] + students[1] + students[2] + students[3] + students[4] + students[5] +
           students[6] + students[7] + students[8] + students[9] + students[10] + students[11] + students[12] +
           students[13] + students[14] + students[15] + students[16] + students[17] + students[18] + students[19] +
           students[20] + students[21] + students[22] + students[23] + students[24];

    float prom = suma / 25;

    return prom;
}

float comparador(float y, float students[25])
{
    int c = 0;
    int p = 0;
    float compi[100];

    for (int j = 0; j < 25; j++)
    {
        if (students[j] >= y)
        {

            c += 1;
        }
    }

    cout << "solo " << c << " personas pasan de la media" << endl;

    for (int j = 0; j < 25; j++)
    {
        if (students[j] <= y)
        {

            p += 1;
        }
    }

    cout << p << " personas estan debajo de la media" << endl;
}