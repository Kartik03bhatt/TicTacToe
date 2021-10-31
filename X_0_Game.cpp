#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

int winner(char a[]){
    if((a[0]==a[1] && a[1]==a[2]) ||
       (a[3]==a[4] && a[4]==a[5]) || 
       (a[6]==a[7] && a[7]==a[8]) || 
       (a[0]==a[3] && a[3]==a[6]) || 
       (a[1]==a[4] && a[4]==a[7]) || 
       (a[2]==a[5] && a[5]==a[8]) || 
       (a[0]==a[4] && a[4]==a[8]) || 
       (a[6]==a[4] && a[4]==a[2])){
           return 1;
       }
        else{
            return 0;
        }
}

int main()
{
    char matrix[]={'1','2','3','4','5','6','7','8','9'},pos;
    
    int turn=1;
    while(winner(matrix)==0 or turn<=9){
        if(turn%2==0){
            cout<<"         X's Turn         \n";
        }
        else{
            cout<<"         0's Turn         \n";
        }
    cout<<"             |              |              "<<endl;
    cout<<"       "<<matrix[0]<<"     |      "<<matrix[1]<<"       |       "<<matrix[2]<<"      "<<endl;
    cout<<"_____________|______________|______________"<<endl;
    cout<<"             |              |              "<<endl;
    cout<<"       "<<matrix[3]<<"     |      "<<matrix[4]<<"       |       "<<matrix[5]<<"      "<<endl;
    cout<<"_____________|______________|______________"<<endl;
    cout<<"             |              |              "<<endl;
    cout<<"       "<<matrix[6]<<"     |      "<<matrix[7]<<"       |       "<<matrix[8]<<"      "<<endl;
    cout<<"             |              |              "<<endl;
    cout<<"Enter the position: ";
    cin>>pos;
    
        for (int j = 0; j < 9; j++)
        {
            if(matrix[j]==pos && matrix[j]!='0' && matrix[j]!='x'){
                if(turn%2==0){
                    matrix[j]='x';        
                    }
                 else{
                    matrix[j]='0';
                    }
            }
            else{
                cout<<"Invalid Move";
            }
        }
    turn++;    

    system("CLS");
    
    }


    return 0;
}
