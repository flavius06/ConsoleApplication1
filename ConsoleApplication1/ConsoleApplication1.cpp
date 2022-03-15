#include <iostream>
#include <cmath>
#include <windows.h>
#include <conio.h>
#include <chrono>
#include <thread>
#include <stdio.h>
#include <vector>


using namespace std;


HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);




int main() {

    cout << "introduceti parola pentru a accesa biroul sefului de la MEGA IMAGE : \n";
    string parola;
    (cin >> parola);
    bool continous = true; 
    if (parola == "muflex") {
            do {
            SetConsoleTextAttribute
            (GetStdHandle(STD_OUTPUT_HANDLE), 71);
            cout << "            Mega Image           \n\n";

            cout << " Ionutz, un baiat super inteligent pasionat de informatica s-a angajat la Mega Image \n";
            cout << "Aleceti din urmatoarele locatii : \n";
            cout << " fiecare oras reprezinta o cerinta \n";
            cout << " 1 pt Megaul din Cluj \n";
            cout << " 2 pt Megaul din Floresti \n";
            cout << " 3 pt Megaul din Apahida \n";
            cout << " 4 pt Megaul din Dej \n";
            cout << " 5 pt Megaul din Turda \n";
            cout << " Iar ultimele 2 cerinte sunt pentru clientii V.I.P ai magazinului \n";
            cout << " 6 pt a castiga ceva folositor  \n";
            cout << " 7 pentru distractia de la MITITICA \n INFORMATICA DE LA PARNAIE \n";
            int opmode;
            cout << " " << '\n';
            (cin >> opmode);
            
            switch (opmode)
            {
            case 1:

                cout << " Ionutz lucreaza la Mega Image.Nu are un sef foarte bun, tocmai de aceea";
                cout << " l-a pus sa aranjeze produsele de la raionul cu rechizite.El trebuie sa le";
                cout << "aranjeze in ordine crescatoare dupa pret. Fiind baiat destept, Ionutz ";
                cout << "foloseste un algoritm de sortare.Ajuta-l pe Ionutz sa sorteze rechizitele si astfel sa isi ";
                cout << " multumeasca seful. ";

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

            case 2:
                cout << "Acum ajuta-l pe Ionutz sa faca inventarul. Nu se pricepe la matematica,";
                cout << "insa il ajuta informatica.La raionul de dulciuri sunt mai multe tipuri de";
                cout << "ciocolata.";
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

                { float total1 = Kinder * 4.99 + Milka * 7.99 + Poiana * 1.49 + Alba * 3.99 + Heidi * 9.99 + Tbel * 19.99 + Bnutt * 24.99;
                cout << total1; }
                break;

            case 3:
            {


                system("Color 9D");
                cout << " Seful lui Ionutz l-a facut casier . Ionutz accepta deoarece este platit ";
                cout << " mai bine.Dupa cum bine stiti, fiecare persoana trebuie sa aleaga cum ";
                cout << "  plateste.Cash sau card? ";


                cout << "Cum platiti?" << '\n';
                int total2;
                int pin, rest, bani;
                string mod_plata;
                cin >> mod_plata;
                srand((unsigned)time(0));
                total2 = rand() % 600;

                if (mod_plata == "card") {
                    cout << "Aveti de platit \n " << total2 << "lei.Va rugam introduceti pinul." << '\n';
                    (cin >> pin);
                    int k = 0;
                    int cop = pin;
                    do {
                        int uc = cop % 10;
                        cop /= 10;
                        k++;
                    } while (cop != 0);
                    if (k == 4 || pin == 0000) cout << "plata acceptata" << '\n';
                    else cout << "pinul a fost gresit!" << '\n';
                }
                if (mod_plata == "cash") {
                    cout << "Aveti de platit \n " << total2 << "lei. \n Va rugam introduceti suma pe care o dati, pentru a va fi calculat restul." << '\n';
                    (cin >> bani);
                    rest = bani - total2;
                    if (rest > 0) cout << "Uitati aici restul. \n " << rest << " \n Va mai asteptam!<3" << '\n';
                    if (rest == 0) cout << "Va mai asteptam! Multumim!<3" << '\n';


                }

                break;
            }
            case 4:
            {
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
                break;
            }
            case 5:
            {
                system("Color 06");
                cout << "In 3 raioane diferite Ionutz trebuie sa selecteze produsele traditional Romanesti." << '\n';
                cout << "Se da numarul tuturor produselor si se stie ca toate produsele traditionale au pretul un nr prim ." << '\n';
                cout << "Ionutz are de ordonat crescator preturile care sunt prime,iar cu cele care nu sunt" << '\n';
                cout << "prime trebuie sa le aranjeze in ordinde descrescatoare." << '\n';
                int nrr, ii, m[1005], d, we[1005], cnt, l[1005], e = 0, auxx;

                cout << " Cate produse are Ionutz de selectat ?" << '\n';
                cin >> nrr;
                cout << " Care sunt preturile celor " << nrr << " produse ? " << '\n';
                for (ii = 1; ii <= nrr; ii++)
                {
                    cin >> m[ii];
                }
                cnt = 0;
                for (ii = 1; ii <= nrr; ii++)
                {
                    bool adv = true;

                    if (m[ii] < 2) adv = false;
                    for (d = 2; d <= m[ii] / 2; d++)
                    {
                        if (m[ii] % d == 0) adv = 0;
                    }
                    if (adv == true)
                    {
                        cnt++;
                        we[cnt] = m[ii];
                    }
                    else
                    {
                        e++;
                        l[e] = m[ii];
                    }
                }
                cout << " Acum aveti " << cnt << " preturi care sunt prime " << "si " << e << " preturi care nu sunt prime ." << '\n';
                cout << " Sa incepem cu produsele traditionale, adica cele care au pretul prim ." << '\n';
                cout << " Preturile produselor traditionale ordonate corespunzator de catre Ionutz sunt :" << '\n';
                for (ii = 1; ii <= cnt - 1; ii++)
                {
                    for (int j = ii + 1; j <= cnt; j++)
                    {
                        if (we[ii] > we[j])
                        {
                            auxx = we[ii];
                            we[ii] = we[j];
                            we[j] = auxx;
                        }
                    }
                }
                for (ii = 1; ii <= cnt; ii++)
                {
                    cout << we[ii] << " " << '\n';
                }
                cout << " Preturile produselor cu pret neprim ordonate corespunzator de catre Ionutz sunt :" << '\n';
                for (ii = 1; ii <= e - 1; ii++)
                {
                    for (int j = ii + 1; j <= e; j++)
                    {
                        if (l[ii] < l[j])
                        {
                            auxx = l[ii];
                            l[ii] = l[j];
                            l[j] = auxx;
                        }
                    }
                }
                for (ii = 1; ii <= e; ii++)
                {
                    cout << l[ii] << " ";
                }
            }
            case 6:
            {  system(" Color E5");
            cout << "Deoarece sunteti clienti fideli ai magazinului Mega, astazi aveti ocazia sa castigati un discount \n";
            cout << "Va rugam sa introduceti suma pe care o platiti la Mega la o sesiune fortzaa de shoping. \n";
            int discount;
            int total3;
            cout << " Cat costa toate produsele ? " << '\n';
            cin >> total3;



            if (total3 < 30) cout << " Ne cerem scuze, nu va putem oferi discount-ul .";
            else
            {
                srand((unsigned)time(0));
                discount = rand() % 100;
                int pret_nou = total3 - (discount / 100) * total3;
                cout << " Felicitari , a-ti castigat un discount aleatoriu ! " << "Acesta e in valoare de: " << discount << "%" << '\n';
                cout << " Noul pret este:  " << pret_nou << " Mult succes ! " << '\n';
            }
            }
            case 7:
            {   
                system(" Color F1");
                cout << " Ionutz a fost prins de catre ANAF ca facea evaziune fiscala." << '\n';
                cout << " Acum tu trebuie sa îi decizi sentinta. " << '\n';
                int ani_puscarie;
                cout << " Cati ani va sta Ionutz la puscarie ? " << '\n';
                cin >> ani_puscarie;
                if (ani_puscarie <= 10) cout << " Prea usoara pedeapsa  ";
                if (ani_puscarie > 10 && ani_puscarie <= 20) cout << " Pedeapsa perfecta \n";
                if (ani_puscarie > 20) cout << " Ionutz va muri in puscarie . \n";
            }

            }
            cout << "Pentru a te reintoarece la meniu principal scrie parola din nou \n";
            string parola;
            cin >> parola;
            if (parola == "muflex") continous = true;
            else continous = false; 
        } while (continous); 
    }
    else {
    cout << "MARS DE AICI BA ESENTZA !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! \n";
    cout << "MAfia popescu";
}
    _getch(); 
}

