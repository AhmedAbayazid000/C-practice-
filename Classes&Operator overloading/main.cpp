// #include <iostream>
// #include <string>
// #include <ctime>
// class bank {
// private:
//     int id_;
//     float balance_;
// public:
//     void set_id(int id){
//         id_=id;
//     }
//     void set_balance(float balance){
//         balance_=balance;
//     }
//     int get_id(){
//         return id_;
//     }
//     int idgen(){
//         int min=100000;
//         int max = 999999;
//         srand(time(nullptr));
//         id_= rand () % (min+max)-min;    
//         return id_;
//     }
//     float withdraw(){
//         float amount;
//         std::cin>>amount;
//         if (amount<balance_){
//             std::cout<<"Insufficent balance"<<std::endl;
//         }
//         else {
//             balance_= -amount;
//         }
//         return balance_;
//     }
//     int deposit (){
//         int amount; 
//         if (amount%5!=0 ){
//             std::cout<<"Cannot deposit this amount"<<std::endl;
//         }
//         else {
//             balance_= +amount;
//         }
//      return balance_;
//     }
//     float get_balance(){
//         return balance_;
//     }
//     void final_balance(){
//       get_balance;  
//     }

// };

// int main(){
//     std::cout<<"OK"<<std::endl;
// return 0;
// }

#include <iostream>
#include <numeric>
#include <vector>
#include <string>
#include <cmath>
#include "main.hpp"
// class Student {
//     private:
//     std::string name_;
//     std::string surname_;
//     std::vector<float> grades_;
//     int album_num_;
//     public:
//     void set_name(std::string name, std::string surname){
//         name_=name;
//         surname_=surname;
//     }
//     void set_grades (std::vector<float> grades){
//         grades_=grades;
//     }
//     void set_album_num(int album_num){
//         album_num_=album_num;
//     }
//     std::string get_name(){
//         return name_;
//     }
//     std::string get_surname(){
//         return surname_;
//     }
//     std::vector<float>get_grades(){
//         return grades_;
//     }
//     int get_album_num(){
//         return album_num_;
//     }
//     int album_num(){
//         int album_num;
//         std::cin>>album_num;
//         int size= std::to_string(album_num).size();
//         if (size<5 || size>6){
//             std::cout<<"Invalid ID"<<"\n";
//         }
//         else {
//             album_num_=album_num;
//         }
//         return album_num_;
//     }
//     Student (std::string name, std::string surname,std::vector<float> grades){
//         name_=name;
//         surname_=surname;
//         grades_=grades;
//     }
//     float calculate_grade() {
//         float sum = std::accumulate(grades_.begin(), grades_.end(), 0.0f);
//         return sum / grades_.size();
//     }
//     void add_grade(){
//         float new_grade;
//         std::cin>>new_grade;
//         if (new_grade>=2.0 || new_grade<=5.0){
//             grades_.push_back(new_grade);
//         }
//         else {
//             std::cout<<"Invalid Grade"<<"\n";
//         }
//     }
//     float mean_grades(){
//         float sum=0;
//         for (float i : grades_){
//             sum=+grades_[i];
//         }
//         return sum/grades_.size();

//     }
//     bool if_passed(){
//         int counter=0;
//         for (int i : grades_){
//             if (grades_[i] <= 2.0){
//                 counter++;
//             }
//         }
//         if (counter > 1){
//             return false;
//         }
//         else {
//             return true;
//         }
//     }
//     void print_data(){
//      std::cout<<name_<<"\n";
//      std::cout<<surname_<<"\n";
//      for (int i=0; i<grades_.size();++i){
//      std::cout<<grades_[i]<<"\n";   
//     }
//     }
// };

// int main (){
// Student student{"Ahmed", "Abayazid", {2, 3, 4, 5, 3}}; 
// std::cout <<"Average "<< student.calculate_grade() << std::endl;
// student.print_data(); 
//     return 0;
// }
//This is to be able to read from your class (your own variable type) and we use friend to access private members 
//class MyClass {
// private:
//     int value_;

// public:
//     friend std::ostream& operator<<(std::ostream& os, const MyClass& obj) {
//         os << obj.value_;  // can access private directly
//         return os;
//     }

//     friend std::istream& operator>>(std::istream& is, MyClass& obj) {
//         is >> obj.value_;  // can access private directly
//         return is;
//     }
// };
//To use a type converter from your type to another type use a constructor 
// classname (type to convert + name -> int a ) : variable name inside your class (name){}-> num_(a), denom_(1) {} 
//To convert from your type (variable) to another add a convertion type operator 
//operator TargetType() const { -> operator float() const {
   // return your object converted to TargetType -> return nume_/denom_
//}
int main (){
Rational quarter(1, 4);
Rational one_third(1, 3);

Rational add_result, sub_result, multiply_result;
add_result = one_third + quarter;
sub_result = one_third - quarter;
multiply_result = one_third * quarter;

one_third.print(); std::cout << " + "; quarter.print(); std::cout << " = "; add_result.print(); std::cout << std::endl;
one_third.print(); std::cout << " - "; quarter.print(); std::cout << " = "; sub_result.print(); std::cout << std::endl;
one_third.print(); std::cout << " * "; quarter.print(); std::cout << " = "; multiply_result.print(); std::cout << std::endl;

return 0;
}