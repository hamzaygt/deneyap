#include <iostream>

using namespace std;
int main(){
    int kalori;
    int harcanilan;
    int sayi;
    int durum;
    int puan;

    cout << "Yaktiginiz toplam kaloriyi yazininiz" << endl;
    cin >> sayi;
    cout << "Bugun yaktigin toplam kalori = " << sayi << endl;

    if ( sayi > 1000){

        cout << "Yuh bir gunde bu kadar kosmus olamazsin git biraz dinlen!" << endl;





    }
    else if ( sayi < 1000){

        cout << "Butun gun yatmissin kalk disarida dolan biraz!" << endl;
            }


            cout << "Su an nasil hissediyorsun ? "<< endl;
            cout << "iyi = 1" << endl;
            cout << "Normal = 0" << endl;
            cout << "Kotu = -1'e bas" << endl;
            cin >> durum;

            if( durum = 1){

                cout << "Yasasin ne kadar guzel" << endl;
                cout << "Bana puan vermelisin 10 uzerinden" << endl;
                cin >> puan;
                if( puan > 10){
                    cout << "iyi ki 10 uzerinden dedik neyse bu da olur tesekkurler ^^" << endl;
                }
                else{
                    cout << "Geri donusun icin tesekkurler ^^ " << endl;
                }

            }
            else if (durum = 0){


             cout << "biraz mutlu olsana" << endl;

            cout << "Bana puan vermelisin 10 uzerinden" << endl;
                cin >> puan;
                if( puan > 10){
                    cout << "iyi ki 10 uzerinden dedik neyse bu da olur tesekkurler ^^" << endl;
                }
                else{
                    cout << "Geri donusun icin tesekkurler ^^ " << endl;
                }
            }
            else if (durum = -1 ){

                cout << "Umarim bir gun mutlu olursun" << endl;
                cout << "Bana puan vermelisin 10 uzerinden" << endl;
                cin >> puan;
                if( puan > 10){
                    cout << "iyi ki 10 uzerinden dedik neyse bu da olur tesekkurler ^^" << endl;
                }
                else{
                    cout << "Geri donusun icin tesekkurler ^^ " << endl;
                }

            }



      return 0;



}
