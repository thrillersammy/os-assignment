#include <iostream>
using namespace std;
int s=1, full=0, empty=10, i=0;
void producer();
void consumer();
int wait(int);
int signal(int);
int main(){
    int n;
    cout<<("\n1.Producer\n2.Consumer\n3.Exit");
    while(1){
        cout<<("\nEnter your choice:");
        cin>>n;
        switch(n){
            case 1: if((s==1)&&(empty!=0))
                        producer();
                    else
                        cout<<("Buffer is full!!");
                    break;
            case 2: if((s==1)&&(full!=0))
                        consumer();
                    else
                        cout<<("Buffer is empty!!");
                    break;
            case 3: 
                    exit(0);
                    break;
        }
    }
    return 0;
}