#include <iostream>
void DecBubbleSort(int *arrInt[]);
void AccBubbleSort(int *arrInt[]);
void read10Intergers(int arrInt[]);
int main(){
    int arr[10];
    int *AccPtrArr[10];
    int *DecPtrArr[10];
    for (int i = 0;i<10;i++){
        AccPtrArr[i] = &arr[i];
        DecPtrArr[i] = &arr[i];
    }
    read10Intergers(arr);
    AccBubbleSort(AccPtrArr);
    DecBubbleSort(DecPtrArr);
    for(int i =0;i<10;i++){
        std::cout << *AccPtrArr[i] << '\t';
    }
    std::cout << std::endl;
        for(int i =0;i<10;i++){
        std::cout << *DecPtrArr[i] << '\t';
    }

}

//functions
void read10Intergers(int arrInt[]){
    std::cout << "please enter 10 integers!:";
    for(int i =0;i<10;i++){
        std::cin >> arrInt[i];
    }
}
void AccBubbleSort(int *arrInt[]){
    for (int i = 9;i>0;i--){
        for(int j = 0;j < i;j++){
            if(*(arrInt[j])>*(arrInt[j+1])){
                std::swap(arrInt[j],arrInt[j+1]);
            }

        }
    }
}
void DecBubbleSort(int *arrInt[]){
    for (int i = 9;i>0;i--){
        for (int j = 0;j<i;j++){
            if(*(arrInt[j])<*(arrInt[j+1])){
                std::swap(arrInt[j],arrInt[j+1]);
            }
        }
        
    }
}