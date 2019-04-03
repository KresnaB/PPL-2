void menu(){
    void control_button();
    int x, y;

    menu:
    while(!ismouseclick(WM_LBUTTONDOWN)){
    readimagefile("judul.jpg",325,120,1025,223);

    readimagefile("play.jpg",600,320,752,383);

    readimagefile("Highscore.jpg",525,388,817,453);

    readimagefile("exit.jpg",600,458,752,513);

    }
    while(1){
        getmouseclick(WM_LBUTTONDOWN, x, y);
        //Masuk ke Permainan
        if((x>600)&&(x<752)&&(y>320)&&(y<383)){
            cleardevice();
            settextstyle(BOLD_FONT, HORIZ_DIR, 5);
            outtextxy(470, 240, "Selamat Bermain");
            delay(600);
            cleardevice();
            break;
        }
        //Menampilkan Leaderboard
        else if((x>525)&&(x<817)&&(y>388)&&(y<453)){
            cleardevice();
            settextstyle(BOLD_FONT, HORIZ_DIR, 5);
            outtextxy(370, 240, "Leaderboard Belum Tersedia");
            delay(180);
            cleardevice();
            goto menu;
        }
        else if((x>525)&&(x<817)&&(y>388)&&(y<453)){
            outtextxy(370, 240, "Terima Kasih");
            delay(600);
            exit(1);
        }
    }
}
