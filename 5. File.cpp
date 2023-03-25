#include<iostream>
#include<fstream>


using namespace std;


int main(){



    ofstream file;
    file.open("Student.txt");
    file<<"I am Mizanur Rahman. I am a student of cse department of ulab."<<endl;
    file.close();

    return 0;
}
