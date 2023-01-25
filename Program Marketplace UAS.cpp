#include <iostream>
using namespace std;

	
	int sequentialsearch(string barang[], int jumlah_elemen, string key){
		bool status=false;
		for(int i=0; i<jumlah_elemen; i++){
			if(key==barang [i]){
				status=true;
				return i;
				break;
				
			}
		}
		
		if (status==false)
		return -1;
	}
	struct sepatu{
	string merk;
	
};
	int main(){

		int i=0;
		int pilihan;
		char yesNo;
		string daftar_barang[]={"nike","adidas", "puma", "rebook", "ortus"};
		int harga[5]={1200000,1250000,950000,1350000,1000000};
		int jumlah,total=0;
		int input_kode [jumlah];
		int input_jumlah [jumlah];
		bool lunas=false;
		int jml_uang;
		int kembalian=jml_uang-total;
		
		
	do{
	
	
	cout <<"=============================" << endl;
	cout <<"|      SEPATU DUA TIGA      | " << endl;
	cout <<"=============================" << endl;
	cout <<"Pilihan Menu :" << endl;
	cout <<"1. Lihat Pricelist" << endl;
	cout <<"2. Cari Harga Barang" << endl;
	cout <<"3. Mulai Order" << endl;
	cout <<"4. Bayar" << endl;
	cout <<"5. Cetak Receipt" << endl;
	cout << endl;
	
	cout << "Inputkan Menu : ";
	cin >> pilihan;
	cout << endl;

	
	switch(pilihan){
	case 1 :
		cout << "=============== Pricelist ===============" << endl;
		cout << "1. NIKE \t : Rp1.200.000" << endl;
		cout << "2. ADIDAS \t : Rp1.250.000" << endl;
		cout << "3. PUMA \t : Rp950.000" << endl;
		cout << "4. REBOOK \t : Rp1.350.000" << endl;
		cout << "5. ORTUS \t : Rp1.000.000" << endl;
		cout << endl;
	break;
	
	case 2:
	{
		int jumlah_elemen=sizeof(daftar_barang)/sizeof(daftar_barang[0]);
		string key;

		cout <<"masukkan barang yang dicari : ";
		cin >> key;
		
		int i=sequentialsearch(daftar_barang,jumlah_elemen,key);
		if (i==-1){
			cout <<"harga barang tidak ditemukan";
		}
		else{
			cout <<"harga barang yang dicari : Rp." <<  harga[i] << endl;
		}
		cout << endl;
	break;
	}
	
	case 3:
	{
			
		cout << "======Pilihan Produk======" << endl;
		cout << "1. NIKE \t : Rp1.200.000" << endl;
		cout << "2. ADIDAS \t : Rp1.250.000" << endl;
		cout << "3. PUMA \t : Rp950.000" << endl;
		cout << "4. REBOOK \t : Rp1.350.000" << endl;
		cout << "5. ORTUS \t : Rp1.000.000" << endl;
		cout << endl;

		cout << "Jumlah barang yang ingin di beli : ";
		cin >> jumlah;
		cout << endl;
	
		for (int i=0; i<jumlah; i++){
			cout << "Input barang Ke- " << i+1 << ":";
			cin >> input_kode[i];
			cout << "Masukan jumlah Barang : ";
			cin >> input_jumlah[i];
			cout << endl;
			int bayar = input_jumlah[i]*harga[input_kode[i]-1];
			total = total + bayar;
		}
		if(jumlah==0){
			cout <<"Jumlah barang Tidak boleh : 0";
			cout << endl;
		}
		else{
			cout << "jumlah yg harus di bayar : Rp." << total ;
			cout << endl;
		}
	
	
	break;
	}
	
	case 4:
	{

		if(total==0){
			cout <<"silahkan order terlebih dahulu" << endl;
		}
		else{
			cout <<"jumlah yg harus di bayar : Rp." << total << endl;
			cout <<"Masukkan Jumlah Uang : Rp.";
			cin >> jml_uang;
	
		
		if(jml_uang<total){
			cout <<"Uang Anda Kurang";
			cout << endl;
		}
		else{
			cout << endl;
			cout <<"Kembalian : Rp." << jml_uang-total;
			lunas=true;
			cout << endl;
		}
		}
		
	break;
	}	
	case 5:
		if (lunas!=true) {
			cout << "Lakukan Pembayaran Terlebih Dahulu" << endl;
		}
		
		else{
			cout << "=========================== INVOICE ============================" << endl;
			cout << "No  |     Nama Barang      | Harga Barang/pc |  Jumlah  | Total "	<< endl;
			
			for (i=0; i<jumlah; i++) {
				cout << i+1 <<             "	|" << daftar_barang[input_kode[i]-1] << "   | Rp. " 
			<<  harga[input_kode[i]-1]<<   "	    |" << input_jumlah[i]<<    "		|" <<  harga[input_kode[i]-1] << endl;
		}
		
			cout << endl;
			cout << "Total harga yang harus dibayar : " << total << endl;
			cout << "Uang Pembayaran : " << jml_uang << endl;
			cout << "Kembalian : " << jml_uang-total;
			cout << endl;
			cout << "Terima kasih telah berbelanja di toko kami " << endl;
		}
		break;
		
		default:
		cout << "Masukkan anda salah" << endl;
	
}

		cout << "Pilih Menu lain(Y/N)?";
		cin >> yesNo;
		cout << endl;
}

	while(i<=2);
	return 0;

	}
