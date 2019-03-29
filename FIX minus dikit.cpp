#include <graphics.h>
#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <stdbool.h>

#define MATRIX 30
#define BRS 690/MATRIX
#define KLM 1050/MATRIX

typedef struct{
    int pemain;
    int peta;
    int tangga;
}game;
typedef struct{
    int x;
    int y;
}posisi;
game arr;

void readpeta(int x1,int y1,int x2,int y2)
{
    readimagefile("balok.gif",x1,y1,x2,y2);
}
void readpemain(int x1,int y1,int x2,int y2)
{
    readimagefile("llama.gif",x1,y1,x2,y2);
}
void readtangga(int x1,int y1,int x2,int y2)
{
    readimagefile("tangga coy.gif",x1,y1,x2,y2);
}
void delpemain(game arr[BRS][KLM],int brs,int klm)
{
    arr[brs][klm].pemain=0;
}
void inspemain(game arr[BRS][KLM],int baris,int kolom)
{
    arr[baris][kolom].pemain=1;
}
void buatpeta(game arr[BRS][KLM], int* BRS_, int* KLM_)//untuk membuat array
{
    for (int i=0 ; i<BRS ; i++){
        for (int j=0 ; j<KLM ; j++){
            arr[i][j].pemain = 0;
            arr[i][j].tangga = 0;
            if (i==BRS-1||i==0||j==0||j==KLM-1){
                arr[i][j].peta = 1;
            }else{
                arr[i][j].peta = 0;
            }
        }
    }
    //peta
    arr[20][2].peta=1; arr[20][3].peta=1; arr[20][4].peta=1; arr[20][5].peta=1; arr[20][6].peta=1; arr[20][8].peta=1; arr[20][9].peta=1; arr[20][9].peta=1;
    arr[19][7].tangga=1; arr[20][7].tangga=1; arr[21][7].tangga=1; arr[18][7].tangga=1; arr[17][7].tangga=1; arr[16][7].tangga=1; arr[17][8].peta=1; arr[17][9].peta=1;
    arr[15][7].tangga=1; arr[14][7].tangga=1; arr[13][7].tangga=1; arr[12][7].tangga=1; arr[11][7].tangga=1; arr[10][7].tangga=1;
    *BRS_ = BRS-2;
    *KLM_ = KLM/2;
    inspemain(arr,*BRS_, *KLM_);
}
void tampilall(game arr[BRS][KLM])
{
    for (int i = 0; i < BRS; i++){
        for (int j = 0; j < KLM; j++){
            if (arr[i][j].peta==1){
                readpeta(MATRIX* j,MATRIX* i,MATRIX* (j+1),MATRIX* (i+1));
            }
            if (arr[i][j].tangga==1){
                readtangga(MATRIX* j,MATRIX* i,MATRIX* (j+1),MATRIX* (i+1));
            }
            if (arr[i][j].pemain==1){
                readpemain(MATRIX* j,MATRIX* i,MATRIX* (j+1),MATRIX* (i+1));
            }
        }
    }

}
void tampilorang(game arr[BRS][KLM]){
    for (int i = 0; i < BRS; i++){
        for (int j = 0; j < KLM; j++){
                if (arr[i][j].pemain==1){
                readpemain(MATRIX* j,MATRIX* i,MATRIX* (j+1),MATRIX* (i+1));
            }
        }
    }
}
void tampilblock(game arr[BRS][KLM])
{
    for (int i = 0; i < BRS; i++){
        for (int j = 0; j < KLM; j++){
            if (arr[i][j].peta==1){
                readpeta(MATRIX* j,MATRIX* i,MATRIX* (j+1),MATRIX* (i+1));
            }
            if (arr[i][j].tangga==1){
                readtangga(MATRIX* j,MATRIX* i,MATRIX* (j+1),MATRIX* (i+1));
            }
        }
    }
}
void tampilbaris(game arr[BRS][KLM], int BRS_)
{
    for (int i = 0; i < BRS; i++){
        for (int j = 0; j < KLM; j++){
            if (arr[i][j].peta==1){
                readpeta(MATRIX* j,MATRIX* i,MATRIX* (j+1),MATRIX* (i+1));
            }
            if (arr[i][j].tangga==1){
                readtangga(MATRIX* j,MATRIX* i,MATRIX* (j+1),MATRIX* (i+1));
            }
            if (arr[i][j].pemain==1){
                readpemain(MATRIX* j,MATRIX* i,MATRIX* (j+1),MATRIX* (i+1));
            }
        }
    }

}
void tampilkolom(game arr[BRS][KLM], int KLM_)
{
    for (int i = 0; i < BRS; i++){
        for (int j = 0; j < KLM; j++){
            if (arr[i][j].peta==1){
                readpeta(MATRIX* j,MATRIX* i,MATRIX* (j+1),MATRIX* (i+1));
            }
            if (arr[i][j].tangga==1){
                readtangga(MATRIX* j,MATRIX* i,MATRIX* (j+1),MATRIX* (i+1));
            }
            if (arr[i][j].pemain==1){
                readpemain(MATRIX* j,MATRIX* i,MATRIX* (j+1),MATRIX* (i+1));
            }
        }
    }

}
posisi playercoordinate(game arr[BRS][KLM])
{
    posisi mulai;
    for (int i = 0; i < BRS; i++){
        for (int j = 0; j < KLM; j++){
            if (arr[i][j].pemain == 1){
                mulai.x = i;
                mulai.y = j;
                return mulai;
            }
        }
    }
}
void bawah(game arr[BRS][KLM], int BRS_, int KLM_)
{
    for (int i = 0; i <=2; i++){
            if (arr[BRS_+i][KLM_].peta==1){
                readpeta(MATRIX* KLM_,MATRIX* (BRS_+i),MATRIX* (KLM_+1),MATRIX* (BRS_+i+1));
            }
            if (arr[BRS_+i][KLM_].tangga==1){
                readtangga(MATRIX* KLM_,MATRIX* (BRS_+i),MATRIX* (KLM_+1),MATRIX* (BRS_+i+1));
            }
            if (arr[BRS_+i][KLM_].pemain==1){
                readpemain(MATRIX* KLM_,MATRIX* (BRS_+i),MATRIX* (KLM_+1),MATRIX* (BRS_+i+1));
            }
    }

}
void atas(game arr[BRS][KLM], int BRS_, int KLM_)
{
    for (int i = 0; i <=3; i++){
            if (arr[BRS_-i][KLM_].peta==1){
                readpeta(MATRIX* KLM_,MATRIX* (BRS_-i),MATRIX* (KLM_+1),MATRIX* (BRS_-i+1));
            }
            if (arr[BRS_-i][KLM_].tangga==1){
                readtangga(MATRIX* KLM_,MATRIX* (BRS_-i),MATRIX* (KLM_+1),MATRIX* (BRS_-i+1));
            }
            if (arr[BRS_-i][KLM_].pemain==1){
                readpemain(MATRIX* KLM_,MATRIX* (BRS_-i),MATRIX* (KLM_+1),MATRIX* (BRS_-i+1));
            }
    }
}
void kiri(game arr[BRS][KLM], int BRS_, int KLM_)
{
    for (int i = 0; i <=3; i++){
            if (arr[BRS_][KLM_-i].peta==1){
                readpeta(MATRIX* (KLM_-i),MATRIX* BRS_,MATRIX* (KLM_-i+1),MATRIX* (BRS_+1));
            }
            if (arr[BRS_][KLM_-i].tangga==1){
                readtangga(MATRIX* (KLM_-i),MATRIX* BRS_,MATRIX* (KLM_-i+1),MATRIX* (BRS_+1));
            }
            if (arr[BRS_][KLM_-i].pemain==1){
                readpemain(MATRIX* (KLM_-i),MATRIX* BRS_,MATRIX* (KLM_-i+1),MATRIX* (BRS_+1));
            }
    }
}
void kanan(game arr[BRS][KLM], int BRS_, int KLM_)
{
    for (int i = 0; i <=3; i++){
            printf("%d",i);
            if (arr[BRS_][KLM_+i].peta==1){
                readpeta(MATRIX* (KLM_+i),MATRIX* BRS_,MATRIX* (KLM_+i+1),MATRIX* (BRS_+1));
            }
            if (arr[BRS_][KLM_+i].tangga==1){
                readtangga(MATRIX* (KLM_+i),MATRIX* BRS_,MATRIX* (KLM_+i+1),MATRIX* (BRS_+1));
            }
            printf("%d",arr[BRS_][KLM_+i].pemain);
            if (arr[BRS_][KLM_+i].pemain==1){
                readpemain(MATRIX* (KLM_+i),MATRIX* BRS_,MATRIX* (KLM_+i+1),MATRIX* (BRS_+1));
            }
    }
}
//untung memeriksa apakah di bawah ada objek atau tidak
bool diam(game arr[BRS][KLM], int BRS_, int KLM_){
    if ((arr[BRS_+1][KLM_].peta==1&&arr[BRS_+1][KLM_].tangga==0)){
        return true;
    }
        return false;
}

