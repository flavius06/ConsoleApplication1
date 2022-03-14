#include <iostream>
#include <cmath>
#include <windows.h>
#include <conio.h>
#include <chrono>
#include <thread>
#include <stdio.h>

using namespace std;


HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

/*Ionutz lucreaza la Mega Image.Nu are un sef foarte bun, tocmai de aceea
l-a pus sa aranjeze produsele de la raionul cu rechizite.El trebuie sa le
aranjeze in ordine crescatoare dupa pret. Fiind baiat destept, Ionutz
foloseste un algoritm de sortare.Prima cerinta :
 1) Ajuta-l pe Ionutz sa sorteze rechizitele si astfel sa isi
 multumeasca seful.


*/
int main()

{
    int opmode;
    cout << " alegeti cazul ";
    cin >> opmode;
    switch (opmode)
    {
    case 1:
        system("Color 0E");
        int n, i, v[1005], aux, j;

        cout << " Dati numarul de preturi care trebuie sortate " << '\n';
        cin >> n;
        cout << " Intoduceti preturile care trebuie sortate de Ionutz " << '\n';
        for (i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        for (i = 1; i <= n - 1; i++)
        {
            for (j = i + 1; j <= n; j++)
            {
                if (v[i] > v[j])
                {
                    aux = v[i];
                    v[i] = v[j];
                    v[j] = aux;
                }
            }
        }
        for (i = 1; i <= n; i++)
        {
            cout << v[i] << " ";
        }cout << '\n';
        cout << " Felicitari ! L-ai ajutat pe Ionutz in prima lui sarcina . " << endl;
        cout << "Nu te entuziasma ! Mai ai multe de facut <3!" << endl;
        break;
        /*
        Acum ajuta-l pe Ionutz sa faca inventarul. Nu se pricepe la matematica,
        insa il ajuta informatica. La raionul de dulciuri sunt mai multe tipuri de
        ciocolata.
        Fiecare are un pret diferit, respectiv:
        Ciocolata Kinder- 4.99 lei;
        Ciocolata Milka- 7.99 lei;
        Ciocolata Poiana - 1.49 lei;
        Ciocolata Alba - 3.99 lei;
        Ciocolata Heidi - 9.99 lei;
        Trufe Belgiene - 19.99;
        Borcane de Nuttela - 24.99 lei;
        */
        case 2:
            system("Color 4F");
            float Kinder, Milka, Poiana, Alba, Heidi, Tbel, Bnutt;
            cout << "Fiecare are un pret diferit, respectiv:" << endl;
            cout << "Ciocolata Kinder - 4.99 lei;" << endl;
            cout << " Dati numarul de ciocolati Kinder care au fost vandute" << endl;
            cin >> Kinder;
            cout << "Ciocolata Milka - 7.99 lei;" << endl;
            cout << " Dati numarul de ciocolati Milka care au fost vandute" << endl;
            cin >> Milka;
            cout << "Ciocolata Poiana - 1.49 lei;" << endl;
            cout << " Dati numarul de ciocolati Poiana care au fost vandute" << endl;
            cin >> Poiana;
            cout << "Ciocolata Alba - 3.99 lei; " << endl;
            cout << " Dati numarul de ciocolati Albe care au fost vandute" << endl;
            cin >> Alba;
            cout << "Ciocolata Heidi - 9.99 lei;" << endl;
            cout << " Dati numarul de ciocolati Heidi care au fost vandute" << endl;
            cin >> Heidi;
            cout << "Trufe Belgiene - 19.99; " << endl;
            cout << " Dati numarul de ciocolati Trufe care au fost vandute" << endl;
            cin >> Tbel;
            cout << "Borcane de Nuttela - 24.99 lei;" << endl;
            cout << " Dati numarul de borcane de ciocolata care au fost vandute" << endl;
            cin >> Bnutt;
           
            {float total1 = Kinder * 4.99 + Milka * 7.99 + Poiana * 1.49 + Alba * 3.99 + Heidi * 9.99 + Tbel * 19.99 + Bnutt * 24.99;
            cout << total1; }
            break;
            /*
               Seful lui Ionutz l-a facut casier . Ionutz accepta deoarece este platit
               mai bine.Dupa cum bine stiti, fiecare persoana trebuie sa aleaga cum
               plateste.Cash sau card?
            */
    case 3:
    {
        system("Color 9D");
        cout << "Cum platiti?" << '\n';
        int total2 = 5;
        int pin;
        string mod_plata;
        cin >> mod_plata;

        if (mod_plata == "card") cout << "Dati pinul";
        cin >> pin;
        int k = 0;
        int cop = pin;
        do {
            int uc = cop % 10;
            cop /= 10;
            k++;

        } while (cop != 0);
        if (k == 4) cout << "plata acceptata";
        else cout << "pinul a fost gresit!";

        break;
    }
    case 4: 
        system("Color 6D");
        cout << "Intr-un raion sunt n produse . Ionutz trebuie sa le aranjeze pe rafturi" << endl;
        cout << "in functie de pretul lor.Daca produsul este mai mic decat 50,se aseaza pe raftul 1." << endl;
        cout << "Daca produsul este mai mare sau egal decat 50 ,dar mai mic decat 100,se aseaza pe raftul 2." << endl;
        cout << "Daca produsul este mai mare sau egal cu 100,se aseaza pe raftul 3.Afisati cate produse" << endl;
        cout << "sunt pe fiecare raft si pretul acestora . Daca nu sunt produse se va afisa cifra 0." << endl;

        int x[1005], nr, u, kont, a[1005], p, b[1005], t, c[1005];
        cout << " Dati numarul de produse din raion ";
        cin >> nr;
        cout << " Dati preturile celor " << nr << " produse ";
        for (u = 1; u <= nr; u++)
        {
            cin >> x[u];
        }
        t = 0;
        kont = 0;
        p = 0;
        for (u = 1; u <= nr; u++)
        {
            if (x[u] < 50)
            {
                p++;
                a[p] = x[u];
            }
            if (x[u] >= 50 && x[u] < 100)
            {
                kont++;
                b[kont] = x[u];
            }
            if (x[u] >= 100)
            {
                t++;
                c[t] = x[u];
            }
        }
        if (p == 0) cout << " Pe raionul 1 sunt " << 0 << " produse " << '\n';
        else {
            cout << " Pe raionul 1 sunt " << p << " produse " << '\n';
            cout << " Acestea costa " << '\n';
            for (u = 1; u <= p; u++)
            {
                cout << a[u] << " " << "lei " << '\n';
            }
        }
        if (kont == 0) cout << " Pe raionul 2 sunt " << 0 << " produse " << '\n';
        else {
            cout << " Pe raionul 2 sunt " << kont << " produse " << '\n';
            cout << " Acestea costa " << '\n';
            for (u = 1; u <= kont; u++)
            {
                cout << b[u] << " " << "lei " << '\n';
            }
        }
        if (t == 0) cout << " Pe raionul 3 sunt " << 0 << " produse " << '\n';
        else {
            cout << " Pe raionul 3 sunt " << t << " produse " << '\n';
            cout << " Acestea costa " << '\n';
            for (u = 1; u <= t; u++)
            {
                cout << c[u] << " " << "lei " << '\n';
            }
        }
    }
    return 0;
}

