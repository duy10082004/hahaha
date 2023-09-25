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
    int i = 0;
    int j = m.arrNum - 1;
    if (m.arrNum == 1){
        throw "error";
    }
    else{
        while (i < m.arrNum/2){
            if (m.arr[i] == m.arr[j]){
                count ++;
            }
            i++;
            j--;
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

