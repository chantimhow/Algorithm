#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int userinput;
    int arr[100];
    int count = 0;
    double average = 0;
    int max, min;
    for (int i = 0;i < 100;i++){
    cout << "please enter intergers (ends when 0 is entered):";
    cin >> userinput;
    if(userinput != 0){
        arr[i] = userinput;
        count++;
        average += userinput;
    }else break;
    }
    average /= count;
    for (int i =0;i < count;i++){
        cout << arr[i] << ' ';
        if (max < arr[i])
        max = arr[i];
        if (min == 0)
        min = arr[i];
        else if (min > arr[i])
        min = arr[i];
    }
    cout << endl<< fixed <<setprecision(1) <<average << endl;
    cout << max << endl;
    cout << min << endl;


}