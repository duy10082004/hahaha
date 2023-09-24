#include "lib.h"

void inputArray (A1D& m){
    do {
        cout << "nhap so luong phan tu n cua mang (0 < n < 100)" << endl;
        cin >> m.arrNum;
    } while (m.arrNum <= 0 || m.arrNum >= 100);

    cout <<"nhap mang: " << endl;
    for (int i = 0; i < m.arrNum; i++){
        cin >> m.arr[i];
    }
}

// cau 1


bool evenNumCheck (A1D m) {
    if (m.arrNum == 1) {
        throw "error";
    }
    for (int i = m.arrNum/2 ; i < m.arrNum; i++) {
        if (m.arr[i]%2 != 0) {
            return false;
            break;  
        }
    }
    return true;
}

void printResultCau1(A1D m) {
    if (evenNumCheck(A1D(m)) == 0) {
        cout << "nua cuoi mang ko toan so chan!" << endl;
    }
    else {
        cout << "nua cuoi mang toan so chan!" << endl;
    }

}


// cau 2
int oppositeCompareCount (A1D m) {
    int count = 0;
    //dem coi 2 phan tu doi xung nhau co bang nhau ko
    int i = 0;
    // phan tu dau cua mang
    int j = m.arrNum - 1;
    // phan tu cuoi cua mang
    if (m.arrNum == 1){
        throw "error";
    }
    else{
        while (i < m.arrNum/2){
            if (m.arr[i] == m.arr[j]){
                count ++;
                //so sanh 2 phan tu doi xung nhau neu bang nhau thi tang count len 1 don vi
            }
            i++;
            j--;
            // lay 2 phan tu doi xung tiep theo
        }
    }
    return count;
}

void printResultCau2(A1D m) {
    cout << "co: " << oppositeCompareCount(m) << " vi tri doi nhau trong mang bang nhau!" << endl;
}

//cau 3

void divisorOfelement (A1D m) {
    for (int i = 0; i < m.arrNum; i++){
        cout << "uoc cua: a[ " << i << " ] : " << m.arr[i] << " = "; 
        for (int j = 1; j <= m.arr[i]; j++){
            if (m.arr[i]%j == 0){
                cout << j << " ";
            }
        }
    }
}

// cau 4

void maxOutPut (A1D m) {
    int check = a[]
    for (int i = 2; i < m.arrNum; i++){
        if (m.arr[i-1] > m.arr[i-2]){
            if (m.arr[i-1] > m.arr[i]){
                cout << m.arr[i-1] << endl;
            }
        }
    }
}