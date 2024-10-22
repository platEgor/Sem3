#include <iostream>
#include <math.h>
#include <chrono>
#include <thread>
using namespace std;
using namespace std::chrono;
using namespace std::this_thread;

class Student{
    string group;
    string name;
    string lastname;
    int HP = 100;
    double balance = 1000;
    int tAwake = 0;
    int status = 1;
    public:
        double grade = 0;
        Student(string n, string ln, string g){
            group = g;
            name = n;
            lastname = ln;
        }
        Student(string n, string ln, string g, double gr){
            group = g;
            name = n;
            lastname = ln;
            grade = gr;
        }

        void eat(double cost){
            try{
                if (balance >= cost){
                    balance -= cost;
                }
                else{
                    throw (cost-balance);
                }
            }
            catch (double diff){
                cout << "Не хватает " << diff << " руб.\n";
            }
            HP += cost/10;
            if (HP > 100)
                HP = 100;
            tAwake += 1;
        }

        void study(int time){
            if (status == 0){
                cout << "Студент в академе";
            }else{
                double damage = 10;
            if (tAwake > 24){
                damage *= 3;
            }
            HP -= damage*time;
            tAwake += time;
            if (HP <=0){
                cout << "Студент выгорел и ушел в академ";
            }
            }
            
        }

        void sleep(int time){
            if (time > 6)
                tAwake = 0;
            else if (time > 3)
                tAwake = (int)(tAwake/2);
            else
                tAwake = (int)(tAwake/1.5);
        }

        void work(int time){
            double damage = 10;
            if (tAwake > 24){
                damage *= 3;
            }
            HP -= damage*time;
            tAwake += time;
            balance += 500*time;
            if (HP <=0){
                cout << "Студент выгорел и ушел в академ";
            }
        }

        void entertainment(int time, double cost){
            double fun = 10;
            if (cost > 2000)
                fun = fun * (3 + cost/1000);
            else if (cost > 1000)
                fun = fun * (2 + cost/1000);
            else
                fun = fun * (1 + cost/1000);
            if (tAwake > 24){
                fun/=3;
            }
            HP += (int)(fun * time);
            if (HP > 100)
                HP = 100;
            tAwake += time;
        }

        void view_stats(){
            string st;
            if (status == 1){
                st = "Учится";
            }else{
                st = "В академе";
            }
            cout << "\n"<<name<<" "<<lastname<<"\n Health: "<<HP<<"/100\n Balance: "<<balance<<" руб.\n Time Awake: "<<tAwake<<" ч\n Статус: "<<st;
        }
        void view_hp(){
            cout << "\n"<<name<<" "<<lastname<<"\n Health: "<<HP<<"/100";
        }
        void view_tAwake(){
            cout << "\n"<<name<<" "<<lastname<<"\n Time Awake: "<<tAwake<<" ч";
        }
        void view_balance(){
           cout << "\n"<<name<<" "<<lastname<<"\n Balance: "<<balance<<" руб.";
        }

};

int main(void){
    Student s1("sasha", "karpov", "b04-308");
    Student s2("masha", "karpova", "b04-308", 8);
    s1.study(3);
    s2.work(5);
    s1.eat(100);
    s2.sleep(2);
    s1.view_stats();
    s2.view_stats();
    return 0;
}
