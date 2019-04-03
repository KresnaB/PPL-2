//modul buat nampilin desain lvl namanya : readdesain
//baru ada satu modul soalnya yg lain hrs di rombak ulang, dan still on progress
//karena ukurannya tdk sesuai dg ukuran matriks yg skrg

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
void readtali(int x1,int y1,int x2,int y2)
{
    readimagefile("tali.gif",x1,y1,x2,y2);
}
void readdiamond(int x1,int y1,int x2,int y2)
{
    readimagefile("diamond.gif",x1,y1,x2,y2);
}
void delpemain(game arr[BRS][KLM],int brs,int klm)
{
    arr[brs][klm].pemain=0;
}
void readdesain2(game arr[BRS][KLM]) //Modul untuk desain level
{
	// bata
arr[1][4].peta=1;
arr[1][5].peta=1;
arr[1][25].peta=1;
arr[1][26].peta=1;
arr[1][27].peta=1;
arr[1][28].peta=1;
arr[1][29].peta=1;
arr[2][5].peta=1; arr[2][6].peta=1; arr[2][25].peta=1;
arr[3][5].peta=1; arr[3][6].peta=1;
arr[3][19].peta=1; arr[3][20].peta=1;
arr[4][16].peta=1; arr[4][17].peta=1;
arr[4][18].peta=1; arr[4][19].peta=1; arr[4][20].peta=1;
arr[5][16].peta=1; arr[5][17].peta=1; arr[5][18].peta=1;
arr[5][19].peta=1; arr[5][20].peta=1;
arr[7][11].peta=1; arr[7][22].peta=1;
arr[8][5].peta=1; arr[8][6].peta=1; 
arr[8][7].peta=1; arr[8][8].peta=1;
arr[8][10].peta=1; arr[8][11].peta=1; arr[8][12].peta=1; 
arr[8][13].peta=1; arr[8][14].peta=1; arr[8][15].peta=1;
arr[8][19].peta=1; arr[8][20].peta=1; arr[8][21].peta=1; 
arr[8][22].peta=1; arr[8][23].peta=1; arr[8][24].peta=1;  
arr[8][26].peta=1; arr[8][27].peta=1; arr[8][28].peta=1; 
arr[8][29].peta=1; arr[8][30].peta=1; arr[8][32].peta=1;
arr[9][31].peta=1; arr[9][32].peta=1;
arr[10][31].peta=1; arr[10][32].peta=1;
arr[11][31].peta=1;
arr[12][31].peta=1;
arr[13][1].peta=1;arr[13][2].peta=1;
arr[14][1].peta=1; arr[14][2].peta=1; arr[14][5].peta=1; arr[14][6].peta=1; arr[14][7].peta=1; arr[14][8].peta=1; 
arr[14][9].peta=1; arr[14][10].peta=1; arr[14][11].peta=1; arr[14][12].peta=1; 
arr[14][13].peta=1; arr[14][14].peta=1; arr[14][15].peta=1; arr[14][18].peta=1; arr[14][19].peta=1; 
arr[14][21].peta=1; arr[14][22].peta=1; arr[14][23].peta=1; arr[14][24].peta=1; arr[14][25].peta=1; arr[14][26].peta=1;
arr[14][27].peta=1; arr[14][28].peta=1; arr[14][29].peta=1; arr[14][30].peta=1;  
arr[15][1].peta=1; arr[15][2].peta=1; arr[15][11].peta=1; arr[15][18].peta=1; arr[15][19].peta=1; arr[15][24].peta=1;
arr[16][1].peta=1; arr[16][2].peta=1; arr[16][3].peta=1; arr[16][4].peta=1; arr[16][11].peta=1; arr[16][24].peta=1; 
arr[17][1].peta=1; arr[17][2].peta=1; arr[17][3].peta=1; arr[17][4].peta=1; arr[17][11].peta=1; arr[17][24].peta=1; 
arr[18][1].peta=1; arr[18][2].peta=1; arr[18][3].peta=1; arr[18][4].peta=1; arr[18][11].peta=1; arr[18][24].peta=1; arr[18][32].peta=1;
arr[19][5].peta=1; arr[19][6].peta=1; arr[19][7].peta=1; arr[19][8].peta=1; arr[19][9].peta=1; arr[19][10].peta=1; 
arr[19][11].peta=1; arr[19][12].peta=1; arr[19][13].peta=1; arr[19][14].peta=1; arr[19][15].peta=1; 
arr[19][21].peta=1; arr[19][22].peta=1; arr[19][23].peta=1; arr[19][24].peta=1; arr[19][25].peta=1; 
arr[19][26].peta=1; arr[19][27].peta=1; arr[19][28].peta=1; arr[19][29].peta=1; arr[19][30].peta=1; 
arr[5][33].peta=1; arr[6][33].peta=1; arr[7][33].peta=1; arr[8][33].peta=1; arr[9][33].peta=1; arr[10][33].peta=1; 
arr[11][33].peta=1; arr[12][33].peta=1; arr[13][33].peta=1; arr[14][33].peta=1; arr[15][33].peta=1; arr[16][33].peta=1; 
arr[17][33].peta=1; arr[18][33].peta=1; arr[19][33].peta=1; arr[20][33].peta=1; arr[21][33].peta=1; arr[8][31].peta=1;
arr[11][32].peta=1; arr[12][32].peta=1;
 
// tangga 
arr[3][7].tangga=1; arr[4][7].tangga=1; arr[5][7].tangga=1; arr[6][7].tangga=1; arr[7][7].tangga=1; 
arr[8][9].tangga=1; arr[9][9].tangga=1;arr[10][9].tangga=1;arr[11][9].tangga=1;arr[12][9].tangga=1;arr[13][9].tangga=1;
arr[8][25].tangga=1; arr[9][25].tangga=1;arr[10][25].tangga=1;arr[11][25].tangga=1;arr[12][25].tangga=1;arr[13][25].tangga=1;
arr[14][16].tangga=1; arr[15][16].tangga=1;arr[16][16].tangga=1;arr[17][16].tangga=1;arr[18][16].tangga=1;arr[19][16].tangga=1;arr[20][16].tangga=1;arr[21][16].tangga=1;
arr[14][20].tangga=1; arr[15][20].tangga=1;arr[16][20].tangga=1;arr[17][20].tangga=1;arr[18][20].tangga=1;arr[19][20].tangga=1;arr[20][20].tangga=1;arr[21][20].tangga=1;

//tali 
arr[3][8].tangga=2; arr[3][9].tangga=2;arr[3][10].tangga=2;arr[3][11].tangga=2;arr[3][12].tangga=2;arr[3][13].tangga=2;arr[3][14].tangga=2;arr[3][15].tangga=2;
arr[10][10].tangga=2; arr[10][11].tangga=2; arr[10][12].tangga=2; arr[10][13].tangga=2; arr[10][14].tangga=2; arr[10][15].tangga=2; arr[10][16].tangga=2; arr[10][17].tangga=2; 
arr[10][18].tangga=2; arr[10][19].tangga=2; arr[10][20].tangga=2; arr[10][21].tangga=2; arr[10][22].tangga=2; arr[10][23].tangga=2; arr[10][24].tangga=2; 
arr[13][16].tangga=2; arr[13][17].tangga=2;

// diamond
arr[3][17].tangga=3; 
arr[7][5].tangga=3; arr[7][14].tangga=3; arr[7][29].tangga=3;
arr[13][28].tangga=3;
arr[18][6].tangga=3; arr[18][9].tangga=3; arr[18][22].tangga=3;
//arr[0][8].tangga=1;
//arr[1][0].peta=1;arr[1][1].peta=1; arr[1][2].peta=1; arr[1][8].tangga=1; arr[1][17].peta=1;arr[1][18].peta=1; arr[1][19].peta=1;
//arr[2][3].peta=1; arr[2][8].tangga=1; arr[2][16].peta=1;
//arr[3][8].tangga=1;
//arr[4][2].peta=4; arr[4][5].peta=1; arr[4][8].tangga=1; arr[4][14].peta=1; arr[4][17].peta=4;
//arr[5][0].peta=1; arr[5][1].peta=1; arr[5][2].peta=1; arr[5][3].tangga=1; arr[5][4].peta=1; 
//arr[5][5].peta=1; arr[5][6].peta=1; arr[5][7].peta=1; arr[5][8].peta=1;arr[5][12].peta=1;
//arr[5][13].peta=1;arr[5][14].peta=1;arr[5][15].peta=1;arr[5][16].tangga=1;arr[5][17].peta=1;arr[5][18].peta=1;arr[5][19].peta=1;
//arr[6][3].tangga=1; arr[6][4].tangga=2; arr[6][5].tangga=2; arr[6][6].tangga=2; arr[6][7].tangga=2; arr[6][8].tangga=2; arr[6][9].tangga=2;
//arr[6][10].tangga=2; arr[6][11].tangga=2; arr[6][12].tangga=2; arr[6][13].tangga=2; arr[6][14].tangga=2; arr[6][15].tangga=2; arr[6][16].tangga=1;
//arr[7][3].tangga=1; arr[7][16].tangga=1;
//arr[8][1].peta=4; arr[8][3].tangga=1; arr[8][16].tangga=1; 
//arr[9][0].peta=1; arr[9][1].peta=1; arr[9][2].peta=1; arr[9][3].peta=1; arr[9][4].peta=1; arr[9][5].peta=1; arr[9][6].peta=1; 
//arr[9][7].peta=1;arr[9][8].tangga=1; arr[9][12].tangga=1; arr[9][13].peta=1; arr[9][13].peta=1; arr[9][14].peta=1; 
//arr[9][15].peta=1; arr[9][16].peta=1; arr[9][17].peta=1; arr[9][18].peta=1; arr[9][19].peta=1;
//arr[10][5].peta=1; arr[10][8].tangga=1; arr[10][12].tangga=1; arr[10][15].peta=1;
//arr[11][5].peta=1; arr[11][8].tangga=1; arr[11][12].tangga=1; arr[11][15].peta=1;
//arr[12][5].peta=1; arr[12][8].tangga=1; arr[12][12].tangga=1; arr[12][15].peta=1; 
//arr[13][0].peta=1; arr[13][1].peta=1; arr[13][2].peta=1; arr[13][3].peta=1; arr[13][4].peta=1; arr[13][5].peta=1; 
//arr[13][6].peta=1; arr[13][7].peta=1; arr[13][8].tangga=1; arr[13][12].tangga=1; arr[13][13].peta=1; arr[13][14].peta=1; 
//arr[13][15].peta=1; arr[13][16].peta=1; arr[13][17].peta=1; arr[13][18].peta=1; arr[13][19].peta=1;
//arr[14][8].tangga=1; arr[14][12].tangga=1;
//arr[15][8].tangga=1; arr[15][12].tangga=1;
//arr[16][8].tangga=1; arr[16][12].tangga=1;
//arr[8][18].tangga=2; arr[12][4].tangga=2; arr[12][16].tangga=2;
}
void inspemain(game arr[BRS][KLM],int baris,int kolom)
{
    arr[baris][kolom].pemain=1;
}

void buatpeta(game arr[BRS][KLM], int* BRS_, int* KLM_) //untuk membuat array
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
	readdesain2(arr); //modulnya ada di atas

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
            if (arr[i][j].tangga==2){
                readtali(MATRIX* j,MATRIX* i,MATRIX* (j+1),MATRIX* (i+1));
            }
            if (arr[i][j].tangga==3){
                readdiamond(MATRIX* j,MATRIX* i,MATRIX* (j+1),MATRIX* (i+1));
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
            if (arr[i][j].tangga==3){
                readdiamond(MATRIX* j,MATRIX* i,MATRIX* (j+1),MATRIX* (i+1));
            }
             if (arr[i][j].tangga==2){
                readtali(MATRIX* j,MATRIX* i,MATRIX* (j+1),MATRIX* (i+1));
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
//            if (arr[BRS_][KLM_+i].pemain==1){
//                readpemain(MATRIX* (KLM_+i),MATRIX* BRS_,MATRIX* (KLM_+i+1),MATRIX* (BRS_+1));
//            }
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