bool jalan(game arr[BRS][KLM], int BRS_, int KLM_,int brsbef, int klmbef){
    if ((arr[BRS_][KLM_].pemain == arr[brsbef][klmbef].pemain)){
        return false;
    }
        return true;
}
//memeriksa apakah di samping ada tembok atau tidak
bool kanankiri(game arr[BRS][KLM], int BRS_, int KLM_, int arah){
    if(arr[BRS_][KLM_+arah].peta == 1){
        return true;
    } else{
        return false;
    }
}
//untuk memeriksa apakah di bawah ada objek atau tudak
bool jatuh(game arr[BRS][KLM], int BRS_, int KLM_){
    if (arr[BRS_+1][KLM_].peta==0&&arr[BRS_+1][KLM_].tangga==0){
        return true;
    }
        return false;
}
//untuk memeriksa apakah sedang di tangga atau tidak saat naik
bool naiktangga(game arr[BRS][KLM], int BRS_, int KLM_){
    if (((arr[BRS_][KLM_].tangga==1)&&(arr[BRS_-1][KLM_].tangga==1))){
        return true;
    }else {
        return false;
    }
}
//untuk memeriksa apakah sedang di tangga atau tidak saat turun
bool turuntangga(game arr[BRS][KLM], int BRS_, int KLM_){
    if (((arr[BRS_][KLM_].tangga==1)&&(arr[BRS_+1][KLM_].tangga==1))){
        return true;
    }else{
        return false;
    }
}
//menggerakan pemain
void movement(char gerak, game arr[BRS][KLM], int* BRS_, int* KLM_)
{
    switch(gerak)
    {
        case 'W'    : if ((naiktangga(arr,*BRS_,*KLM_) == true) || (diam(arr,*BRS_,*KLM_) == false)){
                        delpemain(arr,*BRS_,*KLM_);
                        *BRS_=*BRS_-1;
                        }
                        break;
        case 'S'    : if((diam(arr,*BRS_,*KLM_) == false) || (turuntangga(arr,*BRS_,*KLM_) == true)){
                        delpemain(arr,*BRS_,*KLM_);
                        *BRS_=*BRS_+1;
                        printf("asiyap");
                        }
                        break;
        case 'A'    : if ((kanankiri(arr,*BRS_,*KLM_,-1)==false)){
                        delpemain(arr,*BRS_,*KLM_);
                        (*KLM_)=(*KLM_)-1;
                        }
                        break;
        case 'D'    : if ((kanankiri(arr,*BRS_,*KLM_,+1)==false)){
                        delpemain(arr,*BRS_,*KLM_);
                        (*KLM_)=(*KLM_)+1;
                        }
                        break;
        }
        inspemain(arr,*BRS_,*KLM_);
        printf("ewe%d",arr[*BRS_][*KLM_].pemain);
}
//menampilkan gerakan pemain
void movementpemain(char gerak, game arr[BRS][KLM], int baris_, int kolom_)
{
    switch(gerak){
    case 'A' :
            setviewport(((kolom_)*MATRIX), ((baris_)*MATRIX),((kolom_+3)*MATRIX), ((baris_+1)*MATRIX),1);
            clearviewport();
            setviewport(((kolom_)*MATRIX), (baris_*MATRIX),((kolom_-2)*MATRIX), ((baris_+1)*MATRIX),1);
            clearviewport();
            setviewport(0,0,1050,690,1);
            kanan(arr,baris_,kolom_);
            kiri(arr,baris_,kolom_);
            break;
    case 'D' :
            setviewport(((kolom_)*MATRIX), (baris_*MATRIX),((kolom_-3)*MATRIX), ((baris_+1)*MATRIX),1);
            clearviewport();
            setviewport(((kolom_)*MATRIX), ((baris_)*MATRIX),((kolom_+2)*MATRIX), ((baris_+1)*MATRIX),1);
            clearviewport();
            setviewport(0,0,1050,690,1);
            kiri(arr,baris_,kolom_);
            kanan(arr,baris_,kolom_);
            break;
    case 'W' :
            setviewport((kolom_*MATRIX), ((baris_)*MATRIX),((kolom_+1)*MATRIX), ((baris_+3)*MATRIX),1);
            clearviewport();
            setviewport((kolom_*MATRIX), ((baris_)*MATRIX),((kolom_+1)*MATRIX), ((baris_-2)*MATRIX),1);
            clearviewport();
            setviewport(0,0,1050,690,1);
            atas(arr,baris_,kolom_);
            bawah(arr,baris_,kolom_);
            break;
    case 'S' :printf("asiyap5");
            setviewport((kolom_*MATRIX), ((baris_)*MATRIX),((kolom_+1)*MATRIX), ((baris_-3)*MATRIX),1);
            clearviewport();
            printf("asiyap6");
            setviewport((kolom_*MATRIX), ((baris_)*MATRIX),((kolom_+1)*MATRIX), ((baris_+2)*MATRIX),1);
            clearviewport();
            printf("asiyap7");
            setviewport(0,0,1050,690,1);
            printf("asiyap8");
            atas(arr,baris_,kolom_);
            printf("asiyap9");
            bawah(arr,baris_,kolom_);
            printf("asiyap10");
            break;
    }
}
void buatpeta2(game arr[BRS][KLM], int *BRS_, int *KLM_)
{
    buatpeta(arr,BRS_,KLM_);
}
int main()
{
    int baris_bef, kolom_bef;
    char gerak;
    int page=0;
    bool keep;
    keep = true;
    initwindow(getmaxwidth(),getmaxheight()," ",0,0,false,true);
    setviewport(0,0,1050,690,1);
    int BRS_, KLM_;
    game arr[BRS][KLM];
    buatpeta2(arr,&BRS_,&KLM_);
    printf("%d,%d",BRS_,KLM_);
    setactivepage(0);
    tampilall(arr);
    setactivepage(1);
    tampilall(arr);
    while(keep){
        setactivepage(page);
        setvisualpage(1-page);
        baris_bef = BRS_;
        kolom_bef = KLM_;
        if(!jatuh(arr,BRS_,KLM_)){
            gerak = toupper(getch());
            //printf("asiyap");
        }else{
            gerak = 'S';
            delay(300);
        }

        movement(gerak,arr,&BRS_,&KLM_);
        printf("asiyap1");
        movementpemain(gerak,arr,BRS_,KLM_);
        printf("asiyap2");
        if (jalan(arr,BRS_,KLM_,baris_bef,kolom_bef)){
        page = 1 - page;
        printf("asiyap3");
        }
        printf("asiyap4");
    }

    closegraph();
    return 0;
}
