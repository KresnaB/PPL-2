#include <graphics.h>
#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <stdbool.h>

#define MATRIX 30
#define BRS 690/MATRIX
#define KLM 1050/MATRIX
//dibuat oleh @kresna_111 // ©2019 kresnabayusanyoto/181511051.

//nama       : kresna bayu sanyoto
//NIM        : 181511051
//kelas      :1B
//bulan/tahun: 3/2019
//nama file  : Full physic animated++.cpp
//source code game lode runner dengan menggunakan bahasa C

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
//visual
void readpeta(int x1,int y1,int x2,int y2)
{
    readimagefile("blocknewgen.gif",x1,y1,x2,y2);
}
void readpemain(int x1,int y1,int x2,int y2,int gerakpemain)
{
    switch(gerakpemain){
    case 1:readimagefile("kasino1.gif",x1,y1,x2,y2);
            break;
    case 2:readimagefile("kasino2.gif",x1,y1,x2,y2);
            break;
    case 3:readimagefile("kasino3.gif",x1,y1,x2,y2);
            break;
    case 4:readimagefile("kasino4.gif",x1,y1,x2,y2);
            break;
    case 5:readimagefile("naik1.gif",x1,y1,x2,y2);
            break;
    case 6:readimagefile("naik2.gif",x1,y1,x2,y2);
            break;
    case 7:readimagefile("gelantungan.gif",x1,y1,x2,y2);
            break;
    case 8:readimagefile("jatuh.gif",x1,y1,x2,y2);
            break;
    }
}
void readtangga(int x1,int y1,int x2,int y2)
{
    readimagefile("tanggadono.gif",x1,y1,x2,y2);
}
void readtali(int x1,int y1,int x2,int y2)
{
    readimagefile("tali2.0.gif",x1,y1,x2,y2);
}
void readdiamond(int x1,int y1,int x2,int y2)
{
    readimagefile("diamond.gif",x1,y1,x2,y2);
}
void readbot(int x1,int y1,int x2,int y2)
{
    readimagefile("musuh1.gif",x1,y1,x2,y2);
}
//
void delpemain(game arr[BRS][KLM],int brs,int klm)
{
    arr[brs][klm].pemain=0;
}

