#include <iostream>
#include "classlar.h"
using namespace std;

int main()
{
    int secim,kisakenar,uzunkenar,yaricap,kose,yukseklik,taban,ikizkenar,kenar;
    Sekil::Daire mainDaire;
    Sekil::Dortgen::Dikdortgen mainDDortgen;
    Sekil::Dortgen::Kare mainKare;
    Sekil::Ucgen::dik_ucgen mainDUcgen;
    Sekil::Ucgen::eskenar_ucgen mainEUcgen;
    Sekil::Ucgen::ikizkenar_ucgen mainIkizUcgen;
    while (1) {
        secim = 0;
        cout << "Islem Yapmak Istediginiz Sekli Seciniz: " << endl;
        cout << "1) Daire" << endl << "2) Dortgen" << endl << "3) Ucgen" << endl;
        cin >> secim;
        switch (secim)
        {
        case 1:
            system("CLS");
            secim = 0;
            cout << "1) Daire Olustur" << endl << "2) Olusturulan Dairenin Alanini Bul" << endl <<"3) Olusturulan Dairenin Cevresini Bul" << endl << "4) Olusturulan Daireyi Sil" << endl;
            cin >> secim;
            switch (secim)
            {
            case 1:
                if (mainDaire.feedback()) {
                    system("CLS");
                    cout << "Olusturmak Istediginiz Dairenin Yaricapini Giriniz: ";
                    cin >> yaricap;
                    if (yaricap > 0) {
                        mainDaire = Sekil::Daire::Daire(yaricap);
                    }
                    else {
                        system("CLS");
                        cout << "HATA: Dairenin Yaricapi 0 dan Buyuk Olmalidir." << endl;
                        break;
                    }
                }
                else {
                    system("CLS");
                    cout << "HATA: Daha Once Bir Daire Olusturulmus." << endl;
                    break;
                }
                break;
            case 2:
                if (mainDaire.feedback()) {
                    system("CLS");
                    cout << "HATA: Olusturulmamis Bir Dairenin Alani Bulunamaz" << endl;
                }
                else {
                    system("CLS");
                    mainDaire.daire_alan();
                    break;
                }
                break;
            case 3:
                if (mainDaire.feedback()) {
                    system("CLS");
                    cout << "HATA: Olusturulmamis Bir Dairenin Cevresi Bulunamaz" << endl;
                }
                else {
                    system("CLS");
                    mainDaire.daire_cevre();
                    break;
                }
                break;
            case 4:
                system("CLS");
                if (mainDaire.feedback()) {
                    system("CLS");
                    cout << "HATA: Olusturulmamis Bir Dairenin Silemezsiniz." << endl;
                }else{
                    mainDaire.sil();
                }
                break;
            default:
                break;
            }
            break;
        case 2:
            secim = 0;
            system("CLS");
            cout << "Bir Dortgen Seciniz" << endl;
            cout << "1) Dikdortgen" << endl << "2) Kare" << endl;
            cin >> secim;
            switch (secim)
            {
            case 1:
                system("CLS");
                secim = 0;
                cout << "1) Dikdortgen Olustur" << endl << "2) Olusturulan Dikdortgenin Alanini Bul" << endl << "3) Olusturulan Dikdortgenin Cevresini Bul" << endl << "4) Olusturulan Dikdortgeni Sil" << endl;
                cin >> secim;
                switch (secim)
                {
                case 1:
                    if (mainDDortgen.feedback()) {
                        system("CLS");
                        cout << "Olusturmak Istediginiz Dikdortgen Icın Gerekli Bilgileri Giriniz: Uzun Kenar | Kisa Kenar" << endl;
                        cin >> uzunkenar >> kisakenar;
                        if (uzunkenar > 0 && kisakenar > 0) {
                            mainDDortgen = Sekil::Dortgen::Dikdortgen::Dikdortgen(uzunkenar, kisakenar);
                        }
                        else {
                            system("CLS");
                            cout << "HATA: Dikdortgenin Kenarlari 0 dan Buyuk Olmalidir." << endl;
                            break;
                        }
                    }
                    else {
                        system("CLS");
                        cout << "HATA: Daha Once Bir Dikdortgen Olusturulmus." << endl;
                        break;
                    }
                    break;
                case 2:
                    if (mainDDortgen.feedback()) {
                        system("CLS");
                        cout << "HATA: Olusturulmamis Bir Dikdortgenin Alani Bulunamaz" << endl;
                    }
                    else {
                        system("CLS");
                        mainDDortgen.dikdortgen_alan();
                        break;
                    }
                    break;
                case 3:
                    if (mainDDortgen.feedback()) {
                        system("CLS");
                        cout << "HATA: Olusturulmamis Bir Dikdortgenin Cevresi Bulunamaz" << endl;
                    }
                    else {
                        system("CLS");
                        mainDDortgen.dikdortgen_cevre();
                        break;
                    }
                    break;
                case 4:
                    system("CLS");
                    if (mainDDortgen.feedback()) {
                        system("CLS");
                        cout << "HATA: Olusturulmamis Bir Dikdortgeni Silemezsiniz." << endl;
                    }
                    else {
                        mainDDortgen.sil();
                    }
                    break;
                default:
                    break;
                }
                break;
            case 2:
                system("CLS");
                secim = 0;
                cout << "1) Kare Olustur" << endl << "2) Olusturulan Karenin Alanini Bul" << endl << "3) Olusturulan Karenin Cevresini Bul" << endl << "4) Olusturulan Kareyi Sil" << endl;
                cin >> secim;
                switch (secim)
                {
                case 1:
                    if (mainKare.feedback()) {
                        system("CLS");
                        cout << "Olusturmak Istediginiz Karenin Kosesini Giriniz:" << endl;
                        cin >> kose;
                        if (kose > 0) {
                            mainKare = Sekil::Dortgen::Kare::Kare(kose);
                        }
                        else {
                            system("CLS");
                            cout << "HATA: Karenin Kenarlari 0 dan Buyuk Olmalidir." << endl;
                            break;
                        }
                    }
                    else {
                        system("CLS");
                        cout << "HATA: Daha Once Bir Kare Olusturulmus." << endl;
                        break;
                    }
                    break;
                case 2:
                    if (mainKare.feedback()) {
                        system("CLS");
                        cout << "HATA: Olusturulmamis Bir Karenin Alani Bulunamaz" << endl;
                    }
                    else {
                        system("CLS");
                        mainKare.kare_alan();
                        break;
                    }
                    break;
                case 3:
                    if (mainKare.feedback()) {
                        system("CLS");
                        cout << "HATA: Olusturulmamis Bir Karenin Cevresi Bulunamaz" << endl;
                    }
                    else {
                        system("CLS");
                        mainKare.kare_cevre();
                        break;
                    }
                    break;
                case 4:
                    system("CLS");
                    if (mainKare.feedback()) {
                        system("CLS");
                        cout << "HATA: Olusturulmamis Bir Karenin Silemezsiniz." << endl;
                    }
                    else {
                        mainKare.sil();
                    }
                    break;
                default:
                    break;
                }
                break;
            default:
                break;
            }
            break;
        case 3:
            secim = 0;
            system("CLS");
            cout << "Islem Yapmak Istediginiz Ucgen Turunu Seciniz" << endl;
            cout << "1) Dik Ucgen" << endl << "2) Es Kenar Ucgen" << endl << "3) Ikiz Kenar Ucgen" << endl;
            cin >> secim;
            switch (secim)
            {
            case 1:
                system("CLS");
                secim = 0;
                cout << "1) Dik Ucgen Olustur" << endl << "2) Olusturulan Dik Ucgenin Alanini Bul" << endl << "3) Olusturulan Dik Ucgenin Cevresini Bul" << endl << "4) Olusturulan Dik Ucgeni Sil" << endl;
                cin >> secim;
                switch (secim) {
                case 1:
                    if (mainDUcgen.feedback()) {
                        system("CLS");
                        cout << "Olusturmak Istediginiz Dik Ucgenin Yukseklik ve Tabanini Giriniz:" << endl;
                        cin >> yukseklik >> taban;
                        if (yukseklik > 0 && taban > 0) {
                            mainDUcgen = Sekil::Ucgen::dik_ucgen::dik_ucgen(yukseklik,taban);
                        }
                        else {
                            system("CLS");
                            cout << "HATA: Dik Ucgenin Yuksekligi ve  Tabani 0 dan Buyuk Olmalidir." << endl;
                            break;
                        }
                    }
                    else {
                        system("CLS");
                        cout << "HATA: Daha Once Bir Dik Ucgen Olusturulmus." << endl;
                        break;
                    }
                    break;
                case 2:
                    if (mainDUcgen.feedback()) {
                        system("CLS");
                        cout << "HATA: Olusturulmamis Bir Dik Ucgenin Alani Bulunamaz" << endl;
                    }
                    else {
                        system("CLS");
                        mainDUcgen.dik_ucgen_alan();
                        break;
                    }
                    break;
                case 3:
                    if (mainDUcgen.feedback()) {
                        system("CLS");
                        cout << "HATA: Olusturulmamis Bir Dik Ucgenin Cevresi Bulunamaz" << endl;
                    }
                    else {
                        system("CLS");
                        mainDUcgen.dik_ucgen_cevre();
                        break;
                    }
                    break;
                case 4:
                    system("CLS");
                    if (mainDUcgen.feedback()) {
                        system("CLS");
                        cout << "HATA: Olusturulmamis Bir Dik Ucgenin Silemezsiniz." << endl;
                    }
                    else {
                        mainDUcgen.sil();
                    }
                    break;
                default:
                    break;
                }
                break;
            case 2:
                system("CLS");
                secim = 0;
                cout << "1) Es Kenar Ucgen Olustur" << endl << "2) Olusturulan Es Kenar Ucgenin Alanini Bul" << endl << "3) Olusturulan Es Kenar Ucgenin Cevresini Bul" << endl << "4) Olusturulan Es Kenar Ucgeni Sil" << endl;
                cin >> secim;
                switch (secim) {
                case 1:
                    if (mainEUcgen.feedback()) {
                        system("CLS");
                        cout << "Olusturmak Istediginiz Es Kenar Ucgenin Kosesini Giriniz:" << endl;
                        cin >> kenar;
                        if (kenar > 0) {
                            mainEUcgen = Sekil::Ucgen::eskenar_ucgen::eskenar_ucgen(kenar);
                        }
                        else {
                            system("CLS");
                            cout << "HATA: Es Kenar Ucgenin Kenari 0 dan Buyuk Olmalidir." << endl;
                            break;
                        }
                    }
                    else {
                        system("CLS");
                        cout << "HATA: Daha Once Bir Es Kenar Ucgen Olusturulmus." << endl;
                        break;
                    }
                    break;
                case 2:
                    if (mainEUcgen.feedback()) {
                        system("CLS");
                        cout << "HATA: Olusturulmamis Bir Es Kenar Ucgenin Alani Bulunamaz" << endl;
                    }
                    else {
                        system("CLS");
                        mainEUcgen.eskenar_ucgen_alan();
                        break;
                    }
                    break;
                case 3:
                    if (mainEUcgen.feedback()) {
                        system("CLS");
                        cout << "HATA: Olusturulmamis Bir Es Kenar Ucgenin Cevresi Bulunamaz" << endl;
                    }
                    else {
                        system("CLS");
                        mainEUcgen.eskenar_ucgen_cevre();
                        break;
                    }
                    break;
                case 4:
                    system("CLS");
                    if (mainEUcgen.feedback()) {
                        system("CLS");
                        cout << "HATA: Olusturulmamis Bir Es Kenar Ucgeni Silemezsiniz." << endl;
                    }
                    else {
                        mainEUcgen.sil();
                    }
                    break;
                default:
                    break;
                }
                break;
            case 3:
                system("CLS");
                secim = 0;
                cout << "1) Ikiz Kenar Ucgen Olustur" << endl << "2) Olusturulan Ikiz Kenar Ucgenin Alanini Bul" << endl << "3) Olusturulan Ikiz Kenar Ucgenin Cevresini Bul" << endl << "4) Olusturulan Ikiz Kenar Ucgeni Sil" << endl;
                cin >> secim;
                switch (secim) {
                case 1:
                    if (mainIkizUcgen.feedback()) {
                        system("CLS");
                        cout << "Olusturmak Istediginiz Ikız Ucgenin Yukseklik ve Tabani Giriniz:" << endl;
                        cin >> ikizkenar >> taban;
                        if (ikizkenar > 0 && taban > 0) {
                            mainIkizUcgen = Sekil::Ucgen::ikizkenar_ucgen::ikizkenar_ucgen(ikizkenar, taban);
                        }
                        else {
                            system("CLS");
                            cout << "HATA: Ikiz Kenar Ucgenin Yuksekligi ve Tabani 0 dan Buyuk Olmalidir." << endl;
                            break;
                        }
                    }
                    else {
                        system("CLS");
                        cout << "HATA: Daha Once Bir Ikız Kenar Ucgen Olusturulmus." << endl;
                        break;
                    }
                    break;
                case 2:
                    if (mainIkizUcgen.feedback()) {
                        system("CLS");
                        cout << "HATA: Olusturulmamis Bir Ikiz Kenar Ucgenin Alani Bulunamaz" << endl;
                    }
                    else {
                        system("CLS");
                        mainIkizUcgen.ikizkenar_ucgen_alan();
                        break;
                    }
                    break;
                case 3:
                    if (mainIkizUcgen.feedback()) {
                        system("CLS");
                        cout << "HATA: Olusturulmamis Bir Ikiz Kenar Ucgenin Cevresi Bulunamaz" << endl;
                    }
                    else {
                        system("CLS");
                        mainIkizUcgen.ikizkenar_ucgen_cevre();
                        break;
                    }
                    break;
                case 4:
                    system("CLS");
                    if (mainIkizUcgen.feedback()) {
                        system("CLS");
                        cout << "HATA: Olusturulmamis Bir Ikiz Kenar Ucgeni Silemezsiniz." << endl;
                    }
                    else {
                        mainIkizUcgen.sil();
                    }
                    break;
                default:
                    break;
                }
                break;
            default:
                break;
            }
            break;
        default:
            cout << "Yanlis Tusa Bastiniz Ana Menuye Yonlendiriliyorsunuz." << endl;
            break;
        }
    }
}
