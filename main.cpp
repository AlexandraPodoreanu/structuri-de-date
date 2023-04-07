#include<iostream>
using namespace std;

int main() {
    int n, v[100];
    cout << "Numarul de elemente din vector: ";
    cin >> n;
    for(int i=0; i<n; i++) {
        cout << "Elementul de pe pozitia " << i << ": ";
        cin >> v[i];
    }
    int c, ins;
    cout << "Adauga un numar pe pozitia: ";
    cin >> c;
    cout << "Adauga numarul: ";
    cin >> ins;

    if(c<n) {
        n++;
        for(int i=n-1; i>=c; i--)
            v[i]=v[i-1];
        v[c]=ins;
        for(int i=0; i<n; i++)
            cout << v[i] << " ";
    } else if(c==n) {
        v[n]=ins;}
        else cout<<"pozitie incorecta";
        int val;
        cout << "Adauga la sfarsitul vectorului valoarea: ";
        cin >> val;
        v[n++] = val;
        //Adaugarea mai multor valori in vector;
        int k=0,i,vnou[100];
        int valoare,valu;
        cout<<"adaugam numarul ..";
        cin>>valoare;
        cout<<"dupa elementul ..";
        cin>>valu;
        for ( i=0 ; i<n ; i++ ) {
         vnou[++k]=v[i];
         if  (v[i]==valu)
         vnou[++k]=valoare;
        }
        n=k;
        for ( i=0; i<n; i++) v[i]=vnou[i];
        for(i=1;i<=n;i++) cout<<v[i];
    return 0;
}