void diamond(game arr[BRS][KLM], int BRS_, int KLM_, int *score)
{
    if(arr[BRS_][KLM_].tangga == 3){
    	*score=*score+1;
       arr[BRS_][KLM_].tangga = 0;
    }
}
void delbalok (game arr[BRS][KLM],int baris,int kolom,int i)
{
    arr[baris+1][kolom+i].peta=0;
}
void delbalokallpage(game arr[BRS][KLM],int baris,int kolom,int i){
      if (i==1){
            setviewport((kolom+1)*MATRIX, (baris+1)*MATRIX,((kolom+2)*MATRIX)+1, ((baris+2)*MATRIX)+1,1);
            clearviewport();
            setviewport(0,0,1050,690,1);
      }
      if (i==2){
            setviewport((kolom)*MATRIX, ((baris+1)*MATRIX),((kolom-1)*MATRIX)+1, ((baris+2)*MATRIX)+1,1);
            clearviewport();
            setviewport(0,0,1050,690,1);
      }
}
void readdesain1(game arr[BRS][KLM]) //Modul untuk desain level
{
	//bata
arr[4][0].peta=1; arr[4][1].peta=1; arr[4][3].peta=1; arr[4][4].peta=1; arr[4][5].peta=1; arr[4][6].peta=1; arr[4][7].peta=1; arr[4][8].peta=1;
arr[4][9].peta=1; arr[4][15].peta=1; arr[4][16].peta=1; arr[4][17].peta=1; arr[4][18].peta=1; arr[4][19].peta=1; arr[4][20].peta=1; arr[4][21].peta=1;
arr[4][22].peta=1; arr[4][23].peta=1; arr[4][24].peta=1; arr[4][25].peta=1; arr[6][26].peta=1; arr[6][27].peta=1; arr[6][28].peta=1; arr[6][29].peta=1;
arr[6][30].peta=1; arr[6][31].peta=1; arr[6][32].peta=1; arr[6][33].peta=1; arr[7][10].peta=1; arr[7][15].peta=1; arr[7][16].peta=1; arr[7][17].peta=1;
arr[7][18].peta=1; arr[7][19].peta=1; arr[7][20].peta=1; arr[7][21].peta=1; arr[7][22].peta=1; arr[7][23].peta=1; arr[7][24].peta=1; arr[8][3].peta=1;
arr[8][4].peta=1; arr[8][5].peta=1; arr[8][6].peta=1; arr[8][7].peta=1; arr[8][9].peta=1; arr[8][10].peta=1; arr[8][11].peta=1; arr[8][24].peta=1;
arr[9][3].peta=1; arr[9][6].peta=1; arr[10][3].peta=1; arr[10][6].peta=1; arr[10][24].peta=1; arr[11][3].peta=1; arr[11][8].peta=1; arr[11][9].peta=1;
arr[11][10].peta=1; arr[11][11].peta=1; arr[11][15].peta=1; arr[11][16].peta=1; arr[11][17].peta=1; arr[11][18].peta=1; arr[11][19].peta=1;
arr[11][20].peta=1; arr[11][21].peta=1; arr[11][22].peta=1; arr[11][23].peta=1; arr[11][33].peta=1; arr[11][34].peta=1; arr[12][3].peta=1;
arr[12][26].peta=1; arr[13][0].peta=1; arr[13][1].peta=1; arr[13][2].peta=1; arr[13][3].peta=1; arr[13][4].peta=1; arr[13][23].peta=1; arr[13][24].peta=1;
arr[13][26].peta=1; arr[14][19].peta=1; arr[14][26].peta=1; arr[13][20].peta=1; arr[13][21].peta=1; arr[15][19].peta=1; arr[15][26].peta=1; arr[16][19].peta=1;
arr[16][26].peta=1; arr[16][28].peta=1; arr[16][29].peta=1; arr[16][30].peta=1; arr[17][8].peta=1; arr[17][12].peta=1; arr[17][15].peta=1; arr[17][16].peta=1;
arr[17][17].peta=1; arr[17][28].peta=1; arr[17][29].peta=1; arr[17][30].peta=1; arr[18][8].peta=1; arr[18][12].peta=1; arr[18][15].peta=1; arr[18][16].peta=1;
arr[18][17].peta=1; arr[18][28].peta=1; arr[18][29].peta=1; arr[18][30].peta=1; arr[19][8].peta=1; arr[19][12].peta=1; arr[19][15].peta=1; arr[19][16].peta=1;
arr[19][17].peta=1; arr[19][22].peta=1; arr[19][23].peta=1; arr[19][24].peta=1; arr[19][25].peta=1; arr[19][26].peta=1; arr[19][28].peta=1; arr[19][30].peta=1;
arr[20][0].peta=1; arr[20][1].peta=1; arr[20][2].peta=1; arr[20][3].peta=1; arr[20][4].peta=1; arr[20][8].peta=1; arr[20][12].peta=1; arr[20][17].peta=1;
arr[20][22].peta=1; arr[20][23].peta=1; arr[20][24].peta=1; arr[20][25].peta=1; arr[20][26].peta=1; arr[20][28].peta=1; arr[20][29].peta=1; arr[20][30].peta=1;
arr[20][31].peta=1; arr[21][0].peta=1; arr[21][8].peta=1; arr[21][9].peta=1; arr[21][10].peta=1; arr[21][12].peta=1; arr[16][18].peta=1;
arr[21][22].peta=1; arr[21][23].peta=1; arr[21][24].peta=1; arr[21][25].peta=1; arr[21][26].peta=1; arr[22][0].peta=1; arr[22][1].peta=1; arr[22][2].peta=1;
arr[22][3].peta=1; arr[22][4].peta=1; arr[22][5].peta=1; arr[22][6].peta=1; arr[22][7].peta=1; arr[22][8].peta=1; arr[22][9].peta=1; arr[22][10].peta=1;
arr[22][11].peta=1; arr[22][12].peta=1; arr[22][13].peta=1; arr[22][14].peta=1; arr[22][15].peta=1; arr[22][16].peta=1; arr[22][17].peta=1; arr[22][18].peta=1;
arr[22][19].peta=1; arr[22][20].peta=1; arr[22][21].peta=1; arr[22][22].peta=1; arr[22][23].peta=1; arr[22][24].peta=1; arr[22][25].peta=1; arr[22][26].peta=1;
arr[22][27].peta=1; arr[22][28].peta=1; arr[22][29].peta=1; arr[22][30].peta=1; arr[22][31].peta=1; arr[22][32].peta=1; arr[22][33].peta=1; arr[22][34].peta=1;
//arr[21][4].peta=1;
//tangga
arr[4][2].tangga=1; arr[5][2].tangga=1; arr[6][2].tangga=1; arr[7][2].tangga=1; arr[8][2].tangga=1; arr[9][2].tangga=1; arr[10][2].tangga=1; arr[11][2].tangga=1;
arr[12][2].tangga=1; arr[8][8].tangga=1; arr[9][8].tangga=1; arr[10][8].tangga=1; arr[5][25].tangga=1; arr[6][25].tangga=1; arr[7][25].tangga=1;
arr[8][25].tangga=1; arr[9][25].tangga=1; arr[10][25].tangga=1; arr[11][25].tangga=1; arr[12][25].tangga=1; arr[13][25].tangga=1; arr[15][3].tangga=1;
arr[16][3].tangga=1; arr[17][3].tangga=1; arr[18][3].tangga=1; arr[19][3].tangga=1; arr[17][9].tangga=1; arr[18][9].tangga=1; arr[19][9].tangga=1;
arr[20][9].tangga=1; arr[17][11].tangga=1; arr[18][11].tangga=1; arr[19][11].tangga=1; arr[20][11].tangga=1; arr[21][11].tangga=1; arr[14][21].tangga=1;
arr[15][21].tangga=1; arr[16][21].tangga=1; arr[17][21].tangga=1; arr[18][21].tangga=1; arr[19][21].tangga=1; arr[20][21].tangga=1; arr[21][21].tangga=1;
arr[13][22].tangga=1; arr[14][22].tangga=1; arr[15][22].tangga=1; arr[16][22].tangga=1; arr[17][22].tangga=1; arr[18][22].tangga=1; arr[11][32].tangga=1;
arr[12][32].tangga=1; arr[13][32].tangga=1; arr[14][32].tangga=1; arr[15][32].tangga=1; arr[16][32].tangga=1; arr[17][32].tangga=1; arr[18][32].tangga=1;
arr[19][32].tangga=1; arr[20][32].tangga=1; arr[21][32].tangga=1; arr[20][5].tangga=1; arr[21][5].tangga=1; arr[1][18].tangga=1; arr[2][18].tangga=1;
 arr[3][18].tangga=1;

//tali
arr[3][10].tangga=2; arr[3][11].tangga=2; arr[3][12].tangga=2; arr[3][13].tangga=2; arr[3][14].tangga=2; arr[3][26].tangga=2; arr[3][27].tangga=2;
arr[3][28].tangga=2; arr[3][29].tangga=2; arr[9][14].tangga=2; arr[9][15].tangga=2; arr[9][16].tangga=2; arr[9][17].tangga=2; arr[9][18].tangga=2;
arr[9][19].tangga=2; arr[9][20].tangga=2; arr[9][21].tangga=2; arr[9][22].tangga=2; arr[9][23].tangga=2; arr[10][12].tangga=2; arr[10][13].tangga=2;
arr[10][14].tangga=2; arr[10][26].tangga=2; arr[10][27].tangga=2; arr[10][28].tangga=2; arr[10][29].tangga=2; arr[10][30].tangga=2; arr[10][31].tangga=2;
arr[15][4].tangga=2; arr[15][5].tangga=2; arr[15][6].tangga=2; arr[15][7].tangga=2; arr[15][8].tangga=2; arr[16][13].tangga=2; arr[16][14].tangga=2;

// diamond
arr[21][14].tangga=3; arr[13][19].tangga=3; arr[6][17].tangga=3; arr[7][6].tangga=3; arr[15][29].tangga=3; 

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
//inisiasi tampilan
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
                readpemain(MATRIX* j,MATRIX* i,MATRIX* (j+1),MATRIX* (i+1),1);
            }
        }
    }

}
//kordinat pemain
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
//menampilkan sprites
void bawah(game arr[BRS][KLM], int BRS_, int KLM_,int a)
{
    for (int i = 0; i <=2; i++){
            if (arr[BRS_+i][KLM_].peta==1){
                readpeta(MATRIX* KLM_,MATRIX* (BRS_+i),MATRIX* (KLM_+1),MATRIX* (BRS_+i+1));
            }
            if (arr[BRS_+i][KLM_].tangga==1){
                readtangga(MATRIX* KLM_,MATRIX* (BRS_+i),MATRIX* (KLM_+1),MATRIX* (BRS_+i+1));
            }
            if (arr[BRS_+i][KLM_].tangga==2){
                readtali(MATRIX* KLM_,MATRIX* (BRS_+i),MATRIX* (KLM_+1),MATRIX* (BRS_+i+1));
            }
            if (arr[BRS_+i][KLM_].tangga==3){
                readdiamond(MATRIX* KLM_,MATRIX* (BRS_+i),MATRIX* (KLM_+1),MATRIX* (BRS_+i+1));
            }
            if (arr[BRS_+i][KLM_].pemain==1){
                readpemain(MATRIX* KLM_,MATRIX* (BRS_+i),MATRIX* (KLM_+1),MATRIX* (BRS_+i+1),a);
            }
    }

}
void atas(game arr[BRS][KLM], int BRS_, int KLM_,int a)
{
    for (int i = 0; i <=3; i++){
            if (arr[BRS_-i][KLM_].peta==1){
                readpeta(MATRIX* KLM_,MATRIX* (BRS_-i),MATRIX* (KLM_+1),MATRIX* (BRS_-i+1));
            }
            if (arr[BRS_-i][KLM_].tangga==1){
                readtangga(MATRIX* KLM_,MATRIX* (BRS_-i),MATRIX* (KLM_+1),MATRIX* (BRS_-i+1));
            }
            if (arr[BRS_-i][KLM_].tangga==2){
                readtali(MATRIX* KLM_,MATRIX* (BRS_-i),MATRIX* (KLM_+1),MATRIX* (BRS_-i+1));
            }
            if (arr[BRS_-i][KLM_].tangga==3){
                readdiamond(MATRIX* KLM_,MATRIX* (BRS_-i),MATRIX* (KLM_+1),MATRIX* (BRS_-i+1));
            }
            if (arr[BRS_-i][KLM_].pemain==1){
                readpemain(MATRIX* KLM_,MATRIX* (BRS_-i),MATRIX* (KLM_+1),MATRIX* (BRS_-i+1),a);
            }
    }
}
void kiri(game arr[BRS][KLM], int BRS_, int KLM_,int a)
{
    for (int i = 0; i <=3; i++){
            if (arr[BRS_][KLM_-i].peta==1){
                readpeta(MATRIX* (KLM_-i),MATRIX* BRS_,MATRIX* (KLM_-i+1),MATRIX* (BRS_+1));
            }
            if (arr[BRS_][KLM_-i].tangga==1){
                readtangga(MATRIX* (KLM_-i),MATRIX* BRS_,MATRIX* (KLM_-i+1),MATRIX* (BRS_+1));
            }
            if (arr[BRS_][KLM_-i].tangga==2){
                readtali(MATRIX* (KLM_-i),MATRIX* BRS_,MATRIX* (KLM_-i+1),MATRIX* (BRS_+1));
            }
            if (arr[BRS_][KLM_-i].tangga==3){
                readdiamond(MATRIX* (KLM_-i),MATRIX* BRS_,MATRIX* (KLM_-i+1),MATRIX* (BRS_+1));
            }
            if (arr[BRS_][KLM_-i].pemain==1){
                readpemain(MATRIX* (KLM_-i),MATRIX* BRS_,MATRIX* (KLM_-i+1),MATRIX* (BRS_+1),a);
            }
    }
}
void kanan(game arr[BRS][KLM], int BRS_, int KLM_,int a)
{
    for (int i = 0; i <=3; i++){
            if (arr[BRS_][KLM_+i].peta==1){
                readpeta(MATRIX* (KLM_+i),MATRIX* BRS_,MATRIX* (KLM_+i+1),MATRIX* (BRS_+1));
            }
            if (arr[BRS_][KLM_+i].tangga==1){
                readtangga(MATRIX* (KLM_+i),MATRIX* BRS_,MATRIX* (KLM_+i+1),MATRIX* (BRS_+1));
            }
            if (arr[BRS_][KLM_+i].tangga==2){
                readtali(MATRIX* (KLM_+i),MATRIX* BRS_,MATRIX* (KLM_+i+1),MATRIX* (BRS_+1));
            }
            if (arr[BRS_][KLM_+i].tangga==3){
                readdiamond(MATRIX* (KLM_+i),MATRIX* BRS_,MATRIX* (KLM_+i+1),MATRIX* (BRS_+1));
            }
            if (arr[BRS_][KLM_+i].pemain==1){
                readpemain(MATRIX* (KLM_+i),MATRIX* BRS_,MATRIX* (KLM_+i+1),MATRIX* (BRS_+1),a);
            }
    }
}
//kondisi penggunaan animasi
void animasi(int *a,int *b,int *c)
{
    *a=*a+1;
    if (*a>6){
        *a=5;
    }
    *b=*b+1;
    if (*b>2){
        *b=1;
    }
    *c=*c+1;
    if (*c>4){
        *c=3;
    }
}
void animasi2(game arr[BRS][KLM],int baris,int kolom,int *a,int *b,int *c){
    if (arr[baris][kolom].tangga==2)
    {
        *a=7;
        *b=7;
        *c=7;
    }
    if (arr[baris][kolom].tangga==1)
    {
        *a=5;
        *b=5;
    }
    if (arr[baris+1][kolom].peta==1)
    {
        *c=8;
    }

}
//untung memeriksa apakah di bawah ada objek atau tidak
bool diam(game arr[BRS][KLM], int BRS_, int KLM_)
{
    if (arr[BRS_+1][KLM_].peta==1&&arr[BRS_+1][KLM_].tangga==0){
        return true;
    }
        return false;
}
bool atastangga(game arr[BRS][KLM], int BRS_, int KLM_){
    if (arr[BRS_-1][KLM_].peta==0&&arr[BRS_][KLM_].tangga==1){
        return true;
    }
        return false;
}
bool jalan(game arr[BRS][KLM], int BRS_, int KLM_,int brsbef, int klmbef)
{
    if ((arr[BRS_][KLM_].pemain == arr[brsbef][klmbef].pemain)){
        return false;
    }
        return true;
}
//memeriksa apakah di samping ada tembok atau tidak
bool kanankiri(game arr[BRS][KLM], int BRS_, int KLM_, int arah)
{
    if(arr[BRS_][KLM_+arah].peta == 1){
        return true;
    } else{
        return false;
    }
}

