#include<iostream>
using namespace std;
class Cricketer{
    public:
    int n,run, wicket;
    int s[10];
    Cricketer(){
        cout<<"Enter Number of Series:";
        cin>>n;
    }
};
class Batsman:public Cricketer{
public:
int avg,totalRuns,best;

int datainput(){
    for(int i=1;i<=n;i++){
        cout<<"Run in Series "<<i<<": ";
        cin>>s[i];
        this->s[i]=s[i];
    }
    int temp=0;
    for(int i=1;i<=n;i++){
        if(temp<s[i]){
            temp=s[i];
        }
    }
    this->best= temp;
}

int avgRun(){
    totalRuns=0;
   for(int i=1;i<=n;i++){
      totalRuns=totalRuns+this->s[i];
   }
   this->totalRuns= totalRuns;
   return avg=totalRuns/n;
//    this->avg=avg; 
}
int display(){
    cout<<"Number OF Series Played:"<<n<<endl;
    // cout<<"Total Runs Scored:"<<this->totalRuns<<endl;
    cout<<"Best Perfomance Per Season:"<<this->best<<endl;
}
};
int main(){
    Batsman b1;
    b1.datainput();
    b1.display();
    cout<<"Average Run:"<<b1.avgRun();
    
}
