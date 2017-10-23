#include<bits/stdc++.h>
int main(){
	int arr[]={8, 3, 1, 9, 0, 2, 7, 4, 6, 5,50};

    char letter1 = 'a';
    char letter2 = 'm';
    double number1 = 1.2213;
    double number2 = 1.2512;
    int number3 = 232;
    int number4 = 0;

    printf("\n%c",std::max(letter1,letter2));
    printf("\n%c",std::min(letter1,letter2));

    printf("\n%lf",std::max(number1,number2));
    printf("\n%lf",std::min(number2,number1));

    printf("\n%d",std::max(number3,number4));
    printf("\n%d",std::min(number3,number4));

    printf("\n%d",*std::max_element(arr,arr+(sizeof(arr)/sizeof(int))));
    printf("\n%d",*std::min_element(arr,arr+(sizeof(arr)/sizeof(int))));

	return 0;
}

