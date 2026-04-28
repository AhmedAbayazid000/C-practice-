#include <iostream>
#include <string>
#include <ctime>
class bank {
private:
    int id_;
    float balance_;
public:
    void set_id(int id){
        id_=id;
    }
    void set_balance(float balance){
        balance_=balance;
    }
    int get_id(){
        return id_;
    }
    int idgen(){
        int min=100000;
        int max = 999999;
        srand(time(nullptr));
        id_= rand () % (min+max)-min;    
        return id_;
    }
    float withdraw(){
        float amount;
        std::cin>>amount;
        if (amount<balance_){
            std::cout<<"Insufficent balance"<<std::endl;
        }
        else {
            balance_= -amount;
        }
        return balance_;
    }
    int deposit (){
        int amount; 
        if (amount%5!=0 ){
            std::cout<<"Cannot deposit this amount"<<std::endl;
        }
        else {
            balance_= +amount;
        }
     return balance_;
    }
    float get_balance(){
        return balance_;
    }
    void final_balance(){
      get_balance;  
    }

};

// int main(){
//     std::cout<<"OK"<<std::endl;
// return 0;
// }