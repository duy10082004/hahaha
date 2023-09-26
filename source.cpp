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

void outputArray (A1D& m){
    cout <<"mang vua nhap la: " << endl;
    for (int i = 0; i < m.arrNum; i++){
        cout << m.arr[i] << endl;
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

//cau 4
int maxCheck (int a, int b, int c) {
    int check = a;
    if (check < b){
        check = b;
    }
    if (check < c){
        check = c;
    }
    if (check == a || check == b){
        cout <<"error" << endl;
    }
    return check;
}

void maxArrElementCau4 (A1D m) {
    int i = 0;
    while (i+2 < m.arrNum){
        int a = m.arr[i];
        int b = m.arr[i+1];
        int c = m.arr[i+2];
       // cout <<"so co tinh chat la so max la: " << maxCheck(a, b, c) << endl;
        if (maxCheck(a, b, c) == a){
            cout << "vi tri so co tinh chat la so max la: a[ " << i << " ]" << " = " << maxCheck(a, b, c) << endl;
        }
        else if (maxCheck(a, b, c) == b){
            cout << "vi tri so co tinh chat la so max la: a[ " << i+1 << " ]" << " = " << maxCheck(a, b, c) << endl;
        }
        else{
            cout << "vi tri so co tinh chat la so max la: a[ " << i+2 << " ]" << " = " << maxCheck(a, b, c) << endl;
        }
        i++;
    }
}

//cau 5
int minCheck (int a, int b, int c) {
    int check = a;
    if (check > b){
        check = b;
    }
    if (check > c){
        check = c;
    }
    if (b == a || c == b){
        cout <<"error" << endl;
    }
    return check;
}

void minArrElementCau5 (A1D m) {
    int i = 0;
    while (i+2 < m.arrNum){
        int a = m.arr[i];
        int b = m.arr[i+1];
        int c = m.arr[i+2];
       // cout <<"so co tinh chat la so max la: " << maxCheck(a, b, c) << endl;
        if (minCheck(a, b, c) == a){
            cout << "vi tri so co tinh chat la so min la: a[ " << i << " ]" << " = " << minCheck(a, b, c) << endl;
        }
        else if (minCheck(a, b, c) == b){
            cout << "vi tri so co tinh chat la so min la: a[ " << i+1 << " ]" << " = " << minCheck(a, b, c) << endl;
        }
        else{
            cout << "vi tri so co tinh chat la so min la: a[ " << i+2 << " ]" << " = " << minCheck(a, b, c) << endl;
        }
        i++;
    }
}

// cau 6:


int inputX(int x){
    cout << "nhap gia tri x: " << endl;
    cin >> x;
    return x;
}

bool xCheck(int x, A1D m){
    x = inputX(x);
    bool check = true;
    for (int i = 0; i < m.arrNum; i++){
        if (x == m.arr[i]){
            return true;
            break;
        }
    }
    return false;
}




int replaceIndex(int x, A1D &m){
    int index;
    cout << "nhap gia tri moi can cap nhap: " << endl;
    cin >> index;
    for (int i = 0; i < m.arrNum; i++){
        if (m.arr[i] == x){
            m.arr[i] = index;
            break;
        }
    }
    return index;
}

void printKetQuaCau6 (A1D &m){
    int x;
    if (xCheck(x, m) == true){
        replaceIndex(x, m);
    }
    else {
        cout << "khong tim duoc gi";
    }
}


//cau 7

void remove (A1D& m){
    int k;
    cout << "nhap vi tri muon xoa: " << endl;
    cin >> k;
    if (k>=0 && k<m.arrNum){
    for (int i=k; i<m.arrNum-1; i++){
        m.arr[i] = m.arr[i+1];
    }
    m.arrNum--;
    }
    outputArray(m);
}



//cau 8

void insertX (A1D& m){
    int x; 
    int k;
    cout << "nhap gia tri can them" << endl;
    cin >> x;
    cout << "nhap vi tri can them" << endl;
    cin >> k;
    if (k>=0 && k<=m.arrNum)
    {
    for (int i=m.arrNum; i>k; i--){
        m.arr[i] = m.arr[i-1];
    }
    m.arr[k] = x;
    m.arrNum++;
    }
    outputArray(m);
}