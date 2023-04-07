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

const int MAX = 5; // jumlah maksimum data

// input data
void input(int arr[]) {
    cout << "Masukkan " << MAX << " data: \n";
    for (int i = 0; i < MAX; i++) {
        cin >> arr[i];
    }
}

// merge sort
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        int i = left;
        int j_FA = mid + 1; // ganti j dengan inisial nama
        int k = 0;
        int temp[MAX];
        while (i <= mid && j_FA <= right) {
            if (arr[i] < arr[j_FA]) {
                temp[k] = arr[i];
                i++;
            }
            else {
                temp[k] = arr[j_FA];
                j_FA++;
            }
            k++;
        }
        while (i <= mid) {
            temp[k] = arr[i];
            i++;
            k++;
        }
        while (j_FA <= right) {
            temp[k] = arr[j_FA];
            j_FA++;
            k++;
        }
        for (int p = 0; p < k; p++) {
            arr[left + p] = temp[p];
        }
    }
}

// tampilkan hasil
void display(int arr[]) {
    cout << "Hasil sorting: ";
    for (int i = 0; i < MAX; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[MAX];
    input(arr);
    mergeSort(arr, 0, MAX - 1);
    display(arr);
    return 0;
}