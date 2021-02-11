#include <iostream>
using namespace std;
class Sekil
{
public:
	class Daire {
	public:
		int yaricap;
		float pi = 3.14;
		Daire(int yaricap = 0) {
			this->yaricap = yaricap;
		}
		void daire_alan(){
			float op = pi * this->yaricap * this->yaricap;
			cout << "Yari Capi Girilen Dairenin Alani: " << op << endl;
		}
		void daire_cevre(){
			float op = 2 * pi * this->yaricap;
			cout << "Yari Capi Girilen Dairenin Cevresi: "<< op << endl;
		}
		bool feedback() {
			if ((this->yaricap) == 0) {
				return true;
			}
			else {
				return false;
			}
		}
		void sil() {
			this->yaricap = 0;
			cout << "Daire Basarili Bir Sekilde Silindi Artik Yenisini Olusturabilirsiniz." << endl;
		}
	};
	class Dortgen {
	public:
		class Kare {
		public:
			int kose;
			Kare(int kose = 0) {
				this->kose = kose;
			}
			void kare_alan() {
				int op = this->kose * this->kose;
				cout << "Kosesi Girilen Karenin Alani: " << op << endl;
			}
			void kare_cevre() {
				int op = this->kose + this->kose + this->kose + this->kose;
				cout << "Kosesi Girilen Karenin Cevresi: " << op << endl;
			}
			bool feedback() {
				if ((this->kose) == 0) {
					return true;
				}
				else {
					return false;
				}
			}
			void sil() {
				this->kose = 0;
				cout << "Kare Basarili Bir Sekilde Silindi Artik Yenisini Olusturabilirsiniz." << endl;
			}
		};
		class Dikdortgen {
		public:
			int kisakenar;
			int uzunkenar;
			Dikdortgen(int uzunkenar = 0,int kisakenar = 0) {
				this->uzunkenar = uzunkenar;
				this->kisakenar = kisakenar;
			}
			void dikdortgen_alan() {
				int op = this->kisakenar * this->uzunkenar;
				cout << "Kosesi Girilen Dikdortgenin Alani: " << op << endl;
			}
			void dikdortgen_cevre() {
				int op = this->kisakenar + this->uzunkenar + this->kisakenar + this->uzunkenar;
				cout << "Kosesi Girilen Dikdortgenin Cevresi: " << op << endl;
			}
			bool feedback() {
				if ((this->kisakenar) == 0 && this->uzunkenar == 0) {
					return true;
				}
				else {
					return false;
				}
			}
			void sil() {
				this->uzunkenar = 0;
				this->kisakenar = 0;
				cout << "Dikdortgen Basarili Bir Sekilde Silindi Artik Yenisini Olusturabilirsiniz." << endl;
			}
		};
	};
	class Ucgen {
	public:
		class dik_ucgen {
		public:
			int yukseklik;
			int taban;
			dik_ucgen(int yukseklik = 0, int taban = 0) {
				this->yukseklik = yukseklik;
				this->taban = taban;
			}
			void dik_ucgen_cevre(){
				int uzunkenar = sqrt(this->yukseklik * this->yukseklik + this->taban * this->taban);
				int op = this->yukseklik + this->taban + uzunkenar;
				cout << "Koseleri Girilen Dik Ucgenin Cevresi: " << op << endl;
			}
			void dik_ucgen_alan() {
				int op = (this->yukseklik * this->taban) / 2;
				cout << "Koseleri Girilen Dik Ucgenin Alani: " << op << endl;
			}
			bool feedback() {
				if ((this->taban) == 0 && this->yukseklik == 0) {
					return true;
				}
				else {
					return false;
				}
			}
			void sil() {
				this->taban = 0;
				this->yukseklik = 0;
				cout << "Dik Ucgen Basarili Bir Sekilde Silindi Artik Yenisini Olusturabilirsiniz." << endl;
			}
			
		};
		class eskenar_ucgen {
		public:
			int kenar;
			eskenar_ucgen(int kenar = 0) {
				this->kenar = kenar;
			}
			void eskenar_ucgen_cevre() {
				int op = this->kenar *3;
				cout << "Kosesi Girilen Eskenar Ucgenin Cevresi: " << op << endl;
			}
			void eskenar_ucgen_alan() {
				int op = (sqrt(3) / 4) * (this->kenar * this->kenar);
				cout << "Koseleri Girilen Dik Ucgenin Alani: " << op << endl;
			}
			bool feedback() {
				if ((this->kenar) == 0) {
					return true;
				}
				else {
					return false;
				}
			}
			void sil() {
				this->kenar = 0;
				cout << "Es Kenar Ucgen Basarili Bir Sekilde Silindi Artik Yenisini Olusturabilirsiniz." << endl;
			}
		};
		class ikizkenar_ucgen {
		public:
			int ikizkenar;
			int taban;
			ikizkenar_ucgen(int ikizkenar = 0,int taban = 0) {
				this->ikizkenar = ikizkenar;
				this->taban = taban;
			}
			void ikizkenar_ucgen_cevre() {
				int op = (2 * this->ikizkenar) + this->taban;
				cout << "Koseleri ve Tabani Girilen Ikizkenar Ucgenin Cevresi: " << op << endl;
			}
			void ikizkenar_ucgen_alan() {
				int x = ((2 * this->ikizkenar) + this->taban)/2;
				int op = sqrt(x * (x - this->ikizkenar) * (x - this->ikizkenar) * (x - this->taban));
				cout << "Koseleri ve Tabani Girilen Ikizkenar Ucgenin Alani: " << op << endl;
			}
			bool feedback() {
				if ((this->ikizkenar) == 0 && (this->taban) == 0) {
					return true;
				}
				else {
					return false;
				}
			}
			void sil() {
				this->ikizkenar = 0;
				this->taban = 0;
				cout << "Ikizkenar Ucgen Basarili Bir Sekilde Silindi Artik Yenisini Olusturabilirsiniz." << endl;
			}
		};
	};
};
