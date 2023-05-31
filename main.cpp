#include <iostream>
#include <windows.h>
#include <cstdio>
using namespace std;
const char MIF_LNK=//lanzou
const char MIF_DNL=//github download link
string l[102];
bool issu=False;
bool developer_option,enable_log,debug_usr,isdl_mifisdl_mtk,isdl_9008,skiplangcheck;
int bootbkn;
short op;
char n101();
int n102(),n103(),n106(),n107(),n108(),n109(char),n110(),n111(),n112(),n113(),n114(),n115(char),n116(char),n117();
/*
and many func...
*/
int main(){
    typedef int (*act);
    int x=0;
    developer_option=False;
int lang_sp[15]={3,4,5,6,7,8,9,10,11,12,13,14,15,16,17}//language file pins
    //option +
    while(1){
        system("adb devices");
        cout<<"------------"<<endl;
        system("fastboot devices");
        cout<<endl<<"[1]"<<l[2]<<" \n[2]"<<l[19]<<"\n[3]"<<l[25]<<"\n[4]"<<l[29]<<"\n\n[0]"<<l[38]<<"\n\n[5]"<<l[59]<<"\n\n\n\n\n"<<l[96]<<endl;
        cin>>op;system("cls");
        if(op==1)/*normal status*/{
            act sys[]={n101,n102,n103,n106,n107,n108,n109,n110,n111,n112,n113,n114,n115,n116}
            cout<<endl<<l[2]<<endl;
            for (int i=0;i<=14;i++)
                cout<<endl<<"["<<i<<'] '<<l[lang_sp[i]];
            cout<<"\n\n"<<l[96]<<endl;
            cin>>x;system("cls");
            if(x>=0&&x<=13)
                sys[x]();
                
            
        }else if(op==2)/*recovery status*/{
            act rec[]={n117,n202,n401,n204}
            cout<<l[20]<<endl;
            for(int i=0;i<=4:++i)
                cout<<'['<<i<<"] "<<l[lang_rp[i]]<<endl;
            /*
                unfinished yet...
            */
        }/*
        many elses...
        */
            
    }
    /*
    reboot program...
    */


}
/*

many function ...

i thought i wrote a shit mountain......
*/
