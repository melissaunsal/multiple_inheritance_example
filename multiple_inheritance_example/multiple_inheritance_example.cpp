
#include <iostream>
using namespace std;
class printer {
public :
	string brand;
	printer(string brand) :brand(brand){
		cout << "Yazici sinifi" << endl;

	}
};
class scanner {
public:
	string brand;
	scanner(string brand) :brand(brand) {

		cout << "tarayici sinifi" << endl;
	}
};
class ScannerPrinter :public scanner, public printer {
public: 
	ScannerPrinter(string m1, string m2): scanner(m1) ,printer(m2){
		cout << "Tarayiciliyazici" << endl;
		cout << scanner::brand << endl;
		cout << printer::brand << endl;
	}
};
int main()
{
	ScannerPrinter ty("Hp", "asus");
	cout << ty.printer::brand << endl;
	cout << endl;

	return 0;
}

// Programı çalıştır: Ctrl + F5 veya Hata Ayıkla > Hata Ayıklamadan Başlat menüsü
// Programda hata ayıkla: F5 veya Hata Ayıkla > Hata Ayıklamayı Başlat menüsü

// Kullanmaya Başlama İpuçları: 
//   1. Dosyaları eklemek/yönetmek için Çözüm Gezgini penceresini kullanın
//   2. Kaynak denetimine bağlanmak için Takım Gezgini penceresini kullanın
//   3. Derleme çıktısını ve diğer iletileri görmek için Çıktı penceresini kullanın
//   4. Hataları görüntülemek için Hata Listesi penceresini kullanın
//   5. Yeni kod dosyaları oluşturmak için Projeye Git > Yeni Öğe ekle veya varolan kod dosyalarını projeye eklemek için Proje > Var Olan Öğeyi Ekle adımlarını izleyin
//   6. Bu projeyi daha sonra yeniden açmak için Dosya > Aç > Proje'ye gidip .sln uzantılı dosyayı seçin
