#include <iostream>

using namespace std;

void customSort(int arr[], int n) {
    // ใช้ Bubble Sort ในตัวอย่างนี้
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // สลับตำแหน่ง
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    // รับขนาดของอาร์เรย์
    int n;
    cin >> n;

    // สร้างและรับข้อมูลในอาร์เรย์
    int* a = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // เรียงลำดับอาร์เรย์
    customSort(a, n);

    // นำตัวเลขมารวมเข้ากันเป็นสตริง
    string concatenated;
    for (int i = 0; i < n; ++i) {
        concatenated += to_string(a[i]);
    }

    // แสดงผลลัพธ์ก่อนยุบ
    cout << concatenated << endl;

    // ตรวจสอบตัวเลขที่ต่อเนื่องกันมากสุด
    int maxConsecutiveCount = 0;
    int currentConsecutiveCount = 1;

    for (size_t i = 1; i < concatenated.length(); ++i) {
        if (concatenated[i] == concatenated[i - 1]) {
            ++currentConsecutiveCount;
        } else {
            if (currentConsecutiveCount > maxConsecutiveCount) {
                maxConsecutiveCount = currentConsecutiveCount;
            }
            currentConsecutiveCount = 1;
        }
    }

    // ตรวจสอบตัวเลขที่ต่อเนื่องกันมากสุด
    if (currentConsecutiveCount > maxConsecutiveCount) {
        maxConsecutiveCount = currentConsecutiveCount;
    }

    // แสดงตัวเลขที่ต่อเนื่องกันมากสุด
    string maxConsecutiveNumbers;
    currentConsecutiveCount = 1;

    for (size_t i = 1; i < concatenated.length(); ++i) {
        if (concatenated[i] == concatenated[i - 1]) {
            ++currentConsecutiveCount;
        } else {
            if (currentConsecutiveCount == maxConsecutiveCount) {
                maxConsecutiveNumbers += concatenated[i - 1];
            }
            currentConsecutiveCount = 1;
        }
    }

    // ตรวจสอบตัวเลขที่ต่อเนื่องกันมากสุดในกรณีตัวสุดท้าย
    if (currentConsecutiveCount == maxConsecutiveCount) {
        maxConsecutiveNumbers += concatenated.back();
    }

    // เรียงตัวเลขที่ต่อเนื่องกันมากสุด
    customSort(a, maxConsecutiveNumbers.length());

    // แสดงผลลัพธ์ตัวเลขที่ต่อเนื่องกันมากสุด โดยแบ่งด้วยช่องว่าง
    for (int i = 0; i < maxConsecutiveNumbers.length(); ++i) {
        cout << maxConsecutiveNumbers[i] << " ";
    }
    cout << endl;

    // ยุบตัวเลขที่ต่อเนื่องกัน
    string compressed;
    for (int i = 0; i < concatenated.length(); ++i) {
        compressed += concatenated[i];
        while (i + 1 < concatenated.length() && concatenated[i] == concatenated[i + 1]) {
            ++i;
        }
    }

    // แสดงผลลัพธ์หลังยุบ
    cout << compressed << endl;

    // ลบอาร์เรย์ที่ถูกสร้างไว้ในหน่วยความจำ
    delete[] a;

    return 0;
}
