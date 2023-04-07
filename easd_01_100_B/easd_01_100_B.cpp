// 1. karena algoritma adalah urutan instruksi yang terstruktur dan sistematis untuk menyelesaikan suatu masalah
// 2. Array
//	 Linked List
// 3. 	A. Compiler
//		B. Bahasa Pemograman 
//		C. Ukuran dari inputan
// 4. quick sort karena dalam kasus terburuknya tetap menghasilkan waktu loglinear O(n log n) dan bisa lebih baik lagi
// 5. A. Algoritma yang termasuk Quadratic : Bubble Sort, Insertion Sort, Selection sort
//	  B. Algoritma yang termasuk Loglinear : Quick Sort, Merge sort
// 6. maaf mas saya bingung belum dapat pemnjelasannya

#include <iostream>
using namespace std;

const int MAX = 120; // jumlah dari batasan data NIM = 100 (100 + 20 -2 * 15 + 10 + 10) = 120

// input data
void input(int baihaqi[]) {
	cout << "Masukkan " << MAX << " data: \n";
	for (int i = 0; i < MAX; i++) {
		cin >> baihaqi[i];
}
	
// merge sort
    void mergeSort(int baihaqi[], int left, int right) {
        if (left < right) {
            int mid = (left + right) / 2;
            mergeSort(baihaqi, left, mid);
            mergeSort(baihaqi, mid + 1, right);
            int i = left;
            int FA = mid + 1; // ganti variabel j sesuai inisial 
            int k = 0;
            int temp[MAX];
            while (i <= mid && FA <= right) {
                if (baihaqi[i] < baihaqi[FA]) {
                    temp[k] = baihaqi[i];
                    i++;
                }
                else {
                    temp[k] = baihaqi[FA];
                    FA++;
                }
                k++;
            }
            while (i <= mid) {
                temp[k] = baihaqi[i];
                i++;
                k++;
            }
            while (FA <= right) {
                temp[k] = baihaqi[FA];
                FA++;
                k++;
            }
            for (int p = 0; p < k; p++) {
                baihaqi[left + p] = temp[p];
            }

        }
  