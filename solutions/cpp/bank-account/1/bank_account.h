#pragma once
#include <thread>
#include <mutex>
#include <stdexcept>
namespace Bankaccount {
class Bankaccount {
    private:
    bool ok=false;
    int money=0;
    std::mutex mtx;
    public:
        void open(){
            if(ok){
                throw std::runtime_error("bank account already opened");
            }
            ok=true;
        }
    void close(){
        if(!ok){
            throw std::runtime_error("bank account already closed");
        }
        ok=false;
        money=0;
    }  
    int balance(){
        if(ok){
        return money;
        }
        else{
            throw std::runtime_error("bank account closed");
        }
    }
    void deposit(int x){
        if(ok){
            
            if(x>=0){
                mtx.lock();
                money=money+x;
                mtx.unlock();
            }
            else{
                 throw std::runtime_error("cannot deposit negative money");
            }
        
        }
        else{
             throw std::runtime_error("bank account closed");
        }
    }
    void withdraw(int x){
        if(ok){
            if(x>=0){
                if(x>money){
                    throw std::runtime_error("cannot withdraw more than you have");
                }
                mtx.lock();
                money=money-x;
                mtx.unlock();
            }
            else{
                throw std::runtime_error("cannot withdraw negative money");
            }
        }
        else{
            throw std::runtime_error("bank account closed");
        }
    }
};  // class Bankaccount

}  // namespace Bankaccount
