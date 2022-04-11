#include <iostream>
#include <vector>

#include "include/person.hpp"
#include "include/mahasiswa.hpp"
#include "include/dosen.hpp"
#include "include/tendik.hpp"

using namespace std;

int main()
{
	vector<mahasiswa> recMhs;
	vector<dosen> recDosen;
	vector<tendik> recTendik;
	int a =0,b=0,c=0;
	int menu_terpilih;

	while(1) {
		cout << "Selamat datang di Universitas Ini" << endl << endl;
		cout << "Informasi Statistik Akademik :" << endl;
		cout << "  1. Jumlah Mahasiswa             : " << recMhs.size() << " mahasiswa" << endl;
		cout << "  2. Jumlah Dosen                 : " << recDosen.size() << " mahasiswa" << endl;
		cout << "  3. Jumlah Tenaga Kependidikan   : " << recTendik.size() << " mahasiswa" << endl;
		cout << endl;
		cout << "Menu: " << endl;
		cout << "  1. Tambah Data Mahasiswa" << endl;
		cout << "  2. Tambah Data Dosen" << endl;
		cout << "  3. Tambah Data Tenaga Kependidikan" << endl;
		cout << "  4. Tampilkan semua Data Mahasiswa" << endl;
		cout << "  5. Tampilkan semua Data Dosen" << endl;
		cout << "  6. Tampilkan semua Data Tenaga Kependidikan" << endl;
		cout << "-> Silahkan memilih nomor menu untuk aksi selanjutnya : ";
		cin >> menu_terpilih;

		switch (menu_terpilih) {
			case 1:{
				a++;
				string id, nama, nrp, departemen, ibukandung; 
				int dd, mm, yy, tahunmasuk, semesterke, skslulus;

				cout << "Masukkan ID mahasiswa : "<< endl;
				cin >> id;
				cout << "Masukkan nama mahasiswa : " << endl;
				cin >> nama;
				cout << "Masukkan NRP mahasiswa : " << endl;
				cin >> nrp;
				cout << "Masukkan departemen pilihan : " << endl;
				cin >> departemen;
				cout << "Masukkan tanggal - bulan - tahun lahir mahasiswa : " << endl;
				cin >> dd;
				cout << "--" << endl;
				cin >> mm;
				cout << "--"<< endl;
				cin >> yy;
				cout << "Masukkan tahun masuk mahasiswa : " <<endl;
				cin >> tahunmasuk;
				cout << "Masukkan masa semester mahasiswa saat ini : " << endl;
				cin >> semesterke;
				cout << "Masukkan jumlah SKS untuk lulus : ";
				cin >> skslulus;
				
				mahasiswa datamhs(id, nama, dd, mm, yy, nrp, departemen, tahunmasuk, skslulus, semesterke);
				recMhs.push_back(datamhs);
			}
				break;
			case 2:{
				b++;
				string id, nama, npp, departemen;
				int dd, mm, yy, pendidikan;
				cout << "Masukkan ID dosen : " << endl;
				cin >> id;
				cout << "Masukkan nama dosen : " << endl;
				cin >> nama;
				cout << "Masukkan NPP dosen : " << endl;
				cin >> npp;
				cout << "Masukkan departemen dosen : " << endl;
				cin >> departemen;
				cout << "Masukkan tanggal - bulan - tahun lahir dosen : " << endl;
				cin >> dd;
				cout << "--"<< endl;
				cin >> mm;
				cout << "--"<< endl;
				cin >> yy;
				cout << "Masukkan pendidikan dosen : ";
				cin >> pendidikan;
				
				
				dosen datadosen(id, nama, dd, mm, yy, npp, departemen, pendidikan);
				recDosen.push_back(datadosen);

			}
				break;
			case 3:{
				c++;
				string id, nama, npp, unit;
				int  dd, mm, yy;

				cout << "Masukkan ID tenaga pendidikan : " << endl;
				cin >> id;
				cout << "Masukkan nama tenaga pendidikan : " << endl;
				cin >> nama;
				cout << "Masukkan NPP tenaga pendidikan : " << endl;
				cin >> npp;
				cout << "Masukkan tanggal - bulan - tahun lahir tenaga pendidikan : " << endl;
				cin >> dd;
				cout << "--"<< endl;
				cin >> mm;
				cout << "--"<< endl;
				cin >> yy;
				cout << " Masukkan Unit tenaga pendidikan : ";
				cin >> unit;

				tendik datatendik(id, nama, dd, mm, yy, npp, unit);
				recTendik.push_back(datatendik);

			}
				break;
			case 4:{
				cout << "Data Seluruh Mahasiswa : " << endl;
				for (int i=0; i < a; i++)
					{	
					cout << "Nama Mahasiswa: " << recMhs[i].getNama() << endl;
					cout << "Tanggal Lahir Mahasiswa: " << recMhs[i].getTglLahir() << "-" << recMhs[i].getBulanLahir() <<"-" << recMhs[i].getTahunLahir() << endl;
					cout << "NRP Mahasiswa: " << recMhs[i].getNRP() << endl;
					cout << "Departemen: " << recMhs[i].getDepartemen();
					cout << "Semester Saat ini :" <<recMhs[i].getSemester();
					}
			}

				break;
			case 5:{
				cout << "Data Seluruh dosen : " << endl;
				for (int i=0; i < b; i++)
					{	
					cout << "Nama Dosen: " << recDosen[i].getNama() << endl;
					cout << "Tanggal Lahir Dosen: " << recDosen[i].getTglLahir() << "-" << recDosen[i].getBulanLahir() <<"-" << recDosen[i].getTahunLahir() << endl;
					cout << "NPP Dosen: " << recDosen[i].getNPP() << endl;
					cout << "Departemen: " << recDosen[i].getDepartemen() <<endl;
					cout << "Pendidikan: " << recDosen[i].getPendidikan();
					}
			}
				break;
			case 6:{
				cout << "Data Seluruh Tenaga Pendidikan : " << endl;
				for (int i=0; i < c; i++)
					{	
					cout << "Nama Tenaga Pendidikan: " << recTendik[i].getNama() << endl;
					cout << "Tanggal Lahir Tendaga Pendidikan: " << recTendik[i].getTglLahir() << "-" << recTendik[i].getBulanLahir() <<"-" << recTendik[i].getTahunLahir() << endl;
					cout << "NPP Tenaga Pendidiakn: " << recTendik[i].getNPP() << endl;
					cout << "Unit" << recTendik[i].getUnit();
					}
			}
				break;
			default :{
				cout << "Maaf, pilihan anda tidak ada di menu";
			}
		}
	}

	return 0;
}
