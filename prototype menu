#include<stdio.h>
#include<windows.h>
#include<graphics.h>
#include<conio.h>


int main(){
    void control_button();
    initwindow(getmaxwidth(), getmaxheight(), " ", 0, 0, false, true);
    int x, y;

    while(!ismouseclick(WM_LBUTTONDOWN)){
    readimagefile("judul.jpg",325,120,1025,223);

    settextstyle(BOLD_FONT, HORIZ_DIR, 7);
    outtextxy(570, 240, "Play");

    settextstyle(BOLD_FONT, HORIZ_DIR, 7);
    outtextxy(570, 340, "Highscore");

    settextstyle(BOLD_FONT, HORIZ_DIR, 7);
    outtextxy(570, 440, "Exit");

    }
    while(1){
        getmouseclick(WM_LBUTTONDOWN, x, y);
        //Masuk ke Permainan
        if((x>565)&&(x<730)&&(y>250)&&(y<290)){
            cleardevice();
            settextstyle(BOLD_FONT, HORIZ_DIR, 5);
            outtextxy(470, 240, "Selamat Bermain");
            getch();
            exit(1);
        }
        //Menampilkan Leaderboard
        else if((x>565)&&(x<730)&&(y>350)&&(y<390)){
            cleardevice();
            settextstyle(BOLD_FONT, HORIZ_DIR, 5);
            outtextxy(370, 240, "Leaderboard Belum Tersedia");
            getch();
            exit(1);
        }
    }
    getch();
    closegraph();
}

//Mau dirombak juga mangga, kurang lebihnya monmaap.
//catatan : Navigasi menggunakan mouse, getmouseclick(WM_LBUTTONDOWN,x,y) LMOUSEBUTTON (ini syntax buat klik kiri)
//          untuk bisa ngeklik silahkan diperhitungkan x dan y pada gambar atau tulisan yang ditampilkan

//bisi ada yang gangerti nanya aja di grup -eki
