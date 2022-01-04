#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

double avgles(int (*les)[5]){

    int res[5];
    for(int i = 0; i < 5; i++){
        
        int total = 0;
        for(int j = 0; j < 25; j++){
            
            total += les[j][i];
        }

        double avg = total / 25;
        res[i] = avg;
    }

    cout << "Rata- rata nilai per mata kuliah" << endl;
    for(int h = 0; h < 5; h++){
        cout << "Rata- rata mata kuliah ke " << h+1 << " = " << res[h] << endl;
    }

    return 0;
}

double avgstud(int (*stud)[5]){
    
    int res[25];
    for(int i = 0; i < 25; i++){

        int total = 0;
        for(int j = 0; j < 5; j++){

            total += stud[j][i];
        }

        double avg = total / 5;
        res[i] = avg;
    }

    cout << "Rata- rata per Mahasiswa" << endl;
    for(int h = 0; h < 25; h++){
        cout << "Rata- rata mahasiswa ke " << h+1 << " = " << res[h] << endl;
    }

    return 0;    
}

int studmax(int (*data)[5]){
    cout << "Nilai terbesar per mahasiswa" << endl;

    for(int i = 0; i < 25; i++){

        int max = 0;
        for(int j = 0; j < 5; j++){

            if(data[i][j] > max){
                max = data[i][j];
            }
        }
        cout << "Nilai terbesar mahasiswa ke " << i+1 << " adalah " << max << endl; 
    }
    return 0;
}

int lesmax(int (*lm)[5]){

    cout << "Nilai terbesar per Matakuliah" << endl;
    for(int i = 0; i < 5; i++){

        int max = 0;
        for(int j = 0; j < 25; j++){

            if(lm[i][j] > max ){
                max = lm[i][j];
            }
        }
        cout << "Nilai terbaik Matakuliah ke " << i+1 << " Adalah " << max << endl;
    }
    return 0;
}

int main(){

//Initiaion for 25 arrays
int NilaiMahasiswa[25][5] = {
    {100, 75, 81,88,90}, {66, 72, 74, 91, 95}, {87, 89, 90, 94, 96}, {63, 71, 87, 96, 100}, {67, 70, 81, 82, 94},
    {66, 68, 79, 93, 95}, {64, 65, 83, 86, 91}, {77, 84, 91, 97, 98}, {67, 79, 89, 94, 100}, {61, 72, 73, 89, 95},
    {78, 84, 91, 99, 100}, {73, 79, 80, 81, 90}, {60, 93, 94, 95, 98}, {60, 64, 76, 80, 84}, {67, 73, 80, 85, 87},
    {61, 89, 90, 93, 94}, {60, 64, 67, 80, 87}, {66, 74, 80, 88, 96}, {74, 78, 90, 91, 92}, {60, 71, 93, 98, 100},
    {60, 65, 76, 77, 97}, {61, 72, 85, 89, 90}, {67, 69, 78, 80, 86}, {70, 71, 92, 93, 94}, {63, 64, 72, 75, 92}
    };

avgles(NilaiMahasiswa);

cout << "----------------" << endl;

avgstud(NilaiMahasiswa);

cout << "----------------" << endl;

studmax(NilaiMahasiswa);

cout << "----------------" << endl;

lesmax(NilaiMahasiswa);

}


