// dec to hex convertor
#include <iostream>
#include <vector>


std::vector<int> div16(int num);
int div16count(int num);



int main(){
    // enter a decimal number and have string to append to
    int decINp;
    std::string hex = " ";
    std::vector<int> remainder;



    std::cout << "Enter a decimal number that you would like to convert to hex\n";
    std::cin >> decINp;

    remainder = div16(decINp);

    int count = div16count(decINp);

    for(int i = count - 1; i >= 0; i--){
        if(remainder[i] >= 0 && remainder[i]<= 9){
            hex += std::to_string(remainder[i]);
        }

        else if(remainder[i] >= 10 && remainder[i] <= 15){
            switch(remainder[i]){
                case 10:
                    hex += "a";
                    break;
                case 11:
                    hex += "b";
                    break;
                case 12:
                    hex += "c";
                    break;
                case 13:
                    hex += "d";
                    break;
                case 14:
                    hex += "e";
                    break;
                case 15:
                    hex += "f";
                    break;
            }
        }
    }
    std::cout << hex<<std::endl;
}


std::vector<int> div16(int num){

    std::vector<int> remainder;
    while(num > 0){
        remainder.push_back((num % 16));
        num = num / 16;
    }
    return remainder;
}

int div16count(int num){
    int count = 0;
    while(num > 0){
        count += 1;
        num /= 16;
    }
    return count;
} 