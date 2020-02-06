    #include<iostream>
    #include<conio.h>
    #include<iomanip>
    #include <stdlib.h>
    using namespace std;

class symbols{
public:
    void symbol_hLine(){
        cout<<"\t ========="<<endl;
    }
    void symbol_leftVerticalLine(){
        cout<<"\t=\n"
            <<"\t=\n"
            <<"\t=\n"
            <<"\t=\n"
            <<"\t=\n"
            <<"\t=\n"
            <<"\t=\n";
    }

    void symbol_rightVerticalLine(){
        cout<<"\t          =\n"
            <<"\t          =\n"
            <<"\t          =\n"
            <<"\t          =\n"
            <<"\t          =\n"
            <<"\t          =\n"
            <<"\t          =\n";
    }
    void symbol_u(){
        cout<<"\t=         =\n"
            <<"\t=         =\n"
            <<"\t=         =\n"
            <<"\t=         =\n"
            <<"\t=         =\n"
            <<"\t=         =\n"
            <<"\t=         =\n"
            <<"\t =========\n";
    }
    void symbol_pi(){
        cout<<"\t=         =\n"
            <<"\t=         =\n"
            <<"\t=         =\n"
            <<"\t=         =\n"
            <<"\t=         =\n"
            <<"\t=         =\n"
            <<"\t=         =\n";

    }
};

class display{
public:
 symbols S;

 void zero(){
     S.symbol_hLine();
     S.symbol_pi();
     S.symbol_u();
 }
 void one(){
     S.symbol_rightVerticalLine();
     S.symbol_rightVerticalLine();
 }
 void two(){
     S.symbol_hLine();
     S.symbol_rightVerticalLine();
     S.symbol_hLine();
     S.symbol_leftVerticalLine();
     S.symbol_hLine();
 }
 void three(){
     S.symbol_hLine();
     S.symbol_rightVerticalLine();
     S.symbol_hLine();
     S.symbol_rightVerticalLine();
     S.symbol_hLine();
 }
 void four(){
     S.symbol_u();
     S.symbol_rightVerticalLine();
 }
 void five(){
     S.symbol_hLine();
     S.symbol_leftVerticalLine();
     S.symbol_hLine();
     S.symbol_rightVerticalLine();
     S.symbol_hLine();
 }
 void six(){
     S.symbol_hLine();
     S.symbol_leftVerticalLine();
     S.symbol_hLine();
     S.symbol_u();
 }
 void seven(){
    S.symbol_hLine();
    S.symbol_rightVerticalLine();
     S.symbol_rightVerticalLine();
}
void eight(){
 S.symbol_hLine();
 S.symbol_u();
 S.symbol_u();
}
void nine(){
 S.symbol_hLine();
 S.symbol_u();
 S.symbol_rightVerticalLine();
 S.symbol_hLine();
}

}  ;







main(){
display disp;
        int choice;
        cout<<"\tHERE IS THE THING!!\n\n\n"
        <<"\tWE WORK FOR BOTH BINARY code \n"//binary mode not available for now.....
        <<"\tAND DECIMAL code \n\n\n"
        <<"\t\t\tenter 11 to exit\n\n\n"<<endl;
     do{
        cout<<"\tEnter the number in either decimal or binary to display in seven line decoder:";
        cin>>choice;
        cout<<"\n\n\n\n\n";
    switch(choice){
        case 0:
        disp.zero();
        break;
        case 1:
        disp.one();
        break;

        case 2:
        disp.two();
        break;

        case 3:
        disp.three();
        break;

        case 4:
        disp.four();
        break;

        case 5:
        disp.five();
        break;

        case 6:
        disp.six();
        break;

        case 7:
        disp.seven();
        break;

        case 8:
        disp.eight();
        break;

        case 9:
        disp.nine();
        break;

        case 11:
        exit(0);
        break;

        default:
        cout<<"\t invalid choice"<<endl;


    }
}while(1);
    getch();
    return 0;
}
