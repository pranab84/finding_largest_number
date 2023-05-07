#include <iostream>
using namespace std;

int main() {
    int a = 10, b= 16, c= 332;

    const int Array_size= 5;
    int sample[Array_size]= {32, 45,-67, 39, 100};

    int max= sample[0];
    for (int i = 0; i < Array_size; i++) {

        if (max<sample[i])
            max=sample[i];


    }
    cout<<max<<endl;

    return 0;
}