//untuk memeriksa apakah di bawah ada objek atau tudak
bool jatuh(game arr[BRS][KLM], int BRS_, int KLM_)
{
    if (arr[BRS_+1][KLM_].peta==0&&(arr[BRS_+1][KLM_].tangga==0||arr[BRS_+1][KLM_].tangga==2)&&arr[BRS_][KLM_].tangga==0){
        return true;
    }
        return false;
}
//untuk memeriksa apakah sedang di tangga atau tidak saat naik
bool naiktangga(game arr[BRS][KLM], int BRS_, int KLM_)
{
    if ((arr[BRS_][KLM_].tangga==1)&&(arr[BRS_-1][KLM_].tangga==1)){
        return true;
    }else {
        return false;
    }
}
//untuk memeriksa apakah sedang di tangga atau tidak saat turun
bool turuntangga(game arr[BRS][KLM], int BRS_, int KLM_)
{
    if (((arr[BRS_][KLM_].tangga==1)&&(arr[BRS_+1][KLM_].tangga==1))){
        return true;
    }else{
        return false;
    }
}
bool cekbalok(game arr[BRS][KLM], int BRS_, int KLM_, int arah)
{
    if(arr[BRS_+1][KLM_+arah].peta == 1){
        return true;
    } else{
        return false;
    }
}
//menggerakan pemain
void movement(char gerak, game arr[BRS][KLM], int* BRS_, int* KLM_, int *score)
{
    switch(gerak)
    {
        case 'W'    : if ((naiktangga(arr,*BRS_,*KLM_) == true) || ((diam(arr,*BRS_,*KLM_) == false)&&(atastangga(arr,*BRS_,*KLM_)==true))){
                        delpemain(arr,*BRS_,*KLM_);
                        *BRS_=*BRS_-1;
                        }
                        break;
        case 'S'    : if((diam(arr,*BRS_,*KLM_) == false) || (turuntangga(arr,*BRS_,*KLM_) == true)){
                        delpemain(arr,*BRS_,*KLM_);
                        diamond(arr,*BRS_,*KLM_, score);
                        *BRS_=*BRS_+1;
                        }
                        break;
        case 'A'    : if ((kanankiri(arr,*BRS_,*KLM_,-1)==false)){
                        delpemain(arr,*BRS_,*KLM_);
                        diamond(arr,*BRS_,*KLM_, score);
                        (*KLM_)=(*KLM_)-1;
                        }
                        break;
        case 'D'    : if ((kanankiri(arr,*BRS_,*KLM_,+1)==false)){
                        delpemain(arr,*BRS_,*KLM_);
                        diamond(arr,*BRS_,*KLM_, score);
                        (*KLM_)=(*KLM_)+1;
                        }
                        break;
        case 'M'    : if (cekbalok(arr,*BRS_,*KLM_,+1)==true){
                        delbalok(arr,*BRS_,*KLM_,+1);
                        }
                        break;
        case 'N'    : if (cekbalok(arr,*BRS_,*KLM_,-1)==true){
                        delbalok(arr,*BRS_,*KLM_,-1);
                        }
                        break;
        }
        inspemain(arr,*BRS_,*KLM_);
}
//menampilkan gerakan pemain
void movementpemain(char gerak, game arr[BRS][KLM], int baris_, int kolom_,int page,int a,int b,int c)
{
    switch(gerak){
    case 'A' :
            setviewport(((kolom_)*MATRIX), ((baris_-1)*MATRIX),((kolom_+3)*MATRIX), ((baris_+2)*MATRIX),1);
            clearviewport();
            setviewport(0,0,1050,690,1);
            kanan(arr,baris_-1,kolom_,b);
            kanan(arr,baris_,kolom_,b);
            kanan(arr,baris_+1,kolom_,b);
            break;
    case 'D' :
            setviewport(((kolom_-2)*MATRIX), (baris_-1)*MATRIX,((kolom_+1)*MATRIX), ((baris_+2)*MATRIX),1);
            clearviewport();
            setviewport(0,0,1050,690,1);
            kiri(arr,baris_-1,kolom_,c);
            kiri(arr,baris_,kolom_,c);
            kiri(arr,baris_+1,kolom_,c);
            break;
    case 'W' :
            setviewport((kolom_-1)*MATRIX, ((baris_)*MATRIX),((kolom_+2)*MATRIX), ((baris_+3)*MATRIX),1);
            clearviewport();
            setviewport(0,0,1050,690,1);
            bawah(arr,baris_,kolom_-1,a);
            bawah(arr,baris_,kolom_,a);
            bawah(arr,baris_,kolom_+1,a);
            break;
    case 'S' :
            setviewport((kolom_-1)*MATRIX, ((baris_-2)*MATRIX),((kolom_+2)*MATRIX), ((baris_+1)*MATRIX),1);
            clearviewport();
            setviewport(0,0,1050,690,1);
            atas(arr,baris_,kolom_-1,a);
            atas(arr,baris_,kolom_,a);
            atas(arr,baris_,kolom_+1,a);
            break;
    case 'M' :
            delbalokallpage(arr,baris_,kolom_,1);
            page = 1 - page;
            setactivepage(page);
            delbalokallpage(arr,baris_,kolom_,1);
            break;
    case 'N' :
            delbalokallpage(arr,baris_,kolom_,2);
            page = 1 - page;
            setactivepage(page);
            delbalokallpage(arr,baris_,kolom_,2);
            break;
    }
}
void buatpeta2(game arr[BRS][KLM], int *BRS_, int *KLM_)
{
    buatpeta(arr,BRS_,KLM_);
}
int main()
{
    int baris_bef, kolom_bef,atasbawah=5,kirikiri=3,kanankanan=1, score=0;
    char gerak, array[50];
    int page=0;
    bool keep;
    keep = true;
    initwindow(getmaxwidth(),getmaxheight()," ",0,0,false,true);
    setviewport(0,0,1050,690,1);
    int BRS_, KLM_;
    game arr[BRS][KLM];
    buatpeta2(arr,&BRS_,&KLM_);
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
        }else{
            gerak = 'S';
            delay(200);
        }
      	sprintf(array,"Score : %d ", score);
        printf(array,"Score : %d ", score);
      	outtextxy(0,10,array); 
        movement(gerak,arr,&BRS_,&KLM_,&score);
        animasi2(arr,BRS_,KLM_,&kanankanan,&kirikiri,&atasbawah);
        movementpemain(gerak,arr,BRS_,KLM_,page,atasbawah,kanankanan,kirikiri);
        if (jalan(arr,BRS_,KLM_,baris_bef,kolom_bef)){
        page = 1 - page;
        }
        animasi(&atasbawah,&kanankanan,&kirikiri);
    }
    closegraph();
    return 0;
}
