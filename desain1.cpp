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
void delpemain(game arr[BRS][KLM],int brs,int klm)
{
    arr[brs][klm].pemain=0;
}
void readdesain1(game arr[BRS][KLM]) //Modul untuk desain level
{
	//bata
arr[4][0].peta=1;
arr[4][1].peta=1;
arr[4][3].peta=1;
arr[4][4].peta=1;
arr[4][5].peta=1;
arr[4][6].peta=1;
arr[4][7].peta=1;
arr[4][8].peta=1;
arr[4][9].peta=1;
arr[4][15].peta=1;
arr[4][16].peta=1;
arr[4][17].peta=1;
arr[4][18].peta=1;
arr[4][19].peta=1;
arr[4][20].peta=1;
arr[4][21].peta=1;
arr[4][22].peta=1;
arr[4][23].peta=1;
arr[4][24].peta=1;
arr[4][25].peta=1;
arr[6][26].peta=1;
arr[6][27].peta=1;
arr[6][28].peta=1;
arr[6][29].peta=1;
arr[6][30].peta=1;
arr[6][31].peta=1;
arr[6][32].peta=1;
arr[6][33].peta=1;
arr[7][10].peta=1;
arr[7][15].peta=1;
arr[7][16].peta=1;
arr[7][17].peta=1;
arr[7][18].peta=1;
arr[7][19].peta=1;
arr[7][20].peta=1;
arr[7][21].peta=1;
arr[7][22].peta=1;
arr[7][23].peta=1;
arr[7][24].peta=1;
arr[8][3].peta=1;
arr[8][4].peta=1;
arr[8][5].peta=1;
arr[8][6].peta=1;
arr[8][7].peta=1;
arr[8][9].peta=1;
arr[8][10].peta=1;
arr[8][11].peta=1;
arr[8][24].peta=1;
arr[9][3].peta=1;
arr[9][6].peta=1;
arr[10][3].peta=1;
arr[10][6].peta=1;
arr[10][24].peta=1;
arr[11][3].peta=1;
arr[11][8].peta=1;
arr[11][9].peta=1;
arr[11][10].peta=1;
arr[11][11].peta=1;
arr[11][15].peta=1;
arr[11][16].peta=1;
arr[11][17].peta=1;
arr[11][18].peta=1;
arr[11][19].peta=1;
arr[11][20].peta=1;
arr[11][21].peta=1;
arr[11][22].peta=1;
arr[11][23].peta=1;
arr[11][33].peta=1;
arr[11][34].peta=1;
arr[12][3].peta=1;
arr[12][26].peta=1;
arr[13][0].peta=1;
arr[13][1].peta=1;
arr[13][2].peta=1;
arr[13][3].peta=1;
arr[13][4].peta=1;
arr[13][23].peta=1;
arr[13][24].peta=1;
arr[13][26].peta=1;
arr[14][19].peta=1;
arr[14][26].peta=1;
arr[13][20].peta=1;
arr[13][21].peta=1;
arr[15][19].peta=1;
arr[15][26].peta=1;
arr[16][19].peta=1;
arr[16][26].peta=1;
arr[16][28].peta=1;
arr[16][29].peta=1;
arr[16][30].peta=1;
arr[17][8].peta=1;
arr[17][12].peta=1;
arr[17][15].peta=1;
arr[17][16].peta=1;
arr[17][17].peta=1;
arr[17][28].peta=1;
arr[17][29].peta=1;
arr[17][30].peta=1;
arr[18][8].peta=1;
arr[18][12].peta=1;
arr[18][15].peta=1;
arr[18][16].peta=1;
arr[18][17].peta=1;
arr[18][28].peta=1;
arr[18][29].peta=1;
arr[18][30].peta=1;
arr[19][8].peta=1;
arr[19][12].peta=1;
arr[19][15].peta=1;
arr[19][16].peta=1;
arr[19][17].peta=1;
arr[19][22].peta=1;
arr[19][23].peta=1;
arr[19][24].peta=1;
arr[19][25].peta=1;
arr[19][26].peta=1;
arr[19][28].peta=1;
arr[19][30].peta=1;
arr[20][0].peta=1;
arr[20][1].peta=1;
arr[20][2].peta=1;
arr[20][3].peta=1;
arr[20][4].peta=1;
arr[20][8].peta=1;
arr[20][12].peta=1;
arr[20][17].peta=1;
arr[20][22].peta=1;
arr[20][23].peta=1;
arr[20][24].peta=1;
arr[20][25].peta=1;
arr[20][26].peta=1;
arr[20][28].peta=1;
arr[20][29].peta=1;
arr[20][30].peta=1;
arr[20][31].peta=1;
arr[21][0].peta=1;
arr[21][4].peta=1;
arr[21][8].peta=1;
arr[21][9].peta=1;
arr[21][10].peta=1;
arr[21][12].peta=1;
arr[21][19].peta=1;
arr[21][22].peta=1;
arr[21][23].peta=1;
arr[21][24].peta=1;
arr[21][25].peta=1;
arr[21][26].peta=1;
arr[22][0].peta=1;
arr[22][1].peta=1;
arr[22][2].peta=1;
arr[22][3].peta=1;
arr[22][4].peta=1;
arr[22][5].peta=1;
arr[22][6].peta=1;
arr[22][7].peta=1;
arr[22][8].peta=1;
arr[22][9].peta=1;
arr[22][10].peta=1;
arr[22][11].peta=1;
arr[22][12].peta=1;
arr[22][13].peta=1;
arr[22][14].peta=1;
arr[22][15].peta=1;
arr[22][16].peta=1;
arr[22][17].peta=1;
arr[22][18].peta=1;
arr[22][19].peta=1;
arr[22][20].peta=1;
arr[22][21].peta=1;
arr[22][22].peta=1;
arr[22][23].peta=1;
arr[22][24].peta=1;
arr[22][25].peta=1;
arr[22][26].peta=1;
arr[22][27].peta=1;
arr[22][28].peta=1;
arr[22][29].peta=1;
arr[22][30].peta=1;
arr[22][31].peta=1;
arr[22][32].peta=1;
arr[22][33].peta=1;
arr[22][34].peta=1;

//tangga
arr[4][2].tangga=1;
arr[5][2].tangga=1;
arr[6][2].tangga=1;
arr[7][2].tangga=1;
arr[8][2].tangga=1;
arr[9][2].tangga=1;
arr[10][2].tangga=1;
arr[11][2].tangga=1;
arr[12][2].tangga=1;
arr[8][8].tangga=1;
arr[9][8].tangga=1;
arr[10][8].tangga=1;
arr[5][25].tangga=1;
arr[6][25].tangga=1;
arr[7][25].tangga=1;
arr[8][25].tangga=1;
arr[9][25].tangga=1;
arr[10][25].tangga=1;
arr[11][25].tangga=1;
arr[12][25].tangga=1;
arr[13][25].tangga=1;
arr[15][3].tangga=1;
arr[16][3].tangga=1;
arr[17][3].tangga=1;
arr[18][3].tangga=1;
arr[19][3].tangga=1;
arr[17][9].tangga=1;
arr[18][9].tangga=1;
arr[19][9].tangga=1;
arr[20][9].tangga=1;
arr[17][11].tangga=1;
arr[18][11].tangga=1;
arr[19][11].tangga=1;
arr[20][11].tangga=1;
arr[21][11].tangga=1;
arr[14][21].tangga=1;
arr[15][21].tangga=1;
arr[16][21].tangga=1;
arr[17][21].tangga=1;
arr[18][21].tangga=1;
arr[19][21].tangga=1;
arr[20][21].tangga=1;
arr[21][21].tangga=1;
arr[13][22].tangga=1;
arr[14][22].tangga=1;
arr[15][22].tangga=1;
arr[16][22].tangga=1;
arr[17][22].tangga=1;
arr[18][22].tangga=1;
arr[11][32].tangga=1;
arr[12][32].tangga=1;
arr[13][32].tangga=1;
arr[14][32].tangga=1;
arr[15][32].tangga=1;
arr[16][32].tangga=1;
arr[17][32].tangga=1;
arr[18][32].tangga=1;
arr[19][32].tangga=1;
arr[20][32].tangga=1;
arr[21][32].tangga=1;

//tali
arr[3][10].tangga=2;
arr[3][11].tangga=2;
arr[3][12].tangga=2;
arr[3][13].tangga=2;
arr[3][14].tangga=2;
arr[3][26].tangga=2;
arr[3][27].tangga=2;
arr[3][28].tangga=2;
arr[3][29].tangga=2;
arr[9][14].tangga=2;
arr[9][15].tangga=2;
arr[9][16].tangga=2;
arr[9][17].tangga=2;
arr[9][18].tangga=2;
arr[9][19].tangga=2;
arr[9][20].tangga=2;
arr[9][21].tangga=2;
arr[9][22].tangga=2;
arr[9][23].tangga=2;
arr[10][12].tangga=2;
arr[10][13].tangga=2;
arr[10][14].tangga=2;
arr[10][26].tangga=2;
arr[10][27].tangga=2;
arr[10][28].tangga=2;
arr[10][29].tangga=2;
arr[10][30].tangga=2;
arr[10][31].tangga=2;
arr[15][4].tangga=2;
arr[15][5].tangga=2;
arr[15][6].tangga=2;
arr[15][7].tangga=2;
arr[15][8].tangga=2;
arr[16][13].tangga=2;
arr[16][14].tangga=2;
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
	readdesain1(arr); //modulnya ada di atas

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
