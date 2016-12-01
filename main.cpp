//
//  main.cpp
//  main
//
//  Created by Dylan Delhommois on 01/12/2016.
//  Copyright © 2016 Dylan Delhommois. All rights reserved.
//

#include <iostream>

#include <iostream>
#include <cstdlib>

using namespace std;

int factorielle()
{
    int n;
    int resultat=1;
    cin >> n;
    if(n != 0)
    {
        
        for(int i=1; i<=n; i++)
        {
            resultat = resultat*i;
        }
    }
    else
    {
        resultat = 1;
    }
    cout << "Le resultat de factorielle de " << n << " est " << resultat;
    return 0;
}

double somme_produit_moyenne()
{
    int nb_val;
    double somme = 0;
    double produit = 1;
    double moyenne;
    cout << "Combien de valeurs voulez-vous saisir ?: ";
    cin >> nb_val;
    double valeurs[nb_val];
    
    
    for(int i = 1; i<nb_val+1; i++)
    {
        cout << "Merci de saisir la valeur " << i << ": ";
        cin >> valeurs[i];
    }
    
    cout << "\n\n";
    
    
    for(int i = 1; i<nb_val+1; i++)
    {
        somme = somme + valeurs[i];
    }
    cout << "La somme des valeurs est : " << somme << "\n";
    
    
    moyenne = somme/nb_val;
    cout << "La moyenne des valeurs est : " << moyenne << "\n";
    
    
    for(int i = 1; i<nb_val+1; i++)
    {
        produit = produit * valeurs[i];
    }
    cout << "Le produit des valeurs est : " << produit << "\n";
    return 0;
}

int puissance()
{
    int x,y,resultat;
    cout << "Saisir X: ";
    cin >> x;
    cout << "Saisir Y: ";
    cin >> y;
    resultat = x;
    for(int i=1; i<y; i++)
    {
        resultat = resultat*x;
    }
    cout << x << "^" << y << "= " << resultat;
    return 0;
}

double somme_serie_harmonique()
{
    double resultat = 0.000;
    int n;
    cout << "Combien de valeurs hamonique voulez-vous calculer ?: ";
    cin >> n;
    cout << "\n\n";
    for(int i=1; i<n; i++)
    {
        resultat = resultat + 1/i;
    }
    cout << "La valeur de votre calcul harmonique vaut : " << resultat;
    return 0;
}

int PGCD()
{
    int a,b,reste;
    cout << "Saisir A: ";
    cin >> a;
    cout << "Saisir B (avec b<a): ";
    cin >> b;
    while(b>a)
    {
        cout << "Saisir B (B doit estre inferieur a "<< a <<"): ";
        cin >> b;
    }
    while(a%b != 0){
        reste = a%b;
        a = b;
        b = reste;
    }
    cout << "Le PGCD de a et b est: "<< b;
    return 0;
}

int fibonacci()
{
    int n;
    int resultat;
    int i;
    cout << "Quel terme de la suite de Fibonnaci voulez-vous calculer ?: ";
    cin >> n;
    int suite[n];
    suite[0] = 1;
    suite[1] = 1;
    for(i=2; i<n; i++)
    {
        resultat = suite[i-2] + suite[i-1];
        suite[i] = resultat;
        cout << suite[i] << "\n";
    }
    return 0;
}

double square(){
    double A,X;
    int i,j;
    cout << "entrez la valeur à calculer";
    cin >> A;
    cout << "entrez la précision:";
    cin >> j;
    X = A;
    for (i=0; i<j; i=i+1){
        X=(X+(A/X))/2;
        cout << "L'approximation n° " << i << " de " << A << " est " << X << "\n";
        
    }
    cout << "la racine carrée de A est : " << X;
    return 0;
}

int main()
{
    square();
    return 0;
}
