#include<iostream>
using namespace std;


string gradecalculator(float quiz1,float quiz2,float midsem,float endsem){
    float total=quiz1+quiz2+midsem+endsem;
    
    if (total>=90 && total<=100){
         return "A+";

    }
    if (total>=80 && total<90){
        return "A";

    }
    if (total>=70 && total<80){
        return "B+";

    }
    if (total>=60 && total<70){
        return "B";

    }
    if (total>=50 && total<60){
        return "C+";

    }
    if (total>=40 && total<50){
        return "C";

    }
    if (total>=30 && total<40){
        return "D";

    }
    if (total>=0 && total<30){
        return "F";

    }
    return"";
}

float calculateCPI(float grade_score, int total_credit){
    return (grade_score/total_credit);
}

int main(){
    int num_of_subject;
    cout<<"Enter the number of subjects : ";
    cin>>num_of_subject;
    float grade_score=0;
    int total_credit=0;

    for (int i=1;i<=num_of_subject;i++){
    
    cout<<"For subject "<<i<<endl;
    float quiz1,quiz2,midsem,credit,endsem,gradepoint;
    cout << "Enter Quiz 1 score (out of 10): ";
    cin >> quiz1;
    cout << "Enter Quiz 2 score (out of 10): ";
    cin >> quiz2;
    cout << "Enter Midsem score (out of 30): ";
    cin >> midsem;
    cout << "Enter Endsem score (out of 50): ";
    cin >> endsem;
    cout<< "Enter the credit of that subject: ";
    cin>>credit;
    string grade=gradecalculator(quiz1,quiz2, midsem,endsem);
    cout<<"Grade corresponding to subject "<<i<< " is : " <<gradecalculator(quiz1,quiz2, midsem,endsem)<<endl;

    if (grade=="A+"){
        gradepoint=10;
    }
    if (grade=="A"){
        gradepoint=9;
    }
    if (grade=="B+"){
        gradepoint=8;
    }
    if (grade=="B"){
        gradepoint=7;
    }
    if (grade=="C+"){
        gradepoint=6;
    }
    if (grade=="C"){
        gradepoint=5;
    }
    if (grade=="D"){
        gradepoint=4;
    }
    if (grade=="F"){
        gradepoint=0;
    }
    grade_score= grade_score+(gradepoint*credit);
    total_credit=total_credit+credit;
}

cout<<"Your CPI is = "<<calculateCPI(grade_score,total_credit)<<endl;
}