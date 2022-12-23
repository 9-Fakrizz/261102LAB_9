#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

char findGrade(double x){
    char sum;
    if(x > 90){
      sum = 'A';
    }
    else if(x > 75){
      sum = 'B';
    }
    else if(x > 60){
      sum = 'C';
    }
    else if(x > 45){
      sum = 'D';
    }
    else if(x <= 45){
      sum = 'F';
    }
    return sum;
} 

int main(){
	int N,i = 0;
	cout << "Enter the number of students: ";
	cin >> N;
	cin.ignore();
	string name[N];
	double score[N];	
	
	while(i < N){
		cout << "Name of student " << i+1 << ": ";
		cin.ignore();
		getline(cin, name[i]); 
		cout << "Score of student " << i+1 << ": ";
		cin >> score[i];
		i++;
	}
	
	i = 0;
	cout << "---------------------------------------------\n";
	cout << setw(25) << "Name" << setw(8) << "Score" << setw(8) << "Grade" << "\n";
	cout << "---------------------------------------------\n";
	while(i < N){
		cout << setw(25) << name[i] << setw(8) << score[i] << setw(8) << findGrade(score[i]) << "\n";
		i++;
	} 
	cout << "---------------------------------------------\n";

	return 0;
}
