#include <iostream>
using namespace std;

//array of intergers to hold values
int arr[20];
int cmp_count = 0; // number of comparasion
int mov_count = 0; // number of data movements
int n;

void input() {
    while (true)
    {
        cout << "Masukkan panjang element array: ";
        cin >> n;

        if (n <= 20)
            break;
        else
            cout << "\nMaksimum panjang array adalah 20" << endl;
    }

    cout << "\n-------------------" << endl;
    cout << "\nEnter Array Element" << endl;
    cout << "\n-------------------" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << ">";
        cin >> arr[i];
    }
}
//swaps the element at index x with the elements at index y
void swap(int x, int y)
{
    int temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
    mov_count++;


}

void q_short(int low, int high)
{

    int temp;
    int pivot, i, j;
    if (low > high) { //step 1
        return;
    }

    pivot = arr[low]; // step 2
    i = low + 1; // step 3
    j = high; //step 4


}

int main()
{
    
}


