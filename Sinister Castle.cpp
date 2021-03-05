#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
#include <windows.h>
using namespace std;

struct hero {
    string name;
    int hp;
    int hpm;
    int atc1;
    int atc12;
    int atc2;
    int atc22;
    int heal;
    int heal2;
    double exp;
    int lvl;
    int pred;
};

struct enemy {
    string name;
    int hp;
    int hpm;
    int atc1;
    int atc12;
    int atc2;
    int atc22;
    int exp;
};

struct obj {
    string name;
    int hp;
    int hpm;
    int atc1;
    int atc12;
    int atc2;
    int atc22;
    int heal;
    int heal2;
    int exp;
};

struct pred {
    string name;
    int hp;
    int hpm;
    int atc1;
    int atc12;
    int atc2;
    int atc22;
    int heal;
    int heal2;
    int exp;
};

struct rel {
    string name;
    string info;
};

struct wea {
    string name;
    string info;
    int atc1;
    int atc12;
    int atc2;
    int atc22;
};

void herostat(struct hero hero1){
    cout << "�������� ������ ��������� " << hero1.name << " = " << hero1.hp << "/" << hero1.hpm << endl;
};

void enemystat(struct enemy enemy1){
    cout << "�������� ����������� �������� " << enemy1.name << " = " << enemy1.hp << "/" << enemy1.hpm << endl;
};

void allstat(struct hero hero1, struct enemy enemy1){
    cout << "�������� ������ ��������� " << hero1.name << " = " << hero1.hp << "/" << hero1.hpm << endl;
    cout << "�������� ����������� �������� " << enemy1.name << " = " << enemy1.hp << "/" << enemy1.hpm << endl;
};

void startstat(struct hero hero1){
    if (hero1.name == "���� ������") {cout << "   - �������� ����� ���������: 8/" << hero1.hpm << endl;}
    else if (hero1.name == "������ ����") {cout << "   - �������� ����� ���������: 9/" << hero1.hpm << endl;}
    else {cout << "   - �������� ����� ���������: " << hero1.hpm << endl;};
    cout << "   - ���� ����� ����� ����� ���������: " << hero1.atc1 << "-" << hero1.atc12 << endl;
    cout << "   - ���� ������ ����� ����� ���������: " << hero1.atc2 << "-" << hero1.atc22 << endl;
    cout << "   - �������������� �������� ����� ���������: " << hero1.heal << "-" << hero1.heal2 << endl;
    cout << "   - ����������� ����� ���������: ";
    if (hero1.name == "�����������") {cout << "�������������� ���� (������� 10 ����� � ��� 1 � �����)" << endl;}
    else if (hero1.name == "������") {cout << "������ ������ (����� 5 ��������, ������� 4 ����� � ��� 3 � �����)" << endl;}
    else if (hero1.name == "������") {cout << "���������������� ������� (��������� ��������������� �������� � ��� 1 � �����)" << endl;}
    else if (hero1.name == "����������") {cout << "��������� ��������� (������� 2-18 ����� � ��� 1 � �����)" << endl;}
    else if (hero1.name == "������ ����") {cout << "������� ���������� (������� ��� ���� ����� ���������� �� 1 � ��� 1 � �����)" << endl;}
    else if (hero1.name == "������������� ����") {cout << "������������� ������� (�������� �� �����, ��� 2 ��� � ��� 1 � �����)" << endl;}
    else if (hero1.name == "���� ������") {cout << "Ҹ���� ������ (��� -1-1 �� ���� ����� ������, ��������������� -2-2 �������� � ��� 1 � �����)" << endl;}
    else if (hero1.name == "������ �������") {cout << "������� ���� (�� ������ ������� �2 ����, ���� �� ���� ����, � 1 � �����)" << endl;}
    else if (hero1.name == "������") {cout << "������� ���� (1 � ������������� ��������, � 2 � �����)" << endl;}
    else if (hero1.name == "�����������") {cout << "������� ����� (1 � ������������� ��������, � 2 � �����)" << endl;}
    else if (hero1.name == "���������� �����") {
            cout << "���������� �������� (��� 1 �� ���� ����� ������, -3 � ������������� �������� � ��� ����������)" << endl;
            cout << "   - �����������: �� ����� ����� �������� 0.25 �����" << endl;
    }
    else if (hero1.name == "����� �� �������") {
            cout << "���������� �������� (��� 1 �� ���� ����� ������ � �������� ������ ���������� ����� �� 5)" << endl;
            cout << "   - �����������: �� �������� ���� �� ����� �����, �� �������� ���� ������ ����� ������ ��� ������, �� �������� ���� �� �������" << endl;
    }
    else if (hero1.name == "�����-�������") {
            cout << "��������� (1 � ������������� ��������, -1 �� ���� ��������������� ������� ������ � 3 � �����)" << endl;
            cout << "   - �����������: ����� ������������ ����, �� �������� ���� �� ����� �����" << endl;
    }
    else if (hero1.name == "���������� ���") {
            cout << "������ ���������� (-1 � ������������� �������� � 1 �� ���� ��������������� ������� ������)" << endl;
            cout << "   - �����������: ������ ������ ������� �������� ����������, ���� ��� ����������� ������� ����� ������ ����� ����������� ������," << endl;
            cout << "                  �� �������� ���� �� ����� �����" << endl;
    }
    else if (hero1.name == "������ ����") {
            cout << "������������� �������������� (1 � ������������� �������� � 1 � �����)" << endl;
            cout << "   - �����������: ���� �������� ����� 0, �� ��������������� ��� ���������, �� �������� -3 � ������������� � -1 �� ���� ������" << endl;
            cout << "                  �� �������� ���� �� ����� �����" << endl;
    }
    else if (hero1.name == "�������� ������ ������") {
            cout << "��������� ��������� ��������� (��������� ������)" << endl;
            cout << "   - �����������: ����� ������������ ������, �������� 2 ���� ����� �� ������ ��� ������, �� �������� ���� �� ����� �����" << endl;
    }
    else cout << "���" << endl;
}

void lvlstat(struct hero hero1, int nlvl){
    cout << "������� �����: " << hero1.lvl << endl;
    cout << "���� �����: " << hero1.exp << "/" << nlvl << endl;
}

void forstat(struct enemy enemy1, int i){
    cout << "   - �������� ����� ��������� = " << enemy1.hpm << endl;
    cout << "   - ���� ����� ����� ����� ��������� = " << enemy1.atc1 << "-" << enemy1.atc12 << endl;
    cout << "   - ���� ������ ����� ����� ��������� = " << enemy1.atc2 << "-" << enemy1.atc22 << endl;
    cout << "   - ������ ��������: ";
    if (i == 12){
        cout << "����� �������� �� 1 ������� ���� ������ ������ ��� �����" << endl;
    }
    else if (i == 18) {
        cout << "����� �������� �� 1 ������� ���� ���� ����� ������ � 1 ������� �� ����������� �������������� ��� ����� " << endl;
    }
    else if ((i == 30)||(i == 95)||(i == 16)||(i == 45)||(i == 106)) {
        cout << "������� ����� ����� �������� �������� � ��� ������������" << endl;
    }
    else if ((i == 26)||(i == 27)||(i == 28)||(i == 396)||(i==376)) {
        cout << "��������������� �������� ����� ������ ����� � ������� ���������� �����" << endl;
    }
    else if (i == 31) {
        cout << "������� ����� ����� �������� �������� � ��� �������" << endl;
    }
    else if ((i == 5)||(i == 107)||(i == 112)) {
        cout << "������� ����� ����� �������� �������� � ��� ��" << endl;
    }
    else if (i == 32) {
        cout << "����� ����� ����� �������� �������� � ��� ��" << endl;
    }
    else if (i == 34) {
        cout << "����� ����� ����� �������� �������� � ��� �������" << endl;
    }
    else if (i == 36) {
        cout << "������ ����� ����� �������� �������� � ��� ������������, � ������� ��" << endl;
    }
    else if (i == 37) {
        cout << "����� ����� ����� �������� �������� � ��� ������������ � ��" << endl;
    }
    else if (i == 38) {
        cout << "����� ����� ����� �������� �������� � ��� ������������, �� � �������" << endl;
    }
    else if (i == 111) {
        cout << "������ ����� ����� �������� ���� � �������� ���� 2-3 ��������" << endl;
    }
    else cout << "���" << endl;
}

int main(){
    srand (time(NULL));
    SetConsoleTitle("Sinister Castle");
    system("mode 130, 50");
    int zvyk = 0;
    start:
    system("cls");
    system("color 0E");
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string s = "0";
    string s2 = "0";
    string s3 = "����";
    string s4 = "-";
    string atcs = "-";
    string zan = "0";
    string re = "0";
    int x = 0;
    int gen = 0;
    int gen2 = 0;
    int i = 0;
    int j = 0;
    int l = 0;
    int l2 = 0;
    int l3 = 0;
    int l4 = 0;
    int k = 1;
    int baff1 = 0;
    int chet = 0;
    int krov = 0;
    int yad = 0;
    int bol = 0;
    int nlvl = 10;
    int panact = 0;
    int panact2 = 0;
    int rhave = 0;
    int reg = 0;
    int kod = 0;
    int prog = 0;
    int estpred = 0;
    int estrel = 0;
    int w = 0;
    kod = (rand()%(100000 - 10000)) + 10000;
    string kodv;
    int razmen = 0;
    int razmen2 = 0;
    struct wea wea1[26];
        wea1[0].name = "������";
        wea1[0].info = "�������";
        wea1[0].atc1 = 1;
        wea1[0].atc12 = 2;
        wea1[0].atc2 = 1;
        wea1[0].atc22 = 3;
        wea1[1].name = "������ ��� [�������]";
        wea1[1].info = "������ �����";
        wea1[1].atc1 = 1;
        wea1[1].atc12 = 3;
        wea1[1].atc2 = 2;
        wea1[1].atc22 = 4;
        wea1[2].name = "��� [�������]";
        wea1[2].info = "�����";
        wea1[2].atc1 = 2;
        wea1[2].atc12 = 3;
        wea1[2].atc2 = 3;
        wea1[2].atc22 = 4;
        wea1[3].name = "������ [�������]";
        wea1[3].info = "�������";
        wea1[3].atc1 = 2;
        wea1[3].atc12 = 2;
        wea1[3].atc2 = 0;
        wea1[3].atc22 = 6;
        wea1[4].name = "����� [�������]";
        wea1[4].info = "������";
        wea1[4].atc1 = 0;
        wea1[4].atc12 = 1;
        wea1[4].atc2 = 1;
        wea1[4].atc22 = 2;
        wea1[5].name = "����� [������]";
        wea1[5].info = "������";
        wea1[5].atc1 = 2;
        wea1[5].atc12 = 4;
        wea1[5].atc2 = 1;
        wea1[5].atc22 = 5;
        wea1[6].name = "������������� ����� [������]";
        wea1[6].info = "������������� ������";
        wea1[6].atc1 = 2;
        wea1[6].atc12 = 5;
        wea1[6].atc2 = 1;
        wea1[6].atc22 = 8;
        wea1[7].name = "�������� [�������]";
        wea1[7].info = "����������";
        wea1[7].atc1 = 0;
        wea1[7].atc12 = 1;
        wea1[7].atc2 = 0;
        wea1[7].atc22 = 1;
        wea1[8].name = "���������� ����� [�������]";
        wea1[8].info = "���������� ������";
        wea1[8].atc1 = 2;
        wea1[8].atc12 = 3;
        wea1[8].atc2 = 3;
        wea1[8].atc22 = 4;
        wea1[9].name = "������� ��� [���������]";
        wea1[9].info = "������� �����";
        wea1[9].atc1 = 3;
        wea1[9].atc12 = 4;
        wea1[9].atc2 = 4;
        wea1[9].atc22 = 6;
        wea1[10].name = "�������� ��� [�������]";
        wea1[10].info = "�������� �����";
        wea1[10].atc1 = 0;
        wea1[10].atc12 = 0;
        wea1[10].atc2 = 0;
        wea1[10].atc22 = 1;
        wea1[11].name = "����� � ������� ������� �� ����� [�����������]";
        wea1[11].info = "������� � ������� ������� �� �����";
        wea1[11].atc1 = 1;
        wea1[11].atc12 = 1;
        wea1[11].atc2 = 2;
        wea1[11].atc22 = 7;
        wea1[12].name = "����� [�������]";
        wea1[12].info = "�������";
        wea1[12].atc1 = 1;
        wea1[12].atc12 = 3;
        wea1[12].atc2 = 2;
        wea1[12].atc22 = 4;
        wea1[13].name = "���������� [���������]";
        wea1[13].info = "������������";
        wea1[13].atc1 = 1;
        wea1[13].atc12 = 2;
        wea1[13].atc2 = 3;
        wea1[13].atc22 = 4;
        wea1[14].name = "����� [�������]";
        wea1[14].info = "������";
        wea1[14].atc1 = 3;
        wea1[14].atc12 = 4;
        wea1[14].atc2 = 2;
        wea1[14].atc22 = 5;
        wea1[15].name = "������ [�������]";
        wea1[15].info = "��������";
        wea1[15].atc1 = 1;
        wea1[15].atc12 = 3;
        wea1[15].atc2 = 1;
        wea1[15].atc22 = 4;
        wea1[16].name = "��� � ����������� ������� [�����������]";
        wea1[16].info = "����� � ����������� �������";
        wea1[16].atc1 = 1;
        wea1[16].atc12 = 3;
        wea1[16].atc2 = 1;
        wea1[16].atc22 = 4;
        wea1[17].name = "����� � ������ �������� [���������]";
        wea1[17].info = "������ � ������ ��������";
        wea1[17].atc1 = 1;
        wea1[17].atc12 = 3;
        wea1[17].atc2 = 0;
        wea1[17].atc22 = 8;
        wea1[18].name = "���� [�������]";
        wea1[18].info = "�����";
        wea1[18].atc1 = 3;
        wea1[18].atc12 = 3;
        wea1[18].atc2 = 2;
        wea1[18].atc22 = 4;
        wea1[19].name = "������� ������� [�������]";
        wea1[19].info = "�������� �������";
        wea1[19].atc1 = 0;
        wea1[19].atc12 = 4;
        wea1[19].atc2 = 1;
        wea1[19].atc22 = 4;
        wea1[20].name = "������ ��� ������ [�������]";
        wea1[20].info = "������� ��� ������";
        wea1[20].atc1 = 2;
        wea1[20].atc12 = 3;
        wea1[20].atc2 = 3;
        wea1[20].atc22 = 4;
        wea1[21].name = "��������� ������ [������]";
        wea1[21].info = "��������� �������";
        wea1[21].atc1 = -2;
        wea1[21].atc12 = 4;
        wea1[21].atc2 = -3;
        wea1[21].atc22 = 6;
        wea1[22].name = "���������� [������]";
        wea1[22].info = "������������";
        wea1[22].atc1 = -3;
        wea1[22].atc12 = -2;
        wea1[22].atc2 = -5;
        wea1[22].atc22 = -3;
        wea1[23].name = "������ [�������]";
        wea1[23].info = "�������";
        wea1[23].atc1 = 2;
        wea1[23].atc12 = 4;
        wea1[23].atc2 = 3;
        wea1[23].atc22 = 4;
        wea1[24].name = "������������ [�����������]";
        wea1[24].info = "�������������";
        wea1[24].atc1 = 3;
        wea1[24].atc12 = 4;
        wea1[24].atc2 = 4;
        wea1[24].atc22 = 5;
        wea1[25].name = "���������� ������������ [�����������]";
        wea1[25].info = "���������� �������������";
        wea1[25].atc1 = 100;
        wea1[25].atc12 = 150;
        wea1[25].atc2 = 50;
        wea1[25].atc22 = 200;
    struct rel rel1[17];
        rel1[1].name = "������ ���������� �������� [������]";
        rel1[1].info = "��������������� 1 �������� ������ ���";
        rel1[2].name = "Ҹ���� ������ [������]";
        rel1[2].info = "�������� 1 �������� ������ ���";
        rel1[3].name = "������� �������� ���� [������]";
        rel1[3].info = "������� 1 ����� ����� ������ ���";
        rel1[4].name = "������� ������ � ����������� [���������]";
        rel1[4].info = "������� 2 ����� ����� ������ ���";
        rel1[5].name = "������ ������ [���������]";
        rel1[5].info = "��������������� 2 �������� ������ ���";
        rel1[6].name = "�������� � ������ [���������]";
        rel1[6].info = "�������� 2 �������� ������ ���";
        rel1[7].name = "�������� ����� [���������]";
        rel1[7].info = "�������� ����������� ������ ����� �� 1 ������ ���";
        rel1[8].name = "��� ��������� ���� [�����������]";
        rel1[8].info = "�������� ����������� ������� ����� �� 1 ������ ���";
        rel1[9].name = "���������� ������ [�������]";
        rel1[9].info = "�� ������ ������";
        rel1[10].name = "������� ��������� [�����������]";
        rel1[10].info = "���������� ��� ��������";
        rel1[11].name = "���������� ����� [�������]";
        rel1[11].info = "�������� ����������� ������ ����� �� 1 � ��������������� 1 �������� ������ ���";
        rel1[12].name = "���� ������ [������]";
        rel1[12].info = "��� ���������� � ���������� ��������";
        rel1[13].name = "���������� ����� [�������]";
        rel1[13].info = "�� ������ ������";
        rel1[14].name = "��������� �� ������ [������]";
        rel1[14].info = "��� ���� ����� �����������";
        rel1[15].name = "�������� ��������� ������ [�����������]";
        rel1[15].info = "�� ������ ������, �� ��� ����� :3";
        rel1[16].name = "������ [�����������]";
        rel1[16].info = "�������� ���� ���� �� ����";
    struct pred pred1[27];
        pred1[1].name = "������� � ������ ����������� (3 � ��������)";
        pred1[1].hp = 3;
        pred1[1].hpm = 0;
        pred1[1].atc1 = 0;
        pred1[1].atc12 = 0;
        pred1[1].atc2 = 0;
        pred1[1].atc22 = 0;
        pred1[1].heal = 0;
        pred1[1].heal2 = 0;
        pred1[1].exp = 0;
        pred1[2].name = "������� � ������� ������ ����������� (5 � ��������)";
        pred1[2].hp = 5;
        pred1[2].hpm = 0;
        pred1[2].atc1 = 0;
        pred1[2].atc12 = 0;
        pred1[2].atc2 = 0;
        pred1[2].atc22 = 0;
        pred1[2].heal = 0;
        pred1[2].heal2 = 0;
        pred1[2].exp = 0;
        pred1[3].name = "������� ������ ����� (1 � ��������)";
        pred1[3].hp = 1;
        pred1[3].hpm = 0;
        pred1[3].atc1 = 0;
        pred1[3].atc12 = 0;
        pred1[3].atc2 = 0;
        pred1[3].atc22 = 0;
        pred1[3].heal = 0;
        pred1[3].heal2 = 0;
        pred1[3].exp = 0;
        pred1[4].name = "��������� � �������� (2 � ��������)";
        pred1[4].hp = 2;
        pred1[4].hpm = 0;
        pred1[4].atc1 = 0;
        pred1[4].atc12 = 0;
        pred1[4].atc2 = 0;
        pred1[4].atc22 = 0;
        pred1[4].heal = 0;
        pred1[4].heal2 = 0;
        pred1[4].exp = 0;
        pred1[5].name = "������ ������� (7 � ��������, -2 � ������������� ��������)";
        pred1[5].hp = 7;
        pred1[5].hpm = -2;
        pred1[5].atc1 = 0;
        pred1[5].atc12 = 0;
        pred1[5].atc2 = 0;
        pred1[5].atc22 = 0;
        pred1[5].heal = 0;
        pred1[5].heal2 = 0;
        pred1[5].exp = 0;
        pred1[6].name = "���������� ������ ����� (3 � �����)";
        pred1[6].hp = 0;
        pred1[6].hpm = 0;
        pred1[6].atc1 = 0;
        pred1[6].atc12 = 0;
        pred1[6].atc2 = 0;
        pred1[6].atc22 = 0;
        pred1[6].heal = 0;
        pred1[6].heal2 = 0;
        pred1[6].exp = 3;
        pred1[7].name = "������� ������ (5 � �����)";
        pred1[7].hp = 0;
        pred1[7].hpm = 0;
        pred1[7].atc1 = 0;
        pred1[7].atc12 = 0;
        pred1[7].atc2 = 0;
        pred1[7].atc22 = 0;
        pred1[7].heal = 0;
        pred1[7].heal2 = 0;
        pred1[7].exp = 5;
        pred1[8].name = "������ ��� ������ ������ (1 � ������������ ����� ������� ������)";
        pred1[8].hp = 0;
        pred1[8].hpm = 0;
        pred1[8].atc1 = 0;
        pred1[8].atc12 = 1;
        pred1[8].atc2 = 0;
        pred1[8].atc22 = 0;
        pred1[8].heal = 0;
        pred1[8].heal2 = 0;
        pred1[8].exp = 0;
        pred1[9].name = "������� ������� ����� (7 � �����)";
        pred1[9].hp = 0;
        pred1[9].hpm = 0;
        pred1[9].atc1 = 0;
        pred1[9].atc12 = 0;
        pred1[9].atc2 = 0;
        pred1[9].atc22 = 0;
        pred1[9].heal = 0;
        pred1[9].heal2 = 0;
        pred1[9].exp = 7;
        pred1[10].name = "Ƹ���� �������� (6 � ��������, -1 � ������������� ��������)";
        pred1[10].hp = 6;
        pred1[10].hpm = -1;
        pred1[10].atc1 = 0;
        pred1[10].atc12 = 0;
        pred1[10].atc2 = 0;
        pred1[10].atc22 = 0;
        pred1[10].heal = 0;
        pred1[10].heal2 = 0;
        pred1[10].exp = 0;
        pred1[11].name = "������ �������� (1 � ������������� ��������, -5 � ��������)";
        pred1[11].hp = -5;
        pred1[11].hpm = 1;
        pred1[11].atc1 = 0;
        pred1[11].atc12 = 0;
        pred1[11].atc2 = 0;
        pred1[11].atc22 = 0;
        pred1[11].heal = 0;
        pred1[11].heal2 = 0;
        pred1[11].exp = 0;
        pred1[12].name = "������� �������� (-1 �� �����, ����� ������������ ����� �������� ������, ��������� � �� 1)";
        pred1[12].hp = -1;
        pred1[12].hpm = -1;
        pred1[12].atc1 = -1;
        pred1[12].atc12 = -1;
        pred1[12].atc2 = -1;
        pred1[12].atc22 = 1;
        pred1[12].heal = -1;
        pred1[12].heal2 = -1;
        pred1[12].exp = 0;
        pred1[13].name = "����� �������� (1 �� ���� ������� �������, -2 � ������������� ��������)";
        pred1[13].hp = 0;
        pred1[13].hpm = -2;
        pred1[13].atc1 = 0;
        pred1[13].atc12 = 0;
        pred1[13].atc2 = 0;
        pred1[13].atc22 = 1;
        pred1[13].heal = 1;
        pred1[13].heal2 = 0;
        pred1[13].exp = 0;
        pred1[14].name = "������� (�������)";
        pred1[14].hp = 0;
        pred1[14].hpm = 0;
        pred1[14].atc1 = 0;
        pred1[14].atc12 = 0;
        pred1[14].atc2 = 0;
        pred1[14].atc22 = 0;
        pred1[14].heal = 0;
        pred1[14].heal2 = 0;
        pred1[14].exp = 0;
        pred1[15].name = "������� (�������)";
        pred1[15].hp = 0;
        pred1[15].hpm = 0;
        pred1[15].atc1 = 0;
        pred1[15].atc12 = 0;
        pred1[15].atc2 = 0;
        pred1[15].atc22 = 0;
        pred1[15].heal = 0;
        pred1[15].heal2 = 0;
        pred1[15].exp = 0;
        pred1[16].name = "������ ����� (-1 � ��������)";
        pred1[16].hp = -1;
        pred1[16].hpm = 0;
        pred1[16].atc1 = 0;
        pred1[16].atc12 = 0;
        pred1[16].atc2 = 0;
        pred1[16].atc22 = 0;
        pred1[16].heal = 0;
        pred1[16].heal2 = 0;
        pred1[16].exp = 0;
        pred1[17].name = "������ (������)";
        pred1[17].hp = 0;
        pred1[17].hpm = 0;
        pred1[17].atc1 = 0;
        pred1[17].atc12 = 0;
        pred1[17].atc2 = 0;
        pred1[17].atc22 = 0;
        pred1[17].heal = 0;
        pred1[17].heal2 = 0;
        pred1[17].exp = 0;
        pred1[18].name = "������� � �������� �������� (������)";
        pred1[18].hp = 0;
        pred1[18].hpm = 0;
        pred1[18].atc1 = 0;
        pred1[18].atc12 = 0;
        pred1[18].atc2 = 0;
        pred1[18].atc22 = 0;
        pred1[18].heal = 0;
        pred1[18].heal2 = 0;
        pred1[18].exp = 0;
        pred1[19].name = "������ � ����������� (-2 � ����������� � 1 � ������������ ������ �������� ������)";
        pred1[19].hp = 0;
        pred1[19].hpm = 0;
        pred1[19].atc1 = 0;
        pred1[19].atc12 = 0;
        pred1[19].atc2 = -2;
        pred1[19].atc22 = 1;
        pred1[19].heal = 0;
        pred1[19].heal2 = 0;
        pred1[19].exp = 0;
        pred1[20].name = "������ � ����������� (-2 � ����������� � 1 � ������������ ������ ������� ������)";
        pred1[20].hp = 0;
        pred1[20].hpm = 0;
        pred1[20].atc1 = -2;
        pred1[20].atc12 = 1;
        pred1[20].atc2 = 0;
        pred1[20].atc22 = 0;
        pred1[20].heal = 0;
        pred1[20].heal2 = 0;
        pred1[20].exp = 0;
        pred1[21].name = "���������� �������� (3 � ��������, 1 � ������������� ��������������)";
        pred1[21].hp = 3;
        pred1[21].hpm = 0;
        pred1[21].atc1 = 0;
        pred1[21].atc12 = 0;
        pred1[21].atc2 = 0;
        pred1[21].atc22 = 0;
        pred1[21].heal = 0;
        pred1[21].heal2 = 1;
        pred1[21].exp = 0;
        pred1[22].name = "����� � ���� ������ (4 � ������������� ��������, ����������� ��������, ��� ����� ���������� ������������)";
        pred1[22].hp = 0;
        pred1[22].hpm = 4;
        pred1[22].atc1 = 0;
        pred1[22].atc12 = 0;
        pred1[22].atc2 = 0;
        pred1[22].atc22 = 0;
        pred1[22].heal = 0;
        pred1[22].heal2 = 0;
        pred1[22].exp = 0;
        pred1[23].name = "������ � ����������� ��������� ���� (������� 3 ����� ����������)";
        pred1[23].hp = 0;
        pred1[23].hpm = 0;
        pred1[23].atc1 = 0;
        pred1[23].atc12 = 0;
        pred1[23].atc2 = 0;
        pred1[23].atc22 = 0;
        pred1[23].heal = 0;
        pred1[23].heal2 = 0;
        pred1[23].exp = 0;
        pred1[24].name = "����������� ������ (������� 1 ����� ����������)";
        pred1[24].hp = 0;
        pred1[24].hpm = 0;
        pred1[24].atc1 = 0;
        pred1[24].atc12 = 0;
        pred1[24].atc2 = 0;
        pred1[24].atc22 = 0;
        pred1[24].heal = 0;
        pred1[24].heal2 = 0;
        pred1[24].exp = 0;
        pred1[25].name = "��� ����������� ������� (������� 2 ����� ����������)";
        pred1[25].hp = 0;
        pred1[25].hpm = 0;
        pred1[25].atc1 = 0;
        pred1[25].atc12 = 0;
        pred1[25].atc2 = 0;
        pred1[25].atc22 = 0;
        pred1[25].heal = 0;
        pred1[25].heal2 = 0;
        pred1[25].exp = 0;
        pred1[26].name = "��� ������������ (���������� � ��������)";
        pred1[26].hp = 0;
        pred1[26].hpm = 0;
        pred1[26].atc1 = 0;
        pred1[26].atc12 = 0;
        pred1[26].atc2 = 0;
        pred1[26].atc22 = 0;
        pred1[26].heal = 0;
        pred1[26].heal2 = 0;
        pred1[26].exp = 0;
    struct obj obj1[51];
        obj1[0].name = "������� � ������";
        obj1[0].hp = 1;
        obj1[0].hpm = 1;
        obj1[0].atc1 = 0;
        obj1[0].atc12 = 0;
        obj1[0].atc2 = 0;
        obj1[0].atc22 = 0;
        obj1[0].heal = 0;
        obj1[0].heal2 = 0;
        obj1[0].exp = 0;
        obj1[1].name = "������� � ������";
        obj1[1].hp = -2;
        obj1[1].hpm = -1;
        obj1[1].atc1 = 0;
        obj1[1].atc12 = 0;
        obj1[1].atc2 = 0;
        obj1[1].atc22 = 0;
        obj1[1].heal = 0;
        obj1[1].heal2 = 0;
        obj1[1].exp = 0;
        obj1[2].name = "������������ ������";
        obj1[2].hp = 0;
        obj1[2].hpm = 0;
        obj1[2].atc1 = 1;
        obj1[2].atc12 = 1;
        obj1[2].atc2 = 0;
        obj1[2].atc22 = 0;
        obj1[2].heal = 0;
        obj1[2].heal2 = 0;
        obj1[2].exp = 0;
        obj1[3].name = "������������ ������";
        obj1[3].hp = 0;
        obj1[3].hpm = 0;
        obj1[3].atc1 = 0;
        obj1[3].atc12 = 0;
        obj1[3].atc2 = 0;
        obj1[3].atc22 = 0;
        obj1[3].heal = 0;
        obj1[3].heal2 = 0;
        obj1[3].exp = 0;
        obj1[4].name = "������������ ������";
        obj1[4].hp = 0;
        obj1[4].hpm = 0;
        obj1[4].atc1 = 0;
        obj1[4].atc12 = 0;
        obj1[4].atc2 = 1;
        obj1[4].atc22 = 1;
        obj1[4].heal = 0;
        obj1[4].heal2 = 0;
        obj1[4].exp = 0;
        obj1[5].name = "������� � ������";
        obj1[5].hp = -5;
        obj1[5].hpm = 0;
        obj1[5].atc1 = 0;
        obj1[5].atc12 = 0;
        obj1[5].atc2 = 0;
        obj1[5].atc22 = 0;
        obj1[5].heal = 0;
        obj1[5].heal2 = 0;
        obj1[5].exp = 0;
        obj1[6].name = "���������� ��������";
        obj1[6].hp = -2;
        obj1[6].hpm = -1;
        obj1[6].atc1 = -1;
        obj1[6].atc12 = -1;
        obj1[6].atc2 = -1;
        obj1[6].atc22 = -1;
        obj1[6].heal = 0;
        obj1[6].heal2 = 0;
        obj1[6].exp = 0;
        obj1[7].name = "���������� ��������";
        obj1[7].hp = 5;
        obj1[7].hpm = 0;
        obj1[7].atc1 = 0;
        obj1[7].atc12 = 0;
        obj1[7].atc2 = 0;
        obj1[7].atc22 = 0;
        obj1[7].heal = 0;
        obj1[7].heal2 = 0;
        obj1[7].exp = 0;
        obj1[8].name = "��������� �����";
        obj1[8].hp = 0;
        obj1[8].hpm = 0;
        obj1[8].atc1 = 1;
        obj1[8].atc12 = 2;
        obj1[8].atc2 = 2;
        obj1[8].atc22 = 3;
        obj1[8].heal = 0;
        obj1[8].heal2 = 0;
        obj1[8].exp = 0;
        obj1[9].name = "��������� �����";
        obj1[9].hp = 0;
        obj1[9].hpm = 0;
        obj1[9].atc1 = 1;
        obj1[9].atc12 = 5;
        obj1[9].atc2 = 0;
        obj1[9].atc22 = 7;
        obj1[9].heal = 0;
        obj1[9].heal2 = 0;
        obj1[9].exp = 0;
        obj1[10].name = "�����";
        obj1[10].hp = 0;
        obj1[10].hpm = 0;
        obj1[10].atc1 = 0;
        obj1[10].atc12 = 0;
        obj1[10].atc2 = 0;
        obj1[10].atc22 = 0;
        obj1[10].heal = 1;
        obj1[10].heal2 = 1;
        obj1[10].exp = 0;
        obj1[11].name = "�����";
        obj1[11].hp = 0;
        obj1[11].hpm = 0;
        obj1[11].atc1 = 0;
        obj1[11].atc12 = 0;
        obj1[11].atc2 = 0;
        obj1[11].atc22 = 0;
        obj1[11].heal = -1;
        obj1[11].heal2 = -1;
        obj1[11].exp = 0;
        obj1[12].name = "������";
        obj1[12].hp = 0;
        obj1[12].hpm = 0;
        obj1[12].atc1 = 0;
        obj1[12].atc12 = 0;
        obj1[12].atc2 = 0;
        obj1[12].atc22 = 0;
        obj1[12].heal = 0;
        obj1[12].heal2 = 0;
        obj1[12].exp = 0;
        obj1[13].name = "������";
        obj1[13].hp = 0;
        obj1[13].hpm = 0;
        obj1[13].atc1 = 0;
        obj1[13].atc12 = 0;
        obj1[13].atc2 = 0;
        obj1[13].atc22 = 0;
        obj1[13].heal = 0;
        obj1[13].heal2 = 0;
        obj1[13].exp = 9;
        obj1[14].name = "���������";
        obj1[14].hp = 0;
        obj1[14].hpm = 0;
        obj1[14].atc1 = 0;
        obj1[14].atc12 = 0;
        obj1[14].atc2 = 0;
        obj1[14].atc22 = 0;
        obj1[14].heal = 0;
        obj1[14].heal2 = 0;
        obj1[14].exp = 0;
        obj1[15].name = "���������";
        obj1[15].hp = 0;
        obj1[15].hpm = 0;
        obj1[15].atc1 = 0;
        obj1[15].atc12 = 0;
        obj1[15].atc2 = 0;
        obj1[15].atc22 = 0;
        obj1[15].heal = 0;
        obj1[15].heal2 = 0;
        obj1[15].exp = 0;
        obj1[16].name = "����� � ���������";
        obj1[16].hp = -101;
        obj1[16].hpm = -100;
        obj1[16].atc1 = 0;
        obj1[16].atc12 = 0;
        obj1[16].atc2 = 0;
        obj1[16].atc22 = 0;
        obj1[16].heal = 0;
        obj1[16].heal2 = 0;
        obj1[16].exp = 0;
        obj1[17].name = "������������ ������";
        obj1[17].hp = 0;
        obj1[17].hpm = 0;
        obj1[17].atc1 = 0;
        obj1[17].atc12 = 0;
        obj1[17].atc2 = 0;
        obj1[17].atc22 = 0;
        obj1[17].heal = 0;
        obj1[17].heal2 = 0;
        obj1[17].exp = 0;
        obj1[18].name = "���������";
        obj1[18].hp = 0;
        obj1[18].hpm = 0;
        obj1[18].atc1 = 0;
        obj1[18].atc12 = 0;
        obj1[18].atc2 = 0;
        obj1[18].atc22 = 0;
        obj1[18].heal = 0;
        obj1[18].heal2 = 0;
        obj1[18].exp = 0;
        obj1[19].name = "���������";
        obj1[19].hp = 0;
        obj1[19].hpm = 0;
        obj1[19].atc1 = 0;
        obj1[19].atc12 = 0;
        obj1[19].atc2 = 0;
        obj1[19].atc22 = 0;
        obj1[19].heal = 0;
        obj1[19].heal2 = 0;
        obj1[19].exp = 0;
        obj1[20].name = "������� ������� ���";
        obj1[20].hp = 0;
        obj1[20].hpm = 0;
        obj1[20].atc1 = 0;
        obj1[20].atc12 = 0;
        obj1[20].atc2 = 0;
        obj1[20].atc22 = 0;
        obj1[20].heal = 0;
        obj1[20].heal2 = 0;
        obj1[20].exp = 0;
        obj1[21].name = "������� ������� ���";
        obj1[21].hp = 0;
        obj1[21].hpm = 0;
        obj1[21].atc1 = 0;
        obj1[21].atc12 = 0;
        obj1[21].atc2 = 0;
        obj1[21].atc22 = 0;
        obj1[21].heal = 0;
        obj1[21].heal2 = 0;
        obj1[21].exp = 0;
        obj1[22].name = "�������� ����";
        obj1[22].hp = 0;
        obj1[22].hpm = 0;
        obj1[22].atc1 = 0;
        obj1[22].atc12 = 0;
        obj1[22].atc2 = 0;
        obj1[22].atc22 = 0;
        obj1[22].heal = 0;
        obj1[22].heal2 = 0;
        obj1[22].exp = 0;
        obj1[23].name = "�������";
        obj1[23].hp = 0;
        obj1[23].hpm = 0;
        obj1[23].atc1 = 0;
        obj1[23].atc12 = 0;
        obj1[23].atc2 = 0;
        obj1[23].atc22 = 0;
        obj1[23].heal = 0;
        obj1[23].heal2 = 0;
        obj1[23].exp = 0;
        // �������� ��� �������� �����������
        obj1[26].name = "����� � ��������";
        obj1[26].hp = -4;
        obj1[26].hpm = -3;
        obj1[26].atc1 = 1;
        obj1[26].atc12 = 1;
        obj1[26].atc2 = 0;
        obj1[26].atc22 = 0;
        obj1[26].heal = 0;
        obj1[26].heal2 = 0;
        obj1[26].exp = 0;
        obj1[27].name = "������� �������";
        obj1[27].hp = -1;
        obj1[27].hpm = -1;
        obj1[27].atc1 = -1;
        obj1[27].atc12 = -1;
        obj1[27].atc2 = -1;
        obj1[27].atc22 = -1;
        obj1[27].heal = 0;
        obj1[27].heal2 = 0;
        obj1[27].exp = 0;
        obj1[28].name = "������� �������";
        obj1[28].hp = 1;
        obj1[28].hpm = 1;
        obj1[28].atc1 = 0;
        obj1[28].atc12 = 0;
        obj1[28].atc2 = 0;
        obj1[28].atc22 = 0;
        obj1[28].heal = 1;
        obj1[28].heal2 = 1;
        obj1[28].exp = 0;
        obj1[29].name = "�������";
        obj1[29].hp = 0;
        obj1[29].hpm = 0;
        obj1[29].atc1 = 0;
        obj1[29].atc12 = 0;
        obj1[29].atc2 = 0;
        obj1[29].atc22 = 0;
        obj1[29].heal = 0;
        obj1[29].heal2 = 0;
        obj1[29].exp = 0;
        obj1[30].name = "�������";
        obj1[30].hp = 0;
        obj1[30].hpm = 0;
        obj1[30].atc1 = 0;
        obj1[30].atc12 = 0;
        obj1[30].atc2 = 0;
        obj1[30].atc22 = 0;
        obj1[30].heal = 0;
        obj1[30].heal2 = 0;
        obj1[30].exp = 0;
        obj1[31].name = "��� ��������� ��������";
        obj1[31].hp = 0;
        obj1[31].hpm = 0;
        obj1[31].atc1 = 0;
        obj1[31].atc12 = 0;
        obj1[31].atc2 = 0;
        obj1[31].atc22 = 0;
        obj1[31].heal = 0;
        obj1[31].heal2 = 0;
        obj1[31].exp = 0;
        obj1[32].name = "��� ��������� ������ �����";
        obj1[32].hp = 0;
        obj1[32].hpm = 0;
        obj1[32].atc1 = 0;
        obj1[32].atc12 = 0;
        obj1[32].atc2 = 0;
        obj1[32].atc22 = 0;
        obj1[32].heal = 0;
        obj1[32].heal2 = 0;
        obj1[32].exp = 0;
        obj1[33].name = "��� ��������� ������� �����";
        obj1[33].hp = 0;
        obj1[33].hpm = 0;
        obj1[33].atc1 = 0;
        obj1[33].atc12 = 0;
        obj1[33].atc2 = 0;
        obj1[33].atc22 = 0;
        obj1[33].heal = 0;
        obj1[33].heal2 = 0;
        obj1[33].exp = 0;
        obj1[34].name = "��� ��������� ��������������";
        obj1[34].hp = 0;
        obj1[34].hpm = 0;
        obj1[34].atc1 = 0;
        obj1[34].atc12 = 0;
        obj1[34].atc2 = 0;
        obj1[34].atc22 = 0;
        obj1[34].heal = 0;
        obj1[34].heal2 = 0;
        obj1[34].exp = 0;
        obj1[35].name = "��� ��������� �������� v 2.0";
        obj1[35].hp = 0;
        obj1[35].hpm = 0;
        obj1[35].atc1 = 0;
        obj1[35].atc12 = 0;
        obj1[35].atc2 = 0;
        obj1[35].atc22 = 0;
        obj1[35].heal = 0;
        obj1[35].heal2 = 0;
        obj1[35].exp = 0;
        obj1[36].name = "������� ���";
        obj1[36].hp = 0;
        obj1[36].hpm = 0;
        obj1[36].atc1 = 0;
        obj1[36].atc12 = 0;
        obj1[36].atc2 = 0;
        obj1[36].atc22 = 0;
        obj1[36].heal = 0;
        obj1[36].heal2 = 0;
        obj1[36].exp = 0;
        obj1[37].name = "��� ��� ����";
        obj1[37].hp = 0;
        obj1[37].hpm = 0;
        obj1[37].atc1 = 0;
        obj1[37].atc12 = 0;
        obj1[37].atc2 = 0;
        obj1[37].atc22 = 0;
        obj1[37].heal = 0;
        obj1[37].heal2 = 0;
        obj1[37].exp = 0;
        obj1[38].name = "�������";
        obj1[38].hp = 0;
        obj1[38].hpm = 0;
        obj1[38].atc1 = 0;
        obj1[38].atc12 = 0;
        obj1[38].atc2 = 0;
        obj1[38].atc22 = 0;
        obj1[38].heal = 0;
        obj1[38].heal2 = 0;
        obj1[38].exp = 0;
        obj1[39].name = "�������� � ������� ������";
        obj1[39].hp = 0;
        obj1[39].hpm = 0;
        obj1[39].atc1 = 0;
        obj1[39].atc12 = 0;
        obj1[39].atc2 = 0;
        obj1[39].atc22 = 0;
        obj1[39].heal = 0;
        obj1[39].heal2 = 0;
        obj1[39].exp = 0;
        obj1[40].name = "�������";
        obj1[40].hp = 0;
        obj1[40].hpm = 0;
        obj1[40].atc1 = 0;
        obj1[40].atc12 = 0;
        obj1[40].atc2 = 0;
        obj1[40].atc22 = 0;
        obj1[40].heal = 0;
        obj1[40].heal2 = 0;
        obj1[40].exp = 0;
        obj1[41].name = "������ � ����������";
        obj1[41].hp = 0;
        obj1[41].hpm = 0;
        obj1[41].atc1 = 0;
        obj1[41].atc12 = 0;
        obj1[41].atc2 = 0;
        obj1[41].atc22 = 0;
        obj1[41].heal = 0;
        obj1[41].heal2 = 0;
        obj1[41].exp = 0;
        obj1[42].name = "������ � ����������";
        obj1[42].hp = 0;
        obj1[42].hpm = 0;
        obj1[42].atc1 = 0;
        obj1[42].atc12 = 0;
        obj1[42].atc2 = 0;
        obj1[42].atc22 = 0;
        obj1[42].heal = 0;
        obj1[42].heal2 = 0;
        obj1[42].exp = 0;
        // �������� ��� ������������ ��������������
    struct hero hero1[30];
        hero1[0].name="�����������";
        hero1[0].hp = 10;
        hero1[0].hpm = 10;
        hero1[0].atc1 = 2;
        hero1[0].atc12 = 4;
        hero1[0].atc2 = 3;
        hero1[0].atc22 = 6;
        hero1[0].heal = 2;
        hero1[0].heal2 = 2;
        hero1[0].exp = 0;
        hero1[0].lvl = 0;
        hero1[0].pred = 2;
        hero1[1].name="������";
        hero1[1].hp = 8;
        hero1[1].hpm = 8;
        hero1[1].atc1 = 1;
        hero1[1].atc12 = 4;
        hero1[1].atc2 = 3;
        hero1[1].atc22 = 5;
        hero1[1].heal = 2;
        hero1[1].heal2 = 4;
        hero1[1].exp = 0;
        hero1[1].lvl = 0;
        hero1[1].pred = 2;
        hero1[2].name="������";
        hero1[2].hp = 7;
        hero1[2].hpm = 7;
        hero1[2].atc1 = 1;
        hero1[2].atc12 = 3;
        hero1[2].atc2 = 3;
        hero1[2].atc22 = 4;
        hero1[2].heal = 2;
        hero1[2].heal2 = 5;
        hero1[2].exp = 0;
        hero1[2].lvl = 0;
        hero1[2].pred = 2;
        hero1[3].name="����������";
        hero1[3].hp = 8;
        hero1[3].hpm = 8;
        hero1[3].atc1 = 1;
        hero1[3].atc12 = 2;
        hero1[3].atc2 = 0;
        hero1[3].atc22 = 8;
        hero1[3].heal = 2;
        hero1[3].heal2 = 3;
        hero1[3].exp = 0;
        hero1[3].lvl = 0;
        hero1[3].pred = 2;
        hero1[4].name="������ ����";
        hero1[4].hp = 9;
        hero1[4].hpm = 10;
        hero1[4].atc1 = 2;
        hero1[4].atc12 = 3;
        hero1[4].atc2 = -1;
        hero1[4].atc22 = 6;
        hero1[4].heal = -1;
        hero1[4].heal2 = 4;
        hero1[4].exp = 0;
        hero1[4].lvl = 0;
        hero1[4].pred = 2;
        hero1[5].name="������������� ����";
        hero1[5].hp = 15;
        hero1[5].hpm = 15;
        hero1[5].atc1 = 2;
        hero1[5].atc12 = 3;
        hero1[5].atc2 = 1;
        hero1[5].atc22 = 6;
        hero1[5].heal = 1;
        hero1[5].heal2 = 2;
        hero1[5].exp = 0;
        hero1[5].lvl = 0;
        hero1[5].pred = 2;
        hero1[6].name="���� ������";
        hero1[6].hp = 8;
        hero1[6].hpm = 16;
        hero1[6].atc1 = -1;
        hero1[6].atc12 = 6;
        hero1[6].atc2 = -2;
        hero1[6].atc22 = 8;
        hero1[6].heal = -1;
        hero1[6].heal2 = 5;
        hero1[6].exp = 0;
        hero1[6].lvl = 0;
        hero1[6].pred = 2;
        hero1[7].name="������ �������";
        hero1[7].hp = 8;
        hero1[7].hpm = 8;
        hero1[7].atc1 = 2;
        hero1[7].atc12 = 3;
        hero1[7].atc2 = 1;
        hero1[7].atc22 = 5;
        hero1[7].heal = 2;
        hero1[7].heal2 = 3;
        hero1[7].exp = 0;
        hero1[7].lvl = 0;
        hero1[7].pred = 2;
        hero1[8].name="�������������";
        hero1[8].hp = 6;
        hero1[8].hpm = 6;
        hero1[8].atc1 = 1;
        hero1[8].atc12 = 3;
        hero1[8].atc2 = 2;
        hero1[8].atc22 = 4;
        hero1[8].heal = 1;
        hero1[8].heal2 = 2;
        hero1[8].exp = 0;
        hero1[8].lvl = 0;
        hero1[8].pred = 3;
        hero1[9].name="������������� ������";
        hero1[9].hp = 13;
        hero1[9].hpm = 13;
        hero1[9].atc1 = -1;
        hero1[9].atc12 = 5;
        hero1[9].atc2 = -2;
        hero1[9].atc22 = 9;
        hero1[9].heal = -1;
        hero1[9].heal2 = 5;
        hero1[9].exp = 0;
        hero1[9].lvl = 0;
        hero1[9].pred = 2;
        hero1[10].name="��������� � ����� ��������";
        hero1[10].hp = 8;
        hero1[10].hpm = 8;
        hero1[10].atc1 = 1;
        hero1[10].atc12 = 3;
        hero1[10].atc2 = 2;
        hero1[10].atc22 = 4;
        hero1[10].heal = 2;
        hero1[10].heal2 = 3;
        hero1[10].exp = 0;
        hero1[10].lvl = 0;
        hero1[10].pred = 0;
        hero1[11].name="��������� � ����� ��������� �����";
        hero1[11].hp = 12;
        hero1[11].hpm = 12;
        hero1[11].atc1 = 2;
        hero1[11].atc12 = 5;
        hero1[11].atc2 = 3;
        hero1[11].atc22 = 6;
        hero1[11].heal = 1;
        hero1[11].heal2 = 2;
        hero1[11].exp = 0;
        hero1[11].lvl = 0;
        hero1[11].pred = 0;
        //�������
        hero1[19].name="������";
        hero1[19].hp = 10;
        hero1[19].hpm = 10;
        hero1[19].atc1 = 1;
        hero1[19].atc12 = 3;
        hero1[19].atc2 = 1;
        hero1[19].atc22 = 3;
        hero1[19].heal = 2;
        hero1[19].heal2 = 2;
        hero1[19].exp = 0;
        hero1[19].lvl = 0;
        hero1[19].pred = 1;
        hero1[26].name="�����������";
        hero1[26].hp = 10;
        hero1[26].hpm = 10;
        hero1[26].atc1 = 1;
        hero1[26].atc12 = 3;
        hero1[26].atc2 = 1;
        hero1[26].atc22 = 3;
        hero1[26].heal = 2;
        hero1[26].heal2 = 2;
        hero1[26].exp = 0;
        hero1[26].lvl = 0;
        hero1[26].pred = 1;
        //��� ����
        hero1[20].name="���������� �����";
        hero1[20].hp = 9;
        hero1[20].hpm = 9;
        hero1[20].atc1 = 1;
        hero1[20].atc12 = 4;
        hero1[20].atc2 = 2;
        hero1[20].atc22 = 6;
        hero1[20].heal = 1;
        hero1[20].heal2 = 3;
        hero1[20].exp = 0;
        hero1[20].lvl = 0;
        hero1[20].pred = 1;
        hero1[21].name="����� �� �������";
        hero1[21].hp = 4;
        hero1[21].hpm = 4;
        hero1[21].atc1 = 4;
        hero1[21].atc12 = 4;
        hero1[21].atc2 = 4;
        hero1[21].atc22 = 4;
        hero1[21].heal = 0;
        hero1[21].heal2 = 0;
        hero1[21].exp = 0;
        hero1[21].lvl = 0;
        hero1[21].pred = 1;
        hero1[22].name="�����-�������";
        hero1[22].hp = 7;
        hero1[22].hpm = 7;
        hero1[22].atc1 = 2;
        hero1[22].atc12 = 3;
        hero1[22].atc2 = 3;
        hero1[22].atc22 = 4;
        hero1[22].heal = 0;
        hero1[22].heal2 = 1;
        hero1[22].exp = 0;
        hero1[22].lvl = 0;
        hero1[22].pred = 2;
        hero1[23].name="���������� ���";
        hero1[23].hp = 10;
        hero1[23].hpm = 10;
        hero1[23].atc1 = -7;
        hero1[23].atc12 = -7;
        hero1[23].atc2 = 3;
        hero1[23].atc22 = 5;
        hero1[23].heal = 2;
        hero1[23].heal2 = 3;
        hero1[23].exp = 0;
        hero1[23].lvl = 0;
        hero1[23].pred = 1;
        hero1[24].name="������ ����";
        hero1[24].hp = 10;
        hero1[24].hpm = 10;
        hero1[24].atc1 = 2;
        hero1[24].atc12 = 3;
        hero1[24].atc2 = 3;
        hero1[24].atc22 = 5;
        hero1[24].heal = 1;
        hero1[24].heal2 = 2;
        hero1[24].exp = 0;
        hero1[24].lvl = 0;
        hero1[24].pred = 0;
        hero1[25].name="�������� ������ ������";
        hero1[25].hp = 8;
        hero1[25].hpm = 8;
        hero1[25].atc1 = 2;
        hero1[25].atc12 = 2;
        hero1[25].atc2 = 3;
        hero1[25].atc22 = 5;
        hero1[25].heal = 0;
        hero1[25].heal2 = 2;
        hero1[25].exp = 0;
        hero1[25].lvl = 0;
        hero1[25].pred = 10;
    struct enemy enemy1[415];
        enemy1[0].name = "���������� �����";
        enemy1[0].hp = 4;
        enemy1[0].hpm = 4;
        enemy1[0].atc1 = 1;
        enemy1[0].atc12 = 2;
        enemy1[0].atc2 = 2;
        enemy1[0].atc22 = 3;
        enemy1[0].exp = 2;
        enemy1[1].name = "�����";
        enemy1[1].hp = 8;
        enemy1[1].hpm = 8;
        enemy1[1].atc1 = 1;
        enemy1[1].atc12 = 2;
        enemy1[1].atc2 = 3;
        enemy1[1].atc22 = 4;
        enemy1[1].exp = 4;
        enemy1[2].name = "����";
        enemy1[2].hp = 6;
        enemy1[2].hpm = 6;
        enemy1[2].atc1 = 1;
        enemy1[2].atc12 = 2;
        enemy1[2].atc2 = 2;
        enemy1[2].atc22 = 4;
        enemy1[2].exp = 2;
        enemy1[3].name = "���������";
        enemy1[3].hp = 10;
        enemy1[3].hpm = 10;
        enemy1[3].atc1 = 1;
        enemy1[3].atc12 = 3;
        enemy1[3].atc2 = 4;
        enemy1[3].atc22 = 5;
        enemy1[3].exp = 5;
        enemy1[4].name = "�������� ����";
        enemy1[4].hp = 3;
        enemy1[4].hpm = 3;
        enemy1[4].atc1 = 1;
        enemy1[4].atc12 = 2;
        enemy1[4].atc2 = 2;
        enemy1[4].atc22 = 3;
        enemy1[4].exp = 1;
        enemy1[5].name = "����";
        enemy1[5].hp = 5;
        enemy1[5].hpm = 5;
        enemy1[5].atc1 = 2;
        enemy1[5].atc12 = 3;
        enemy1[5].atc2 = 3;
        enemy1[5].atc22 = 4;
        enemy1[5].exp = 3;
        enemy1[6].name = "����";
        enemy1[6].hp = 10;
        enemy1[6].hpm = 10;
        enemy1[6].atc1 = 2;
        enemy1[6].atc12 = 4;
        enemy1[6].atc2 = 3;
        enemy1[6].atc22 = 5;
        enemy1[6].exp = 4;
        enemy1[7].name = "������� �����";
        enemy1[7].hp = 1;
        enemy1[7].hpm = 1;
        enemy1[7].atc1 = -1;
        enemy1[7].atc12 = -1;
        enemy1[7].atc2 = -2;
        enemy1[7].atc22 = -2;
        enemy1[7].exp = 0;
        enemy1[8].name = "����";
        enemy1[8].hp = 6;
        enemy1[8].hpm = 6;
        enemy1[8].atc1 = 2;
        enemy1[8].atc12 = 3;
        enemy1[8].atc2 = 3;
        enemy1[8].atc22 = 4;
        enemy1[8].exp = 2;
        enemy1[9].name = "�������";
        enemy1[9].hp = 6;
        enemy1[9].hpm = 6;
        enemy1[9].atc1 = 1;
        enemy1[9].atc12 = 4;
        enemy1[9].atc2 = 0;
        enemy1[9].atc22 = 5;
        enemy1[9].exp = 4;
        enemy1[10].name = "������������ �����";
        enemy1[10].hp = 3;
        enemy1[10].hpm = 3;
        enemy1[10].atc1 = -1;
        enemy1[10].atc12 = 2;
        enemy1[10].atc2 = -2;
        enemy1[10].atc22 = 3;
        enemy1[10].exp = 1;
        enemy1[11].name = "����� ������";
        enemy1[11].hp = 2;
        enemy1[11].hpm = 2;
        enemy1[11].atc1 = 50;
        enemy1[11].atc12 = 60;
        enemy1[11].atc2 = 80;
        enemy1[11].atc22 = 100;
        enemy1[11].exp = 0;
        enemy1[12].name = "����� ������ ����";
        enemy1[12].hp = 4;
        enemy1[12].hpm = 4;
        enemy1[12].atc1 = 0;
        enemy1[12].atc12 = 0;
        enemy1[12].atc2 = 1;
        enemy1[12].atc22 = 1;
        enemy1[12].exp = 1;
        enemy1[13].name = "�����";
        enemy1[13].hp = 7;
        enemy1[13].hpm = 7;
        enemy1[13].atc1 = 2;
        enemy1[13].atc12 = 4;
        enemy1[13].atc2 = 3;
        enemy1[13].atc22 = 4;
        enemy1[13].exp = 2;
        enemy1[14].name = "�������";
        enemy1[14].hp = 8;
        enemy1[14].hpm = 8;
        enemy1[14].atc1 = 3;
        enemy1[14].atc12 = 4;
        enemy1[14].atc2 = 4;
        enemy1[14].atc22 = 4;
        enemy1[14].exp = 3;
        enemy1[15].name = "�������� �����";
        enemy1[15].hp = 10;
        enemy1[15].hpm = 10;
        enemy1[15].atc1 = 1;
        enemy1[15].atc12 = 4;
        enemy1[15].atc2 = 0;
        enemy1[15].atc22 = 5;
        enemy1[15].exp = 3;
        enemy1[16].name = "������� � ������";
        enemy1[16].hp = 14;
        enemy1[16].hpm = 14;
        enemy1[16].atc1 = 0;
        enemy1[16].atc12 = 1;
        enemy1[16].atc2 = 1;
        enemy1[16].atc22 = 1;
        enemy1[16].exp = 4;
        enemy1[17].name = "�������� ��������";
        enemy1[17].hp = 20;
        enemy1[17].hpm = 20;
        enemy1[17].atc1 = 0;
        enemy1[17].atc12 = 0;
        enemy1[17].atc2 = 0;
        enemy1[17].atc22 = 0;
        enemy1[17].exp = 2;
        enemy1[18].name = "������� �����";
        enemy1[18].hp = 3;
        enemy1[18].hpm = 3;
        enemy1[18].atc1 = 1;
        enemy1[18].atc12 = 2;
        enemy1[18].atc2 = 2;
        enemy1[18].atc22 = 3;
        enemy1[18].exp = 1;
        enemy1[19].name = "������� � ���������";
        enemy1[19].hp = 14;
        enemy1[19].hpm = 14;
        enemy1[19].atc1 = 1;
        enemy1[19].atc12 = 2;
        enemy1[19].atc2 = 1;
        enemy1[19].atc22 = 3;
        enemy1[19].exp = 4;
        enemy1[20].name = "����� ������";
        enemy1[20].hp = 12;
        enemy1[20].hpm = 12;
        enemy1[20].atc1 = 1;
        enemy1[20].atc12 = 3;
        enemy1[20].atc2 = 1;
        enemy1[20].atc22 = 4;
        enemy1[20].exp = 4;
        enemy1[21].name = "����� � ��������";
        enemy1[21].hp = 8;
        enemy1[21].hpm = 8;
        enemy1[21].atc1 = 1;
        enemy1[21].atc12 = 3;
        enemy1[21].atc2 = 0;
        enemy1[21].atc22 = 5;
        enemy1[21].exp = 3;
        enemy1[22].name = "������";
        enemy1[22].hp = 6;
        enemy1[22].hpm = 6;
        enemy1[22].atc1 = 2;
        enemy1[22].atc12 = 4;
        enemy1[22].atc2 = 3;
        enemy1[22].atc22 = 4;
        enemy1[22].exp = 3;
        enemy1[23].name = "����������";
        enemy1[23].hp = 10;
        enemy1[23].hpm = 10;
        enemy1[23].atc1 = 0;
        enemy1[23].atc12 = 5;
        enemy1[23].atc2 = 2;
        enemy1[23].atc22 = 4;
        enemy1[23].exp = 3;
        enemy1[24].name = "[��������� ����] ��������� ������";
        enemy1[24].hp = 16;
        enemy1[24].hpm = 16;
        enemy1[24].atc1 = 3;
        enemy1[24].atc12 = 4;
        enemy1[24].atc2 = 3;
        enemy1[24].atc22 = 5;
        enemy1[24].exp = 6;
        enemy1[25].name = "��������� ����";
        enemy1[25].hp = 12;
        enemy1[25].hpm = 12;
        enemy1[25].atc1 = 1;
        enemy1[25].atc12 = 1;
        enemy1[25].atc2 = 1;
        enemy1[25].atc22 = 2;
        enemy1[25].exp = 4;
        enemy1[26].name = "�������";
        enemy1[26].hp = 8;
        enemy1[26].hpm = 8;
        enemy1[26].atc1 = 0;
        enemy1[26].atc12 = 2;
        enemy1[26].atc2 = 1;
        enemy1[26].atc22 = 3;
        enemy1[26].exp = 4;
        enemy1[27].name = "[��������� ����] ����";
        enemy1[27].hp = 16;
        enemy1[27].hpm = 16;
        enemy1[27].atc1 = 2;
        enemy1[27].atc12 = 3;
        enemy1[27].atc2 = 3;
        enemy1[27].atc22 = 4;
        enemy1[27].exp = 6;
        enemy1[28].name = "����� ������ ��������";
        enemy1[28].hp = 5;
        enemy1[28].hpm = 5;
        enemy1[28].atc1 = 2;
        enemy1[28].atc12 = 4;
        enemy1[28].atc2 = 1;
        enemy1[28].atc22 = 5;
        enemy1[28].exp = 1;
        enemy1[29].name = "�����";
        enemy1[29].hp = 8;
        enemy1[29].hpm = 8;
        enemy1[29].atc1 = 1;
        enemy1[29].atc12 = 4;
        enemy1[29].atc2 = 3;
        enemy1[29].atc22 = 4;
        enemy1[29].exp = 3;
        enemy1[30].name = "����������";
        enemy1[30].hp = 10;
        enemy1[30].hpm = 10;
        enemy1[30].atc1 = 1;
        enemy1[30].atc12 = 3;
        enemy1[30].atc2 = 3;
        enemy1[30].atc22 = 4;
        enemy1[30].exp = 3;
        enemy1[31].name = "������ ������";
        enemy1[31].hp = 5;
        enemy1[31].hpm = 5;
        enemy1[31].atc1 = 2;
        enemy1[31].atc12 = 3;
        enemy1[31].atc2 = 1;
        enemy1[31].atc22 = 2;
        enemy1[31].exp = 2;
        enemy1[32].name = "������ ����";
        enemy1[32].hp = 12;
        enemy1[32].hpm = 12;
        enemy1[32].atc1 = 1;
        enemy1[32].atc12 = 2;
        enemy1[32].atc2 = 1;
        enemy1[32].atc22 = 3;
        enemy1[32].exp = 3;
        enemy1[33].name = "����� �� �����";
        enemy1[33].hp = 1;
        enemy1[33].hpm = 1;
        enemy1[33].atc1 = 0;
        enemy1[33].atc12 = 0;
        enemy1[33].atc2 = 0;
        enemy1[33].atc22 = 0;
        enemy1[33].exp = 0;
        enemy1[34].name = "������� �����";
        enemy1[34].hp = 3;
        enemy1[34].hpm = 3;
        enemy1[34].atc1 = 0;
        enemy1[34].atc12 = 0;
        enemy1[34].atc2 = 0;
        enemy1[34].atc22 = 0;
        enemy1[34].exp = 0;
        enemy1[35].name = "�������� �����";
        enemy1[35].hp = 12;
        enemy1[35].hpm = 12;
        enemy1[35].atc1 = 1;
        enemy1[35].atc12 = 2;
        enemy1[35].atc2 = 2;
        enemy1[35].atc22 = 3;
        enemy1[35].exp = 3;
        enemy1[36].name = "��������� ����������� �����-����������";
        enemy1[36].hp = 10;
        enemy1[36].hpm = 10;
        enemy1[36].atc1 = 1;
        enemy1[36].atc12 = 1;
        enemy1[36].atc2 = 1;
        enemy1[36].atc22 = 1;
        enemy1[36].exp = 3;
        enemy1[37].name = "[��������� ����] ������� ����������� �����-����������";
        enemy1[37].hp = 16;
        enemy1[37].hpm = 16;
        enemy1[37].atc1 = 1;
        enemy1[37].atc12 = 2;
        enemy1[37].atc2 = 1;
        enemy1[37].atc22 = 3;
        enemy1[37].exp = 6;
        enemy1[38].name = "�������� ������������� �������";
        enemy1[38].hp = 4;
        enemy1[38].hpm = 4;
        enemy1[38].atc1 = 1;
        enemy1[38].atc12 = 1;
        enemy1[38].atc2 = 1;
        enemy1[38].atc22 = 2;
        enemy1[38].exp = 2;
        enemy1[39].name = "�������� ����-�����";
        enemy1[39].hp = 6;
        enemy1[39].hpm = 6;
        enemy1[39].atc1 = 1;
        enemy1[39].atc12 = 2;
        enemy1[39].atc2 = 0;
        enemy1[39].atc22 = 4;
        enemy1[39].exp = 2;
        enemy1[40].name = "�������� �����";
        enemy1[40].hp = 10;
        enemy1[40].hpm = 10;
        enemy1[40].atc1 = 2;
        enemy1[40].atc12 = 3;
        enemy1[40].atc2 = 0;
        enemy1[40].atc22 = 5;
        enemy1[40].exp = 4;
        enemy1[41].name = "�����������";
        enemy1[41].hp = 3;
        enemy1[41].hpm = 3;
        enemy1[41].atc1 = 3;
        enemy1[41].atc12 = 5;
        enemy1[41].atc2 = 4;
        enemy1[41].atc22 = 6;
        enemy1[41].exp = 0;
        enemy1[42].name = "���� �����";
        enemy1[42].hp = 5;
        enemy1[42].hpm = 5;
        enemy1[42].atc1 = 0;
        enemy1[42].atc12 = 2;
        enemy1[42].atc2 = 1;
        enemy1[42].atc22 = 3;
        enemy1[42].exp = 5;
        enemy1[43].name = "���������� ����������";
        enemy1[43].hp = 18;
        enemy1[43].hpm = 18;
        enemy1[43].atc1 = 0;
        enemy1[43].atc12 = 1;
        enemy1[43].atc2 = 1;
        enemy1[43].atc22 = 2;
        enemy1[43].exp = 3;
        enemy1[44].name = "�����-�������";
        enemy1[44].hp = 2;
        enemy1[44].hpm = 2;
        enemy1[44].atc1 = 0;
        enemy1[44].atc12 = 1;
        enemy1[44].atc2 = 0;
        enemy1[44].atc22 = 1;
        enemy1[44].exp = 0;
        enemy1[45].name = "�����-������";
        enemy1[45].hp = 6;
        enemy1[45].hpm = 6;
        enemy1[45].atc1 = 2;
        enemy1[45].atc12 = 4;
        enemy1[45].atc2 = 3;
        enemy1[45].atc22 = 5;
        enemy1[45].exp = 2;
        enemy1[46].name = "�����-��������";
        enemy1[46].hp = 5;
        enemy1[46].hpm = 5;
        enemy1[46].atc1 = 1;
        enemy1[46].atc12 = 2;
        enemy1[46].atc2 = 2;
        enemy1[46].atc22 = 3;
        enemy1[46].exp = 1;
        enemy1[47].name = "������ �������� �����";
        enemy1[47].hp = 7;
        enemy1[47].hpm = 7;
        enemy1[47].atc1 = 0;
        enemy1[47].atc12 = 2;
        enemy1[47].atc2 = 0;
        enemy1[47].atc22 = 3;
        enemy1[47].exp = 1;
        enemy1[48].name = "������������� �����";
        enemy1[48].hp = 6;
        enemy1[48].hpm = 6;
        enemy1[48].atc1 = 0;
        enemy1[48].atc12 = 2;
        enemy1[48].atc2 = 1;
        enemy1[48].atc22 = 3;
        enemy1[48].exp = 1;
        enemy1[49].name = "��������� �����������";
        enemy1[49].hp = 8;
        enemy1[49].hpm = 8;
        enemy1[49].atc1 = 1;
        enemy1[49].atc12 = 2;
        enemy1[49].atc2 = 1;
        enemy1[49].atc22 = 4;
        enemy1[49].exp = 3;
        enemy1[50].name = "[��������� ����] ������";
        enemy1[50].hp = 8;
        enemy1[50].hpm = 8;
        enemy1[50].atc1 = 0;
        enemy1[50].atc12 = 5;
        enemy1[50].atc2 = 0;
        enemy1[50].atc22 = 6;
        enemy1[50].exp = 3;
        enemy1[51].name = "��������� ������ ������";
        enemy1[51].hp = 4;
        enemy1[51].hpm = 4;
        enemy1[51].atc1 = 1;
        enemy1[51].atc12 = 4;
        enemy1[51].atc2 = 2;
        enemy1[51].atc22 = 5;
        enemy1[51].exp = 2;
        enemy1[52].name = "[��������� ����] ������ � ����������";
        enemy1[52].hp = 10;
        enemy1[52].hpm = 10;
        enemy1[52].atc1 = 0;
        enemy1[52].atc12 = 6;
        enemy1[52].atc2 = 0;
        enemy1[52].atc22 = 8;
        enemy1[52].exp = 5;
        enemy1[53].name = "���������� ������� �����";
        enemy1[53].hp = 8;
        enemy1[53].hpm = 8;
        enemy1[53].atc1 = 2;
        enemy1[53].atc12 = 3;
        enemy1[53].atc2 = 3;
        enemy1[53].atc22 = 4;
        enemy1[53].exp = 3;
        enemy1[54].name = "����������� �������";
        enemy1[54].hp = 10;
        enemy1[54].hpm = 10;
        enemy1[54].atc1 = 1;
        enemy1[54].atc12 = 2;
        enemy1[54].atc2 = 2;
        enemy1[54].atc22 = 3;
        enemy1[54].exp = 3;
        // �����
        enemy1[99].name = "[����] �������� ����������";
        enemy1[99].hp = 10;
        enemy1[99].hpm = 10;
        enemy1[99].atc1 = 3;
        enemy1[99].atc12 = 4;
        enemy1[99].atc2 = 4;
        enemy1[99].atc22 = 5;
        enemy1[99].exp = 7;
        enemy1[98].name = "[����] ������-�������������";
        enemy1[98].hp = 12;
        enemy1[98].hpm = 12;
        enemy1[98].atc1 = 4;
        enemy1[98].atc12 = 5;
        enemy1[98].atc2 = 2;
        enemy1[98].atc22 = 6;
        enemy1[98].exp = 8;
        enemy1[97].name = "[����] ������� ������";
        enemy1[97].hp = 16;
        enemy1[97].hpm = 16;
        enemy1[97].atc1 = 3;
        enemy1[97].atc12 = 5;
        enemy1[97].atc2 = 4;
        enemy1[97].atc22 = 6;
        enemy1[97].exp = 9;
        enemy1[96].name = "[����] ������������� ����";
        enemy1[96].hp = 22;
        enemy1[96].hpm = 22;
        enemy1[96].atc1 = 2;
        enemy1[96].atc12 = 3;
        enemy1[96].atc2 = 2;
        enemy1[96].atc22 = 4;
        enemy1[96].exp = 11;
        enemy1[95].name = "[����] ��������� ������ � ��������� ������ �����-��������";
        enemy1[95].hp = 30;
        enemy1[95].hpm = 30;
        enemy1[95].atc1 = 1;
        enemy1[95].atc12 = 3;
        enemy1[95].atc2 = 2;
        enemy1[95].atc22 = 2;
        enemy1[95].exp = 12;
        enemy1[94].name = "[����] �������� ����";
        enemy1[94].hp = 3;
        enemy1[94].hpm = 3;
        enemy1[94].atc1 = -1;
        enemy1[94].atc12 = -1;
        enemy1[94].atc2 = -2;
        enemy1[94].atc22 = -2;
        enemy1[94].exp = 13;
        enemy1[93].name = "[����] ���� �����";
        enemy1[93].hp = 40;
        enemy1[93].hpm = 40;
        enemy1[93].atc1 = 1;
        enemy1[93].atc12 = 3;
        enemy1[93].atc2 = 1;
        enemy1[93].atc22 = 4;
        enemy1[93].exp = 14;
        enemy1[92].name = "[����] ����";
        enemy1[92].hp = 30;
        enemy1[92].hpm = 30;
        enemy1[92].atc1 = 4;
        enemy1[92].atc12 = 6;
        enemy1[92].atc2 = 5;
        enemy1[92].atc22 = 8;
        enemy1[92].exp = 15;
        enemy1[91].name = "[����] ������� ������";
        enemy1[91].hp = 22;
        enemy1[91].hpm = 22;
        enemy1[91].atc1 = 7;
        enemy1[91].atc12 = 10;
        enemy1[91].atc2 = 9;
        enemy1[91].atc22 = 12;
        enemy1[91].exp = 16;
        enemy1[90].name = "[����] ������";
        enemy1[90].hp = 24;
        enemy1[90].hpm = 24;
        enemy1[90].atc1 = 6;
        enemy1[90].atc12 = 8;
        enemy1[90].atc2 = 8;
        enemy1[90].atc22 = 10;
        enemy1[90].exp = 17;
        enemy1[89].name = "[����] ������ �����";
        enemy1[89].hp = 1000;
        enemy1[89].hpm = 1000;
        enemy1[89].atc1 = 0;
        enemy1[89].atc12 = 0;
        enemy1[89].atc2 = 0;
        enemy1[89].atc22 = 0;
        enemy1[89].exp = 0;
        // ������
        enemy1[88].name = "���������� �����";
        enemy1[88].hp = 16;
        enemy1[88].hpm = 16;
        enemy1[88].atc1 = 4;
        enemy1[88].atc12 = 6;
        enemy1[88].atc2 = 5;
        enemy1[88].atc22 = 7;
        enemy1[88].exp = 5;
        enemy1[87].name = "��������";
        enemy1[87].hp = 20;
        enemy1[87].hpm = 20;
        enemy1[87].atc1 = 4;
        enemy1[87].atc12 = 6;
        enemy1[87].atc2 = 6;
        enemy1[87].atc22 = 8;
        enemy1[87].exp = 8;
        // ������������ ��������������
        enemy1[100].name = "�����-��������";
        enemy1[100].hp = 5;
        enemy1[100].hpm = 5;
        enemy1[100].atc1 = 1;
        enemy1[100].atc12 = 2;
        enemy1[100].atc2 = 0;
        enemy1[100].atc22 = 3;
        enemy1[100].exp = 2;
        enemy1[101].name = "�����-��������";
        enemy1[101].hp = 7;
        enemy1[101].hpm = 7;
        enemy1[101].atc1 = 2;
        enemy1[101].atc12 = 2;
        enemy1[101].atc2 = 2;
        enemy1[101].atc22 = 4;
        enemy1[101].exp = 3;
        enemy1[102].name = "���������� ������ �������� �������";
        enemy1[102].hp = 7;
        enemy1[102].hpm = 7;
        enemy1[102].atc1 = 0;
        enemy1[102].atc12 = 3;
        enemy1[102].atc2 = 0;
        enemy1[102].atc22 = 4;
        enemy1[102].exp = 3;
        enemy1[103].name = "��������� �����";
        enemy1[103].hp = 4;
        enemy1[103].hpm = 4;
        enemy1[103].atc1 = 1;
        enemy1[103].atc12 = 2;
        enemy1[103].atc2 = 1;
        enemy1[103].atc22 = 3;
        enemy1[103].exp = 1;
        enemy1[104].name = "�����-��������";
        enemy1[104].hp = 6;
        enemy1[104].hpm = 6;
        enemy1[104].atc1 = 1;
        enemy1[104].atc12 = 2;
        enemy1[104].atc2 = 2;
        enemy1[104].atc22 = 4;
        enemy1[104].exp = 2;
        enemy1[105].name = "�����-�������";
        enemy1[105].hp = 1;
        enemy1[105].hpm = 1;
        enemy1[105].atc1 = 0;
        enemy1[105].atc12 = 0;
        enemy1[105].atc2 = 0;
        enemy1[105].atc22 = 1;
        enemy1[105].exp = 0;
        enemy1[106].name = "�����-��������";
        enemy1[106].hp = 7;
        enemy1[106].hpm = 7;
        enemy1[106].atc1 = 1;
        enemy1[106].atc12 = 2;
        enemy1[106].atc2 = 3;
        enemy1[106].atc22 = 4;
        enemy1[106].exp = 3;
        enemy1[107].name = "�������";
        enemy1[107].hp = 4;
        enemy1[107].hpm = 4;
        enemy1[107].atc1 = 1;
        enemy1[107].atc12 = 2;
        enemy1[107].atc2 = 1;
        enemy1[107].atc22 = 2;
        enemy1[107].exp = 1;
        enemy1[108].name = "�����-����";
        enemy1[108].hp = 8;
        enemy1[108].hpm = 8;
        enemy1[108].atc1 = 1;
        enemy1[108].atc12 = 3;
        enemy1[108].atc2 = 2;
        enemy1[108].atc22 = 5;
        enemy1[108].exp = 3;
        enemy1[109].name = "����������� ��������";
        enemy1[109].hp = 1;
        enemy1[109].hpm = 1;
        enemy1[109].atc1 = 0;
        enemy1[109].atc12 = 0;
        enemy1[109].atc2 = 0;
        enemy1[109].atc22 = 0;
        enemy1[109].exp = 0;
        enemy1[110].name = "�����-�����";
        enemy1[110].hp = 6;
        enemy1[110].hpm = 6;
        enemy1[110].atc1 = 2;
        enemy1[110].atc12 = 3;
        enemy1[110].atc2 = 3;
        enemy1[110].atc22 = 5;
        enemy1[110].exp = 2;
        enemy1[111].name = "�����-�������";
        enemy1[111].hp = 8;
        enemy1[111].hpm = 8;
        enemy1[111].atc1 = 2;
        enemy1[111].atc12 = 3;
        enemy1[111].atc2 = 0;
        enemy1[111].atc22 = 0;
        enemy1[111].exp = 2;
        enemy1[112].name = "��������� �������� ��� ����� ����";
        enemy1[112].hp = 4;
        enemy1[112].hpm = 4;
        enemy1[112].atc1 = 1;
        enemy1[112].atc12 = 2;
        enemy1[112].atc2 = 2;
        enemy1[112].atc22 = 3;
        enemy1[112].exp = 1;
        enemy1[113].name = "�����-�������";
        enemy1[113].hp = 10;
        enemy1[113].hpm = 10;
        enemy1[113].atc1 = 0;
        enemy1[113].atc12 = 3;
        enemy1[113].atc2 = 0;
        enemy1[113].atc22 = 4;
        enemy1[113].exp = 2;
        enemy1[114].name = "�����-����� � �������� ������";
        enemy1[114].hp = 3;
        enemy1[114].hpm = 3;
        enemy1[114].atc1 = 1;
        enemy1[114].atc12 = 1;
        enemy1[114].atc2 = 1;
        enemy1[114].atc22 = 2;
        enemy1[114].exp = 0;
        //�������� � ������� �������
        enemy1[150].name = "������� �����������";
        enemy1[150].hp = 8;
        enemy1[150].hpm = 8;
        enemy1[150].atc1 = 1;
        enemy1[150].atc12 = 2;
        enemy1[150].atc2 = 1;
        enemy1[150].atc22 = 4;
        enemy1[150].exp = 3;
        enemy1[151].name = "������� �����������";
        enemy1[151].hp = 6;
        enemy1[151].hpm = 6;
        enemy1[151].atc1 = 1;
        enemy1[151].atc12 = 3;
        enemy1[151].atc2 = 2;
        enemy1[151].atc22 = 3;
        enemy1[151].exp = 2;
        enemy1[152].name = "������� �����������";
        enemy1[152].hp = 6;
        enemy1[152].hpm = 6;
        enemy1[152].atc1 = 1;
        enemy1[152].atc12 = 1;
        enemy1[152].atc2 = 0;
        enemy1[152].atc22 = 6;
        enemy1[152].exp = 2;
        enemy1[153].name = "������� �������";
        enemy1[153].hp = 6;
        enemy1[153].hpm = 6;
        enemy1[153].atc1 = 1;
        enemy1[153].atc12 = 2;
        enemy1[153].atc2 = 1;
        enemy1[153].atc22 = 3;
        enemy1[153].exp = 2;
        enemy1[154].name = "������� ������";
        enemy1[154].hp = 5;
        enemy1[154].hpm = 5;
        enemy1[154].atc1 = 1;
        enemy1[154].atc12 = 1;
        enemy1[154].atc2 = 1;
        enemy1[154].atc22 = 2;
        enemy1[154].exp = 1;
        enemy1[155].name = "������� ������� ����";
        enemy1[155].hp = 7;
        enemy1[155].hpm = 7;
        enemy1[155].atc1 = 1;
        enemy1[155].atc12 = 1;
        enemy1[155].atc2 = -1;
        enemy1[155].atc22 = 4;
        enemy1[155].exp = 2;
        enemy1[156].name = "������� �������������� �����";
        enemy1[156].hp = 12;
        enemy1[156].hpm = 12;
        enemy1[156].atc1 = 1;
        enemy1[156].atc12 = 1;
        enemy1[156].atc2 = 1;
        enemy1[156].atc22 = 4;
        enemy1[156].exp = 3;
        enemy1[157].name = "������� ������";
        enemy1[157].hp = 9;
        enemy1[157].hpm = 9;
        enemy1[157].atc1 = 2;
        enemy1[157].atc12 = 3;
        enemy1[157].atc2 = 2;
        enemy1[157].atc22 = 4;
        enemy1[157].exp = 3;
        enemy1[158].name = "������� ����";
        enemy1[158].hp = 4;
        enemy1[158].hpm = 4;
        enemy1[158].atc1 = 1;
        enemy1[158].atc12 = 2;
        enemy1[158].atc2 = 2;
        enemy1[158].atc22 = 3;
        enemy1[158].exp = 1;
        enemy1[159].name = "������� ����������";
        enemy1[159].hp = 7;
        enemy1[159].hpm = 7;
        enemy1[159].atc1 = 2;
        enemy1[159].atc12 = 4;
        enemy1[159].atc2 = 2;
        enemy1[159].atc22 = 5;
        enemy1[159].exp = 4;
        enemy1[159].name = "������� ������";
        enemy1[160].hp = 6;
        enemy1[160].hpm = 6;
        enemy1[160].atc1 = 0;
        enemy1[160].atc12 = 2;
        enemy1[160].atc2 = 2;
        enemy1[160].atc22 = 4;
        enemy1[160].exp = 3;
        //�������� ������
        enemy1[200].name = "���������";
        enemy1[200].hp = 7;
        enemy1[200].hpm = 7;
        enemy1[200].atc1 = 1;
        enemy1[200].atc12 = 2;
        enemy1[200].atc2 = 2;
        enemy1[200].atc22 = 3;
        enemy1[200].exp = 1;
        //�������� �����������
        //����
        enemy1[300].name = "�����������";
        enemy1[300].hp = 6;
        enemy1[300].hpm = 6;
        enemy1[300].atc1 = 1;
        enemy1[300].atc12 = 2;
        enemy1[300].atc2 = 1;
        enemy1[300].atc22 = 3;
        enemy1[300].exp = 1;
        enemy1[301].name = "��� � ��";
        enemy1[301].hp = 8;
        enemy1[301].hpm = 8;
        enemy1[301].atc1 = 0;
        enemy1[301].atc12 = 0;
        enemy1[301].atc2 = 0;
        enemy1[301].atc22 = 1;
        enemy1[301].exp = 1;
        enemy1[302].name = "���������";
        enemy1[302].hp = 8;
        enemy1[302].hpm = 8;
        enemy1[302].atc1 = 0;
        enemy1[302].atc12 = 0;
        enemy1[302].atc2 = 2;
        enemy1[302].atc22 = 4;
        enemy1[302].exp = 2;
        enemy1[303].name = "������������ ����";
        enemy1[303].hp = 10;
        enemy1[303].hpm = 10;
        enemy1[303].atc1 = 0;
        enemy1[303].atc12 = 1;
        enemy1[303].atc2 = 3;
        enemy1[303].atc22 = 4;
        enemy1[303].exp = 3;
        enemy1[304].name = "����";
        enemy1[304].hp = 2;
        enemy1[304].hpm = 2;
        enemy1[304].atc1 = 0;
        enemy1[304].atc12 = 1;
        enemy1[304].atc2 = 0;
        enemy1[304].atc22 = 1;
        enemy1[304].exp = 0;
        enemy1[305].name = "����� � ��";
        enemy1[305].hp = 8;
        enemy1[305].hpm = 8;
        enemy1[305].atc1 = 2;
        enemy1[305].atc12 = 3;
        enemy1[305].atc2 = 2;
        enemy1[305].atc22 = 4;
        enemy1[305].exp = 2;
        enemy1[306].name = "�������� �������";
        enemy1[306].hp = 8;
        enemy1[306].hpm = 8;
        enemy1[306].atc1 = 2;
        enemy1[306].atc12 = 4;
        enemy1[306].atc2 = 2;
        enemy1[306].atc22 = 4;
        enemy1[306].exp = 3;
        enemy1[307].name = "������ ���������";
        enemy1[307].hp = 12;
        enemy1[307].hpm = 12;
        enemy1[307].atc1 = 0;
        enemy1[307].atc12 = 2;
        enemy1[307].atc2 = 1;
        enemy1[307].atc22 = 2;
        enemy1[307].exp = 3;
        enemy1[308].name = "������������ �������";
        enemy1[308].hp = 10;
        enemy1[308].hpm = 10;
        enemy1[308].atc1 = 0;
        enemy1[308].atc12 = 1;
        enemy1[308].atc2 = 0;
        enemy1[308].atc22 = 4;
        enemy1[308].exp = 3;
        enemy1[309].name = "�������� �����";
        enemy1[309].hp = 10;
        enemy1[309].hpm = 10;
        enemy1[309].atc1 = 1;
        enemy1[309].atc12 = 3;
        enemy1[309].atc2 = 2;
        enemy1[309].atc22 = 3;
        enemy1[309].exp = 2;
        //�����
        enemy1[310].name = "����� ������� �����";
        enemy1[310].hp = 3;
        enemy1[310].hpm = 3;
        enemy1[310].atc1 = 4;
        enemy1[310].atc12 = 6;
        enemy1[310].atc2 = 8;
        enemy1[310].atc22 = 10;
        enemy1[310].exp = 1;
        enemy1[311].name = "���� ����";
        enemy1[311].hp = 6;
        enemy1[311].hpm = 6;
        enemy1[311].atc1 = 1;
        enemy1[311].atc12 = 2;
        enemy1[311].atc2 = 1;
        enemy1[311].atc22 = 3;
        enemy1[311].exp = 2;
        enemy1[312].name = "����";
        enemy1[312].hp = 7;
        enemy1[312].hpm = 7;
        enemy1[312].atc1 = 2;
        enemy1[312].atc12 = 3;
        enemy1[312].atc2 = 3;
        enemy1[312].atc22 = 3;
        enemy1[312].exp = 3;
        enemy1[313].name = "���� ���������";
        enemy1[313].hp = 8;
        enemy1[313].hpm = 8;
        enemy1[313].atc1 = 1;
        enemy1[313].atc12 = 3;
        enemy1[313].atc2 = 3;
        enemy1[313].atc22 = 4;
        enemy1[313].exp = 4;
        enemy1[314].name = "������ �����";
        enemy1[314].hp = 20;
        enemy1[314].hpm = 20;
        enemy1[314].atc1 = 0;
        enemy1[314].atc12 = 0;
        enemy1[314].atc2 = 0;
        enemy1[314].atc22 = 0;
        enemy1[314].exp = 1;
        enemy1[315].name = "������";
        enemy1[315].hp = 3;
        enemy1[315].hpm = 3;
        enemy1[315].atc1 = 2;
        enemy1[315].atc12 = 3;
        enemy1[315].atc2 = 2;
        enemy1[315].atc22 = 3;
        enemy1[315].exp = 1;
        enemy1[316].name = "��������";
        enemy1[316].hp = 6;
        enemy1[316].hpm = 6;
        enemy1[316].atc1 = 1;
        enemy1[316].atc12 = 3;
        enemy1[316].atc2 = 2;
        enemy1[316].atc22 = 4;
        enemy1[316].exp = 2;
        enemy1[317].name = "������-���";
        enemy1[317].hp = 6;
        enemy1[317].hpm = 6;
        enemy1[317].atc1 = -1;
        enemy1[317].atc12 = 3;
        enemy1[317].atc2 = -2;
        enemy1[317].atc22 = 4;
        enemy1[317].exp = 2;
        enemy1[318].name = "������� �����";
        enemy1[318].hp = 1;
        enemy1[318].hpm = 1;
        enemy1[318].atc1 = 0;
        enemy1[318].atc12 = 0;
        enemy1[318].atc2 = 0;
        enemy1[318].atc22 = 0;
        enemy1[318].exp = 0;
        enemy1[319].name = "���� �����";
        enemy1[319].hp = 8;
        enemy1[319].hpm = 8;
        enemy1[319].atc1 = 0;
        enemy1[319].atc12 = 0;
        enemy1[319].atc2 = 2;
        enemy1[319].atc22 = 5;
        enemy1[319].exp = 3;
        //�����
        enemy1[320].name = "�������� �����������";
        enemy1[320].hp = 6;
        enemy1[320].hpm = 6;
        enemy1[320].atc1 = 1;
        enemy1[320].atc12 = 3;
        enemy1[320].atc2 = 2;
        enemy1[320].atc22 = 3;
        enemy1[320].exp = 2;
        enemy1[321].name = "��������������� �����, ������������� ����";
        enemy1[321].hp = 3;
        enemy1[321].hpm = 3;
        enemy1[321].atc1 = 0;
        enemy1[321].atc12 = 0;
        enemy1[321].atc2 = 0;
        enemy1[321].atc22 = 0;
        enemy1[321].exp = 0;
        enemy1[322].name = "�������";
        enemy1[322].hp = 2;
        enemy1[322].hpm = 2;
        enemy1[322].atc1 = 6;
        enemy1[322].atc12 = 6;
        enemy1[322].atc2 = 6;
        enemy1[322].atc22 = 6;
        enemy1[322].exp = 1;
        enemy1[323].name = "�������� ������";
        enemy1[323].hp = 8;
        enemy1[323].hpm = 8;
        enemy1[323].atc1 = 2;
        enemy1[323].atc12 = 3;
        enemy1[323].atc2 = 0;
        enemy1[323].atc22 = 4;
        enemy1[323].exp = 3;
        enemy1[324].name = "�������� ������-�����";
        enemy1[324].hp = 6;
        enemy1[324].hpm = 6;
        enemy1[324].atc1 = 0;
        enemy1[324].atc12 = 2;
        enemy1[324].atc2 = 1;
        enemy1[324].atc22 = 2;
        enemy1[324].exp = 2;
        enemy1[325].name = "������� � ���������";
        enemy1[325].hp = 12;
        enemy1[325].hpm = 12;
        enemy1[325].atc1 = -1;
        enemy1[325].atc12 = -1;
        enemy1[325].atc2 = -2;
        enemy1[325].atc22 = -2;
        enemy1[325].exp = 0;
        enemy1[326].name = "������";
        enemy1[326].hp = 2;
        enemy1[326].hpm = 2;
        enemy1[326].atc1 = 2;
        enemy1[326].atc12 = 6;
        enemy1[326].atc2 = 6;
        enemy1[326].atc22 = 8;
        enemy1[326].exp = 1;
        enemy1[327].name = "������";
        enemy1[327].hp = 8;
        enemy1[327].hpm = 8;
        enemy1[327].atc1 = 1;
        enemy1[327].atc12 = 3;
        enemy1[327].atc2 = 0;
        enemy1[327].atc22 = 5;
        enemy1[327].exp = 2;
        enemy1[328].name = "������� � ��������� �� �����";
        enemy1[328].hp = 14;
        enemy1[328].hpm = 14;
        enemy1[328].atc1 = 0;
        enemy1[328].atc12 = 1;
        enemy1[328].atc2 = 0;
        enemy1[328].atc22 = 1;
        enemy1[328].exp = 3;
        enemy1[329].name = "������������ ��������";
        enemy1[329].hp = 1;
        enemy1[329].hpm = 1;
        enemy1[329].atc1 = 0;
        enemy1[329].atc12 = 0;
        enemy1[329].atc2 = 0;
        enemy1[329].atc22 = 0;
        enemy1[329].exp = 0;
        //������
        enemy1[330].name = "����� �� �������";
        enemy1[330].hp = 1;
        enemy1[330].hpm = 1;
        enemy1[330].atc1 = 1;
        enemy1[330].atc12 = 1;
        enemy1[330].atc2 = 1;
        enemy1[330].atc22 = 1;
        enemy1[330].exp = 1;
        enemy1[331].name = "����� �� �������";
        enemy1[331].hp = 2;
        enemy1[331].hpm = 2;
        enemy1[331].atc1 = 2;
        enemy1[331].atc12 = 2;
        enemy1[331].atc2 = 2;
        enemy1[331].atc22 = 2;
        enemy1[331].exp = 2;
        enemy1[332].name = "����� �� �������";
        enemy1[332].hp = 3;
        enemy1[332].hpm = 3;
        enemy1[332].atc1 = 3;
        enemy1[332].atc12 = 3;
        enemy1[332].atc2 = 3;
        enemy1[332].atc22 = 3;
        enemy1[332].exp = 3;
        enemy1[333].name = "����� �� �������";
        enemy1[333].hp = 4;
        enemy1[333].hpm = 4;
        enemy1[333].atc1 = 4;
        enemy1[333].atc12 = 4;
        enemy1[333].atc2 = 4;
        enemy1[333].atc22 = 4;
        enemy1[333].exp = 4;
        enemy1[334].name = "����� �� �������";
        enemy1[334].hp = 5;
        enemy1[334].hpm = 5;
        enemy1[334].atc1 = 5;
        enemy1[334].atc12 = 5;
        enemy1[334].atc2 = 5;
        enemy1[334].atc22 = 5;
        enemy1[334].exp = 5;
        enemy1[335].name = "�������� ��������";
        enemy1[335].hp = 10;
        enemy1[335].hpm = 10;
        enemy1[335].atc1 = 0;
        enemy1[335].atc12 = 0;
        enemy1[335].atc2 = 0;
        enemy1[335].atc22 = 0;
        enemy1[335].exp = 2;
        enemy1[336].name = "���� �����";
        enemy1[336].hp = 4;
        enemy1[336].hpm = 4;
        enemy1[336].atc1 = 1;
        enemy1[336].atc12 = 2;
        enemy1[336].atc2 = 2;
        enemy1[336].atc22 = 3;
        enemy1[336].exp = 1;
        enemy1[337].name = "����� �� �����";
        enemy1[337].hp = 5;
        enemy1[337].hpm = 5;
        enemy1[337].atc1 = 1;
        enemy1[337].atc12 = 2;
        enemy1[337].atc2 = 3;
        enemy1[337].atc22 = 4;
        enemy1[337].exp = 2;
        enemy1[338].name = "�������� ������ ����";
        enemy1[338].hp = 10;
        enemy1[338].hpm = 10;
        enemy1[338].atc1 = 0;
        enemy1[338].atc12 = 1;
        enemy1[338].atc2 = 1;
        enemy1[338].atc22 = 1;
        enemy1[338].exp = 2;
        enemy1[339].name = "�������� ����� �� �����";
        enemy1[339].hp = 1;
        enemy1[339].hpm = 1;
        enemy1[339].atc1 = 0;
        enemy1[339].atc12 = 0;
        enemy1[339].atc2 = 0;
        enemy1[339].atc22 = 0;
        enemy1[339].exp = 0;
        //�����
        enemy1[340].name = "����";
        enemy1[340].hp = 2;
        enemy1[340].hpm = 2;
        enemy1[340].atc1 = 1;
        enemy1[340].atc12 = 2;
        enemy1[340].atc2 = 1;
        enemy1[340].atc22 = 2;
        enemy1[340].exp = 1;
        enemy1[341].name = "������";
        enemy1[341].hp = 8;
        enemy1[341].hpm = 8;
        enemy1[341].atc1 = 1;
        enemy1[341].atc12 = 3;
        enemy1[341].atc2 = 0;
        enemy1[341].atc22 = 4;
        enemy1[341].exp = 3;
        enemy1[342].name = "���-������";
        enemy1[342].hp = 7;
        enemy1[342].hpm = 7;
        enemy1[342].atc1 = 1;
        enemy1[342].atc12 = 2;
        enemy1[342].atc2 = 3;
        enemy1[342].atc22 = 4;
        enemy1[342].exp = 3;
        enemy1[343].name = "������ ������";
        enemy1[343].hp = 6;
        enemy1[343].hpm = 6;
        enemy1[343].atc1 = 0;
        enemy1[343].atc12 = 0;
        enemy1[343].atc2 = 0;
        enemy1[343].atc22 = 0;
        enemy1[343].exp = 0;
        enemy1[344].name = "������� ����";
        enemy1[344].hp = 12;
        enemy1[344].hpm = 12;
        enemy1[344].atc1 = 2;
        enemy1[344].atc12 = 3;
        enemy1[344].atc2 = 4;
        enemy1[344].atc22 = 5;
        enemy1[344].exp = 5;
        enemy1[345].name = "��������� ������";
        enemy1[345].hp = 20;
        enemy1[345].hpm = 20;
        enemy1[345].atc1 = 0;
        enemy1[345].atc12 = 0;
        enemy1[345].atc2 = 0;
        enemy1[345].atc22 = 0;
        enemy1[345].exp = 2;
        enemy1[346].name = "����";
        enemy1[346].hp = 10;
        enemy1[346].hpm = 10;
        enemy1[346].atc1 = 1;
        enemy1[346].atc12 = 3;
        enemy1[346].atc2 = 3;
        enemy1[346].atc22 = 4;
        enemy1[346].exp = 3;
        enemy1[347].name = "������ ������� ��������";
        enemy1[347].hp = 16;
        enemy1[347].hpm = 16;
        enemy1[347].atc1 = 1;
        enemy1[347].atc12 = 1;
        enemy1[347].atc2 = 1;
        enemy1[347].atc22 = 2;
        enemy1[347].exp = 2;
        enemy1[348].name = "��������";
        enemy1[348].hp = 8;
        enemy1[348].hpm = 8;
        enemy1[348].atc1 = 1;
        enemy1[348].atc12 = 3;
        enemy1[348].atc2 = 0;
        enemy1[348].atc22 = 5;
        enemy1[348].exp = 2;
        enemy1[349].name = "�������-������ � ���������� 1080 Ti �����������";
        enemy1[349].hp = 7;
        enemy1[349].hpm = 7;
        enemy1[349].atc1 = 1;
        enemy1[349].atc12 = 2;
        enemy1[349].atc2 = 3;
        enemy1[349].atc22 = 4;
        enemy1[349].exp = 2;
        //����
        enemy1[350].name = "������������ ����";
        enemy1[350].hp = 2;
        enemy1[350].hpm = 2;
        enemy1[350].atc1 = 1;
        enemy1[350].atc12 = 1;
        enemy1[350].atc2 = 1;
        enemy1[350].atc22 = 2;
        enemy1[350].exp = 0;
        enemy1[351].name = "������������ ���������� ����";
        enemy1[351].hp = 12;
        enemy1[351].hpm = 12;
        enemy1[351].atc1 = 2;
        enemy1[351].atc12 = 4;
        enemy1[351].atc2 = 3;
        enemy1[351].atc22 = 5;
        enemy1[351].exp = 5;
        enemy1[352].name = "����� �� �������� �� ����������";
        enemy1[352].hp = 20;
        enemy1[352].hpm = 20;
        enemy1[352].atc1 = 0;
        enemy1[352].atc12 = 0;
        enemy1[352].atc2 = 0;
        enemy1[352].atc22 = 0;
        enemy1[352].exp = 1;
        enemy1[353].name = "�����������";
        enemy1[353].hp = 9;
        enemy1[353].hpm = 9;
        enemy1[353].atc1 = 2;
        enemy1[353].atc12 = 3;
        enemy1[353].atc2 = 2;
        enemy1[353].atc22 = 4;
        enemy1[353].exp = 2;
        enemy1[354].name = "��������� �������� ����������";
        enemy1[354].hp = 6;
        enemy1[354].hpm = 6;
        enemy1[354].atc1 = 2;
        enemy1[354].atc12 = 4;
        enemy1[354].atc2 = 2;
        enemy1[354].atc22 = 5;
        enemy1[354].exp = 2;
        enemy1[355].name = "�������� �����";
        enemy1[355].hp = 16;
        enemy1[355].hpm = 16;
        enemy1[355].atc1 = 1;
        enemy1[355].atc12 = 2;
        enemy1[355].atc2 = 1;
        enemy1[355].atc22 = 3;
        enemy1[355].exp = 3;
        enemy1[356].name = "��������� �����";
        enemy1[356].hp = 8;
        enemy1[356].hpm = 8;
        enemy1[356].atc1 = 3;
        enemy1[356].atc12 = 3;
        enemy1[356].atc2 = 2;
        enemy1[356].atc22 = 4;
        enemy1[356].exp = 2;
        enemy1[357].name = "����������� ����";
        enemy1[357].hp = 10;
        enemy1[357].hpm = 10;
        enemy1[357].atc1 = 1;
        enemy1[357].atc12 = 3;
        enemy1[357].atc2 = 3;
        enemy1[357].atc22 = 5;
        enemy1[357].exp = 4;
        enemy1[358].name = "�������� �����";
        enemy1[358].hp = 3;
        enemy1[358].hpm = 3;
        enemy1[358].atc1 = 0;
        enemy1[358].atc12 = 0;
        enemy1[358].atc2 = 0;
        enemy1[358].atc22 = 0;
        enemy1[358].exp = 0;
        enemy1[359].name = "�������� �����";
        enemy1[359].hp = 5;
        enemy1[359].hpm = 5;
        enemy1[359].atc1 = 2;
        enemy1[359].atc12 = 3;
        enemy1[359].atc2 = 2;
        enemy1[359].atc22 = 3;
        enemy1[359].exp = 1;
        //�����
        enemy1[360].name = "��������-����";
        enemy1[360].hp = 1;
        enemy1[360].hpm = 1;
        enemy1[360].atc1 = 0;
        enemy1[360].atc12 = 0;
        enemy1[360].atc2 = 0;
        enemy1[360].atc22 = 0;
        enemy1[360].exp = 0;
        enemy1[361].name = "������ ����� �� �����";
        enemy1[361].hp = 1;
        enemy1[361].hpm = 1;
        enemy1[361].atc1 = 0;
        enemy1[361].atc12 = 0;
        enemy1[361].atc2 = 0;
        enemy1[361].atc22 = 0;
        enemy1[361].exp = 0;
        enemy1[362].name = "���������� �����, �������� � ����� � �����";
        enemy1[362].hp = 4;
        enemy1[362].hpm = 4;
        enemy1[362].atc1 = 0;
        enemy1[362].atc12 = 0;
        enemy1[362].atc2 = 0;
        enemy1[362].atc22 = 0;
        enemy1[362].exp = 0;
        enemy1[363].name = "����� � �����";
        enemy1[363].hp = 6;
        enemy1[363].hpm = 6;
        enemy1[363].atc1 = 0;
        enemy1[363].atc12 = 0;
        enemy1[363].atc2 = 0;
        enemy1[363].atc22 = 0;
        enemy1[363].exp = 0;
        enemy1[364].name = "���������� ���� �� ����";
        enemy1[364].hp = 10;
        enemy1[364].hpm = 10;
        enemy1[364].atc1 = 1;
        enemy1[364].atc12 = 2;
        enemy1[364].atc2 = 1;
        enemy1[364].atc22 = 3;
        enemy1[364].exp = 1;
        enemy1[365].name = "���������� �����";
        enemy1[365].hp = 10;
        enemy1[365].hpm = 10;
        enemy1[365].atc1 = 3;
        enemy1[365].atc12 = 4;
        enemy1[365].atc2 = 3;
        enemy1[365].atc22 = 5;
        enemy1[365].exp = 3;
        enemy1[366].name = "����� � �����";
        enemy1[366].hp = 4;
        enemy1[366].hpm = 4;
        enemy1[366].atc1 = 0;
        enemy1[366].atc12 = 0;
        enemy1[366].atc2 = 0;
        enemy1[366].atc22 = 0;
        enemy1[366].exp = 0;
        enemy1[367].name = "������";
        enemy1[367].hp = 8;
        enemy1[367].hpm = 8;
        enemy1[367].atc1 = 2;
        enemy1[367].atc12 = 3;
        enemy1[367].atc2 = 3;
        enemy1[367].atc22 = 4;
        enemy1[367].exp = 2;
        enemy1[368].name = "���� �������";
        enemy1[368].hp = 8;
        enemy1[368].hpm = 8;
        enemy1[368].atc1 = 0;
        enemy1[368].atc12 = 0;
        enemy1[368].atc2 = 0;
        enemy1[368].atc22 = 0;
        enemy1[368].exp = 0;
        enemy1[369].name = "��������-�������� �����";
        enemy1[369].hp = 12;
        enemy1[369].hpm = 12;
        enemy1[369].atc1 = 3;
        enemy1[369].atc12 = 5;
        enemy1[369].atc2 = 3;
        enemy1[369].atc22 = 6;
        enemy1[369].exp = 3;
        //����� �����
        enemy1[370].name = "Ҹ���� �������";
        enemy1[370].hp = 10;
        enemy1[370].hpm = 10;
        enemy1[370].atc1 = 2;
        enemy1[370].atc12 = 4;
        enemy1[370].atc2 = 3;
        enemy1[370].atc22 = 4;
        enemy1[370].exp = 4;
        enemy1[371].name = "������� ��� � ����������";
        enemy1[371].hp = 8;
        enemy1[371].hpm = 8;
        enemy1[371].atc1 = 1;
        enemy1[371].atc12 = 4;
        enemy1[371].atc2 = 3;
        enemy1[371].atc22 = 6;
        enemy1[371].exp = 3;
        enemy1[372].name = "Ҹ���� �����";
        enemy1[372].hp = 10;
        enemy1[372].hpm = 10;
        enemy1[372].atc1 = 2;
        enemy1[372].atc12 = 2;
        enemy1[372].atc2 = 2;
        enemy1[372].atc22 = 2;
        enemy1[372].exp = 2;
        enemy1[373].name = "����";
        enemy1[373].hp = 8;
        enemy1[373].hpm = 8;
        enemy1[373].atc1 = 3;
        enemy1[373].atc12 = 4;
        enemy1[373].atc2 = 3;
        enemy1[373].atc22 = 4;
        enemy1[373].exp = 3;
        enemy1[374].name = "�������� ����� ��������";
        enemy1[374].hp = 12;
        enemy1[374].hpm = 12;
        enemy1[374].atc1 = 2;
        enemy1[374].atc12 = 4;
        enemy1[374].atc2 = 3;
        enemy1[374].atc22 = 5;
        enemy1[374].exp = 5;
        enemy1[375].name = "����� �� ������ �����";
        enemy1[375].hp = 8;
        enemy1[375].hpm = 8;
        enemy1[375].atc1 = 2;
        enemy1[375].atc12 = 6;
        enemy1[375].atc2 = 2;
        enemy1[375].atc22 = 6;
        enemy1[375].exp = 3;
        enemy1[376].name = "Ҹ���� ������";
        enemy1[376].hp = 14;
        enemy1[376].hpm = 14;
        enemy1[376].atc1 = 2;
        enemy1[376].atc12 = 2;
        enemy1[376].atc2 = 3;
        enemy1[376].atc22 = 3;
        enemy1[376].exp = 2;
        enemy1[377].name = "Ҹ���� ����� �� �����";
        enemy1[377].hp = 2;
        enemy1[377].hpm = 2;
        enemy1[377].atc1 = 0;
        enemy1[377].atc12 = 0;
        enemy1[377].atc2 = 0;
        enemy1[377].atc22 = 0;
        enemy1[377].exp = 0;
        enemy1[378].name = "Ҹ���� ���";
        enemy1[378].hp = 12;
        enemy1[378].hpm = 12;
        enemy1[378].atc1 = -1;
        enemy1[378].atc12 = 4;
        enemy1[378].atc2 = -2;
        enemy1[378].atc22 = 6;
        enemy1[378].exp = 3;
        enemy1[379].name = "Ҹ���� ������";
        enemy1[379].hp = 10;
        enemy1[379].hpm = 10;
        enemy1[379].atc1 = 2;
        enemy1[379].atc12 = 3;
        enemy1[379].atc2 = 4;
        enemy1[379].atc22 = 5;
        enemy1[379].exp = 2;
        //������ ��������
        enemy1[380].name = "�������� ����������";
        enemy1[380].hp = 6;
        enemy1[380].hpm = 6;
        enemy1[380].atc1 = 1;
        enemy1[380].atc12 = 3;
        enemy1[380].atc2 = 1;
        enemy1[380].atc22 = 4;
        enemy1[380].exp = 3;
        enemy1[381].name = "�������� ��������";
        enemy1[381].hp = 5;
        enemy1[381].hpm = 5;
        enemy1[381].atc1 = 0;
        enemy1[381].atc12 = 3;
        enemy1[381].atc2 = 1;
        enemy1[381].atc22 = 4;
        enemy1[381].exp = 1;
        enemy1[382].name = "�����";
        enemy1[382].hp = 3;
        enemy1[382].hpm = 3;
        enemy1[382].atc1 = 1;
        enemy1[382].atc12 = 2;
        enemy1[382].atc2 = 1;
        enemy1[382].atc22 = 3;
        enemy1[382].exp = 1;
        enemy1[383].name = "���� �� ����";
        enemy1[383].hp = 8;
        enemy1[383].hpm = 8;
        enemy1[383].atc1 = 0;
        enemy1[383].atc12 = 2;
        enemy1[383].atc2 = 0;
        enemy1[383].atc22 = 3;
        enemy1[383].exp = 1;
        enemy1[384].name = "������� �����";
        enemy1[384].hp = 8;
        enemy1[384].hpm = 8;
        enemy1[384].atc1 = 1;
        enemy1[384].atc12 = 3;
        enemy1[384].atc2 = 3;
        enemy1[384].atc22 = 5;
        enemy1[384].exp = 2;
        enemy1[385].name = "�������� ���";
        enemy1[385].hp = 9;
        enemy1[385].hpm = 9;
        enemy1[385].atc1 = 2;
        enemy1[385].atc12 = 4;
        enemy1[385].atc2 = 1;
        enemy1[385].atc22 = 6;
        enemy1[385].exp = 2;
        enemy1[386].name = "������� �����";
        enemy1[386].hp = 20;
        enemy1[386].hpm = 20;
        enemy1[386].atc1 = 0;
        enemy1[386].atc12 = 2;
        enemy1[386].atc2 = 1;
        enemy1[386].atc22 = 3;
        enemy1[386].exp = 3;
        enemy1[387].name = "������� ����������";
        enemy1[387].hp = 12;
        enemy1[387].hpm = 12;
        enemy1[387].atc1 = 3;
        enemy1[387].atc12 = 4;
        enemy1[387].atc2 = 2;
        enemy1[387].atc22 = 5;
        enemy1[387].exp = 3;
        enemy1[388].name = "�������� ����� � ���������� �����������";
        enemy1[388].hp = 14;
        enemy1[388].hpm = 14;
        enemy1[388].atc1 = 1;
        enemy1[388].atc12 = 2;
        enemy1[388].atc2 = 0;
        enemy1[388].atc22 = 8;
        enemy1[388].exp = 3;
        enemy1[389].name = "�������� �� ������ �������";
        enemy1[389].hp = 12;
        enemy1[389].hpm = 12;
        enemy1[389].atc1 = 0;
        enemy1[389].atc12 = 5;
        enemy1[389].atc2 = 0;
        enemy1[389].atc22 = 6;
        enemy1[389].exp = 3;
        //�����
        enemy1[390].name = "������";
        enemy1[390].hp = 6;
        enemy1[390].hpm = 6;
        enemy1[390].atc1 = 2;
        enemy1[390].atc12 = 3;
        enemy1[390].atc2 = 3;
        enemy1[390].atc22 = 4;
        enemy1[390].exp = 1;
        enemy1[391].name = "������������ ���� � ����������";
        enemy1[391].hp = 12;
        enemy1[391].hpm = 12;
        enemy1[391].atc1 = 0;
        enemy1[391].atc12 = 6;
        enemy1[391].atc2 = 0;
        enemy1[391].atc22 = 7;
        enemy1[391].exp = 4;
        enemy1[392].name = "��Tb|� �0�";
        enemy1[392].hp = 10;
        enemy1[392].hpm = 10;
        enemy1[392].atc1 = 1;
        enemy1[392].atc12 = 1;
        enemy1[392].atc2 = 1;
        enemy1[392].atc22 = 3;
        enemy1[392].exp = 1;
        enemy1[393].name = "���������� ���";
        enemy1[393].hp = 10;
        enemy1[393].hpm = 10;
        enemy1[393].atc1 = 2;
        enemy1[393].atc12 = 4;
        enemy1[393].atc2 = 3;
        enemy1[393].atc22 = 5;
        enemy1[393].exp = 4;
        enemy1[394].name = "���������� �������-���� �� 0 � 1";
        enemy1[394].hp = 16;
        enemy1[394].hpm = 16;
        enemy1[394].atc1 = 0;
        enemy1[394].atc12 = 0;
        enemy1[394].atc2 = 0;
        enemy1[394].atc22 = 0;
        enemy1[394].exp = 2;
        enemy1[395].name = "�����";
        enemy1[395].hp = 3;
        enemy1[395].hpm = 3;
        enemy1[395].atc1 = 1;
        enemy1[395].atc12 = 1;
        enemy1[395].atc2 = 2;
        enemy1[395].atc22 = 2;
        enemy1[395].exp = 0;
        enemy1[396].name = "��������� ������";
        enemy1[396].hp = 20;
        enemy1[396].hpm = 20;
        enemy1[396].atc1 = 3;
        enemy1[396].atc12 = 5;
        enemy1[396].atc2 = 4;
        enemy1[396].atc22 = 6;
        enemy1[396].exp = 5;
        enemy1[397].name = "����������� �������� �� �����";
        enemy1[397].hp = 12;
        enemy1[397].hpm = 12;
        enemy1[397].atc1 = 2;
        enemy1[397].atc12 = 3;
        enemy1[397].atc2 = 2;
        enemy1[397].atc22 = 4;
        enemy1[397].exp = 3;
        enemy1[398].name = "���������� �����";
        enemy1[398].hp = 12;
        enemy1[398].hpm = 12;
        enemy1[398].atc1 = 3;
        enemy1[398].atc12 = 4;
        enemy1[398].atc2 = 4;
        enemy1[398].atc22 = 5;
        enemy1[398].exp = 3;
        enemy1[399].name = "��������� � ����� �����";
        enemy1[399].hp = 20;
        enemy1[399].hpm = 20;
        enemy1[399].atc1 = 2;
        enemy1[399].atc12 = 3;
        enemy1[399].atc2 = 0;
        enemy1[399].atc22 = 5;
        enemy1[399].exp = 5;
        // ����� ��� �������� �����������
        enemy1[410].name = "[����] ������� ������";
        enemy1[410].hp = 11;
        enemy1[410].hpm = 11;
        enemy1[410].atc1 = 1;
        enemy1[410].atc12 = 3;
        enemy1[410].atc2 = 4;
        enemy1[410].atc22 = 5;
        enemy1[410].exp = 7;
        enemy1[409].name = "[����] ��������������� �����";
        enemy1[409].hp = 12;
        enemy1[409].hpm = 12;
        enemy1[409].atc1 = 1;
        enemy1[409].atc12 = 2;
        enemy1[409].atc2 = 4;
        enemy1[409].atc22 = 4;
        enemy1[409].exp = 8;
        enemy1[408].name = "[����] ������� ��������";
        enemy1[408].hp = 14;
        enemy1[408].hpm = 14;
        enemy1[408].atc1 = 1;
        enemy1[408].atc12 = 3;
        enemy1[408].atc2 = 2;
        enemy1[408].atc22 = 6;
        enemy1[408].exp = 9;
        enemy1[407].name = "[����] ����� �������";
        enemy1[407].hp = 16;
        enemy1[407].hpm = 16;
        enemy1[407].atc1 = 2;
        enemy1[407].atc12 = 3;
        enemy1[407].atc2 = 3;
        enemy1[407].atc22 = 6;
        enemy1[407].exp = 10;
        enemy1[406].name = "[����] ������� ������";
        enemy1[406].hp = 18;
        enemy1[406].hpm = 18;
        enemy1[406].atc1 = 1;
        enemy1[406].atc12 = 6;
        enemy1[406].atc2 = 1;
        enemy1[406].atc22 = 7;
        enemy1[406].exp = 11;
        enemy1[405].name = "[����] ������� ������ ��� � ���";
        enemy1[405].hp = 22;
        enemy1[405].hpm = 22;
        enemy1[405].atc1 = 2;
        enemy1[405].atc12 = 6;
        enemy1[405].atc2 = 2;
        enemy1[405].atc22 = 6;
        enemy1[405].exp = 12;
        enemy1[404].name = "[����] ����, ����������� �������";
        enemy1[404].hp = 3;
        enemy1[404].hpm = 3;
        enemy1[404].atc1 = 0;
        enemy1[404].atc12 = 0;
        enemy1[404].atc2 = 0;
        enemy1[404].atc22 = 0;
        enemy1[404].exp = 0;
        enemy1[403].name = "[����] ���� ���������";
        enemy1[403].hp = 24;
        enemy1[403].hpm = 24;
        enemy1[403].atc1 = 2;
        enemy1[403].atc12 = 5;
        enemy1[403].atc2 = 4;
        enemy1[403].atc22 = 6;
        enemy1[403].exp = 14;
        enemy1[402].name = "[����] ������ ��������";
        enemy1[402].hp = 26;
        enemy1[402].hpm = 26;
        enemy1[402].atc1 = 2;
        enemy1[402].atc12 = 6;
        enemy1[402].atc2 = 5;
        enemy1[402].atc22 = 7;
        enemy1[402].exp = 15;
        enemy1[401].name = "[����] ������� ��������";
        enemy1[401].hp = 30;
        enemy1[401].hpm = 30;
        enemy1[401].atc1 = 3;
        enemy1[401].atc12 = 8;
        enemy1[401].atc2 = 3;
        enemy1[401].atc22 = 10;
        enemy1[401].exp = 16;
        enemy1[400].name = "[����] Ҹ���� ������";
        enemy1[400].hp = 9999999;
        enemy1[400].hpm = 9999999;
        enemy1[400].atc1 = 0;
        enemy1[400].atc12 = 0;
        enemy1[400].atc2 = 0;
        enemy1[400].atc22 = 0;
        enemy1[400].exp = 0;
        enemy1[411].name = "[����] ������ �����";
        enemy1[411].hp = 1000;
        enemy1[411].hpm = 1000;
        enemy1[411].atc1 = 4;
        enemy1[411].atc12 = 5;
        enemy1[411].atc2 = 4;
        enemy1[411].atc22 = 5;
        enemy1[411].exp = 0;
        enemy1[412].name = "[����] ������ ������� ������";
        enemy1[412].hp = 1000;
        enemy1[412].hpm = 1000;
        enemy1[412].atc1 = 0;
        enemy1[412].atc12 = 0;
        enemy1[412].atc2 = 0;
        enemy1[412].atc22 = 0;
        enemy1[412].exp = 0;
        enemy1[413].name = "Ҩ���� ��������";
        enemy1[413].hp = 1;
        enemy1[413].hpm = 1;
        enemy1[413].atc1 = 1;
        enemy1[413].atc12 = 1;
        enemy1[413].atc2 = 1;
        enemy1[413].atc22 = 1;
        enemy1[413].exp = 0;
        hero1[19].atc1 = wea1[0].atc1;
        hero1[19].atc12 = wea1[0].atc12;
        hero1[19].atc2 = wea1[0].atc2;
        hero1[19].atc22 = wea1[0].atc22;
    cout << " /------------------------------------------------------------------------------------------------------------------------------\\" << endl;
    cout << " |                    __________                                     T~~                                                        |" << endl;
    cout << " |                   /          \\                                    |                              \\ | /                       |" << endl;
    cout << " |      T~~         |     SC     |-I          T~~                   /\"\\            T~~             --[o]--                T~~   |" << endl;
    cout << " |      |            \\          /             |             T~~     WWW T~~        |                / | \\                 |     |" << endl;
    cout << " |     /\"\\            UUUUUUUUUU             /\"\\        T~~ |    T~~| | |         /\"\\                                    /\"\\    |" << endl;
    cout << " |    /   \\                                  WWW    T~~ |  /\"\\   |  |'|/\"\\T~~     WWW                                   /   \\   |" << endl;
    cout << " |    WWWWW                                  | |    |  /\"\\ WWW  /\"\\ | |WWW|       | |                                   WWWWW   |" << endl;
    cout << " |    |   |                                  |'|   /\"\\WWWWW/\\| /   \\|'/\\ /\"\\  T~~ |'|                                   |   |   |" << endl;
    cout << " |    |'  |          WWWWW          WWWWW    | |   WWW|   /__\\/]WWW[\\/__\\WWWW |   | |     WWWWW          WWWWW          |'  |   |" << endl;
    cout << " |    |   |WWWWWWWWWW|   |WWWWWWWWWW|   |WWWWWWWWWW|  |'  WWWW'|H_H|'WWWW'  |/\"\\WWWWWWWWWW|   |WWWWWWWWWW|   |WWWWWWWWWW|   |   |" << endl;
    cout << " |    |'  |   '      |'  |      '   |'  |       '  |' |   |' |/  -  \\|' |'  |WWW     '    |'  |    '     |   |       '  |'  |   |" << endl;
    cout << " |    |   |       '  |   |  '       |   |  '       |  |'  |  |HH=H=HH|' |   |' |  '       |   |  '       |   |  '       |   |   |" << endl;
    cout << " |    |'  | '        |'  |     '    |'  |      '   |' |   |' | |###| |  |'  |  |       '  |'  |        ' |   |      '   |'  |   |" << endl;
    cout << " |    |   |          |   |          |   |          |  |   |  |_|###|_|  |   |  |          |   |          |   |          |   |   |" << endl;
    cout << " |    '---'----------'---'----------'---'----------'--'---'--'-/___\\-'--'---'--'----------'---'----------'---'----------'---'   |" << endl;
    cout << " |                                          | ����� ���������� � ���� Sinister Castle! |                                        |" << endl;
    cout << " \\------------------------------------------------------------------------------------------------------------------------------/" << endl;
    s2 = "-";
    while ((s2 != "1")&&(s2 != "2")&&(s2 != "3")&&(s2 != "4")&&(s2 != "5")){
    cout << "1 - ������ �������� \"�������� �����\"" << endl;
    cout << "2 - ������ �������� \"������������ ��������������\"" << endl;
    cout << "3 - ������ �������� \"�������� � ������� �������\"" << endl;
    cout << "4 - ������ �������� \"��������� ������������\"" << endl;
    cout << "5 - ������ �������� \"�������� �����������\"" << endl;
    cout << "6 - ���������� �� ����" << endl;
    cout << "7 - ���������� �� ������" << endl;
    cout << "8 - ����������" << endl;
    cout << "9 - �����������" << endl;
    cout << "10 - ���������" << endl;
    cout << "0 - �����" << endl;
    getline(cin, s2);
    if (s2 == "1"){
        if (zvyk == 1) Beep(300,100);
        system("color 80");
        reg = 0;
    }
    if (s2 == "2"){
        if (zvyk == 1) Beep(300,100);
        system("color 8F");
        reg = 1;
    }
    if (s2 == "3"){
        if (zvyk == 1) Beep(300,100);
        system("color 0F");
        reg = 2;
    }
    if (s2 == "4"){
        if (zvyk == 1) Beep(300,100);
        system("color 0C");
        reg = 3;
    }
    if (s2 == "5"){
        if (zvyk == 1) Beep(300,100);
        system("color 0B");
        reg = 4;
    }
    if (s2 == "6"){
        if (zvyk == 1) Beep(300,100);
        cout << " <------------------------------------------------------------------------------------------------------------------------------>" << endl;
        cout << "������ ����: Sinister Castle v 1.8" << endl;
        cout << " <------------------------------------------------------------------------------------------------------------------------------>" << endl;
    }
    if (s2 == "7"){
        if (zvyk == 1) Beep(300,100);
        cout << " <------------------------------------------------------------------------------------------------------------------------------>" << endl;
        cout << "��������� � �������� ����: ������� ������� ���������� (https://vk.com/queen_fluttershy)" << endl;
        cout << " <------------------------------------------------------------------------------------------------------------------------------>" << endl;
    }
    if (s2 == "8"){
        if (zvyk == 1) Beep(300,100);
        cout << " <------------------------------------------------------------------------------------------------------------------------------>" << endl;
        cout << "Sinister Castle - ��������� ��������� �������� � ���������� �������. � ������ ���� �� ���������� � ������ ������� ��������� �����, � ������� ������������ � ������ ������. ����� ������ ��� ���, �� ���������� � ��������� �������, � ������� ����� ����� �����-���� ��������. � ������ ������� ���� ��������, ����� ���� ��������-�����, ��� �������� ��������� [����] � ������ �������� ������-���� �������������. ����� ������ ����� ������� ��� � ������� ����� ���������� �����-���� �������, � ������� �� ������ �����������������, �� ��������� �����-���� ��������������� ������. ������ ������� ����� �� �������, ������ � ������� ����� �����. � ������ ���� ������ �����, ������� �����, ������ ������������ ��������, ����������� ����� � ������ �������� ���������� � �����. ��������! ������ ���������� - ���� ��������� �����, ��� ��� ����� ���� ������������ ��� �� �������, ����� � ��������� ���� ������ ����� � �����������, ���� �� ������������ ������, ����� �� ���������� ���. ����������� ����� - ��� �����, ����������� ����, � ������ ���� � ������� ������ �� �� 0-10. ����� � ������ ������� ����� ����� �������, ������� ����� ����� � �����. ���� � ��� ��� ���� �������, �� �� ������ ��������� ��� ������� ������� � ����� �����. ����� � ���� ���� ��������, ��� ������ �� ��������, ������� ����� ���������, ��, � ������� �� ���, �������� ���� ��������� ������ ������ ���, ����� �������� ������ ������ ������ �� ���������, � ����� ������ �������� �� ������. ��� ������������� �������� �� ��������� 2 ���. � ������ ����� ���� ���� � �������. � ������� ����� ����� �������� 0+ �����, �� ������ ��������� ������ ����� ����� �������� ����� �������. ��� ��������� ������ ������ ���������� ���������� ������������� �������� � ��������� ����������� �������� �� ������ ������������� ������. ����� �� ��������� ������� ����������� ��� ����������� ������ � ����������� ��� ���� ���� � ����������� �����������. ������ ����� ���� +0.5 � �����. � ��������� ������ ���� ������ �����, ������� ����� ���� �����-���� ������ �����. �� ���������� 3 ����: ������������ (-1 � �������� ����� ����� ������� ������), �� (-2 � �������� ����� ����� ������� ������) � ������� (-1 � �������� ����� ����� ������� ������). �� ������ �� ��� ���� ���������. ������� �� �� ������ 100 ������? ���� �� ������ ������� ����� ���������, ��������� � ���, �� �����!" << endl;
        cout << " <------------------------------------------------------------------------------------------------------------------------------>" << endl;
    }
    if (s2 == "9"){
        if (zvyk == 1) Beep(300,100);
        cout << " <------------------------------------------------------------------------------------------------------------------------------>" << endl;
        cout << "� ����������� ����� ����� ���� � ���, ��� ���� ����� �������� �����, � ������� �������� ��������� ���������, ������������ ����, ��� ��� ����� ������� ����������. �� ����� ��� ��� ������� � �������� ������� ����������, ���� ��� ��������� ����� � ����. ��� ����� ����� �������� ����� � ����������� �������� �� ��� � ���� ����� � �������� ��, ��� ������ �����." << endl;
        cout << " <------------------------------------------------------------------------------------------------------------------------------>" << endl;
    }
    if (s2 == "10"){
        if (zvyk == 1) Beep(300,100);
        cout << " <------------------------------------------------------------------------------------------------------------------------------>" << endl;
    while ((s4 != "1")&&(s4 != "2")&&(s4 != "0")){
        cout << "���������:" << endl;
        cout << "1 - ������ ����" << endl;
        cout << "2 - �����" << endl;
        cout << "0 - ��������� � ������� ����" << endl;
        getline(cin, s4);
        }
    if (s4 == "2"){
        if (zvyk == 1) Beep(300,100);
        s4="-";
    while ((s4 != "1")&&(s4 != "2")){
        s4="-";
        cout << "��������� � ���������� �����:" << endl;
        cout << "1 - �������� ����" << endl;
        cout << "2 - ��������� ����" << endl;
        getline(cin, s4);
    }
    if (s4 == "1"){
        zvyk = 1;
        if (zvyk == 1) Beep(300,100);
        cout << "���� �������" << endl;
        cout << " <------------------------------------------------------------------------------------------------------------------------------>" << endl;
        s4="-";
    }
    if (s4 == "2"){
        zvyk = 0;
        if (zvyk == 1) Beep(300,100);
        cout << "���� ��������" << endl;
        cout << " <------------------------------------------------------------------------------------------------------------------------------>" << endl;
        s4="-";
    }}
    if (s4 == "1"){
        if (zvyk == 1) Beep(300,100);
        s4="-";
    while ((s4 != "1")&&(s4 != "2")&&(s4 != "3")){
        s4="-";
        cout << "�������� ������ ����:" << endl;
        cout << "1 - �������" << endl;
        cout << "2 - ������� (�� ������������� ��� 1, 2, 3 � 5 ����)" << endl;
        cout << "3 - ��������� (�� ������������� ��� 1, 2, 3 � 5 ����)" << endl;
        getline(cin, s4);
        }
    if (s4 == "1"){
        system("mode 130, 50");
        if (zvyk == 1) Beep(300,100);
        cout << "������ ���� ������ �� �������" << endl;
        cout << " <------------------------------------------------------------------------------------------------------------------------------>" << endl;
        s4="-";
    }
    if (s4 == "2"){
        system("mode 130, 40");
        if (zvyk == 1) Beep(300,100);
        cout << "������ ���� ������ �� �������" << endl;
        cout << " <------------------------------------------------------------------------------------------------------------------------------>" << endl;
        s4="-";
    }
    if (s4 == "3"){
        system("mode 130, 30");
        if (zvyk == 1) Beep(300,100);
        cout << "������ ���� ������ �� ���������" << endl;
        cout << " <------------------------------------------------------------------------------------------------------------------------------>" << endl;
        s4="-";
    }
    }
    if (s4 == "0"){
        if (zvyk == 1) Beep(300,100);
        cout << " <------------------------------------------------------------------------------------------------------------------------------>" << endl;
        s4="-";
    }
    }
    if (s2 == "0"){
        exit(0);
    }
    }
    if ((reg == 0)||(reg == 1)||(reg == 2)){
    while ((s != "1")&&(s != "2")&&(s != "3")&&(s != "4")&&(s != "5")&&(s != "6")&&(s != "7")&&(s != "8")){
    cout << "�������� �����:" << endl;
    cout << "1 - ����������" << endl;
    startstat(hero1[0]);
    cout << "2 - ������" << endl;
    startstat(hero1[1]);
    cout << "3 - ������" << endl;
    startstat(hero1[2]);
    cout << "4 - ����������" << endl;
    startstat(hero1[3]);
    cout << "5 - ������ ����" << endl;
    startstat(hero1[4]);
    cout << "6 - ������������� ����" << endl;
    startstat(hero1[5]);
    cout << "7 - ���� ������" << endl;
    startstat(hero1[6]);
    cout << "8 - ������ �������" << endl;
    startstat(hero1[7]);
    getline(cin, s);
    }
    if (s == "1") {
        if (zvyk == 1) Beep(300,100);
        j=0;
    }
    if (s == "2") {
        if (zvyk == 1) Beep(300,100);
        j=1;
    }
    if (s == "3") {
        if (zvyk == 1) Beep(300,100);
        j=2;
    }
    if (s == "4") {
        if (zvyk == 1) Beep(300,100);
        j=3;
    }
    if (s == "5") {
        if (zvyk == 1) Beep(300,100);
        j=4;
    }
    if (s == "6") {
        if (zvyk == 1) Beep(300,100);
        j=5;
    }
    if (s == "7") {
        if (zvyk == 1) Beep(300,100);
        j=6;
    }
    if (s == "8") {
        if (zvyk == 1) Beep(300,100);
        j=7;
    }
    }
    else if (reg == 3){
        while ((s != "1")&&(s != "2")){
    cout << "�������� �����:" << endl;
    cout << "1 - ������" << endl;
    startstat(hero1[19]);
    cout << "2 - �����������" << endl;
    startstat(hero1[26]);
    getline(cin, s);
    }
    if (s == "1") {
        j=19;
        if (zvyk == 1) Beep(300,100);
        cout << "������� ��� ������ �����:" << endl;
        getline(cin, s3);
        hero1[j].name = hero1[j].name + " " + s3;
    }
    if (s == "2") {
        j=26;
        if (zvyk == 1) Beep(300,100);
        cout << "������� ��� ������ �����:" << endl;
        getline(cin, s3);
        hero1[j].name = hero1[j].name + " " + s3;
    }
    }
    else if (reg == 4){
        while ((s != "1")&&(s != "2")&&(s != "3")&&(s != "4")&&(s != "5")&&(s != "6")){
    cout << "�������� �����:" << endl;
    cout << "1 - ���������� �����" << endl;
    startstat(hero1[20]);
    cout << "2 - ����� �� �������" << endl;
    startstat(hero1[21]);
    cout << "3 - �����-�������" << endl;
    startstat(hero1[22]);
    cout << "4 - ���������� ���" << endl;
    startstat(hero1[23]);
    cout << "5 - ������ ����" << endl;
    startstat(hero1[24]);
    cout << "6 - �������� ������ ������" << endl;
    startstat(hero1[25]);
    getline(cin, s);
    }
    if (s == "1") {
        if (zvyk == 1) Beep(300,100);
        j=20;
    }
    if (s == "2") {
        if (zvyk == 1) Beep(300,100);
        j=21;
    }
    if (s == "3") {
        if (zvyk == 1) Beep(300,100);
        j=22;
    }
    if (s == "4") {
        if (zvyk == 1) Beep(300,100);
        j=23;
    }
    if (s == "5") {
        if (zvyk == 1) Beep(300,100);
        j=24;
    }
    if (s == "6") {
        if (zvyk == 1) Beep(300,100);
        j=25;
    }
    }
    cout << " <------------------------------------------------------------------------------------------------------------------------------>" << endl;
    if (reg == 0) cout << "�� ������ �������� \"�������� �����\"!" << endl;
    else if (reg == 1) cout << "�� ������ �������� \"������������ ��������������\"!" << endl;
    else if (reg == 2) cout << "�� ������ �������� \"�������� � ������� �������\"!" << endl;
    else if (reg == 3) cout << "�� ������ �������� \"��������� ������������\"!" << endl;
    else if (reg == 4) cout << "�� ������ �������� \"�������� �����������\"!" << endl;
    cout << "������ �����: " << hero1[j].name << endl;
    herostat(hero1[j]);
    lvlstat(hero1[j], nlvl);
    cout << " <------------------------------------------------------------------------------------------------------------------------------>" << endl;
    cout << "�� ������� � ������ �������" << endl;
    cout << " /------------------------------------------------------------------------------------------------------------------------------\\" << endl;
    Sleep(1000);
    boyo:
    if (reg == 0)
    {
        i = (rand()%(55 - 0)) + 0;
    if ((k == 20)||(k == 40)||(k == 60)||(k == 80)){
        cout << "��� �������� ���������� ������� (1 �� ���� ���������������)" << endl;
        if (zvyk ==1){
            Beep(700, 100);
            Beep(800, 100);
        }
        cout << " |------------------------------------------------------------------------------------------------------------------------------|" << endl;
        for (chet = 0; chet <= 54; chet++){
                if ((chet != 7)&&(chet != 17)&&(chet != 33)){
            enemy1[chet].hp++;
            enemy1[chet].hpm++;
            enemy1[chet].atc1++;
            enemy1[chet].atc12++;
            enemy1[chet].atc2++;
            enemy1[chet].atc22++;
                }
        }
    }
    if ((k < 20)&&((i == 12)||(i == 18)||(i == 16)||(i == 30)||(i == 45)||(i == 26)||(i == 27)||(i == 28)||(i == 31)||(i == 32)||(i == 5)||(i == 34)||(i == 36)||(i == 37)||(i == 38))){
        i = (rand()%(54 - 0)) + 0;
    }
    if ((k < 20)&&(enemy1[i].hpm >= 10)){
        i = (rand()%(54 - 0)) + 0;
    }
    if ((k < 20)&&((i == 12)||(i == 18)||(i == 16)||(i == 30)||(i == 45)||(i == 26)||(i == 27)||(i == 28)||(i == 31)||(i == 32)||(i == 5)||(i == 34)||(i == 36)||(i == 37)||(i == 38))){
        i = (rand()%(54 - 0)) + 0;
    }
     if ((k < 20)&&(enemy1[i].hpm >= 10)){
        i = (rand()%(54 - 0)) + 0;
    }
    if ((k < 20)&&((i == 12)||(i == 18)||(i == 16)||(i == 30)||(i == 45)||(i == 26)||(i == 27)||(i == 28)||(i == 31)||(i == 32)||(i == 5)||(i == 34)||(i == 36)||(i == 37)||(i == 38))){
        i = (rand()%(54 - 0)) + 0;
    }
    if ((k < 20)&&(enemy1[i].hpm >= 10)){
        i = (rand()%(54 - 0)) + 0;
    }
    if (k < 50){
        if ((i == 24)||(i == 27)||(i == 37)||(i == 50)||(i == 52)) i++;
    }
    if (k == 10) i = 99;
    if (k == 20) i = 98;
    if (k == 30) i = 97;
    if (k == 40) i = 96;
    if (k == 50) i = 95;
    if (k == 60) i = 94;
    if (k == 70) i = 93;
    if (k == 80) i = 92;
    if (k == 90) i = 91;
    if (k == 100) i = 90;
    if (k == 101) i = 89;
    if ((k == 11)||(k == 21)||(k == 31)||(k == 41)||(k == 51)||(k == 61)||(k == 71)||(k == 81)||(k == 91)){
            cout << "�� �������� 1 ���� �����������!" << endl;
            hero1[j].pred++;
    }
    l = (rand()%(91 - 0)) + 0;
    if ((l == 0)||(l == 1)||(l == 2)||(l == 3)||(l == 4)||(l == 5)||(l == 6)||(l == 7)||(l == 8)||(l == 9)||(l == 10)||(l == 11)||(l == 12)||(l == 13)||(l == 14)||(l == 15)||(l == 16)||(l == 17)||(l == 18)||(l == 19)||(l == 20)||(l == 21)||(l == 22)||(l == 23)||(l == 39)||(l == 40)){
        re = '0';
        cout << "�� �������� � ������� ������� " << obj1[l].name << endl;
        if (zvyk ==1){
            Beep(400, 200);
            Beep(600, 300);
            Beep(800, 800);
        }
        cout << " |------------------------------------------------------------------------------------------------------------------------------|" << endl;
        cout << "�� ������ ��� ������������?" << endl;
        while ((re != "1")&&(re != "2")){
        cout << "1 - ��" << endl;
        cout << "2 - ���" << endl;
        getline(cin, re);
        if (re == "1"){
                if (zvyk == 1) Beep(300,100);
                if (l == 0){
                    cout << "�� ��������� ���������� �������" << endl;
                    cout << "�� ���������� ������ �������� (1 � ������������� �������� � 1 � ��������)" << endl;
                }
                if (l == 1){
                    cout << "�� ��������� ���������� �������" << endl;
                    cout << "�� ���������� ���� �� ����� ���� (-1 � ������������� �������� � -2 � ��������)" << endl;
                }
                if (l == 2){
                    cout << "�� ���������� ������" << endl;
                    cout << "�� �������� � �� ��������� ��� ������� ������ (1 �� ���� ������ ������� ������)" << endl;
                }
                if ((l == 3)||(l == 17)){
                    cout << "�� ���������� ������" << endl;
                    cout << "���-�� ��... �� �����������...";
                    if ((k != 10)&&(k != 20)&&(k != 30)&&(k != 40)&&(k != 50)&&(k != 60)&&(k != 70)&&(k != 80)&&(k != 90)&&(k != 100)&&(k != 101)){
                        i = 88;
                        cout << " ��� ���?!";
                    }
                    cout << endl;
                }
                if (l == 4){
                    cout << "�� ���������� ������" << endl;
                    cout << "�� �������� � �� ��������� ��� ������� ������ (1 �� ���� ������ ������� ������)" << endl;
                }
                if (l == 5){
                    cout << "�� ��������� ���������� �������" << endl;
                    cout << "�� ���������� ������ ���� �� ����� ���� (-5 � ��������)" << endl;
                }
                if (l == 6){
                    cout << "�� ����� ����� � ������� ��������" << endl;
                    cout << "��� �����������, � �������� �������� (-1 �� ���� ��������������� ���������)" << endl;
                }
                if (l == 7){
                    cout << "�� ����� ����� � ������� ��������" << endl;
                    cout << "�� ���������� ������ ��������, � �������� �������� (5 � ��������)" << endl;
                }
                if (l == 8){
                    cout << "�� ����� ����� � ����" << endl;
                    cout << "��, �� �����������, ������������� �� �� ���� (����� 1-2, 2-3)" << endl;
                }
                if (l == 9){
                    cout << "�� ����� ����� � ����" << endl;
                    cout << "�� � �������� ������������� �� �� ���� (����� 1-5, 0-7)" << endl;
                }
                if (l == 10){
                    cout << "�� ����� ����� � ����" << endl;
                    cout << "� ��� ����������� ����������� (1 �� ���� ������� �������)" << endl;
                }
                if (l == 11){
                    cout << "�� ����� ����� � ����" << endl;
                    cout << "� ��� ����������� ����������� ����������� (-1 �� ���� ������� �������)" << endl;
                }
                if (l == 12){
                    cout << "�� ����� � ���� ������" << endl;
                    cout << "�� �������������� ���... ";
                    if ((k != 10)&&(k != 20)&&(k != 30)&&(k != 40)&&(k != 50)&&(k != 60)&&(k != 70)&&(k != 80)&&(k != 90)&&(k != 100)&&(k != 101)){
                        i = 87;
                        cout << "� ������ ������� �������� ������, � �� ���� ������� ��������!";
                    }
                    else cout << "� ������ �� ����������";
                    cout << endl;
                }
                if (l == 13){
                    cout << "�� ����� � ���� ������" << endl;
                    cout << "�� �������������� ���... �� ��������� ��� ������ (9 � �����)" << endl;
                }
                if ((l == 14)||(l == 15)||(l == 18)||(l == 19)){
                    cout << "�� ����� � ���� ���������" << endl;
                    bol = 0;
                    cout << "�� ��������� ��� (��������� �� �������)" << endl;
                }
                if (l == 16){
                    cout << "�� ����� � ���� �����" << endl;
                    cout << "�� ��������� ���������� (������)" << endl;
                    hero1[j].hp = 0;
                    hero1[j].hpm = 0;
                    Sleep(1000);
                    cout << " |------------------------------------------------------------------------------------------------------------------------------|" << endl;
                    goto end1;
                }
                if ((l == 20)||(l == 21)){
                        if ((j != 8)&&(j != 9)){
                            cout << "�� ����� � ���� ���" << endl;
                            cout << "�� ������������� � �������������� (����� ����� �� ��������������)" << endl;
                            hero1[j].hp = hero1[j].hpm;
                            j = 8;
                            hero1[j].pred = 3;
                        }
                        else if ((j == 8)||(j == 9)){
                            cout << "�� ����� � ���� ���" << endl;
                            cout << "�� ������������� � ������������� ������ (����� ����� �� ������������� ������)" << endl;
                            hero1[j].hp = hero1[j].hpm;
                            j = 9;
                             hero1[j].pred = 2;
                        }
                }
                if (l == 22){
                    cout << "�� ����� � ���� ����" << endl;
                    cout << "�� ������������� � �������� � ����� �������� (����� ����� �� �������� � ����� ��������)" << endl;
                    j = 10;
                    hero1[j].hp = hero1[j].hpm;
                    hero1[j].pred = 0;
                }
                if (l == 23){
                    cout << "�� ����� ������� � ���� � ������� �" << endl;
                    cout << "��� ��������: \"������� ��� ����� ������������? ������� ��� ����� ������������?\"" << endl;
                }
                if (l == 39){
                    cout << "�� ��������� � �������� � ��������� ������ ���:" << endl;
                    getline(cin, kodv);
                    if (kod == atoi(kodv.c_str())){
                        cout << "�� ������� ���������� ���, � �������� �����������" << endl;
                        if (zvyk ==1) Beep(800, 500);
                        cout << "� ��� �� �������� ��������� �������� � ��������� ��� ���� (1 �� ���� ��������������� � ������ ��������)" << endl;
                        hero1[j].hpm++;
                        hero1[j].hp = hero1[j].hpm;
                        hero1[j].atc1++;
                        hero1[j].atc12++;
                        hero1[j].atc2++;
                        hero1[j].atc22++;
                        hero1[j].heal++;
                        hero1[j].heal2++;

                    }
                    else{
                        cout << "�� ������� ������������ ���, � �������� �� �����������" << endl;
                        if (zvyk ==1) Beep(100, 500);
                        cout << "����������, �� ���������� � � ���� ������" << endl;
                    }
                    kod = (rand()%(100000 - 10000)) + 10000;
                }
                if (l == 40){
                    cout << "�� ����� ������� � ���� � ������� �" << endl;
                    cout << "��� ��������: \"" << kod <<"\"" << endl;
                    cout << "����... ��� �� ��� ����� �������" << endl;
                }
            hero1[j].hp = hero1[j].hp + obj1[l].hp;
            hero1[j].hpm = hero1[j].hpm + obj1[l].hpm;
            hero1[j].atc1 = hero1[j].atc1 + obj1[l].atc1;
            hero1[j].atc12 = hero1[j].atc12 + obj1[l].atc12;
            hero1[j].atc2 = hero1[j].atc2 + obj1[l].atc2;
            hero1[j].atc22 = hero1[j].atc22 + obj1[l].atc22;
            hero1[j].heal = hero1[j].heal + obj1[l].heal;
            hero1[j].heal2 = hero1[j].heal2 + obj1[l].heal2;
            hero1[j].exp = hero1[j].exp + obj1[l].exp;
            if (l == 8){
                    hero1[j].atc1 = obj1[l].atc1;
                    hero1[j].atc12 = obj1[l].atc12;
                    hero1[j].atc2 = obj1[l].atc2;
                    hero1[j].atc22 = obj1[l].atc22;
                }
            if (l == 9){
                    hero1[j].atc1 = obj1[l].atc1;
                    hero1[j].atc12 = obj1[l].atc12;
                    hero1[j].atc2 = obj1[l].atc2;
                    hero1[j].atc22 = obj1[l].atc22;
                }
            if (hero1[j].hp > hero1[j].hpm) hero1[j].hp = hero1[j].hpm;
            if (hero1[j].hp <= 0) {
                    hero1[j].hp = 0;
                    goto end1;
            }
        }
        else if (re == "2"){
                if (zvyk == 1) Beep(300,100);
            if ((l == 0)||(l == 1)){
                    cout << "�� ���������� ���������� ������� ����������" << endl;
            }
            if ((l == 2)||(l == 3)||(l == 17)||(l == 4)){
                    cout << "�� ��������� ���� �������" << endl;
            }
            if (l == 5){
                    cout << "�� ���������� ���������� ������� ����������" << endl;
            }
            if ((l == 6)||(l == 7)){
                    cout << "�� ��������� ���� ��������" << endl;
            }
            if ((l == 8)||(l == 9)){
                    cout << "�� ��������� ���� ������" << endl;
            }
            if ((l == 10)||(l == 11)){
                    cout << "�� �� �������� ����� � ���� ������" << endl;
            }
            if ((l == 12)||(l == 13)){
                    cout << "�� �� ������������ � ������� � ���� ������" << endl;
            }
            if ((l == 14)||(l == 15)||(l == 18)||(l == 19)){
                    cout << "�� �� ����� ��������� � ���� ������" << endl;
            }
            if (l == 16){
                    cout << "�� �� �������� ����� � ���� ������" << endl;
            }
            if ((l == 20)||(l == 21)){
                    cout << "�� �� �������� ��� � ���� ������" << endl;
            }
            if (l == 22){
                    cout << "�� �� �������� ���� � ���� ������" << endl;
            }
            if ((l == 40)||(l == 23)){
                    cout << "�� ��������� ���� ������� � ���� ������" << endl;
            }
            if (l == 39){
                    cout << "�� �� �������� �������� � ���� ������" << endl;
            }
        }
    }
    Sleep(1000);
    cout << " |------------------------------------------------------------------------------------------------------------------------------|" << endl;
    }
    }
    else if (reg == 1){
        i = (rand()%(115 - 100)) + 100;
        if ((k == 11)||(k == 21)||(k == 31)||(k == 41)||(k == 51)||(k == 61)||(k == 71)||(k == 81)||(k == 91)){
                if (j != 20){
            cout << "�� �������� 1 ���� �����������!" << endl;
            hero1[j].pred++;
                }
        }
        if (k%30==0){
        cout << "��� ������ �������� ���� (1 �� ���� ���������������)" << endl;
        if (zvyk ==1){
            Beep(700, 100);
            Beep(800, 100);
        }
        cout << " |------------------------------------------------------------------------------------------------------------------------------|" << endl;
        for (chet = 100; chet <= 114; chet++){
            enemy1[chet].hp++;
            enemy1[chet].hpm++;
            enemy1[chet].atc1++;
            enemy1[chet].atc12++;
            enemy1[chet].atc2++;
            enemy1[chet].atc22++;
        }
    }
            l = (rand()%(81 - 0)) + 0;
    if ((l == 12)||(l == 13)||(l == 23)||(l == 29)||(l == 30)||(l == 38)||(l == 39)||(l == 40)){
        re = '0';
        cout << "�� �������� � ������� ������� " << obj1[l].name << endl;
        if (zvyk ==1){
            Beep(400, 200);
            Beep(600, 300);
            Beep(800, 800);
        }
        cout << " |------------------------------------------------------------------------------------------------------------------------------|" << endl;
        cout << "�� ������ ��� ������������?" << endl;
        while ((re != "1")&&(re != "2")){
        cout << "1 - ��" << endl;
        cout << "2 - ���" << endl;
        getline(cin, re);
        if (re == "1"){
                if (zvyk == 1) Beep(300,100);
                if (l == 12){
                    cout << "�� ����� � ���� ������" << endl;
                    cout << "�� �������������� ���... ";
                    if ((k != 10)&&(k != 20)&&(k != 30)&&(k != 40)&&(k != 50)&&(k != 60)&&(k != 70)&&(k != 80)&&(k != 90)&&(k != 100)&&(k != 101)){
                        i = 87;
                        cout << "� ������ ������� �������� ������, � �� ���� ������� ��������!";
                    }
                    else cout << "� ������ �� ����������";
                    cout << endl;
                }
                if (l == 13){
                    cout << "�� ����� � ���� ������" << endl;
                    cout << "�� �������������� ���... �� ��������� ��� ������ (9 � �����)" << endl;
                }
                if (l == 23){
                    cout << "�� ����� ������� � ���� � ������� �" << endl;
                    cout << "��� ��������: \"psin(a)\"" << endl;
                }
                if (l == 29){
                    cout << "�� ����� ������� � ���� � ������� �" << endl;
                    cout << "��� ��������: \"���� ������� ��� �����!\"" << endl;
                }
                if (l == 30){
                    cout << "�� ����� ������� � ���� � ������� �" << endl;
                    cout << "��� ��������: \"�����, ��� ��� ���? ���, ��� :)\"" << endl;
                }
                if (l == 38){
                    cout << "�� ����� ������� � ���� � ������� �" << endl;
                    cout << "��� ��������: \"������ �� ������� ������...\"" << endl;
                }
                if (l == 39){
                    cout << "�� ��������� � �������� � ��������� ������ ���:" << endl;
                    getline(cin, kodv);
                    if (kod == atoi(kodv.c_str())){
                        cout << "�� ������� ���������� ���, � �������� �����������" << endl;
                        if (zvyk ==1) Beep(800, 500);
                        cout << "� ��� �� �������� ��������� �������� � ��������� ��� ���� (1 �� ���� ��������������� � ������ ��������)" << endl;
                        hero1[j].hpm++;
                        hero1[j].hp = hero1[j].hpm;
                        hero1[j].atc1++;
                        hero1[j].atc12++;
                        hero1[j].atc2++;
                        hero1[j].atc22++;
                        hero1[j].heal++;
                        hero1[j].heal2++;

                    }
                    else{
                        cout << "�� ������� ������������ ���, � �������� �� �����������" << endl;
                        if (zvyk ==1) Beep(100, 500);
                        cout << "����������, �� ���������� � � ���� ������" << endl;
                    }
                    kod = (rand()%(100000 - 10000)) + 10000;
                }
                if (l == 40){
                    cout << "�� ����� ������� � ���� � ������� �" << endl;
                    cout << "��� ��������: \"" << kod <<"\"" << endl;
                    cout << "����... ��� �� ��� ����� �������" << endl;
                }
            hero1[j].hp = hero1[j].hp + obj1[l].hp;
            hero1[j].hpm = hero1[j].hpm + obj1[l].hpm;
            hero1[j].atc1 = hero1[j].atc1 + obj1[l].atc1;
            hero1[j].atc12 = hero1[j].atc12 + obj1[l].atc12;
            hero1[j].atc2 = hero1[j].atc2 + obj1[l].atc2;
            hero1[j].atc22 = hero1[j].atc22 + obj1[l].atc22;
            hero1[j].heal = hero1[j].heal + obj1[l].heal;
            hero1[j].heal2 = hero1[j].heal2 + obj1[l].heal2;
            hero1[j].exp = hero1[j].exp + obj1[l].exp;
            if (hero1[j].hp > hero1[j].hpm) hero1[j].hp = hero1[j].hpm;
            if (hero1[j].hp <= 0) {
                    hero1[j].hp = 0;
                    goto end1;
            }
        }
        else if (re == "2"){
                if (zvyk == 1) Beep(300,100);
            if ((l == 12)||(l == 13)){
                    cout << "�� �� ������������ � ������� � ���� ������" << endl;
            }
            if ((l == 23)||(l == 29)||(l == 30)||(l == 38)||(l == 40)){
                    cout << "�� ��������� ���� ������� � ���� ������" << endl;
            }
            if (l == 39){
                    cout << "�� �� �������� �������� � ���� ������" << endl;
            }
        }
    }
    Sleep(1000);
    cout << " |------------------------------------------------------------------------------------------------------------------------------|" << endl;
    }
    }
    else if (reg == 2){
        i = (rand()%(161 - 150)) + 150;
        if ((k == 11)||(k == 21)||(k == 31)||(k == 41)||(k == 51)||(k == 61)||(k == 71)||(k == 81)||(k == 91)){
            cout << "�� �������� 1 ���� �����������!" << endl;
            hero1[j].pred++;
        }
        if (k%10==0){
        cout << "��� �������� ��������� ���� (1 �� ���� ���������������)" << endl;
        if (zvyk ==1){
            Beep(700, 100);
            Beep(800, 100);
        }
        cout << " |------------------------------------------------------------------------------------------------------------------------------|" << endl;
        for (chet = 150; chet <= 160; chet++){
            enemy1[chet].hp++;
            enemy1[chet].hpm++;
            enemy1[chet].atc1++;
            enemy1[chet].atc12++;
            enemy1[chet].atc2++;
            enemy1[chet].atc22++;
        }
    }
    }
    else if (reg == 3){
        i = (rand()%(55 - 0)) + 0;
    if ((k == 15)||(k == 30)||(k == 45)||(k == 60)||(k == 75)||(k == 90)){
        cout << "��� �������� ���������� ������� (1 �� ���� ���������������)" << endl;
        if (zvyk ==1){
            Beep(700, 100);
            Beep(800, 100);
        }
        cout << " |------------------------------------------------------------------------------------------------------------------------------|" << endl;
        for (chet = 0; chet <= 54; chet++){
                if ((chet != 7)&&(chet != 17)&&(chet != 33)){
            enemy1[chet].hp++;
            enemy1[chet].hpm++;
            enemy1[chet].atc1++;
            enemy1[chet].atc12++;
            enemy1[chet].atc2++;
            enemy1[chet].atc22++;
                }
        }
    }
    if ((k < 20)&&((i == 12)||(i == 18)||(i == 16)||(i == 30)||(i == 45)||(i == 26)||(i == 27)||(i == 28)||(i == 31)||(i == 32)||(i == 5)||(i == 34)||(i == 36)||(i == 37)||(i == 38))){
        i = (rand()%(54 - 0)) + 0;
    }
    if ((k < 20)&&(enemy1[i].hpm >= 10)){
        i = (rand()%(54 - 0)) + 0;
    }
    if ((k < 20)&&((i == 12)||(i == 18)||(i == 16)||(i == 30)||(i == 45)||(i == 26)||(i == 27)||(i == 28)||(i == 31)||(i == 32)||(i == 5)||(i == 34)||(i == 36)||(i == 37)||(i == 38))){
        i = (rand()%(54 - 0)) + 0;
    }
     if ((k < 20)&&(enemy1[i].hpm >= 10)){
        i = (rand()%(54 - 0)) + 0;
    }
    if ((k < 20)&&((i == 12)||(i == 18)||(i == 16)||(i == 30)||(i == 45)||(i == 26)||(i == 27)||(i == 28)||(i == 31)||(i == 32)||(i == 5)||(i == 34)||(i == 36)||(i == 37)||(i == 38))){
        i = (rand()%(54 - 0)) + 0;
    }
    if ((k < 20)&&(enemy1[i].hpm >= 10)){
        i = (rand()%(54 - 0)) + 0;
    }
    if (k < 40){
        if ((i == 24)||(i == 27)||(i == 37)||(i == 50)||(i == 52)) i++;
    }
    if (k == 10) i = 99;
    if (k == 20) i = 98;
    if (k == 30) i = 97;
    if (k == 40) i = 96;
    if (k == 50) i = 95;
    if (k == 60) i = 94;
    if (k == 70) i = 93;
    if (k == 80) i = 92;
    if (k == 90) i = 91;
    if (k == 100) i = 411;
    if (k == 101) i = 412;
    if ((estrel == 16)&&(i != 99)&&(i != 98)&&(i != 97)&&(i != 96)&&(i != 95)&&(i != 94)&&(i != 93)&&(i != 92)&&(i != 91)&&(i != 411)&&(i != 412)){
        i = 413;
        enemy1[413].hp ++;
        enemy1[413].hpm ++;
        enemy1[413].atc12 ++;
        enemy1[413].atc22 ++;
    }
    if ((k == 11)||(k == 21)||(k == 31)||(k == 41)||(k == 51)||(k == 61)||(k == 71)||(k == 81)||(k == 91)){
            cout << "�� �������� 1 ���� �����������!" << endl;
            hero1[j].pred++;
    }
        l4 = (rand()%(252 - 1)) + 1;
        if (k == 1) l4 = 1;
        if (k == 100) l4 = 1;
    if ((l4 >= 1)&&(l4 <= 24)){
        if (k == 100) l4 = 25;
        re = '0';
        cout << "�� �������� � ������� ������ " << wea1[l4].name << endl;
            if (zvyk ==1){
                Beep(700, 200);
                Beep(800, 300);
            }
        cout << " |------------------------------------------------------------------------------------------------------------------------------|" << endl;
        if (w == 0) cout << "�� ������ ����� ��� ������?" << endl;
        else cout << "�� ������ �������� ���� ������ �� ���?" << endl;
        while ((re != "1")&&(re != "2")){
        cout << "1 - ��" << endl;
        cout << "2 - ���" << endl;
        getline(cin, re);
        if (re == "1"){
                if (zvyk == 1) Beep(300,100);
                    if (w != 0) cout << "�� ���������� ���� ������ � �������" << endl;
                    cout << "�� ��������� ��� ������" << endl;
                    hero1[j].atc1 = hero1[j].atc1 - wea1[w].atc1;
                    hero1[j].atc12 = hero1[j].atc12 - wea1[w].atc12;
                    hero1[j].atc2 = hero1[j].atc2 - wea1[w].atc2;
                    hero1[j].atc22 = hero1[j].atc22 - wea1[w].atc22;
                    w = l4;
                    hero1[j].atc1 = hero1[j].atc1 + wea1[w].atc1;
                    hero1[j].atc12 = hero1[j].atc12 + wea1[w].atc12;
                    hero1[j].atc2 = hero1[j].atc2 + wea1[w].atc2;
                    hero1[j].atc22 = hero1[j].atc22 + wea1[w].atc22;
        }
        else if (re == "2"){
            if (zvyk == 1) Beep(300,100);
                    cout << "�� �� ����� ��� ������ � ���� ������" << endl;
        }
    }
    Sleep(1000);
    cout << " |------------------------------------------------------------------------------------------------------------------------------|" << endl;
    }
    l3 = (rand()%(402 - 1)) + 1;
    if ((l3 >= 1)&&(l3 <= 16)){
        re = '0';
        cout << "�� �������� � ������� �������� " << rel1[l3].name << endl;
        if (zvyk ==1){
            Beep(100, 500);
            Beep(150, 600);
            Beep(200, 700);
        }
        cout << " |------------------------------------------------------------------------------------------------------------------------------|" << endl;
        if (estrel == 0) cout << "�� ������ � �����?" << endl;
        else cout << "�� ������ �������� ���� �������� �� ���?" << endl;
        while ((re != "1")&&(re != "2")){
        cout << "1 - ��" << endl;
        cout << "2 - ���" << endl;
        getline(cin, re);
        if (re == "1"){
                if (zvyk == 1) Beep(300,100);
                if (estrel != 0) cout << "�� ���������� ���� �������� � �������" << endl;
                    cout << "�� ��������� ��� ��������" << endl;
                    estrel = l3;
                if (estrel == 16){
                    enemy1[413].hp = 1;
                    enemy1[413].hpm = 1;
                    enemy1[413].atc1 = 0;
                    enemy1[413].atc12 = 0;
                    enemy1[413].atc2 = 0;
                    enemy1[413].atc22 = 0;
                }
        }
        else if (re == "2"){
            if (zvyk == 1) Beep(300,100);
                    cout << "�� �� ����� ��� �������� � ���� ������" << endl;
        }
    }
    Sleep(1000);
    cout << " |------------------------------------------------------------------------------------------------------------------------------|" << endl;
    }
        l2 = (rand()%(252 - 1)) + 1;
    if ((l2 >= 1)&&(l2 <= 26)){
        re = '0';
        cout << "�� �������� � ������� �������, ������� ����� ����� � ����� " << pred1[l2].name << endl;
        if (zvyk ==1){
            Beep(400, 200);
            Beep(600, 300);
            Beep(800, 500);
            Beep(1000, 800);
        }
        cout << " |------------------------------------------------------------------------------------------------------------------------------|" << endl;
        if (estpred == 0) cout << "�� ������ ��� �����?" << endl;
        else cout << "�� ������ �������� ��� ������� �� ����?" << endl;
        while ((re != "1")&&(re != "2")){
        cout << "1 - ��" << endl;
        cout << "2 - ���" << endl;
        getline(cin, re);
        if (re == "1"){
                if (zvyk == 1) Beep(300,100);
                if (estpred != 0) cout << "�� ���������� ��� ������� � �������" << endl;
                    cout << "�� ��������� ���� �������" << endl;
                    estpred = l2;
        }
        else if (re == "2"){
            if (zvyk == 1) Beep(300,100);
                    cout << "�� �� ����� ���� ������� � ���� ������" << endl;
        }
    }
    Sleep(1000);
    cout << " |------------------------------------------------------------------------------------------------------------------------------|" << endl;
    }
    l = (rand()%(151 - 0)) + 0;
    if ((l == 0)||(l == 1)||(l == 2)||(l == 3)||(l == 4)||(l == 5)||(l == 6)||(l == 7)||(l == 8)||(l == 9)||(l == 10)||(l == 11)||(l == 12)||(l == 13)||(l == 14)||(l == 15)||(l == 16)||(l == 17)||(l == 18)||(l == 19)||(l == 23)||(l == 39)||(l == 40)){
        re = '0';
        cout << "�� �������� � ������� ������� " << obj1[l].name << endl;
        if (zvyk ==1){
            Beep(400, 200);
            Beep(600, 300);
            Beep(800, 800);
        }
        cout << " |------------------------------------------------------------------------------------------------------------------------------|" << endl;
        cout << "�� ������ ��� ������������?" << endl;
        while ((re != "1")&&(re != "2")){
        cout << "1 - ��" << endl;
        cout << "2 - ���" << endl;
        getline(cin, re);
        if (re == "1"){
                if (zvyk == 1) Beep(300,100);
                if (l == 0){
                    cout << "�� ��������� ���������� �������" << endl;
                    cout << "�� ���������� ������ �������� (1 � ������������� �������� � 1 � ��������)" << endl;
                }
                if (l == 1){
                    cout << "�� ��������� ���������� �������" << endl;
                    cout << "�� ���������� ���� �� ����� ���� (-1 � ������������� �������� � -2 � ��������)" << endl;
                }
                if (l == 2){
                    cout << "�� ���������� ������" << endl;
                    cout << "�� �������� � �� ��������� ��� ������� ������ (1 �� ���� ������ ������� ������)" << endl;
                }
                if ((l == 3)||(l == 17)){
                    cout << "�� ���������� ������" << endl;
                    cout << "���-�� ��... �� �����������...";
                    if ((k != 10)&&(k != 20)&&(k != 30)&&(k != 40)&&(k != 50)&&(k != 60)&&(k != 70)&&(k != 80)&&(k != 90)&&(k != 100)&&(k != 101)){
                        i = 88;
                        cout << " ��� ���?!";
                    }
                    cout << endl;
                }
                if (l == 4){
                    cout << "�� ���������� ������" << endl;
                    cout << "�� �������� � �� ��������� ��� ������� ������ (1 �� ���� ������ ������� ������)" << endl;
                }
                if (l == 5){
                    cout << "�� ��������� ���������� �������" << endl;
                    cout << "�� ���������� ������ ���� �� ����� ���� (-5 � ��������)" << endl;
                }
                if (l == 6){
                    cout << "�� ����� ����� � ������� ��������" << endl;
                    cout << "��� �����������, � �������� �������� (-1 �� ���� ��������������� ���������)" << endl;
                }
                if (l == 7){
                    cout << "�� ����� ����� � ������� ��������" << endl;
                    cout << "�� ���������� ������ ��������, � �������� �������� (5 � ��������)" << endl;
                }
                if (l == 8){
                    cout << "�� ����� ����� � ����" << endl;
                    cout << "��, �� �����������, ������������� �� �� ���� (����� 1-2, 2-3)" << endl;
                }
                if (l == 9){
                    cout << "�� ����� ����� � ����" << endl;
                    cout << "�� � �������� ������������� �� �� ���� (����� 1-5, 0-7)" << endl;
                }
                if (l == 10){
                    cout << "�� ����� ����� � ����" << endl;
                    cout << "� ��� ����������� ����������� (1 �� ���� ������� �������)" << endl;
                }
                if (l == 11){
                    cout << "�� ����� ����� � ����" << endl;
                    cout << "� ��� ����������� ����������� ����������� (-1 �� ���� ������� �������)" << endl;
                }
                if (l == 12){
                    cout << "�� ����� � ���� ������" << endl;
                    cout << "�� �������������� ���... ";
                    if ((k != 10)&&(k != 20)&&(k != 30)&&(k != 40)&&(k != 50)&&(k != 60)&&(k != 70)&&(k != 80)&&(k != 90)&&(k != 100)&&(k != 101)){
                        i = 87;
                        cout << "� ������ ������� �������� ������, � �� ���� ������� ��������!";
                    }
                    else cout << "� ������ �� ����������";
                    cout << endl;
                }
                if (l == 13){
                    cout << "�� ����� � ���� ������" << endl;
                    cout << "�� �������������� ���... �� ��������� ��� ������ (9 � �����)" << endl;
                }
                if ((l == 14)||(l == 15)||(l == 18)||(l == 19)){
                    cout << "�� ����� � ���� ���������" << endl;
                    bol = 0;
                    cout << "�� ��������� ��� (��������� �� �������)" << endl;
                }
                if (l == 16){
                    cout << "�� ����� � ���� �����" << endl;
                    cout << "�� ��������� ���������� (������)" << endl;
                    hero1[j].hp = 0;
                    hero1[j].hpm = 0;
                    Sleep(1000);
                    cout << " |------------------------------------------------------------------------------------------------------------------------------|" << endl;
                    goto end1;
                }
                if (l == 23){
                    cout << "�� ����� ������� � ���� � ������� �" << endl;
                    cout << "��� ��������: \"������� ��� ����� ������������? ������� ��� ����� ������������?\"" << endl;
                }
                if (l == 39){
                    cout << "�� ��������� � �������� � ��������� ������ ���:" << endl;
                    getline(cin, kodv);
                    if (kod == atoi(kodv.c_str())){
                        cout << "�� ������� ���������� ���, � �������� �����������" << endl;
                        if (zvyk ==1) Beep(800, 500);
                        cout << "� ��� �� �������� ��������� �������� � ��������� ��� ���� (1 �� ���� ��������������� � ������ ��������)" << endl;
                        hero1[j].hpm++;
                        hero1[j].hp = hero1[j].hpm;
                        hero1[j].atc1++;
                        hero1[j].atc12++;
                        hero1[j].atc2++;
                        hero1[j].atc22++;
                        hero1[j].heal++;
                        hero1[j].heal2++;

                    }
                    else{
                        cout << "�� ������� ������������ ���, � �������� �� �����������" << endl;
                        if (zvyk ==1) Beep(100, 500);
                        cout << "����������, �� ���������� � � ���� ������" << endl;
                    }
                    kod = (rand()%(100000 - 10000)) + 10000;
                }
                if (l == 40){
                    cout << "�� ����� ������� � ���� � ������� �" << endl;
                    cout << "��� ��������: \"" << kod <<"\"" << endl;
                    cout << "����... ��� �� ��� ����� �������" << endl;
                }
            hero1[j].hp = hero1[j].hp + obj1[l].hp;
            hero1[j].hpm = hero1[j].hpm + obj1[l].hpm;
            hero1[j].atc1 = hero1[j].atc1 + obj1[l].atc1;
            hero1[j].atc12 = hero1[j].atc12 + obj1[l].atc12;
            hero1[j].atc2 = hero1[j].atc2 + obj1[l].atc2;
            hero1[j].atc22 = hero1[j].atc22 + obj1[l].atc22;
            hero1[j].heal = hero1[j].heal + obj1[l].heal;
            hero1[j].heal2 = hero1[j].heal2 + obj1[l].heal2;
            hero1[j].exp = hero1[j].exp + obj1[l].exp;
            if (l == 8){
                    hero1[j].atc1 = obj1[l].atc1;
                    hero1[j].atc12 = obj1[l].atc12;
                    hero1[j].atc2 = obj1[l].atc2;
                    hero1[j].atc22 = obj1[l].atc22;
                }
            if (l == 9){
                    hero1[j].atc1 = obj1[l].atc1;
                    hero1[j].atc12 = obj1[l].atc12;
                    hero1[j].atc2 = obj1[l].atc2;
                    hero1[j].atc22 = obj1[l].atc22;
                }
            if (hero1[j].hp > hero1[j].hpm) hero1[j].hp = hero1[j].hpm;
            if (hero1[j].hp <= 0) {
                    hero1[j].hp = 0;
                    goto end1;
            }
        }
        else if (re == "2"){
                if (zvyk == 1) Beep(300,100);
            if ((l == 0)||(l == 1)){
                    cout << "�� ���������� ���������� ������� ����������" << endl;
            }
            if ((l == 2)||(l == 3)||(l == 17)||(l == 4)){
                    cout << "�� ��������� ���� �������" << endl;
            }
            if (l == 5){
                    cout << "�� ���������� ���������� ������� ����������" << endl;
            }
            if ((l == 6)||(l == 7)){
                    cout << "�� ��������� ���� ��������" << endl;
            }
            if ((l == 8)||(l == 9)){
                    cout << "�� ��������� ���� ������" << endl;
            }
            if ((l == 10)||(l == 11)){
                    cout << "�� �� �������� ����� � ���� ������" << endl;
            }
            if ((l == 12)||(l == 13)){
                    cout << "�� �� ������������ � ������� � ���� ������" << endl;
            }
            if ((l == 14)||(l == 15)||(l == 18)||(l == 19)){
                    cout << "�� �� ����� ��������� � ���� ������" << endl;
            }
            if (l == 16){
                    cout << "�� �� �������� ����� � ���� ������" << endl;
            }
            if ((l == 20)||(l == 21)){
                    cout << "�� �� �������� ��� � ���� ������" << endl;
            }
            if (l == 22){
                    cout << "�� �� �������� ���� � ���� ������" << endl;
            }
            if ((l == 40)||(l == 23)){
                    cout << "�� ��������� ���� ������� � ���� ������" << endl;
            }
            if (l == 39){
                    cout << "�� �� �������� �������� � ���� ������" << endl;
            }
        }
    }
    Sleep(1000);
    cout << " |------------------------------------------------------------------------------------------------------------------------------|" << endl;
    }
    }
    else if (reg == 4){
        if (k < 10) i = (rand()%(310 - 300)) + 300;
        else if (k < 20) i = (rand()%(320 - 310)) + 310;
        else if (k < 30) i = (rand()%(330 - 320)) + 320;
        else if (k < 40) i = (rand()%(340 - 330)) + 330;
        else if (k < 50) i = (rand()%(350 - 340)) + 340;
        else if (k < 60) i = (rand()%(360 - 350)) + 350;
        else if (k < 70) i = (rand()%(370 - 360)) + 360;
        else if (k < 80) i = (rand()%(380 - 370)) + 370;
        else if (k < 90) i = (rand()%(390 - 380)) + 380;
        else if (k < 100) i = (rand()%(400 - 390)) + 390;
        if (k == 10) i = 410;
        if (k == 20) i = 409;
        if (k == 30) i = 408;
        if (k == 40) i = 407;
        if (k == 50) i = 406;
        if (k == 60) i = 405;
        if (k == 70) i = 404;
        if (k == 80) i = 403;
        if (k == 90) i = 402;
        if (k == 100) i = 401;
        if (k == 101) i = 400;
        if ((estrel == 16)&&(i != 99)&&(i != 98)&&(i != 97)&&(i != 96)&&(i != 95)&&(i != 94)&&(i != 93)&&(i != 92)&&(i != 91)&&(i != 411)&&(i != 412)){
            i = 413;
            enemy1[413].hp ++;
            enemy1[413].hpm ++;
            enemy1[413].atc12 ++;
            enemy1[413].atc22 ++;
        }
        if ((k == 11)||(k == 21)||(k == 31)||(k == 41)||(k == 51)||(k == 61)||(k == 71)||(k == 81)||(k == 91)){
                if (j == 25){
                    cout << "�� �������� 2 ���� �����������!" << endl;
                    hero1[j].pred++;
                    hero1[j].pred++;
                    if (zvyk ==1){
                        Beep(700, 100);
                        Beep(800, 100);
                    }
                }
                else {
                    cout << "�� �������� 1 ���� �����������!" << endl;
                    hero1[j].pred++;
                    if (zvyk ==1){
                        Beep(700, 100);
                        Beep(800, 100);
                    }
                }
        }
        l3 = (rand()%(352 - 1)) + 1;
    if ((l3 >= 1)&&(l3 <= 16)){
        re = '0';
        cout << "�� �������� � ������� �������� " << rel1[l3].name << endl;
        if (zvyk ==1){
            Beep(100, 500);
            Beep(150, 600);
            Beep(200, 700);
        }
        cout << " |------------------------------------------------------------------------------------------------------------------------------|" << endl;
        if (estrel == 0) cout << "�� ������ � �����?" << endl;
        else cout << "�� ������ �������� ���� �������� �� ���?" << endl;
        while ((re != "1")&&(re != "2")){
        cout << "1 - ��" << endl;
        cout << "2 - ���" << endl;
        getline(cin, re);
        if (re == "1"){
                if (zvyk == 1) Beep(300,100);
                if (estrel != 0) cout << "�� ���������� ���� �������� � �������" << endl;
                    cout << "�� ��������� ��� ��������" << endl;
                    estrel = l3;
                    if (estrel == 16){
                        enemy1[413].hp = 1;
                        enemy1[413].hpm = 1;
                        enemy1[413].atc1 = 0;
                        enemy1[413].atc12 = 0;
                        enemy1[413].atc2 = 0;
                        enemy1[413].atc22 = 0;
                    }
        }
        else if (re == "2"){
            if (zvyk == 1) Beep(300,100);
                    cout << "�� �� ����� ��� �������� � ���� ������" << endl;
        }
    }
    Sleep(1000);
    cout << " |------------------------------------------------------------------------------------------------------------------------------|" << endl;
    }
        l2 = (rand()%(252 - 1)) + 1;
    if ((l2 >= 1)&&(l2 <= 26)){
        re = '0';
        cout << "�� �������� � ������� �������, ������� ����� ����� � ����� " << pred1[l2].name << endl;
        if (zvyk ==1){
            Beep(400, 200);
            Beep(600, 300);
            Beep(800, 500);
            Beep(1000, 800);
        }
        cout << " |------------------------------------------------------------------------------------------------------------------------------|" << endl;
        if (estpred == 0) cout << "�� ������ ��� �����?" << endl;
        else cout << "�� ������ �������� ��� ������� �� ����?" << endl;
        while ((re != "1")&&(re != "2")){
        cout << "1 - ��" << endl;
        cout << "2 - ���" << endl;
        getline(cin, re);
        if (re == "1"){
                if (zvyk == 1) Beep(300,100);
                if (estpred != 0) cout << "�� ���������� ��� ������� � �������" << endl;
                    cout << "�� ��������� ���� �������" << endl;
                    estpred = l2;
        }
        else if (re == "2"){
            if (zvyk == 1) Beep(300,100);
                    cout << "�� �� ����� ���� ������� � ���� ������" << endl;
        }
    }
    Sleep(1000);
    cout << " |------------------------------------------------------------------------------------------------------------------------------|" << endl;
    }
        l = (rand()%(81 - 0)) + 0;
    if ((l == 12)||(l == 13)||(l == 23)||(l == 26)||(l == 27)||(l == 28)||(l == 29)||(l == 30)||(l == 31)||(l == 32)||(l == 33)||(l == 34)||(l == 35)||(l == 36)||(l == 37)||(l == 38)||(l == 39)||(l == 40)||(l == 41)||(l == 42)){
        re = '0';
        cout << "�� �������� � ������� ������� " << obj1[l].name << endl;
        if (zvyk ==1){
            Beep(400, 200);
            Beep(600, 300);
            Beep(800, 800);
        }
        cout << " |------------------------------------------------------------------------------------------------------------------------------|" << endl;
        cout << "�� ������ ��� ������������?" << endl;
        while ((re != "1")&&(re != "2")){
        cout << "1 - ��" << endl;
        cout << "2 - ���" << endl;
        getline(cin, re);
        if (re == "1"){
                if (zvyk == 1) Beep(300,100);
                if (l == 26){
                    cout << "�� ��������� ���������� �����" << endl;
                    cout << "�� ���������� ������ ���, �� ��������� �������� (-3 � ������������� ��������, -1 � �������� � 1 �� ���� ������ ������)" << endl;
                }
                if (l == 12){
                    cout << "�� ����� � ���� ������" << endl;
                    cout << "�� �������������� ���... ";
                    if ((k != 10)&&(k != 20)&&(k != 30)&&(k != 40)&&(k != 50)&&(k != 60)&&(k != 70)&&(k != 80)&&(k != 90)&&(k != 100)&&(k != 101)){
                        i = 87;
                        cout << "� ������ ������� �������� ������, � �� ���� ������� ��������!";
                    }
                    else cout << "� ������ �� ����������";
                    cout << endl;
                }
                if (l == 13){
                    cout << "�� ����� � ���� ������" << endl;
                    cout << "�� �������������� ���... �� ��������� ��� ������ (9 � �����)" << endl;
                }
                if (l == 27){
                    cout << "�� ��������������� � �������" << endl;
                    cout << "�� ���������� ����������� (-1 � ������������� �������� � �� ���� ������)" << endl;
                }
                if (l == 28){
                    cout << "�� ��������������� � �������" << endl;
                    cout << "�� ���������� ������ �������� (1 � ������������� �������� � ������� �������)" << endl;
                }
                if (l == 29){
                    cout << "�� ����� ������� � ���� � ������� �" << endl;
                    cout << "��� ��������: \"���, ������, ������?\"" << endl;
                }
                if (l == 30){
                    cout << "�� ����� ������� � ���� � ������� �" << endl;
                    cout << "��� ��������: \"�����, ��� ����� ������, ������, � ������...\"" << endl;
                }
                if (l == 31){
                    cout << "�� ����� ��� � ����" << endl;
                    if (j == 22){
                      cout << "�� ���������� ��� � ���� �� ������ ��� ����� � ��������� ���� (1 � ������������� ��������)" << endl;
                      hero1[j].hpm++;
                    }
                    else cout << "�� �� ������, ��� ����� ������������ ���� ��� � ���������� ��� � �������" << endl;

                }
                if (l == 32){
                    cout << "�� ����� ��� � ����" << endl;
                    if (j == 22){
                      cout << "�� ���������� ��� � ���� �� ������ ��� ����� � ��������� ���� (1 � ������������ ������ �����)" << endl;
                      hero1[j].atc12++;
                    }
                    else cout << "�� �� ������, ��� ����� ������������ ���� ��� � ���������� ��� � �������" << endl;

                }
                if (l == 33){
                    cout << "�� ����� ��� � ����" << endl;
                    if (j == 22){
                      cout << "�� ���������� ��� � ���� �� ������ ��� ����� � ��������� ���� (1 � ������������ ������� �����)" << endl;
                      hero1[j].atc22++;
                    }
                    else cout << "�� �� ������, ��� ����� ������������ ���� ��� � ���������� ��� � �������" << endl;

                }
                if (l == 34){
                    cout << "�� ����� ��� � ����" << endl;
                    if (j == 22){
                      cout << "�� ���������� ��� � ���� �� ������ ��� ����� � ��������� ���� (1 � ������������� ��������������)" << endl;
                      hero1[j].heal2++;
                    }
                    else cout << "�� �� ������, ��� ����� ������������ ���� ��� � ���������� ��� � �������" << endl;

                }
                if (l == 35){
                    cout << "�� ����� ��� � ����" << endl;
                    if (j == 22){
                      cout << "�� ���������� ��� � ���� �� ������ ��� ����� � ��������� ���� (1 � ������������� ��������, ������ ��������)" << endl;
                      hero1[j].hpm++;
                      hero1[j].hp = hero1[j].hpm;
                    }
                    else cout << "�� �� ������, ��� ����� ������������ ���� ��� � ���������� ��� � �������" << endl;

                }
                if (l == 36){
                    cout << "�� ����� ��� � ����" << endl;
                    if (j == 22){
                      cout << "�� ���������� ��� � ���� �� ������ ��� ����� � ��� ������� (-10 � ������������� ��������)" << endl;
                      hero1[j].hpm = hero1[j].hpm - 10;
                      if (hero1[j].hp > hero1[j].hpm) hero1[j].hp = hero1[j].hpm;
                    }
                    else cout << "�� �� ������, ��� ����� ������������ ���� ��� � ���������� ��� � �������" << endl;
                }
                if (l == 37){
                    cout << "�� ����� ��� � ����" << endl;
                    if (j == 22){
                      cout << "�� ���������� ��� � ���� �� ������ ��� �����, � ���� ���� �������� �������� (��� ������� ����� 0)" << endl;
                      hero1[j].atc2 = 0;
                      hero1[j].atc22 = 0;
                    }
                    else cout << "�� �� ������, ��� ����� ������������ ���� ��� � ���������� ��� � �������" << endl;
                }
                if (l == 23){
                    cout << "�� ����� ������� � ���� � ������� �" << endl;
                    cout << "��� ��������: \"������� ��� ����� ������������? ������� ��� ����� ������������?\"" << endl;
                }
                if (l == 38){
                    cout << "�� ����� ������� � ���� � ������� �" << endl;
                    cout << "��� ��������: \"�� ��� ��� ������� ����?!\"" << endl;
                }
                if (l == 39){
                    cout << "�� ��������� � �������� � ��������� ������ ���:" << endl;
                    getline(cin, kodv);
                    if (kod == atoi(kodv.c_str())){
                        cout << "�� ������� ���������� ���, � �������� �����������" << endl;
                        if (zvyk ==1) Beep(800, 500);
                        cout << "� ��� �� �������� ��������� �������� � ��������� ��� ���� (1 �� ���� ��������������� � ������ ��������)" << endl;
                        hero1[j].hpm++;
                        hero1[j].hp = hero1[j].hpm;
                        hero1[j].atc1++;
                        hero1[j].atc12++;
                        hero1[j].atc2++;
                        hero1[j].atc22++;
                        hero1[j].heal++;
                        hero1[j].heal2++;

                    }
                    else{
                        cout << "�� ������� ������������ ���, � �������� �� �����������" << endl;
                        if (zvyk ==1) Beep(100, 500);
                        cout << "����������, �� ���������� � � ���� ������" << endl;
                    }
                    kod = (rand()%(100000 - 10000)) + 10000;
                }
                if (l == 40){
                    cout << "�� ����� ������� � ���� � ������� �" << endl;
                    cout << "��� ��������: \"" << kod <<"\"" << endl;
                    cout << "����... ��� �� ��� ����� �������" << endl;
                }
                if ((l == 41)||(l == 42)){
                    cout << "�� ����� ������ � ����" << endl;
                    if (j == 25){
                        cout << "�� ���������� � � ���� �� USB-�������� � ���������� ���������, ������� ���� � ��� (��������� ������)" << endl;
                cout << "��� ����� ��������� ��������� ";
                cout << "["; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "]"; Sleep(300);
                cout << " 100%" << endl;
                cout << "����� ��������" << endl;
                prog = (rand()%(15 - 0)) + 0;
                if (prog == 0){
                cout << "�������� ��������� \"�������������� �������� v 2.0\"" << endl;
                hero1[j].hp = hero1[j].hpm;
                if (hero1[j].hp > hero1[j].hpm) hero1[j].hp = hero1[j].hpm;
                cout << "��� ���������� ��������� ";
                cout << "["; Sleep(400);
                cout << "|"; Sleep(400);
                cout << "|"; Sleep(400);
                cout << "|"; Sleep(400);
                cout << "|"; Sleep(400);
                cout << "|"; Sleep(400);
                cout << "|"; Sleep(400);
                cout << "|"; Sleep(400);
                cout << "|"; Sleep(400);
                cout << "|"; Sleep(400);
                cout << "|"; Sleep(400);
                cout << "]"; Sleep(400);
                cout << " 100%" << endl;
                cout << "���������� ���������" << endl;
                cout << "�� ��������� ������������ ��������" << endl;
                }
                else if (prog == 1){
                cout << "�������� ��������� \"�������������� ��������\"" << endl;
                x = (rand()%(6 - 1)) + 1;
                hero1[j].hp = hero1[j].hpm;
                if (hero1[j].hp > hero1[j].hpm) hero1[j].hp = hero1[j].hpm;
                cout << "��� ���������� ��������� ";
                cout << "["; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "]"; Sleep(300);
                cout << " 100%" << endl;
                cout << "���������� ���������" << endl;
                cout << "�� ������������ " << x << " ��������" << endl;
                }
                else if (prog == 2){
                cout << "�������� ��������� \"��������� ��������\"" << endl;
                x = (rand()%(6 - 1)) + 1;
                hero1[j].hp = hero1[j].hp - x;
                if (hero1[j].hp < 0) hero1[j].hp = 0;
                cout << "��� ���������� ��������� ";
                cout << "["; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "]"; Sleep(300);
                cout << " 100%" << endl;
                cout << "���������� ���������" << endl;
                cout << "�� �������� ��� �������� �� " << x << " ������" << endl;
                }
                else if (prog == 3){
                cout << "�������� ��������� \"��������� ������������� ��������\"" << endl;
                x = (rand()%(3 - 1)) + 1;
                hero1[j].hpm = hero1[j].hpm - x;
                if (hero1[j].hpm < 0) hero1[j].hpm = 0;
                if (hero1[j].hp > hero1[j].hpm) hero1[j].hp = hero1[j].hpm;
                if (hero1[j].hp < 0) hero1[j].hp = 0;
                cout << "��� ���������� ��������� ";
                cout << "["; Sleep(400);
                cout << "|"; Sleep(400);
                cout << "|"; Sleep(400);
                cout << "|"; Sleep(400);
                cout << "|"; Sleep(400);
                cout << "|"; Sleep(400);
                cout << "|"; Sleep(400);
                cout << "|"; Sleep(400);
                cout << "|"; Sleep(400);
                cout << "|"; Sleep(400);
                cout << "|"; Sleep(400);
                cout << "]"; Sleep(400);
                cout << " 100%" << endl;
                cout << "���������� ���������" << endl;
                cout << "�� �������� ��� ������������ �������� �� " << x << " ������" << endl;
                }
                else if (prog == 4){
                cout << "�������� ��������� \"����������� �������\"" << endl;
                cout << "��� ���������� ��������� ";
                cout << "["; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "]"; Sleep(100);
                cout << " 100%" << endl;
                cout << "���������� ���������" << endl;
                cout << "������ �� ����������" << endl;
                }
                else if (prog == 5){
                cout << "�������� ��������� \"��������� ������������� ��������\"" << endl;
                x = (rand()%(3 - 1)) + 1;
                hero1[j].hpm = hero1[j].hpm + x;
                cout << "��� ���������� ��������� ";
                cout << "["; Sleep(500);
                cout << "|"; Sleep(500);
                cout << "|"; Sleep(500);
                cout << "|"; Sleep(500);
                cout << "|"; Sleep(500);
                cout << "|"; Sleep(500);
                cout << "|"; Sleep(500);
                cout << "|"; Sleep(500);
                cout << "|"; Sleep(500);
                cout << "|"; Sleep(500);
                cout << "|"; Sleep(500);
                cout << "]"; Sleep(500);
                cout << " 100%" << endl;
                cout << "���������� ���������" << endl;
                cout << "�� �������� ��� ������������ �������� �� " << x << " ������" << endl;
                }
                else if (prog == 6){
                cout << "�������� ��������� \"��������� ������������� �������� v 2.0\"" << endl;
                x = (rand()%(3 - 1)) + 1;
                hero1[j].hpm = hero1[j].hpm + x;
                hero1[j].hp = hero1[j].hpm;
                cout << "��� ���������� ��������� ";
                cout << "["; Sleep(600);
                cout << "|"; Sleep(600);
                cout << "|"; Sleep(600);
                cout << "|"; Sleep(600);
                cout << "|"; Sleep(600);
                cout << "|"; Sleep(600);
                cout << "|"; Sleep(600);
                cout << "|"; Sleep(600);
                cout << "|"; Sleep(600);
                cout << "|"; Sleep(600);
                cout << "|"; Sleep(600);
                cout << "]"; Sleep(600);
                cout << " 100%" << endl;
                cout << "���������� ���������" << endl;
                cout << "�� �������� ��� ������������ �������� �� " << x << " ������ � ��������� ������������ ���" << endl;
                }
                else if (prog == 7){
                cout << "�������� ��������� \"��������� ������������ ����� ������� ������\"" << endl;
                hero1[j].atc12++;
                cout << "��� ���������� ��������� ";
                cout << "["; Sleep(500);
                cout << "|"; Sleep(500);
                cout << "|"; Sleep(500);
                cout << "|"; Sleep(500);
                cout << "|"; Sleep(500);
                cout << "|"; Sleep(500);
                cout << "|"; Sleep(500);
                cout << "|"; Sleep(500);
                cout << "|"; Sleep(500);
                cout << "|"; Sleep(500);
                cout << "|"; Sleep(500);
                cout << "]"; Sleep(500);
                cout << " 100%" << endl;
                cout << "���������� ���������" << endl;
                cout << "�� �������� ������������ ����� ������� ������ �� 1" << endl;
                }
                else if (prog == 8){
                cout << "�������� ��������� \"�������� 2 ����� �����������\"" << endl;
                hero1[j].pred++;
                hero1[j].pred++;
                cout << "��� ���������� ��������� ";
                cout << "["; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "]"; Sleep(300);
                cout << " 100%" << endl;
                cout << "���������� ���������" << endl;
                cout << "�� �������� 2 ���� �����������" << endl;
                }
                else if (prog == 9){
                cout << "�������� ��������� \"�������� ���� ��������\"" << endl;
                cout << "��� ���������� ��������� ";
                cout << "["; Sleep(900);
                cout << "|"; Sleep(900);
                cout << "|"; Sleep(900);
                cout << "|"; Sleep(900);
                cout << "|"; Sleep(900);
                cout << "|"; Sleep(900);
                cout << "|"; Sleep(900);
                cout << "|"; Sleep(900);
                cout << "|"; Sleep(900);
                cout << "|"; Sleep(900);
                cout << "|"; Sleep(900);
                cout << "]"; Sleep(900);
                cout << " 100%" << endl;
                cout << "���������� ���������" << endl;
                cout << "������� ��� ��������: " << kod << endl;
                }
                else if (prog == 10){
                cout << "�������� ��������� \"����ff@# @#^*#\"" << endl;
                cout << "��� ���������� ��������� ";
                cout << "["; Sleep(600);
                cout << "|"; Sleep(500);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(900);
                cout << "|"; Sleep(900);
                cout << "|"; Sleep(900);
                cout << "|"; Sleep(2000);
                cout << "-"; Sleep(100);
                cout << "-"; Sleep(100);
                cout << "]"; Sleep(100);
                cout << " 80%" << endl;
                cout << "FATAL ERROR" << endl;
                cout << "���������� ��������" << endl;
                }
                else if (prog == 11){
                cout << "�������� ��������� \"��������� ���������� � ��������\"" << endl;
                cout << "��� ���������� ��������� ";
                cout << "["; Sleep(900);
                cout << "|"; Sleep(900);
                cout << "|"; Sleep(900);
                cout << "|"; Sleep(900);
                cout << "|"; Sleep(900);
                cout << "|"; Sleep(900);
                cout << "|"; Sleep(900);
                cout << "|"; Sleep(900);
                cout << "|"; Sleep(900);
                cout << "|"; Sleep(900);
                cout << "|"; Sleep(900);
                cout << "]"; Sleep(900);
                cout << " 100%" << endl;
                cout << "���������� ���������" << endl;
                cout << "���������� ������: " << endl;
                forstat(enemy1[i], i);
                }
                else if (prog == 12){
                cout << "�������� ��������� \"��������� ����������� ����� ������� ������\"" << endl;
                hero1[j].atc1--;
                cout << "��� ���������� ��������� ";
                cout << "["; Sleep(500);
                cout << "|"; Sleep(500);
                cout << "|"; Sleep(500);
                cout << "|"; Sleep(500);
                cout << "|"; Sleep(500);
                cout << "|"; Sleep(500);
                cout << "|"; Sleep(500);
                cout << "|"; Sleep(500);
                cout << "|"; Sleep(500);
                cout << "|"; Sleep(500);
                cout << "|"; Sleep(500);
                cout << "]"; Sleep(500);
                cout << " 100%" << endl;
                cout << "���������� ���������" << endl;
                cout << "�� �������� ����������� ����� ������� ������ �� 1" << endl;
                }
                else if (prog == 13){
                cout << "�������� ��������� \"��������� �����\"" << endl;
                x = (rand()%(9 - 2)) + 2;
                hero1[j].exp = hero1[j].exp + x;
                cout << "��� ���������� ��������� ";
                cout << "["; Sleep(600);
                cout << "|"; Sleep(600);
                cout << "|"; Sleep(600);
                cout << "|"; Sleep(600);
                cout << "|"; Sleep(600);
                cout << "|"; Sleep(600);
                cout << "|"; Sleep(600);
                cout << "|"; Sleep(600);
                cout << "|"; Sleep(600);
                cout << "|"; Sleep(600);
                cout << "|"; Sleep(600);
                cout << "]"; Sleep(600);
                cout << " 100%" << endl;
                cout << "���������� ���������" << endl;
                cout << "�� �������� " << x << " � �����" << endl;
                }
                else if (prog == 14){
                cout << "�������� ��������� \"���� � ����� ����� � ��������-������\"" << endl;
                cout << "��� ���������� ��������� ";
                cout << "["; Sleep(1000);
                cout << "|"; Sleep(1000);
                cout << "|"; Sleep(1000);
                cout << "|"; Sleep(1000);
                cout << "|"; Sleep(1000);
                cout << "|"; Sleep(1000);
                cout << "|"; Sleep(1000);
                cout << "|"; Sleep(1000);
                cout << "|"; Sleep(1000);
                cout << "|"; Sleep(1000);
                cout << "|"; Sleep(1000);
                cout << "]"; Sleep(1000);
                cout << " 100%" << endl;
                cout << "���������� ���������" << endl;
                cout << "�� ��������" << endl;
                }
                        cout << "�� ������������ ������ � ���������� � � �������" << endl;
                    }
                    else cout << "�� �� ������, ��� ����� ������������ ��� ������ � ���������� � � �������" << endl;
                }
            hero1[j].hp = hero1[j].hp + obj1[l].hp;
            hero1[j].hpm = hero1[j].hpm + obj1[l].hpm;
            hero1[j].atc1 = hero1[j].atc1 + obj1[l].atc1;
            hero1[j].atc12 = hero1[j].atc12 + obj1[l].atc12;
            hero1[j].atc2 = hero1[j].atc2 + obj1[l].atc2;
            hero1[j].atc22 = hero1[j].atc22 + obj1[l].atc22;
            hero1[j].heal = hero1[j].heal + obj1[l].heal;
            hero1[j].heal2 = hero1[j].heal2 + obj1[l].heal2;
            hero1[j].exp = hero1[j].exp + obj1[l].exp;
            if (hero1[j].hp > hero1[j].hpm) hero1[j].hp = hero1[j].hpm;
            if (hero1[j].hp <= 0) {
                    hero1[j].hp = 0;
                    goto end1;
            }
        }
        else if (re == "2"){
                if (zvyk == 1) Beep(300,100);
            if ((l == 12)||(l == 13)){
                    cout << "�� �� ������������ � ������� � ���� ������" << endl;
            }
            if (l == 26){
                    cout << "�� ���������� ���������� ����� ����������" << endl;
            }
            if ((l == 27)||(l == 28)){
                    cout << "�� ��������� ���� ������� � ���� ������" << endl;
            }
            if ((l == 23)||(l == 29)||(l == 30)||(l == 38)||(l == 40)){
                    cout << "�� ��������� ���� ������� � ���� ������" << endl;
            }
            if ((l == 31)||(l == 32)||(l == 33)||(l == 34)||(l == 35)||(l == 36)||(l == 37)){
                    cout << "�� �� �������� ��� � ���� ������" << endl;
            }
            if ((l == 41)||(l == 42)){
                    cout << "�� �� �������� ������ � ���� ������" << endl;
            }
            if (l == 39){
                    cout << "�� �� �������� �������� � ���� ������" << endl;
            }
        }
    }
    Sleep(1000);
    cout << " |------------------------------------------------------------------------------------------------------------------------------|" << endl;
    }
    }

    enemy1[i].hp = enemy1[i].hpm;
    cout << "�� ��� �������� " << enemy1[i].name << endl;
    herostat(hero1[j]);
    enemystat(enemy1[i]);
    cout << " |------------------------------------------------------------------------------------------------------------------------------|" << endl;
    Sleep(1000);
    boy:
    cout << "�� ��������" << endl;
    cout << " |------------------------------------------------------------------------------------------------------------------------------|" << endl;
    Sleep(1000);
    atcs = "-";
    while ((atcs != "1")&&(atcs != "2")&&(atcs != "3")&&(atcs != "4")&&(atcs != "5")&&(atcs != "6")&&(atcs != "7")&&(atcs != "8")&&(atcs != "0")){
    zan:
    cout << "�������� ��������:" << endl;
    if (j==0){
    cout << "1 - ���� ����� (" << hero1[j].atc1 << "-" << hero1[j].atc12 << ")" << endl;
    cout << "2 - ���� ����� (" << hero1[j].atc2 << "-" << hero1[j].atc22 << ")" << endl;
    cout << "3 - ������������� ���� (" << hero1[j].heal << "-" << hero1[j].heal2 << ")" << endl;
    cout << "4 - ������������ �������������� ���� (10 �����, 1 �����), ��������: (" << hero1[j].pred << ")"<< endl;
    };
    if (j==1){
    cout << "1 - ���� ������� (" << hero1[j].atc1 << "-" << hero1[j].atc12 << ")" << endl;
    cout << "2 - ���� ������ (" << hero1[j].atc2 << "-" << hero1[j].atc22 << ")" << endl;
    cout << "3 - ������������� ���� � �������������� ���� (" << hero1[j].heal << "-" << hero1[j].heal2 << ")" << endl;
    cout << "4 - ������������ ������ ������ (5 ��������, 4 �����, 3 �����), ��������: (" << hero1[j].pred << ")"<< endl;
    };
    if (j==2){
    cout << "1 - ���� ���������� (" << hero1[j].atc1 << "-" << hero1[j].atc12 << ")" << endl;
    cout << "2 - ���� ����������� ����� (" << hero1[j].atc2 << "-" << hero1[j].atc22 << ")" << endl;
    cout << "3 - �������� ���� (" << hero1[j].heal << "-" << hero1[j].heal2 << ")" << endl;
    cout << "4 - ������������ ���������������� ������� (������ ��������, 1 �����), ��������: (" << hero1[j].pred << ")"<< endl;
    };
    if (j==3){
    cout << "1 - ���� ��������� �������� (" << hero1[j].atc1 << "-" << hero1[j].atc12 << ")" << endl;
    cout << "2 - ������� �� �������� (" << hero1[j].atc2 << "-" << hero1[j].atc22 << ")" << endl;
    cout << "3 - ������������� ���� (" << hero1[j].heal << "-" << hero1[j].heal2 << ")" << endl;
    cout << "4 - ������������ ��������� ��������� (0-12 �����, 1 �����), ��������: (" << hero1[j].pred << ")"<< endl;
    };
    if (j==4){
    cout << "1 - ���� ��������� �������� (" << hero1[j].atc1 << "-" << hero1[j].atc12 << ")" << endl;
    cout << "2 - ��������� � ������������ ���������� �� ���������� (" << hero1[j].atc2 << "-" << hero1[j].atc22 << ")" << endl;
    cout << "3 - ��������� � ������������ ���������� �� ���� (" << hero1[j].heal << "-" << hero1[j].heal2 << ")" << endl;
    cout << "4 - ������������ ������� ���������� (����� ���������� ����� 1, 1 �����), ��������: (" << hero1[j].pred << ")"<< endl;
    };
    if (j==5){
    cout << "1 - ���� ������ (" << hero1[j].atc1 << "-" << hero1[j].atc12 << ")" << endl;
    cout << "2 - ���� ������� (" << hero1[j].atc2 << "-" << hero1[j].atc22 << ")" << endl;
    cout << "3 - ���������� ������������� ���� (" << hero1[j].heal << "-" << hero1[j].heal2 << ")" << endl;
    cout << "4 - ������������ ������������� ������� (����, 2 ���, 1 �����), ��������: (" << hero1[j].pred << ")"<< endl;
    };
    if (j==6){
    cout << "1 - ������ ���� ���� (" << hero1[j].atc1 << "-" << hero1[j].atc12 << ")" << endl;
    cout << "2 - ����������� ���� ���� �� ����� (" << hero1[j].atc2 << "-" << hero1[j].atc22 << ")" << endl;
    cout << "3 - ������������� �� ���� ���� ���� (" << hero1[j].heal << "-" << hero1[j].heal2 << ")" << endl;
    cout << "4 - ������������ Ҹ���� ������ (-1-1 � ������ ����� ������, -2-2 � ��������, 1 �����), ��������: (" << hero1[j].pred << ")" << endl;
    };
    if (j==7){
    cout << "1 - ���� ����� (" << hero1[j].atc1 << "-" << hero1[j].atc12 << ")" << endl;
    cout << "2 - ���� ������ (" << hero1[j].atc2 << "-" << hero1[j].atc22 << ")" << endl;
    cout << "3 - �������� ���� ��������� (" << hero1[j].heal << "-" << hero1[j].heal2 << ")" << endl;
    cout << "4 - ������������ ������� ���� (���� �2 ��� ����� ������, ���� �� ���� ����, 1 �����), ��������: (" << hero1[j].pred << ")" << endl;
    };
    if (j==8){
    cout << "1 - ���� ������ (" << hero1[j].atc1 << "-" << hero1[j].atc12 << ")" << endl;
    cout << "2 - ���� ������ � ������� (" << hero1[j].atc2 << "-" << hero1[j].atc22 << ")" << endl;
    cout << "3 - ������ ����� � ������������ ���� �������� (" << hero1[j].heal << "-" << hero1[j].heal2 << ")" << endl;
    cout << "4 - ������������ ���� ����� (6 �����, 10 �����), ��������: (" << hero1[j].pred << ")" << endl;
    };
    if (j==9){
    cout << "1 - ���� ��������� �������� (" << hero1[j].atc1 << "-" << hero1[j].atc12 << ")" << endl;
    cout << "2 - ���� ��������� (" << hero1[j].atc2 << "-" << hero1[j].atc22 << ")" << endl;
    cout << "3 - ������������ �������� � ������� ������� ���� (" << hero1[j].heal << "-" << hero1[j].heal2 << ")" << endl;
    cout << "4 - ������������ ������� ��� ���� (100 �����, -5-5, ��������, 1 �����), ��������: (" << hero1[j].pred << ")" << endl;
    };
    if (j==10){
    cout << "1 - ���� �������� (" << hero1[j].atc1 << "-" << hero1[j].atc12 << ")" << endl;
    cout << "2 - ���� ������� (" << hero1[j].atc2 << "-" << hero1[j].atc22 << ")" << endl;
    cout << "3 - ������������ �������� ���������� ��� (" << hero1[j].heal << "-" << hero1[j].heal2 << ")" << endl;
    cout << "4 - ������������ ������������� (����� ����� �� ��������� � ����� ��������� �����), ��������: (" << hero1[j].pred << ")" << endl;
    };
    if (j==11){
    cout << "1 - ���� ����� � ������� (" << hero1[j].atc1 << "-" << hero1[j].atc12 << ")" << endl;
    cout << "2 - ���� ������ � ������� (" << hero1[j].atc2 << "-" << hero1[j].atc22 << ")" << endl;
    cout << "3 - ������������ �������� ��������� ������ ���� (" << hero1[j].heal << "-" << hero1[j].heal2 << ")" << endl;
    cout << "4 - ������������ ������������� (����� ����� �� ��������� � ����� ��������), ��������: (" << hero1[j].pred << ")" << endl;
    };
    if (j==20){
    cout << "1 - ���� �����-������� (" << hero1[j].atc1 << "-" << hero1[j].atc12 << ")" << endl;
    cout << "2 - ������������ ������� (" << hero1[j].atc2 << "-" << hero1[j].atc22 << ")" << endl;
    cout << "3 - ������� ���� ���������� (" << hero1[j].heal << "-" << hero1[j].heal2 << ")" << endl;
    cout << "4 - ������������ ���������� �������� (1 �� ���� ����� ������, -3 � ������������� �������� � ��� ��������������), ��������: (" << hero1[j].pred << ")" << endl;
    };
    if (j==21){
    cout << "1 - ���� ������ ���������� ������� (" << hero1[j].atc1 << "-" << hero1[j].atc12 << ")" << endl;
    cout << "2 - ���� ����� ���������� ������� (" << hero1[j].atc2 << "-" << hero1[j].atc22 << ")" << endl;
    cout << "3 - ������������ ���� �������� �������� (" << hero1[j].heal << "-" << hero1[j].heal2 << ")" << endl;
    cout << "4 - ������������ ���������� �������� (1 �� ���� ��������������� � 5 � ������� ���������� �����), ��������: (" << hero1[j].pred << ")" << endl;
    };
    if (j==22){
    cout << "1 - ���� ������� ������� ������ (" << hero1[j].atc1 << "-" << hero1[j].atc12 << ")" << endl;
    cout << "2 - ���� ������������� ������ (" << hero1[j].atc2 << "-" << hero1[j].atc22 << ")" << endl;
    cout << "3 - �������� ���� (" << hero1[j].heal << "-" << hero1[j].heal2 << ")" << endl;
    cout << "4 - ������������ ��������� (1 � ������������� ��������, -1 �� ���� ��������������� ������� ������ � 3 � �����), ��������: (" << hero1[j].pred << ")" << endl;
    };
    if (j==23){
    cout << "1 - ������������� ������ ��� (" << hero1[j].atc1 << "-" << hero1[j].atc12 << ")" << endl;
    cout << "2 - ���� ���������� ������� (" << hero1[j].atc2 << "-" << hero1[j].atc22 << ")" << endl;
    cout << "3 - ���������� �������������� (" << hero1[j].heal << "-" << hero1[j].heal2 << ")" << endl;
    cout << "4 - ������������ ������ ���������� (-1 � ������������� �������� � 1 �� ���� ��������������� ������� ������), ��������: (" << hero1[j].pred << ")" << endl;
    };
    if (j==24){
    cout << "1 - ���� ��������� ������� (" << hero1[j].atc1 << "-" << hero1[j].atc12 << ")" << endl;
    cout << "2 - ���� ��������� ������� ����� (" << hero1[j].atc2 << "-" << hero1[j].atc22 << ")" << endl;
    cout << "3 - ������������� ����������� (" << hero1[j].heal << "-" << hero1[j].heal2 << ")" << endl;
    cout << "4 - ������������ ������������� �������������� (1 � ������������� �������� � 1 � �����), ��������: (" << hero1[j].pred << ")" << endl;
    };
    if (j==25){
    cout << "1 - ���� ������������� ������� (" << hero1[j].atc1 << "-" << hero1[j].atc12 << ")" << endl;
    cout << "2 - ������� �� ����-�������� (" << hero1[j].atc2 << "-" << hero1[j].atc22 << ")" << endl;
    cout << "3 - �������� ���� (" << hero1[j].heal << "-" << hero1[j].heal2 << ")" << endl;
    cout << "4 - ������������ ��������� ��������� ��������� (��������� ������), ��������: (" << hero1[j].pred << ")" << endl;
    };
    if (j==19){ //������
    cout << "1 - ���� " << wea1[w].info << " (" << hero1[j].atc1 << "-" << hero1[j].atc12 << ")" << endl;
    cout << "2 - ������� ���� " << wea1[w].info << " (" << hero1[j].atc2 << "-" << hero1[j].atc22 << ")" << endl;
    cout << "3 - ������������� ���� (" << hero1[j].heal << "-" << hero1[j].heal2 << ")" << endl;
    cout << "4 - ������������ ������� ���� (1 � ������������� ��������, � 2 � �����), ��������: (" << hero1[j].pred << ")" << endl;
    };
    if (j==26){ //�����������
    cout << "1 - ���� " << wea1[w].info << " (" << hero1[j].atc1 << "-" << hero1[j].atc12 << ")" << endl;
    cout << "2 - ������� ���� " << wea1[w].info << " (" << hero1[j].atc2 << "-" << hero1[j].atc22 << ")" << endl;
    cout << "3 - ������������� ���� (" << hero1[j].heal << "-" << hero1[j].heal2 << ")" << endl;
    cout << "4 - ������������ ������� ����� (1 � ������������� ��������, � 2 � �����), ��������: (" << hero1[j].pred << ")" << endl;
    };
    cout << "5 - ������ ������ ���������� � �������� " << enemy1[i].name << endl;
    if (estpred != 0){
    cout << "6 - ������������ ������� " << pred1[estpred].name << endl;
    }
    if (estrel != 0){
    cout << "7 - ������ ���������� � �������� " << rel1[estrel].name << endl;
    }
    if (w != 0){
    cout << "8 - ��������� ������ " << wea1[w].name << endl;
    }
    cout << "0 - ����� � ���� ��� ����������" << endl;
    getline(cin, atcs);
    };
    if (atcs == "0"){
        goto start;
    };
    if ((atcs == "6")&&(estpred != 0)){
        cout << "�� ����������� ������� " << pred1[estpred].name  << endl;
            hero1[j].hp = hero1[j].hp + pred1[estpred].hp;
            hero1[j].hpm = hero1[j].hpm + pred1[estpred].hpm;
            hero1[j].atc1 = hero1[j].atc1 + pred1[estpred].atc1;
            hero1[j].atc12 = hero1[j].atc12 + pred1[estpred].atc12;
            hero1[j].atc2 = hero1[j].atc2 + pred1[estpred].atc2;
            hero1[j].atc22 = hero1[j].atc22 + pred1[estpred].atc22;
            hero1[j].heal = hero1[j].heal + pred1[estpred].heal;
            hero1[j].heal2 = hero1[j].heal2 + pred1[estpred].heal2;
            hero1[j].exp = hero1[j].exp + pred1[estpred].exp;
            if (hero1[j].hp > hero1[j].hpm) hero1[j].hp = hero1[j].hpm;
            if (hero1[j].hp <= 0) {
                    hero1[j].hp = 0;
                    goto end1;
            }
            if (estpred == 14){
                cout << "�� ���������� �������, ������� �� ���� ���� � ������� ��� ����������" << endl;
                cout << "��� ��������: \"" << kod <<"\"" << endl;
            }
            if (estpred == 15){
                cout << "�� ���������� �������, ������� �� ���� ���� � ������� ��� ����������" << endl;
                cout << "��� ��������: \"���� ����� ��� ������?\"" << endl;
            }
            if (estpred == 22){
                hero1[j].atc12 = hero1[j].atc1;
                hero1[j].atc22 = hero1[j].atc2;
                hero1[j].hp = hero1[j].hpm;
            }
            if (estpred == 23){
                x = 3;
                enemy1[i].hp = enemy1[i].hp - x;
            }
            if (estpred == 24){
                x = 1;
                enemy1[i].hp = enemy1[i].hp - x;
            }
            if (estpred == 25){
                x = 2;
                enemy1[i].hp = enemy1[i].hp - x;
            }
            if (estpred == 26){
                cout << "*��� ������������� ���������� � �������� � ��������:" << endl;
                forstat(enemy1[i], i);
            }
    estpred = 0;
    goto zan;
    }
    else if ((atcs == "6")&&(estpred == 0)) goto zan;
    if ((atcs == "7")&&(estrel != 0)){
        cout << "�������� ��������: " << rel1[estrel].info  << endl;
    goto zan;
    }
    if (estrel != 0){
        if (estrel == 14){
            hero1[j].atc12 = hero1[j].atc1;
            hero1[j].atc22 = hero1[j].atc2;
        }
    }
    else if ((atcs == "7")&&(estrel == 0)) goto zan;
    if ((atcs == "8")&&(w != 0)&&(reg == 3)){
        cout << "�� ������������ ������ " << wea1[w].name  << endl;
        hero1[j].atc1 = hero1[j].atc1 - wea1[w].atc1;
        hero1[j].atc12 = hero1[j].atc12 - wea1[w].atc12;
        hero1[j].atc2 = hero1[j].atc2 - wea1[w].atc2;
        hero1[j].atc22 = hero1[j].atc22 - wea1[w].atc22;
        w = 0;
        hero1[j].atc1 = hero1[j].atc1 + wea1[w].atc1;
        hero1[j].atc12 = hero1[j].atc12 + wea1[w].atc12;
        hero1[j].atc2 = hero1[j].atc2 + wea1[w].atc2;
        hero1[j].atc22 = hero1[j].atc22 + wea1[w].atc22;
    goto zan;
    }
    else if (((atcs == "8")&&(w == 0))||((atcs == "8")&&(reg != 3))) goto zan;
    if (atcs == "1"){
        if (zvyk == 1) Beep(700, 200);
        if (zvyk == 1) Beep(800, 100);
        if (j==0) cout << "*���� �����*" << endl;
        if (j==1) cout << "*���� �������*" << endl;
        if (j==2) cout << "*���� ����������*" << endl;
        if (j==3) cout << "*���� ��������� ��������*" << endl;
        if (j==4) cout << "*���� ��������� ��������*" << endl;
        if (j==5) cout << "*���� ������*" << endl;
        if (j==6) cout << "*������ ���� ����*" << endl;
        if (j==7) cout << "*���� �����*" << endl;
        if (j==8) cout << "*���� ������*" << endl;
        if (j==9) cout << "*���� ��������� ��������*" << endl;
        if (j==10) cout << "*���� ��������*" << endl;
        if (j==11) cout << "*���� ����� � �������*" << endl;
        if (j==19) cout << "*���� " << wea1[w].info << "*" << endl;
        if (j==20) cout << "*���� �����-�������*" << endl;
        if (j==21) cout << "*���� ������ ���������� �������*" << endl;
        if (j==22) cout << "*���� ������� ������� ������*" << endl;
        if (j==23) cout << "*������������� ������ ���*" << endl;
        if (j==24) cout << "*���� ��������� �������*" << endl;
        x = (rand()%(hero1[j].atc12+1 - hero1[j].atc1)) + hero1[j].atc1;
        if (baff1 == 1) x = x*2;
        if (j==23){
                if ((k != 10)&&(k != 20)&&(k != 30)&&(k != 40)&&(k != 50)&&(k != 60)&&(k != 70)&&(k != 80)&&(k != 90)&&(k != 100)&&(k != 101)){
            if (hero1[j].atc1 > enemy1[i].atc22) x = enemy1[i].hp;
                }
        }
        if (x>0) cout << "�� ������� " << x << " �����" << endl;
        else if (x == 0) cout << "���� ����� �� �������" << endl;
        else cout << "�� �������� " << x*-1 << " �������� ����������" << endl;
        enemy1[i].hp = enemy1[i].hp - x;
        if (enemy1[i].hp > enemy1[i].hpm) enemy1[i].hp = enemy1[i].hpm;
        if ((j == 21)||(j == 22)||(j == 23)||(j == 24)||(j == 25)){
        }
        else if (j == 20){
        hero1[j].exp = hero1[j].exp + 0.25;
        cout << "�� �������� 0.25 � �����!" << endl;
        }
        else if (j != 8){
        hero1[j].exp = hero1[j].exp + 0.5;
        cout << "�� �������� 0.5 � �����!" << endl;
        }
        else {
            hero1[j].exp = hero1[j].exp + 1;
            cout << "�� �������� 1 � �����!" << endl;
        }
    }
    if (atcs == "2"){
        if (zvyk == 1) Beep(300, 200);
        if (zvyk == 1) Beep(400, 100);
        if (j==0) cout << "*���� �����*" << endl;
        if (j==1) cout << "*���� ������*" << endl;
        if (j==2) cout << "*���� ����������� �����*" << endl;
        if (j==3) cout << "*������� �� ��������*" << endl;
        if (j==4) cout << "*���������� � ������������� ���������� �� ����������*" << endl;
        if (j==5) cout << "*���� �������*" << endl;
        if (j==6) cout << "*����������� ���� ���� �� �����*" << endl;
        if (j==7) cout << "*���� ������*" << endl;
        if (j==8) cout << "*���� ������ � �������*" << endl;
        if (j==9) cout << "*���� ���������*" << endl;
        if (j==10) cout << "*���� �������*" << endl;
        if (j==11) cout << "*���� ������ � �������*" << endl;
        if (j==19) cout << "*������� ���� " << wea1[w].info << "*" << endl;
        if (j==20) cout << "*������������ �������*" << endl;
        if (j==21) cout << "*���� ����� ���������� �������*" << endl;
        if (j==22) cout << "*���� ������������� ������*" << endl;
        if (j==23) cout << "*���� ���������� �������*" << endl;
        if (j==24) cout << "*���� ��������� ������� �����*" << endl;
        x = (rand()%(hero1[j].atc22+1 - hero1[j].atc2)) + hero1[j].atc2;
        if (baff1 == 1) x = x*2;
        if (x>0) cout << "�� ������� " << x << " �����" << endl;
        else if (x == 0) cout << "���� ����� �� �������" << endl;
        else cout << "�� �������� " << x*-1 << " �������� ����������" << endl;
        enemy1[i].hp = enemy1[i].hp - x;
        if (enemy1[i].hp > enemy1[i].hpm) enemy1[i].hp = enemy1[i].hpm;
        if (w == 5){
            hero1[j].hp--;
            if (hero1[j].hp < 0) hero1[j].hp = 0;
            cout << "*�� �������� ��������� ���� � �������� ���� 1 �����*" << endl;
        }
        if (w == 6){
            hero1[j].hp = hero1[j].hp - 2;
            if (hero1[j].hp < 0) hero1[j].hp = 0;
            cout << "*�� �������� ��������� ���� � �������� ���� 2 �����*" << endl;
        }
        if (w == 13){
            hero1[j].hp++;
            if (hero1[j].hp > hero1[j].hpm) hero1[j].hp = hero1[j].hpm;
            cout << "*�� ���������������� ���� 1 ��������*" << endl;
        }
        if (w == 17){
            x = (rand()%(4 - 1)) + 1;
            hero1[j].hp = hero1[j].hp - x;
            if (hero1[j].hp < 0) hero1[j].hp = 0;
            cout << "*����� ���������� � ������� ��� " << x << " �����*" << endl;
        }
        if (w == 16){
            cout << "*��������� ��������� ���������*" << endl;
                cout << "��� ����� ��������� ��������� ";
                cout << "["; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "]"; Sleep(100);
                cout << " 100%" << endl;
                cout << "����� ��������" << endl;
                prog = (rand()%(13 - 1)) + 1;
                if (prog == 1){
                cout << "�������� ��������� \"�������������� ��������\"" << endl;
                x = (rand()%(6 - 1)) + 1;
                hero1[j].hp = hero1[j].hpm;
                if (hero1[j].hp > hero1[j].hpm) hero1[j].hp = hero1[j].hpm;
                cout << "��� ���������� ��������� ";
                cout << "["; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "]"; Sleep(100);
                cout << " 100%" << endl;
                cout << "���������� ���������" << endl;
                cout << "�� ������������ " << x << " ��������" << endl;
                }
                else if (prog == 2){
                cout << "�������� ��������� \"��������� ��������\"" << endl;
                x = (rand()%(6 - 1)) + 1;
                hero1[j].hp = hero1[j].hp - x;
                if (hero1[j].hp < 0) hero1[j].hp = 0;
                cout << "��� ���������� ��������� ";
                cout << "["; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "]"; Sleep(100);
                cout << " 100%" << endl;
                cout << "���������� ���������" << endl;
                cout << "�� �������� ��� �������� �� " << x << " ������" << endl;
                }
                else if (prog == 3){
                cout << "�������� ��������� \"��������� ������������� ��������\"" << endl;
                x = (rand()%(3 - 1)) + 1;
                hero1[j].hpm = hero1[j].hpm - x;
                if (hero1[j].hpm < 0) hero1[j].hpm = 0;
                if (hero1[j].hp > hero1[j].hpm) hero1[j].hp = hero1[j].hpm;
                if (hero1[j].hp < 0) hero1[j].hp = 0;
                cout << "��� ���������� ��������� ";
                cout << "["; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "]"; Sleep(100);
                cout << " 100%" << endl;
                cout << "���������� ���������" << endl;
                cout << "�� �������� ��� ������������ �������� �� " << x << " ������" << endl;
                }
                else if (prog == 4){
                cout << "�������� ��������� \"����������� �������\"" << endl;
                cout << "��� ���������� ��������� ";
                cout << "["; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "]"; Sleep(100);
                cout << " 100%" << endl;
                cout << "���������� ���������" << endl;
                cout << "������ �� ����������" << endl;
                }
                else if (prog == 5){
                cout << "�������� ��������� \"��������� ������������� ��������\"" << endl;
                x = (rand()%(3 - 1)) + 1;
                hero1[j].hpm = hero1[j].hpm + x;
                cout << "��� ���������� ��������� ";
                cout << "["; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "]"; Sleep(100);
                cout << " 100%" << endl;
                cout << "���������� ���������" << endl;
                cout << "�� �������� ��� ������������ �������� �� " << x << " ������" << endl;
                }
                else if (prog == 6){
                cout << "�������� ��������� \"�������� 1 ���� �����������\"" << endl;
                hero1[j].pred++;
                cout << "��� ���������� ��������� ";
                cout << "["; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "]"; Sleep(100);
                cout << " 100%" << endl;
                cout << "���������� ���������" << endl;
                cout << "�� �������� 1 ���� �����������" << endl;
                }
                else if (prog == 7){
                cout << "�������� ��������� \"�������� ���� ��������\"" << endl;
                cout << "��� ���������� ��������� ";
                cout << "["; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "]"; Sleep(100);
                cout << " 100%" << endl;
                cout << "���������� ���������" << endl;
                cout << "������� ��� ��������: " << kod << endl;
                }
                else if (prog == 8){
                cout << "�������� ��������� \"����ff@# @#^*#\"" << endl;
                cout << "��� ���������� ��������� ";
                cout << "["; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(2000);
                cout << "-"; Sleep(100);
                cout << "-"; Sleep(100);
                cout << "]"; Sleep(100);
                cout << " 80%" << endl;
                cout << "FATAL ERROR" << endl;
                cout << "���������� ��������" << endl;
                }
                else if (prog == 9){
                cout << "�������� ��������� \"��������� ���������� � ��������\"" << endl;
                cout << "��� ���������� ��������� ";
                cout << "["; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "]"; Sleep(100);
                cout << " 100%" << endl;
                cout << "���������� ���������" << endl;
                cout << "���������� ������: " << endl;
                forstat(enemy1[i], i);
                }
                else if (prog == 10){
                cout << "�������� ��������� \"��������� ����������� ����� ������� ������\"" << endl;
                hero1[j].atc1--;
                cout << "��� ���������� ��������� ";
                cout << "["; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "]"; Sleep(100);
                cout << " 100%" << endl;
                cout << "���������� ���������" << endl;
                cout << "�� �������� ����������� ����� ������� ������ �� 1" << endl;
                }
                else if (prog == 11){
                cout << "�������� ��������� \"��������� �����\"" << endl;
                x = (rand()%(6 - 2)) + 2;
                hero1[j].exp = hero1[j].exp + x;
                cout << "��� ���������� ��������� ";
                cout << "["; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "]"; Sleep(100);
                cout << " 100%" << endl;
                cout << "���������� ���������" << endl;
                cout << "�� �������� " << x << " � �����" << endl;
                }
                else if (prog == 12){
                cout << "�������� ��������� \"���� � ����� ����� � ��������-������\"" << endl;
                cout << "��� ���������� ��������� ";
                cout << "["; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "]"; Sleep(100);
                cout << " 100%" << endl;
                cout << "���������� ���������" << endl;
                cout << "�� ��������" << endl;
                x = (rand()%(4 - 1)) + 1;
                hero1[j].hp = hero1[j].hp - x;
                if (hero1[j].hp < 0) hero1[j].hp = 0;
                cout << "*������ ������� � ������� ��� " << x << " �����*" << endl;
        }
    }
    }
    if (atcs == "3"){
        if (hero1[j].hp < hero1[j].hpm){
            if (zvyk == 1) Beep(200, 80);
            if (zvyk == 1) Beep(300, 80);
            if (zvyk == 1) Beep(200, 80);
            if (zvyk == 1) Beep(300, 80);
            if (j==0) cout << "*���������������� ���*" << endl;
            if (j==1) cout << "*������� ��� � �������������� ����*" << endl;
            if (j==2) cout << "*������� ���*" << endl;
            if (j==3) cout << "*���������������� ���*" << endl;
            if (j==4) cout << "*���������� � ������������� ���������� �� ����*" << endl;
            if (j==5) cout << "*������� ���������� ����*" << endl;
            if (j==6) cout << "*������������� �� ���� ���� ����*" << endl;
            if (j==7) cout << "*�������� ���� ���������*" << endl;
            if (j==8) cout << "*������ ����� � ������������ ���� ��������*" << endl;
            if (j==9) cout << "*������������ �������� � ������� ������� ����*" << endl;
            if (j==10) cout << "*������������ �������� ���������� ���*" << endl;
            if (j==11) cout << "*������������ �������� ��������� ������ ����*" << endl;
            if (j==19) cout << "*���������������� ���*" << endl;
            if (j==20) cout << "*������� ���� ����������*" << endl;
            if (j==21) cout << "*������������ ���� �������� ��������*" << endl;
            if (j==22) cout << "*�������� ����*" << endl;
            if (j==23) cout << "*���������� ��������������*" << endl;
            if (j==24) cout << "*������������� �����������*" << endl;
            x = (rand()%(hero1[j].heal2+1 - hero1[j].heal)) + hero1[j].heal;
            if (x>0) cout << "�� �������� " << x << " ��������" << endl;
            else if (x == 0) cout << "������� ������� �� �������" << endl;
            else cout << "�� ������� ������ ���� � ������� ���� " << x*-1 << " �����" << endl;
            hero1[j].hp = hero1[j].hp + x;}
        else{
            if (zvyk == 1) Beep(500, 500);
            cout << "� ��� ������ ��������!" << endl;
            goto zan;
        }
    }
    if (atcs == "4"){
            if (j == 0){
        if ((k != 10)&&(k != 20)&&(k != 30)&&(k != 40)&&(k != 50)&&(k != 60)&&(k != 70)&&(k != 80)&&(k != 90)&&(k != 100)&&(k != 101)){
            if (hero1[j].pred > 0){
                cout << "*�������������� ����*" << endl;
                if (zvyk == 1) Beep(400,300);
                if (zvyk == 1) Beep(600,200);
                x = 10;
                cout << "�� ������� " << x << " �����" << endl;
                enemy1[i].hp = enemy1[i].hp - x;
                hero1[j].exp = hero1[j].exp + 1;
                hero1[j].pred--;
                cout << "�� �������� 1 � �����!" << endl;
            }
            else{
                if (zvyk == 1) Beep(500, 500);
               cout << "� ��� ��������� ���� �����������!" << endl;
               goto zan;
            }}
        else{
                if (zvyk == 1) Beep(500, 500);
            cout << "� ������� � ������ ������ ������������ �����������!" << endl;
               goto zan;
        }}
        else if (j == 1){
        if ((k != 10)&&(k != 20)&&(k != 30)&&(k != 40)&&(k != 50)&&(k != 60)&&(k != 70)&&(k != 80)&&(k != 90)&&(k != 100)&&(k != 101)){
            if (hero1[j].pred > 0){
                cout << "*������ ������*" << endl;
                if (zvyk == 1) Beep(400,300);
                if (zvyk == 1) Beep(600,200);
                hero1[j].hp = hero1[j].hp + 5;
                if (hero1[j].hp > hero1[j].hpm) hero1[j].hp = hero1[j].hpm;
                cout << "�� �������� 5 ��������" << endl;
                x = 4;
                cout << "�� ������� " << x << " �����" << endl;
                enemy1[i].hp = enemy1[i].hp - x;
                hero1[j].exp = hero1[j].exp + 3;
                hero1[j].pred--;
                cout << "�� �������� 3 � �����" << endl;
            }
            else{
                if (zvyk == 1) Beep(500, 500);
               cout << "� ��� ��������� ���� �����������!" << endl;
               goto zan;
            }}
        else{
            if (zvyk == 1) Beep(500, 500);
            cout << "� ������� � ������ ������ ������������ �����������!" << endl;
               goto zan;
        }}
        else if (j == 2){
        if ((k != 10)&&(k != 20)&&(k != 30)&&(k != 40)&&(k != 50)&&(k != 60)&&(k != 70)&&(k != 80)&&(k != 90)&&(k != 100)&&(k != 101)){
            if (hero1[j].pred > 0){
                cout << "*���������������� �������*" << endl;
                if (zvyk == 1) Beep(400,300);
                if (zvyk == 1) Beep(600,200);
                x = 0;
                cout << "�� ��������� ������������ ��������" << endl;
                hero1[j].hp = hero1[j].hpm;
                enemy1[i].hp = enemy1[i].hp - x;
                hero1[j].exp = hero1[j].exp + 1;
                hero1[j].pred--;
                cout << "�� �������� 1 � �����" << endl;
            }
            else{
                if (zvyk == 1) Beep(500, 500);
               cout << "� ��� ��������� ���� �����������!" << endl;
               goto zan;
            }}
        else{
            if (zvyk == 1) Beep(500, 500);
            cout << "� ������� � ������ ������ ������������ �����������!" << endl;
               goto zan;
        }}
        else if (j == 3){
        if ((k != 10)&&(k != 20)&&(k != 30)&&(k != 40)&&(k != 50)&&(k != 60)&&(k != 70)&&(k != 80)&&(k != 90)&&(k != 100)&&(k != 101)){
            if (hero1[j].pred > 0){
                cout << "*��������� ���������*" << endl;
                if (zvyk == 1) Beep(400,300);
                if (zvyk == 1) Beep(600,200);
                x = (rand()%(19 - 2)) + 2;
                cout << "�� ������� " << x << " �����" << endl;
                enemy1[i].hp = enemy1[i].hp - x;
                hero1[j].exp = hero1[j].exp + 1;
                hero1[j].pred--;
                cout << "�� �������� 1 � �����" << endl;
            }
            else{
                if (zvyk == 1) Beep(500, 500);
               cout << "� ��� ��������� ���� �����������!" << endl;
               goto zan;
            }}
        else{
            if (zvyk == 1) Beep(500, 500);
            cout << "� ������� � ������ ������ ������������ �����������!" << endl;
               goto zan;
        }}
        else if (j == 4){
        if ((k != 10)&&(k != 20)&&(k != 30)&&(k != 40)&&(k != 50)&&(k != 60)&&(k != 70)&&(k != 80)&&(k != 90)&&(k != 100)&&(k != 101)){
            if (hero1[j].pred > 0){
                cout << "*������� ����������*" << endl;
                if (zvyk == 1) Beep(400,300);
                if (zvyk == 1) Beep(600,200);
                panact2 = 1;
                cout << "����� ����� ������ ���������� ������� �� 1" << endl;
                x = 0;
                enemy1[i].hp = enemy1[i].hp - x;
                hero1[j].exp = hero1[j].exp + 1;
                hero1[j].pred--;
                cout << "�� �������� 1 � �����" << endl;
            }
            else{
                if (zvyk == 1) Beep(500, 500);
               cout << "� ��� ��������� ���� �����������!" << endl;
               goto zan;
            }}
        else{
            if (zvyk == 1) Beep(500, 500);
            cout << "� ������� � ������ ������ ������������ �����������!" << endl;
               goto zan;
        }}
        else if (j == 5){
        if ((k != 10)&&(k != 20)&&(k != 30)&&(k != 40)&&(k != 50)&&(k != 60)&&(k != 70)&&(k != 80)&&(k != 90)&&(k != 100)&&(k != 101)){
            if (hero1[j].pred > 0){
                    if (panact == 0){
                cout << "*������������� �������*" << endl;
                if (zvyk == 1) Beep(400,300);
                if (zvyk == 1) Beep(600,200);
                x = 0;
                panact = 1;
                enemy1[i].hp = enemy1[i].hp - x;
                hero1[j].exp = hero1[j].exp + 1;
                hero1[j].pred--;
                cout << "�� �������� 1 � �����" << endl;
                goto zan;
                    }
                else{
                    if (zvyk == 1) Beep(500, 500);
                    cout << "�� ��� ������������ ������������� ������� �� ���� ����" << endl;
                    goto zan;
                }
            }
            else{
                if (zvyk == 1) Beep(500, 500);
               cout << "� ��� ��������� ���� �����������!" << endl;
               goto zan;
            }}
        else{
            if (zvyk == 1) Beep(500, 500);
            cout << "� ������� � ������ ������ ������������ �����������!" << endl;
               goto zan;
        }}
        else if (j == 6){
        if ((k != 10)&&(k != 20)&&(k != 30)&&(k != 40)&&(k != 50)&&(k != 60)&&(k != 70)&&(k != 80)&&(k != 90)&&(k != 100)&&(k != 101)){
            if (hero1[j].pred > 0){
                cout << "*Ҹ���� ������*" << endl;
                if (zvyk == 1) Beep(400,300);
                if (zvyk == 1) Beep(600,200);
                x = (rand()%(2 + 1)) -1;
                hero1[j].atc1 = hero1[j].atc1 + x;
                hero1[j].atc12 = hero1[j].atc12 + x;
                hero1[j].atc2 = hero1[j].atc2 + x;
                hero1[j].atc22 = hero1[j].atc22 + x;
                cout << "�� �������� " << x << " � ����� ����� ������" << endl;
                x = (rand()%(3 + 2)) -2;
                if (x>0) cout << "�� �������� " << x << " ��������" << endl;
                else if (x == 0) cout << "������� ������� �� �������" << endl;
                else cout << "�� ������� ������ ���� � ������� ���� " << x*-1 << " �����" << endl;
                hero1[j].hp = hero1[j].hp + x;
                if (hero1[j].hp > hero1[j].hpm) hero1[j].hp = hero1[j].hpm;
                x = 0;
                enemy1[i].hp = enemy1[i].hp - x;
                hero1[j].exp = hero1[j].exp + 1;
                hero1[j].pred--;
                cout << "�� �������� 1 � �����" << endl;
            }
            else{
                if (zvyk == 1) Beep(500, 500);
               cout << "� ��� ��������� ���� �����������!" << endl;
               goto zan;
            }}
        else{
            if (zvyk == 1) Beep(500, 500);
            cout << "� ������� � ������ ������ ������������ �����������!" << endl;
               goto zan;
        }}
        else if (j == 7){
        if ((k != 10)&&(k != 20)&&(k != 30)&&(k != 40)&&(k != 50)&&(k != 60)&&(k != 70)&&(k != 80)&&(k != 90)&&(k != 100)&&(k != 101)){
            if (hero1[j].pred > 0){
                    if (panact == 0){
                cout << "*������� ����*" << endl;
                if (zvyk == 1) Beep(400,300);
                if (zvyk == 1) Beep(600,200);
                baff1 = 1;
                enemy1[i].hp = enemy1[i].hp - x;
                hero1[j].exp = hero1[j].exp + 1;
                hero1[j].pred--;
                cout << "�� �������� 1 � �����" << endl;
                    }
                    else {
                        if (zvyk == 1) Beep(500, 500);
                        cout << "�� ��� ������������ ������� ���� � ����� � ���� ������" << endl;
                        goto zan;
                    }
            }
            else{
                if (zvyk == 1) Beep(500, 500);
               cout << "� ��� ��������� ���� �����������!" << endl;
               goto zan;
            }}
        else{
            if (zvyk == 1) Beep(500, 500);
            cout << "� ������� � ������ ������ ������������ �����������!" << endl;
               goto zan;
        }}
        else if (j == 8){
        if ((k != 10)&&(k != 20)&&(k != 30)&&(k != 40)&&(k != 50)&&(k != 60)&&(k != 70)&&(k != 80)&&(k != 90)&&(k != 100)&&(k != 101)){
            if (hero1[j].pred > 0){
                cout << "*���� �����*" << endl;
                if (zvyk == 1) Beep(400,300);
                if (zvyk == 1) Beep(600,200);
                x = 6;
                cout << "�� ������� " << x << " �����" << endl;
                enemy1[i].hp = enemy1[i].hp - x;
                hero1[j].exp = hero1[j].exp + 10;
                hero1[j].pred--;
                cout << "�� �������� 10 � �����" << endl;
            }
            else{
                if (zvyk == 1) Beep(500, 500);
               cout << "� ��� ��������� ���� �����������!" << endl;
               goto zan;
            }}
        else{
            if (zvyk == 1) Beep(500, 500);
            cout << "� ������� � ������ ������ ������������ �����������!" << endl;
               goto zan;
        }}
        else if (j == 9){
        if ((k != 10)&&(k != 20)&&(k != 30)&&(k != 40)&&(k != 50)&&(k != 60)&&(k != 70)&&(k != 80)&&(k != 90)&&(k != 100)&&(k != 101)){
            if (hero1[j].pred > 0){
                cout << "*���� �����*" << endl;
                if (zvyk == 1) Beep(400,300);
                if (zvyk == 1) Beep(600,200);
                x = 100;
                enemy1[i].hp = enemy1[i].hp - x;
                cout << "�� ������� " << x << " �����" << endl;
                x = (rand()%(6 + 5)) - 5;
                hero1[j].hp = hero1[j].hp + x;
                if (hero1[j].hp > hero1[j].hpm) hero1[j].hp = hero1[j].hpm;
                if (x>0) cout << "�� �������� " << x << " ��������" << endl;
                else if (x == 0) cout << "������� ������� �� �������" << endl;
                else cout << "�� ������� ������ ���� � ������� ���� " << x*-1 << " �����" << endl;
                hero1[j].exp = hero1[j].exp + 1;
                hero1[j].pred--;
                cout << "�� �������� 1 � �����" << endl;
            }
            else{
                if (zvyk == 1) Beep(500, 500);
               cout << "� ��� ��������� ���� �����������!" << endl;
               goto zan;
            }}
        else{
            if (zvyk == 1) Beep(500, 500);
            cout << "� ������� � ������ ������ ������������ �����������!" << endl;
               goto zan;
        }}
        else if (j == 10){
        if ((k != 10)&&(k != 20)&&(k != 30)&&(k != 40)&&(k != 50)&&(k != 60)&&(k != 70)&&(k != 80)&&(k != 90)&&(k != 100)&&(k != 101)){
            if (hero1[j].pred > 0){
                cout << "*�������������*" << endl;
                if (zvyk == 1) Beep(400,300);
                if (zvyk == 1) Beep(600,200);
                j = 11;
                hero1[j].hp = hero1[j].hpm;
                cout << "�� ������������������ � ��������� � ����� ��������� �����" << endl;
            }
            else{
                if (zvyk == 1) Beep(500, 500);
               cout << "� ��� ��������� ���� �����������!" << endl;
               goto zan;
            }}
        else{
            if (zvyk == 1) Beep(500, 500);
            cout << "� ������� � ������ ������ ������������ �����������!" << endl;
               goto zan;
        }}
        else if (j == 11){
        if ((k != 10)&&(k != 20)&&(k != 30)&&(k != 40)&&(k != 50)&&(k != 60)&&(k != 70)&&(k != 80)&&(k != 90)&&(k != 100)&&(k != 101)){
            if (hero1[j].pred > 0){
                cout << "*�������������*" << endl;
                if (zvyk == 1) Beep(400,300);
                if (zvyk == 1) Beep(600,200);
                j = 10;
                hero1[j].hp = hero1[j].hpm;
                cout << "�� ������������������ � ��������� � ����� ��������" << endl;
            }
            else{
                if (zvyk == 1) Beep(500, 500);
               cout << "� ��� ��������� ���� �����������!" << endl;
               goto zan;
            }}
        else{
            if (zvyk == 1) Beep(500, 500);
            cout << "� ������� � ������ ������ ������������ �����������!" << endl;
               goto zan;
        }}
        else if (j == 19){
        if ((k != 10)&&(k != 20)&&(k != 30)&&(k != 40)&&(k != 50)&&(k != 60)&&(k != 70)&&(k != 80)&&(k != 90)&&(k != 100)&&(k != 101)){
            if (hero1[j].pred > 0){
                cout << "*������� ����*" << endl;
                if (zvyk == 1) Beep(400,300);
                if (zvyk == 1) Beep(600,200);
                hero1[j].hpm++;
                cout << "�� ��������� ��� ������������ �������� �� 1" << endl;
                hero1[j].exp = hero1[j].exp+2;
                hero1[j].pred--;
                cout << "�� �������� 2 � �����" << endl;
            }
            else{
                if (zvyk == 1) Beep(500, 500);
               cout << "� ��� ��������� ���� �����������!" << endl;
               goto zan;
            }}
        else{
            if (zvyk == 1) Beep(500, 500);
            cout << "� ������� � ������ ������ ������������ �����������!" << endl;
               goto zan;
        }}
        else if (j == 26){
        if ((k != 10)&&(k != 20)&&(k != 30)&&(k != 40)&&(k != 50)&&(k != 60)&&(k != 70)&&(k != 80)&&(k != 90)&&(k != 100)&&(k != 101)){
            if (hero1[j].pred > 0){
                cout << "*������� �����*" << endl;
                if (zvyk == 1) Beep(400,300);
                if (zvyk == 1) Beep(600,200);
                hero1[j].hpm++;
                cout << "�� ��������� ��� ������������ �������� �� 1" << endl;
                hero1[j].exp = hero1[j].exp+2;
                hero1[j].pred--;
                cout << "�� �������� 2 � �����" << endl;
            }
            else{
                if (zvyk == 1) Beep(500, 500);
               cout << "� ��� ��������� ���� �����������!" << endl;
               goto zan;
            }}
        else{
            if (zvyk == 1) Beep(500, 500);
            cout << "� ������� � ������ ������ ������������ �����������!" << endl;
               goto zan;
        }}
        else if (j == 20){
        if ((k != 10)&&(k != 20)&&(k != 30)&&(k != 40)&&(k != 50)&&(k != 60)&&(k != 70)&&(k != 80)&&(k != 90)&&(k != 100)&&(k != 101)){
            if (hero1[j].pred > 0){
                cout << "*���������� ��������*" << endl;
                if (zvyk == 1) Beep(400,300);
                if (zvyk == 1) Beep(600,200);
                hero1[j].hpm = hero1[j].hpm - 3;
                hero1[j].hp = hero1[j].hpm;
                hero1[j].atc1++;
                hero1[j].atc2++;
                hero1[j].atc12++;
                hero1[j].atc22++;
                hero1[j].pred--;
                cout << "�� �������� 1 �� ���� ����� ������" << endl;
                cout << "�� �������� -3 � ������������ ��������" << endl;
                cout << "�� ��������� ������������ ��������" << endl;
            }
            else{
                if (zvyk == 1) Beep(500, 500);
               cout << "� ��� ��������� ���� �����������!" << endl;
               goto zan;
            }}
        else{
            if (zvyk == 1) Beep(500, 500);
            cout << "� ������� � ������ ������ ������������ �����������!" << endl;
               goto zan;
        }}
        else if (j == 21){
        if ((k != 10)&&(k != 20)&&(k != 30)&&(k != 40)&&(k != 50)&&(k != 60)&&(k != 70)&&(k != 80)&&(k != 90)&&(k != 100)&&(k != 101)){
            if (hero1[j].pred > 0){
                cout << "*���������� ��������*" << endl;
                if (zvyk == 1) Beep(400,300);
                if (zvyk == 1) Beep(600,200);
                hero1[j].hpm++;
                hero1[j].hp = hero1[j].hpm;
                hero1[j].atc1++;
                hero1[j].atc2++;
                hero1[j].atc12++;
                hero1[j].atc22++;
                hero1[j].heal2++;
                nlvl=nlvl+5;
                hero1[j].pred--;
                cout << "�� �������� 1 �� ���� ���������������, ����� ������������ �������" << endl;
                cout << "�� ��������� �� 5 ���������� ����� �� ������ ������" << endl;
            }
            else{
                if (zvyk == 1) Beep(500, 500);
               cout << "� ��� ��������� ���� �����������!" << endl;
               goto zan;
            }}
        else{
            if (zvyk == 1) Beep(500, 500);
            cout << "� ������� � ������ ������ ������������ �����������!" << endl;
               goto zan;
        }}
        else if (j == 22){
        if ((k != 10)&&(k != 20)&&(k != 30)&&(k != 40)&&(k != 50)&&(k != 60)&&(k != 70)&&(k != 80)&&(k != 90)&&(k != 100)&&(k != 101)){
            if (hero1[j].pred > 0){
                cout << "*���������*" << endl;
                if (zvyk == 1) Beep(400,300);
                if (zvyk == 1) Beep(600,200);
                hero1[j].hpm++;
                hero1[j].atc1--;
                hero1[j].atc12--;
                hero1[j].exp++;
                hero1[j].pred--;
                cout << "�� �������� 1 � ������������� ��������" << endl;
                cout << "�� �������� -1 �� ���� ��������������� ������� ������" << endl;
                cout << "�� �������� 1 � �����" << endl;
            }
            else{
                if (zvyk == 1) Beep(500, 500);
               cout << "� ��� ��������� ���� �����������!" << endl;
               goto zan;
            }}
        else{
            if (zvyk == 1) Beep(500, 500);
            cout << "� ������� � ������ ������ ������������ �����������!" << endl;
               goto zan;
        }}
        else if (j == 23){
        if ((k != 10)&&(k != 20)&&(k != 30)&&(k != 40)&&(k != 50)&&(k != 60)&&(k != 70)&&(k != 80)&&(k != 90)&&(k != 100)&&(k != 101)){
            if (hero1[j].pred > 0){
                cout << "*������ ����������*" << endl;
                if (zvyk == 1) Beep(400,300);
                if (zvyk == 1) Beep(600,200);
                hero1[j].hpm--;
                if (hero1[j].hp > hero1[j].hpm) hero1[j].hp = hero1[j].hpm;
                hero1[j].atc1++;
                hero1[j].atc12++;
                hero1[j].pred--;
                cout << "�� �������� -1 � ������������� ��������" << endl;
                cout << "�� �������� 1 �� ���� ��������������� ������� ������" << endl;
            }
            else{
                if (zvyk == 1) Beep(500, 500);
               cout << "� ��� ��������� ���� �����������!" << endl;
               goto zan;
            }}
        else{
            if (zvyk == 1) Beep(500, 500);
            cout << "� ������� � ������ ������ ������������ �����������!" << endl;
               goto zan;
        }}
        else if (j == 24){
        if ((k != 10)&&(k != 20)&&(k != 30)&&(k != 40)&&(k != 50)&&(k != 60)&&(k != 70)&&(k != 80)&&(k != 90)&&(k != 100)&&(k != 101)){
            if (hero1[j].pred > 0){
                cout << "*������������� ��������������*" << endl;
                if (zvyk == 1) Beep(400,300);
                if (zvyk == 1) Beep(600,200);
                hero1[j].hpm++;
                hero1[j].exp++;
                cout << "�� �������� 1 � ������������� ��������" << endl;
                cout << "�� �������� 1 � �����" << endl;
                hero1[j].pred--;
            }
            else{
                if (zvyk == 1) Beep(500, 500);
               cout << "� ��� ��������� ���� �����������!" << endl;
               goto zan;
            }}
        else{
            if (zvyk == 1) Beep(500, 500);
            cout << "� ������� � ������ ������ ������������ �����������!" << endl;
               goto zan;
        }}
        else if (j == 25){
        if ((k != 10)&&(k != 20)&&(k != 30)&&(k != 40)&&(k != 50)&&(k != 60)&&(k != 70)&&(k != 80)&&(k != 90)&&(k != 100)&&(k != 101)){
            if (hero1[j].pred > 0){
                cout << "*��������� ��������� ���������*" << endl;
                if (zvyk == 1) Beep(400,300);
                if (zvyk == 1) Beep(600,200);
                cout << "��� ����� ��������� ��������� ";
                cout << "["; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "]"; Sleep(300);
                cout << " 100%" << endl;
                cout << "����� ��������" << endl;
                prog = (rand()%(15 - 0)) + 0;
                if (prog == 0){
                cout << "�������� ��������� \"�������������� �������� v 2.0\"" << endl;
                hero1[j].hp = hero1[j].hpm;
                if (hero1[j].hp > hero1[j].hpm) hero1[j].hp = hero1[j].hpm;
                cout << "��� ���������� ��������� ";
                cout << "["; Sleep(400);
                cout << "|"; Sleep(400);
                cout << "|"; Sleep(400);
                cout << "|"; Sleep(400);
                cout << "|"; Sleep(400);
                cout << "|"; Sleep(400);
                cout << "|"; Sleep(400);
                cout << "|"; Sleep(400);
                cout << "|"; Sleep(400);
                cout << "|"; Sleep(400);
                cout << "|"; Sleep(400);
                cout << "]"; Sleep(400);
                cout << " 100%" << endl;
                cout << "���������� ���������" << endl;
                cout << "�� ��������� ������������ ��������" << endl;
                }
                else if (prog == 1){
                cout << "�������� ��������� \"�������������� ��������\"" << endl;
                x = (rand()%(6 - 1)) + 1;
                hero1[j].hp = hero1[j].hpm;
                if (hero1[j].hp > hero1[j].hpm) hero1[j].hp = hero1[j].hpm;
                cout << "��� ���������� ��������� ";
                cout << "["; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "]"; Sleep(300);
                cout << " 100%" << endl;
                cout << "���������� ���������" << endl;
                cout << "�� ������������ " << x << " ��������" << endl;
                }
                else if (prog == 2){
                cout << "�������� ��������� \"��������� ��������\"" << endl;
                x = (rand()%(6 - 1)) + 1;
                hero1[j].hp = hero1[j].hp - x;
                if (hero1[j].hp < 0) hero1[j].hp = 0;
                cout << "��� ���������� ��������� ";
                cout << "["; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "]"; Sleep(300);
                cout << " 100%" << endl;
                cout << "���������� ���������" << endl;
                cout << "�� �������� ��� �������� �� " << x << " ������" << endl;
                }
                else if (prog == 3){
                cout << "�������� ��������� \"��������� ������������� ��������\"" << endl;
                x = (rand()%(3 - 1)) + 1;
                hero1[j].hpm = hero1[j].hpm - x;
                if (hero1[j].hpm < 0) hero1[j].hpm = 0;
                if (hero1[j].hp > hero1[j].hpm) hero1[j].hp = hero1[j].hpm;
                if (hero1[j].hp < 0) hero1[j].hp = 0;
                cout << "��� ���������� ��������� ";
                cout << "["; Sleep(400);
                cout << "|"; Sleep(400);
                cout << "|"; Sleep(400);
                cout << "|"; Sleep(400);
                cout << "|"; Sleep(400);
                cout << "|"; Sleep(400);
                cout << "|"; Sleep(400);
                cout << "|"; Sleep(400);
                cout << "|"; Sleep(400);
                cout << "|"; Sleep(400);
                cout << "|"; Sleep(400);
                cout << "]"; Sleep(400);
                cout << " 100%" << endl;
                cout << "���������� ���������" << endl;
                cout << "�� �������� ��� ������������ �������� �� " << x << " ������" << endl;
                }
                else if (prog == 4){
                cout << "�������� ��������� \"����������� �������\"" << endl;
                cout << "��� ���������� ��������� ";
                cout << "["; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "|"; Sleep(100);
                cout << "]"; Sleep(100);
                cout << " 100%" << endl;
                cout << "���������� ���������" << endl;
                cout << "������ �� ����������" << endl;
                }
                else if (prog == 5){
                cout << "�������� ��������� \"��������� ������������� ��������\"" << endl;
                x = (rand()%(3 - 1)) + 1;
                hero1[j].hpm = hero1[j].hpm + x;
                cout << "��� ���������� ��������� ";
                cout << "["; Sleep(500);
                cout << "|"; Sleep(500);
                cout << "|"; Sleep(500);
                cout << "|"; Sleep(500);
                cout << "|"; Sleep(500);
                cout << "|"; Sleep(500);
                cout << "|"; Sleep(500);
                cout << "|"; Sleep(500);
                cout << "|"; Sleep(500);
                cout << "|"; Sleep(500);
                cout << "|"; Sleep(500);
                cout << "]"; Sleep(500);
                cout << " 100%" << endl;
                cout << "���������� ���������" << endl;
                cout << "�� �������� ��� ������������ �������� �� " << x << " ������" << endl;
                }
                else if (prog == 6){
                cout << "�������� ��������� \"��������� ������������� �������� v 2.0\"" << endl;
                x = (rand()%(3 - 1)) + 1;
                hero1[j].hpm = hero1[j].hpm + x;
                hero1[j].hp = hero1[j].hpm;
                cout << "��� ���������� ��������� ";
                cout << "["; Sleep(600);
                cout << "|"; Sleep(600);
                cout << "|"; Sleep(600);
                cout << "|"; Sleep(600);
                cout << "|"; Sleep(600);
                cout << "|"; Sleep(600);
                cout << "|"; Sleep(600);
                cout << "|"; Sleep(600);
                cout << "|"; Sleep(600);
                cout << "|"; Sleep(600);
                cout << "|"; Sleep(600);
                cout << "]"; Sleep(600);
                cout << " 100%" << endl;
                cout << "���������� ���������" << endl;
                cout << "�� �������� ��� ������������ �������� �� " << x << " ������ � ��������� ������������ ���" << endl;
                }
                else if (prog == 7){
                cout << "�������� ��������� \"��������� ������������ ����� ������� ������\"" << endl;
                hero1[j].atc12++;
                cout << "��� ���������� ��������� ";
                cout << "["; Sleep(500);
                cout << "|"; Sleep(500);
                cout << "|"; Sleep(500);
                cout << "|"; Sleep(500);
                cout << "|"; Sleep(500);
                cout << "|"; Sleep(500);
                cout << "|"; Sleep(500);
                cout << "|"; Sleep(500);
                cout << "|"; Sleep(500);
                cout << "|"; Sleep(500);
                cout << "|"; Sleep(500);
                cout << "]"; Sleep(500);
                cout << " 100%" << endl;
                cout << "���������� ���������" << endl;
                cout << "�� �������� ������������ ����� ������� ������ �� 1" << endl;
                }
                else if (prog == 8){
                cout << "�������� ��������� \"�������� 2 ����� �����������\"" << endl;
                hero1[j].pred++;
                hero1[j].pred++;
                cout << "��� ���������� ��������� ";
                cout << "["; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "]"; Sleep(300);
                cout << " 100%" << endl;
                cout << "���������� ���������" << endl;
                cout << "�� �������� 2 ���� �����������" << endl;
                }
                else if (prog == 9){
                cout << "�������� ��������� \"�������� ���� ��������\"" << endl;
                cout << "��� ���������� ��������� ";
                cout << "["; Sleep(900);
                cout << "|"; Sleep(900);
                cout << "|"; Sleep(900);
                cout << "|"; Sleep(900);
                cout << "|"; Sleep(900);
                cout << "|"; Sleep(900);
                cout << "|"; Sleep(900);
                cout << "|"; Sleep(900);
                cout << "|"; Sleep(900);
                cout << "|"; Sleep(900);
                cout << "|"; Sleep(900);
                cout << "]"; Sleep(900);
                cout << " 100%" << endl;
                cout << "���������� ���������" << endl;
                cout << "������� ��� ��������: " << kod << endl;
                }
                else if (prog == 10){
                cout << "�������� ��������� \"����ff@# @#^*#\"" << endl;
                cout << "��� ���������� ��������� ";
                cout << "["; Sleep(600);
                cout << "|"; Sleep(500);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(300);
                cout << "|"; Sleep(900);
                cout << "|"; Sleep(900);
                cout << "|"; Sleep(900);
                cout << "|"; Sleep(2000);
                cout << "-"; Sleep(100);
                cout << "-"; Sleep(100);
                cout << "]"; Sleep(100);
                cout << " 80%" << endl;
                cout << "FATAL ERROR" << endl;
                cout << "���������� ��������" << endl;
                }
                else if (prog == 11){
                cout << "�������� ��������� \"��������� ���������� � ��������\"" << endl;
                cout << "��� ���������� ��������� ";
                cout << "["; Sleep(900);
                cout << "|"; Sleep(900);
                cout << "|"; Sleep(900);
                cout << "|"; Sleep(900);
                cout << "|"; Sleep(900);
                cout << "|"; Sleep(900);
                cout << "|"; Sleep(900);
                cout << "|"; Sleep(900);
                cout << "|"; Sleep(900);
                cout << "|"; Sleep(900);
                cout << "|"; Sleep(900);
                cout << "]"; Sleep(900);
                cout << " 100%" << endl;
                cout << "���������� ���������" << endl;
                cout << "���������� ������: " << endl;
                forstat(enemy1[i], i);
                }
                else if (prog == 12){
                cout << "�������� ��������� \"��������� ����������� ����� ������� ������\"" << endl;
                hero1[j].atc1--;
                cout << "��� ���������� ��������� ";
                cout << "["; Sleep(500);
                cout << "|"; Sleep(500);
                cout << "|"; Sleep(500);
                cout << "|"; Sleep(500);
                cout << "|"; Sleep(500);
                cout << "|"; Sleep(500);
                cout << "|"; Sleep(500);
                cout << "|"; Sleep(500);
                cout << "|"; Sleep(500);
                cout << "|"; Sleep(500);
                cout << "|"; Sleep(500);
                cout << "]"; Sleep(500);
                cout << " 100%" << endl;
                cout << "���������� ���������" << endl;
                cout << "�� �������� ����������� ����� ������� ������ �� 1" << endl;
                }
                else if (prog == 13){
                cout << "�������� ��������� \"��������� �����\"" << endl;
                x = (rand()%(9 - 2)) + 2;
                hero1[j].exp = hero1[j].exp + x;
                cout << "��� ���������� ��������� ";
                cout << "["; Sleep(600);
                cout << "|"; Sleep(600);
                cout << "|"; Sleep(600);
                cout << "|"; Sleep(600);
                cout << "|"; Sleep(600);
                cout << "|"; Sleep(600);
                cout << "|"; Sleep(600);
                cout << "|"; Sleep(600);
                cout << "|"; Sleep(600);
                cout << "|"; Sleep(600);
                cout << "|"; Sleep(600);
                cout << "]"; Sleep(600);
                cout << " 100%" << endl;
                cout << "���������� ���������" << endl;
                cout << "�� �������� " << x << " � �����" << endl;
                }
                else if (prog == 14){
                cout << "�������� ��������� \"���� � ����� ����� � ��������-������\"" << endl;
                cout << "��� ���������� ��������� ";
                cout << "["; Sleep(1000);
                cout << "|"; Sleep(1000);
                cout << "|"; Sleep(1000);
                cout << "|"; Sleep(1000);
                cout << "|"; Sleep(1000);
                cout << "|"; Sleep(1000);
                cout << "|"; Sleep(1000);
                cout << "|"; Sleep(1000);
                cout << "|"; Sleep(1000);
                cout << "|"; Sleep(1000);
                cout << "|"; Sleep(1000);
                cout << "]"; Sleep(1000);
                cout << " 100%" << endl;
                cout << "���������� ���������" << endl;
                cout << "�� ��������" << endl;
                }
                hero1[j].pred--;
            }
            else{
                if (zvyk == 1) Beep(500, 500);
               cout << "� ��� ��������� ���� �����������!" << endl;
               goto zan;
            }}
        else{
            if (zvyk == 1) Beep(500, 500);
            cout << "� ������� � ������ ������ ������������ �����������!" << endl;
               goto zan;
        }}
        else goto zan;
    }
    if (rhave == 1){
        hero1[j].hp++;
        if (zvyk == 1) Beep(200, 500);
        cout << "*������ �����-�������� ����� ��� �� 1 ��������*" << endl;
        enemy1[i].hp--;
        cout << "*������ �����-�������� ������� ����� �� 1 �����*" << endl;
    }
    if (estrel != 0){
        if (estrel == 1){
            hero1[j].hp++;
            if (hero1[j].hp > hero1[j].hpm) hero1[j].hp = hero1[j].hpm;
            if (zvyk == 1) Beep(200, 500);
            cout << "*������ ���������� �������� ��������������� ��� 1 ��������*" << endl;
        }
        if (estrel == 2){
            hero1[j].hp--;
            if (hero1[j].hp < 0) hero1[j].hp = 0;
            if (zvyk == 1) Beep(200, 500);
            cout << "*Ҹ���� ������ �������� � ��� 1 ��������*" << endl;
        }
        if (estrel == 3){
            enemy1[i].hp--;
            if (enemy1[i].hp < 0) enemy1[i].hp = 0;
            if (zvyk == 1) Beep(200, 500);
            cout << "*������� �������� ���� ������� ����� 1 �����*" << endl;
        }
        if (estrel == 4){
            enemy1[i].hp = enemy1[i].hp - 2;
            if (enemy1[i].hp < 0) enemy1[i].hp = 0;
            if (zvyk == 1) Beep(200, 500);
            cout << "*������� ������ � ����������� ������� ����� 2 �����*" << endl;
        }
        if (estrel == 5){
            hero1[j].hp = hero1[j].hp + 2;
            if (hero1[j].hp > hero1[j].hpm) hero1[j].hp = hero1[j].hpm;
            if (zvyk == 1) Beep(200, 500);
            cout << "*������ ������ ��������������� ��� 2 ��������*" << endl;
        }
        if (estrel == 6){
            hero1[j].hp = hero1[j].hp - 2;
            if (hero1[j].hp < 0) hero1[j].hp = 0;
            if (zvyk == 1) Beep(200, 500);
            cout << "*�������� � ������ �������� � ��� 2 ��������*" << endl;
        }
        if (estrel == 7){
            hero1[j].atc1--;
            if (zvyk == 1) Beep(200, 500);
            cout << "*�������� ����� �������� ���� ����������� ������ ����� �� 1*" << endl;
        }
        if (estrel == 8){
            hero1[j].atc2--;
            if (zvyk == 1) Beep(200, 500);
            cout << "*��� ��������� ��� �������� ���� ����������� ������� ����� �� 1*" << endl;
        }
        if (estrel == 10){
                if (zvyk == 1) Beep(200, 500);
            cout << "*������� ��������� ���������� ��� ���: " << kod << "*" << endl;
        }
        if (estrel == 11){
            hero1[j].atc1--;
            hero1[j].hp++;
            if (hero1[j].hp > hero1[j].hpm) hero1[j].hp = hero1[j].hpm;
        if (zvyk == 1) Beep(200, 500);
            cout << "*���������� ����� �������� ���� ����������� ������ ����� �� 1 � ��������������� 1 ��������*" << endl;
        }
        if (estrel == 12){
                if (zvyk == 1) Beep(200, 500);
            cout << "*���� ������ ����� ���������� � ���������� ��������:" << endl;
            forstat(enemy1[i], i);
        }
        if (estrel == 14){
            hero1[j].atc12 = hero1[j].atc1;
            hero1[j].atc22 = hero1[j].atc2;
        }
    }
    if (atcs == "5"){
        forstat(enemy1[i], i);
    }
    if (krov == 1){
          if (zvyk == 1) Beep(900, 100);
          if (zvyk == 1) Beep(800, 200);
          if (zvyk == 1) Beep(700, 300);
        cout << "*�� ����������� �� ������������*" << endl;
        hero1[j].hp--;
    }
    if (yad == 1){
          if (zvyk == 1) Beep(900, 100);
          if (zvyk == 1) Beep(800, 200);
          if (zvyk == 1) Beep(700, 300);
        cout << "*�� ����������� �� ���*" << endl;
        hero1[j].hp = hero1[j].hp - 2;
    }
    if (bol == 1){
          if (zvyk == 1) Beep(900, 100);
          if (zvyk == 1) Beep(800, 200);
          if (zvyk == 1) Beep(700, 300);
        cout << "*�� ����������� �� �������*" << endl;
        hero1[j].hp--;
    }
    if (hero1[j].hp > hero1[j].hpm) hero1[j].hp = hero1[j].hpm;
    if (enemy1[i].hp > enemy1[i].hpm) enemy1[i].hpm = enemy1[i].hp;
    if ((hero1[j].hp <= 0)&&(j == 24)){
        hero1[j].hpm = hero1[j].hpm - 3;
        hero1[j].hp = hero1[j].hpm;
        hero1[j].atc1--;
        hero1[j].atc2--;
        hero1[j].atc12--;
        hero1[j].atc22--;
        if (hero1[j].hpm < 0) hero1[j].hpm = 0;
        if (zvyk == 1) Beep(100, 400);
        if (zvyk == 1) Beep(300, 300);
        if (zvyk == 1) Beep(200, 500);
        cout << " |------------------------------------------------------------------------------------------------------------------------------|" << endl;
        cout << "�� ��������!" << endl;
    }
    if (hero1[j].hp <= 0){
            hero1[j].hp = 0;
            Sleep(1000);
            goto end1;
    }
    Sleep(1000);
    if (enemy1[i].hp > 0){
    cout << " |------------------------------------------------------------------------------------------------------------------------------|" << endl;
    allstat(hero1[j], enemy1[i]);
    cout << " |------------------------------------------------------------------------------------------------------------------------------|" << endl;
    Sleep(1000);
    cout << enemy1[i].name << " �������" << endl;
    cout << " |------------------------------------------------------------------------------------------------------------------------------|" << endl;
    Sleep(1000);
    gen = (rand()%(3 - 1)) + 1;
    if (gen == 1){
            if (zvyk == 1) Beep(700, 200);
            if (zvyk == 1) Beep(500, 400);
        if (i==0) cout << "*���� �������*" << endl;
        if (i==1) cout << "*���� �������*" << endl;
        if (i==2) cout << "*���� �����*" << endl;
        if (i==3) cout << "*���� ����� � �������*" << endl;
        if (i==4) cout << "*���� �������*" << endl;
        if (i==5) cout << "*���� ������*" << endl;
        if (i==6) cout << "*���� ��������*" << endl;
        if (i==7) cout << "*������ �������*" << endl;
        if (i==8) cout << "*���� ������� ������*" << endl;
        if (i==9) cout << "*������� �� ���������*" << endl;
        if (i==10) cout << "*��������� �����*" << endl;
        if (i==11) cout << "*������� ������*" << endl;
        if (i==14) cout << "*������ ����*" << endl;
        if (i==15) cout << "*��������� ������� �������� ������*" << endl;
        if (i==16) cout << "*���� �����*" << endl;
        if (i==17) cout << "*�����������*" << endl;
        if (i==19) cout << "*��������� � ����� �������*" << endl;
        if (i==20) cout << "*���� ������*" << endl;
        if (i==21) cout << "*���� �������*" << endl;
        if (i==22) cout << "*���� �������*" << endl;
        if (i==23) cout << "*���� ������*" << endl;
        if (i==24) cout << "*���� �������� �����*" << endl;
        if (i==25) cout << "*������ ��� ��������*" << endl;
        if (i==26) cout << "*������ ����� �����*" << endl;
        if (i==27) cout << "*����������� ��������*" << endl;
        if (i==28) cout << "*������ ����� ��������*" << endl;
        if (i==29) cout << "*���� ������*" << endl;
        if (i==30) cout << "*���� ������*" << endl;
        if (i==31) cout << "*���� ������*" << endl;
        if (i==33) cout << "*�����������*" << endl;
        if (i==35) cout << "*������ ������ ���������*" << endl;
        if (i==39) cout << "*���� ������������� ������*" << endl;
        if (i==40) cout << "*���� ������������� ������� ������*" << endl;
        if (i==41) cout << "*���� �����*" << endl;
        if (i==42) cout << "*������� ��������� ������ ����������*" << endl;
        if (i==43) cout << "*����� ��������*" << endl;
        if (i==44) cout << "*������� ������� �� ����*" << endl;
        if (i==45) cout << "*���� ��������������*" << endl;
        if (i==46) cout << "*���� �������*" << endl;
        if (i==47) cout << "*���� ������������� ������ ������� ������*" << endl;
        if (i==48) cout << "*���� ������������� �������*" << endl;
        if (i==49) cout << "*���� ��������*" << endl;
        if (i==50) cout << "*����� ��������� ��������� ����� � ��������*" << endl;
        if (i==51) cout << "*��������� ��������� �� �������*" << endl;
        if (i==52) cout << "*��������� ��������� �� ���������*" << endl;
        if (i==53) cout << "*���� ������� �������*" << endl;
        if (i==54) cout << "*���������� ���� �����*" << endl;
        if (i==99) cout << "*��� ��������*" << endl;
        if (i==98) cout << "*���� �������� �������*" << endl;
        if (i==97) cout << "*��������� ������*" << endl;
        if (i==96) cout << "*����� ����*" << endl;
        if (i==95) cout << "*������� ������*" << endl;
        if (i==94) cout << "*\"������...\"*" << endl;
        if (i==93) cout << "*���������� ��������*" << endl;
        if (i==92) cout << "*������� �����*" << endl;
        if (i==91) cout << "*���� �����*" << endl;
        if (i==90) cout << "*\"�� ��Ш��, " << hero1[j].name << "!\"*" << endl;
        if (i==89) cout << "[�����]" << endl;
        if (i==100) cout << "*���� ������������� �������*" << endl;
        if (i==101) cout << "*���� ������������� ��������*" << endl;
        if (i==102) cout << "*���� ������ �������*" << endl;
        if (i==103) cout << "*���� ������������� ��������*" << endl;
        if (i==104) cout << "*���� �������� �����*" << endl;
        if (i==105) cout << "*����������� ����*" << endl;
        if (i==106) cout << "*���� �������� ���������*" << endl;
        if (i==107) cout << "*���� ������ � �������*" << endl;
        if (i==108) cout << "*���� �����*" << endl;
        if (i==109) cout << "*�� ������ ������*" << endl;
        if (i==110) cout << "*���� �������*" << endl;
        if (i==111) cout << "*���� ���������� ������*" << endl;
        if (i==112) cout << "*������� �����*" << endl;
        if (i==113) cout << "*���� �������*" << endl;
        if (i==114) cout << "*������� �����*" << endl;
        if (i==150) cout << "*���� �����*" << endl;
        if (i==151) cout << "*���� �������*" << endl;
        if (i==152) cout << "*���� ��������� ��������*" << endl;
        if (i==153) cout << "*���� �������*" << endl;
        if (i==154) cout << "*���� ����������*" << endl;
        if (i==155) cout << "*���� ��������� ��������*" << endl;
        if (i==156) cout << "*���� ������*" << endl;
        if (i==157) cout << "*���� ��������� �����*" << endl;
        if (i==158) cout << "*����*" << endl;
        if (i==159) cout << "*���� ��������*" << endl;
        if (i==160) cout << "*������� �� ���������*" << endl;
        if (i==200) cout << "*���� �������*" << endl;
        if (i==300) cout << "*���� �����*" << endl;
        if (i==301) cout << "*������� �� ���������*" << endl;
        if (i==302) cout << "*����������� ���� �� ��������*" << endl;
        if (i==303) cout << "*������ �������*" << endl;
        if (i==304) cout << "*������ �������*" << endl;
        if (i==305) cout << "*������� �� ���������*" << endl;
        if (i==306) cout << "*���� �������*" << endl;
        if (i==307) cout << "*���� ���������*" << endl;
        if (i==308) cout << "*������ �������*" << endl;
        if (i==309) cout << "*������ ����� �����������*" << endl;
        if (i==310) cout << "*���� �������*" << endl;
        if (i==311) cout << "*���� �����*" << endl;
        if (i==312) cout << "*���� �������*" << endl;
        if (i==313) cout << "*���� ����� � �������*" << endl;
        if (i==314) cout << "*�����������*" << endl;
        if (i==315) cout << "*��������� � ������*" << endl;
        if (i==316) cout << "*���� ������ �������*" << endl;
        if (i==317) cout << "*������������� ������� ���������� �� ���*" << endl;
        if (i==318) cout << "*�����������*" << endl;
        if (i==319) cout << "*������������ �����*" << endl;
        if (i==320) cout << "*������ ���� �����*" << endl;
        if (i==321) cout << "*�����������*" << endl;
        if (i==322) cout << "*���� �����*" << endl;
        if (i==323) cout << "*���� �����-������*" << endl;
        if (i==324) cout << "*���� �������*" << endl;
        if (i==325) cout << "*�������*" << endl;
        if (i==326) cout << "*���� � �������*" << endl;
        if (i==327) cout << "*���� ��������*" << endl;
        if (i==328) cout << "*���� ������*" << endl;
        if (i==329) cout << "*Ƹ���� ��������*" << endl;
        if ((i==330)||(i==331)||(i==332)||(i==333)||(i==334)) cout << "*���� ���������� �������*" << endl;
        if (i==335) cout << "*�����������*" << endl;
        if (i==336) cout << "*������ ������*" << endl;
        if (i==337) cout << "*���� �������� �������*" << endl;
        if (i==338) cout << "*���� �������� �����*" << endl;
        if (i==339) cout << "*�����������*" << endl;
        if (i==340) cout << "*����*" << endl;
        if (i==341) cout << "*���� ��������*" << endl;
        if (i==342) cout << "*���� ������� � ��������*" << endl;
        if (i==343) cout << "*���*" << endl;
        if (i==344) cout << "*������� �� ���������*" << endl;
        if (i==345) cout << "*�����������*" << endl;
        if (i==346) cout << "*������� �� ���������*" << endl;
        if (i==347) cout << "*������ ������� �� �������*" << endl;
        if (i==348) cout << "*������ ��������*" << endl;
        if (i==349) cout << "*���� ���������*" << endl;
        if (i==350) cout << "*������ ����*" << endl;
        if (i==351) cout << "*���� �������*" << endl;
        if (i==352) cout << "*�����������*" << endl;
        if (i==353) cout << "*���� �������*" << endl;
        if (i==354) cout << "*���� �������� ��������*" << endl;
        if (i==355) cout << "*������ ����� ������ �������*" << endl;
        if (i==356) cout << "*������ ����� �����*" << endl;
        if (i==357) cout << "*���� ��������� �������*" << endl;
        if (i==358) cout << "*�����������*" << endl;
        if (i==359) cout << "*����*" << endl;
        if ((i==360)||(i==361)||(i==362)||(i==363)||(i==366)||(i==368)) cout << "*�����������*" << endl;
        if (i==364) cout << "*������ ���� ���������� �����*" << endl;
        if (i==365) cout << "*���� ���������� �������*" << endl;
        if (i==367) cout << "*���� �������� �������*" << endl;
        if (i==369) cout << "*���� ���������� ������� �� ��������� ������*" << endl;
        if (i==370) cout << "*���� ����� �������*" << endl;
        if (i==371) cout << "*���� ���������*" << endl;
        if (i==372) cout << "*���������� ����� �������*" << endl;
        if (i==373) cout << "*���� ��������� ���*" << endl;
        if (i==374) cout << "*���� ���������*" << endl;
        if (i==375) cout << "*���� ����� �������*" << endl;
        if (i==376) cout << "*��������������*" << endl;
        if (i==377) cout << "*�����������*" << endl;
        if (i==378) cout << "*������������� ������ ���������� �� ���*" << endl;
        if (i==379) cout << "*���� ����� � �������*" << endl;
        if (i==380) cout << "*���*" << endl;
        if (i==381) cout << "*������ ���*" << endl;
        if (i==382) cout << "*����� ����*" << endl;
        if (i==383) cout << "*������ ��� � ����*" << endl;
        if (i==384) cout << "*���� �������� �������*" << endl;
        if (i==385) cout << "*������ ��������� �������� �����*" << endl;
        if (i==386) cout << "*������ ��� � ������� ������*" << endl;
        if (i==387) cout << "*�������� ����*" << endl;
        if (i==388) cout << "*���� ������� ��������*" << endl;
        if (i==389) cout << "*��������� ������� ������� ���������� ����*" << endl;
        if (i==390) cout << "*���� ���������� ������*" << endl;
        if (i==391) cout << "*��������� ��������� �� ���������*" << endl;
        if (i==392) cout << "*0000*" << endl;
        if (i==393) cout << "*���� �����*" << endl;
        if (i==394) cout << "*�����������*" << endl;
        if (i==395) cout << "*����*" << endl;
        if (i==396) cout << "*˸���� ���� ��������� �������*" << endl;
        if (i==397) cout << "*������ ����� ������ �����*" << endl;
        if (i==398) cout << "*��� ������� ��������*" << endl;
        if (i==399) cout << "*���� ������������� �����*" << endl;
        if (i==411) cout << "*������ ������������� �������*" << endl;
        if (i==410) cout << "*���� ��������������� �������*" << endl;
        if (i==409) cout << "*������� �� ������� ����*" << endl;
        if (i==408) cout << "*�������������� ������*" << endl;
        if (i==407) cout << "*������ ������*" << endl;
        if (i==406) cout << "*������ �������*" << endl;
        if (i==405) cout << "*��� ������� � ��� ������� �������� �����*" << endl;
        if (i==404) cout << "*�����������*" << endl;
        if (i==403) cout << "*���� ��������� ����������� �������*" << endl;
        if (i==402) cout << "*������ ������� �������� �����*" << endl;
        if (i==401) cout << "*�������� �� ����������� ��������*" << endl;
        if (i==88) cout << "*���� � �������*" << endl;
        if (i==87) cout << "*���� �������*" << endl;
        if (i==12){ cout << "*������ ����� ����*" << endl;
        if (zvyk ==1){
          Beep (800,800);
          Beep (600,800);
        }
            if (hero1[j].atc1>0) hero1[j].atc1--;
            if (hero1[j].atc12>0) hero1[j].atc12--;
        }
        if (i==13) cout << "*���� �������*" << endl;
        if (i==18){ cout << "*������ �����*" << endl;
        if (hero1[j].atc1>0) hero1[j].atc1--;
        if (hero1[j].atc12>0) hero1[j].atc12--;
        if (hero1[j].atc2>0) hero1[j].atc2--;
        if (hero1[j].atc22>0) hero1[j].atc22--;
        if (hero1[j].heal>0) hero1[j].heal--;
        if (hero1[j].heal2>0) hero1[j].heal2--;
        }
        x = (rand()%(enemy1[i].atc12+1 - enemy1[i].atc1)) + enemy1[i].atc1;
        if ((i==32)&&(x > 0)){
                cout << "*�������� �����*" << endl;
                if (zvyk ==1){
                  Beep (800,800);
                  Beep (600,800);
                }
                cout << "*� ���� ����� �������� ��!*" << endl;
                yad = 1;
        }
        if ((i==34)&&(x > 0)){
                cout << "*���������*" << endl;
                if (zvyk ==1){
                  Beep (800,800);
                  Beep (600,800);
                }
                cout << "*�� ����������� � �������*" << endl;
                bol = 1;
        }
        if ((i==36)&&(x > 0)){
                cout << "*���� ����� ����� ��� ��������*" << endl;
                if (zvyk ==1){
                  Beep (800,800);
                  Beep (600,800);
                }
                cout << "*�� ��������� ������!*" << endl;
                krov = 1;
        }
        if ((i==37)&&(x > 0)){
                cout << "*����� ������ ������ ��� ��������*" << endl;
                if (zvyk ==1){
                  Beep (800,800);
                  Beep (600,800);
                }
                cout << "*�� ��������� ������!*" << endl;
                cout << "*� ���� ����� �������� ��!*" << endl;
                krov = 1;
                yad = 1;
        }
        if ((i==38)&&(x > 0)){
                cout << "*������ ���� �����*" << endl;
                cout << "*�� ��������� ������!*" << endl;
                cout << "*� ���� ����� �������� ��!*" << endl;
                if (zvyk ==1){
                  Beep (800,800);
                  Beep (600,800);
                }
                cout << "*�� ����������� � �������*" << endl;
                krov = 1;
                yad = 1;
                bol = 1;
        }
        if (panact == 1){
            x = 0;
            panact = 0;
        }
        if (panact2 == 1){
            x = 1;
        }
        if (x>0) cout << "��� ������� " << x << " �����" << endl;
        else if (x == 0) cout << "����� ���������� �� �������" << endl;
        else cout << "��� �������� " << x*-1 << " ��������" << endl;
    }
    if (gen == 2){
            if (zvyk == 1) Beep(400, 200);
            if (zvyk == 1) Beep(200, 400);
        if (i==0) cout << "*����*" << endl;
        if (i==1) cout << "*���� ������*" << endl;
        if (i==2) cout << "*������� ����*" << endl;
        if (i==3) cout << "*���� ����� ������ � �������*" << endl;
        if (i==4) cout << "*������ ����� ��������*" << endl;
        if (i==6) cout << "*���� �����*" << endl;
        if (i==7) cout << "*�������*" << endl;
        if (i==8) cout << "*���� ������*" << endl;
        if (i==9) cout << "*������� �� ����������*" << endl;
        if (i==10) cout << "*��������� ������*" << endl;
        if (i==11) cout << "*����������� �����*" << endl;
        if (i==14) cout << "*������� ����*" << endl;
        if (i==15) cout << "*����� ������� �������� ������*" << endl;
        if (i==17) cout << "*�������� �����������*" << endl;
        if (i==19) cout << "*��������� � ������ �������*" << endl;
        if (i==20) cout << "*���� �������*" << endl;
        if (i==21) cout << "*������� �������*" << endl;
        if (i==22) cout << "*���� ����� ��������*" << endl;
        if (i==23) cout << "*���� �������� ��������*" << endl;
        if (i==24) cout << "*�������� �������*" << endl;
        if (i==25) cout << "*������� ��� ��������*" << endl;
        if (i==26) cout << "*������ ����� �����*" << endl;
        if (i==27) cout << "*����������� ����*" << endl;
        if (i==28) cout << "*������ ����� ��������*" << endl;
        if (i==29) cout << "*���� ������*" << endl;
        if (i==35) cout << "*���� ���������� ������ �� �����*" << endl;
        if (i==39) cout << "*������� �� ����-���������*" << endl;
        if (i==40) cout << "*������� �� ����-�����*" << endl;
        if (i==41) cout << "*������ ���� �����*" << endl;
        if (i==42) cout << "*������ ����������*" << endl;
        if (i==43) cout << "*������� ����� ��������*" << endl;
        if (i==44) cout << "*������� ��������� � ����*" << endl;
        if (i==46) cout << "*���� ������*" << endl;
        if (i==47) cout << "*������� �� ������ ����-�����*" << endl;
        if (i==48) cout << "*������ ���� ������*" << endl;
        if (i==49) cout << "*���� �����*" << endl;
        if (i==50) cout << "*����� ������� ��������� ����� � ��������*" << endl;
        if (i==51) cout << "*����� ��������� �� �������*" << endl;
        if (i==52) cout << "*����� ��������� �� ���������*" << endl;
        if (i==33) cout << "*�������� �����������*" << endl;
        if (i==53) cout << "*����� �������� ��������*" << endl;
        if (i==54) cout << "*���� �����*" << endl;
        if (i==99) cout << "*��� �������� �����*" << endl;
        if (i==98) cout << "*������ �����*" << endl;
        if (i==97) cout << "*���� ������� ����*" << endl;
        if (i==96) cout << "*������������� ����� ����*" << endl;
        if (i==94) cout << "*\"������...\"*" << endl;
        if (i==93) cout << "*������ �����*" << endl;
        if (i==92) cout << "*����� ������� �����*" << endl;
        if (i==91) cout << "*���������*" << endl;
        if (i==90) cout << "*\"���� �� �������� ����, " << hero1[j].name << "!\"*" << endl;
        if (i==100) cout << "*������� ����*" << endl;
        if (i==101) cout << "*����� ������������� ��������*" << endl;
        if (i==102) cout << "*���� ������ ������ ������ �� ��������*" << endl;
        if (i==103) cout << "*���� �������������� ���������*" << endl;
        if (i==104) cout << "*���� �������*" << endl;
        if (i==105) cout << "*����������� ����������� ����*" << endl;
        if (i==108) cout << "*���� �����*" << endl;
        if (i==109) cout << "*������ ������*" << endl;
        if (i==110) cout << "*���� �����-�����*" << endl;
        if (i==113) cout << "*���� ��������*" << endl;
        if (i==114) cout << "*������ ������� �����*" << endl;
        if (i==150) cout << "*���� �����*" << endl;
        if (i==151) cout << "*���� ��������*" << endl;
        if (i==152) cout << "*������� �� ��������*" << endl;
        if (i==153) cout << "*���� ������*" << endl;
        if (i==154) cout << "*���� ����������� �����*" << endl;
        if (i==155) cout << "*���������� � ������������� ���������� �� ���*" << endl;
        if (i==156) cout << "*���� �������*" << endl;
        if (i==157) cout << "*������� ���� ��������� �����*" << endl;
        if (i==158) cout << "*������� ����*" << endl;
        if (i==159) cout << "*���� ������� �����*" << endl;
        if (i==160) cout << "*���� ������*" << endl;
        if (i==200) cout << "*���� �������*" << endl;
        if (i==300) cout << "*����� ������*" << endl;
        if (i==301) cout << "*������� �� ��������*" << endl;
        if (i==302) cout << "*���� � ����*" << endl;
        if (i==303) cout << "*���� ���������� ������*" << endl;
        if (i==304) cout << "*������ �������*" << endl;
        if (i==305) cout << "*������� �� ��������*" << endl;
        if (i==306) cout << "*���� ��������*" << endl;
        if (i==307) cout << "*���� ����� ����������*" << endl;
        if (i==308) cout << "*������� �� ����*" << endl;
        if (i==309) cout << "*������� ����� �����������*" << endl;
        if (i==310) cout << "*����� ��������*" << endl;
        if (i==311) cout << "*����*" << endl;
        if (i==312) cout << "*���� �������*" << endl;
        if (i==313) cout << "*���� ����� ������ � �������*" << endl;
        if (i==314) cout << "*�������� �����������*" << endl;
        if (i==315) cout << "*��������� � ������*" << endl;
        if (i==316) cout << "*���� ������*" << endl;
        if (i==317) cout << "*������������� ���������� �� ���*" << endl;
        if (i==318) cout << "*�������� �����������*" << endl;
        if (i==319) cout << "*���� ��������� �����*" << endl;
        if (i==320) cout << "*������ ���� �����*" << endl;
        if (i==321) cout << "*�������� �����������*" << endl;
        if (i==322) cout << "*���� �����*" << endl;
        if (i==323) cout << "*������� �� ��������*" << endl;
        if (i==324) cout << "*������� ���� �������*" << endl;
        if (i==325) cout << "*������ �������*" << endl;
        if (i==326) cout << "*������ ���� � �������*" << endl;
        if (i==327) cout << "*������� �� ����*" << endl;
        if (i==328) cout << "*������� ���� ������*" << endl;
        if (i==329) cout << "*�������� ����� ��������*" << endl;
        if ((i==330)||(i==331)||(i==332)||(i==333)||(i==334)) cout << "*���� ���������� �������*" << endl;
        if (i==335) cout << "*�������� �����������*" << endl;
        if (i==336) cout << "*������� ������ ������*" << endl;
        if (i==337) cout << "*������� ���� �������� �������*" << endl;
        if (i==338) cout << "*������� ���� �������� �����*" << endl;
        if (i==339) cout << "*�������� �����������*" << endl;
        if (i==340) cout << "*������� ����*" << endl;
        if (i==341) cout << "*�������� �� ��������*" << endl;
        if (i==342) cout << "*���� ��������������*" << endl;
        if (i==343) cout << "*������������ ���*" << endl;
        if (i==344) cout << "*������� �� ��������*" << endl;
        if (i==345) cout << "*�������� �����������*" << endl;
        if (i==346) cout << "*������� �� ��������*" << endl;
        if (i==347) cout << "*������� �� �������*" << endl;
        if (i==348) cout << "*�������� �� �� ��������" << endl;
        if (i==349) cout << "*���� ������*" << endl;
        if (i==350) cout << "*������� ����*" << endl;
        if (i==351) cout << "*����*" << endl;
        if (i==352) cout << "*�������� �����������*" << endl;
        if (i==353) cout << "*����� �������*" << endl;
        if (i==354) cout << "*���� ������� �������� �����*" << endl;
        if (i==355) cout << "*����� ������ �������*" << endl;
        if (i==356) cout << "*����� �����*" << endl;
        if (i==357) cout << "*���� �������� ������� �����*" << endl;
        if (i==358) cout << "*�������� �����������*" << endl;
        if (i==359) cout << "*������� ����*" << endl;
        if ((i==360)||(i==361)||(i==362)||(i==363)||(i==366)||(i==368)) cout << "*�������� �����������*" << endl;
        if (i==364) cout << "*���� ���������� �����*" << endl;
        if (i==365) cout << "*���� �������*" << endl;
        if (i==367) cout << "*���� �������� �����*" << endl;
        if (i==369) cout << "*���� ������� ������� �� ��������� ������*" << endl;
        if (i==370) cout << "*���� ������ ��������*" << endl;
        if (i==371) cout << "*������� ����� ����� �� �����*" << endl;
        if (i==372) cout << "*���������� ����� �������*" << endl;
        if (i==373) cout << "*���� ��������� ���*" << endl;
        if (i==374) cout << "*���� ����� ����������*" << endl;
        if (i==375) cout << "*���� ������ �������*" << endl;
        if (i==376) cout << "*������� ��������������*" << endl;
        if (i==377) cout << "*�������� �����������*" << endl;
        if (i==378) cout << "*������������� �������� ������ ���������� �� ���*" << endl;
        if (i==379) cout << "*���� �������*" << endl;
        if (i==380) cout << "*������� ���*" << endl;
        if (i==381) cout << "*���*" << endl;
        if (i==382) cout << "*����� ����*" << endl;
        if (i==383) cout << "*��� � ����*" << endl;
        if (i==384) cout << "*���� ��������� ��������*" << endl;
        if (i==385) cout << "*������ �������� �����*" << endl;
        if (i==386) cout << "*��� � ������� ������*" << endl;
        if (i==387) cout << "*������� �������� ����*" << endl;
        if (i==388) cout << "*������� �� �������� �����*" << endl;
        if (i==389) cout << "*����� ������� ������� ���������� ����*" << endl;
        if (i==390) cout << "*������� ����*" << endl;
        if (i==391) cout << "*����� ��������� �� ���������*" << endl;
        if (i==392) cout << "*0001*" << endl;
        if (i==393) cout << "*������� ���� �����*" << endl;
        if (i==394) cout << "*�������� �����������*" << endl;
        if (i==395) cout << "*������� ����*" << endl;
        if (i==396) cout << "*���� ��������� �������*" << endl;
        if (i==397) cout << "*����� ������ �����*" << endl;
        if (i==398) cout << "*������� ��� ������� ��������*" << endl;
        if (i==399) cout << "*���� ������������ �������*" << endl;
        if (i==411) cout << "*������ ����� ������������� �������*" << endl;
        if (i==410) cout << "*���� �������������*" << endl;
        if (i==409) cout << "*��������� ���� � ��� ����� �� ���*" << endl;
        if (i==408) cout << "*���� � �������*" << endl;
        if (i==407) cout << "*���� �� ������*" << endl;
        if (i==406) cout << "*������� �� ���*" << endl;
        if (i==405) cout << "*��� ���� ��� �������� �������*" << endl;
        if (i==404) cout << "*�������� �����������*" << endl;
        if (i==403) cout << "*����� ��������� ����������� �������*" << endl;
        if (i==402) cout << "*���� �������� �������������*" << endl;
        if (i==401) cout << "*��������� ������������*" << endl;
        if (i==89) cout << "[�����]" << endl;
        if (i==88) cout << "*���� ��������� ������*" << endl;
        if (i==87) cout << "*���� �������*" << endl;
        if (i==12){ cout << "*������� ����� ����*" << endl;
        if (zvyk ==1){
          Beep (800,800);
          Beep (600,800);
        }
            if (hero1[j].atc2>0) hero1[j].atc2--;
            if (hero1[j].atc22>0) hero1[j].atc22--;
        }
        if (i==13) cout << "*���� ������� � �������*" << endl;
        if (i==18){ cout << "*������� �����*" << endl;
        if (zvyk ==1){
          Beep (800,800);
          Beep (600,800);
        }
            if (hero1[j].atc1>0) hero1[j].atc1--;
            if (hero1[j].atc12>0) hero1[j].atc12--;
            if (hero1[j].atc2>0) hero1[j].atc2--;
            if (hero1[j].atc22>0) hero1[j].atc22--;
            if (hero1[j].heal>0) hero1[j].heal--;
            if (hero1[j].heal2>0) hero1[j].heal2--;
        }
        x = (rand()%(enemy1[i].atc22+1 - enemy1[i].atc2)) + enemy1[i].atc2;
        if ((i==112)&&(x > 0)){
                cout << "*������� �������� �����*" << endl;
                if (zvyk ==1){
                    Beep (800,200);
                    Beep (800,200);
                }
                cout << "*� ���� ����� �������� ��!*" << endl;
                yad = 1;
        }
        if (i==111){
            x = (rand()%(4 - 2)) + 2;
            enemy1[i].hp = enemy1[i].hp + x;
            if (enemy1[i].hp > enemy1[i].hpm) enemy1[i].hp = enemy1[i].hpm;
            if (zvyk ==1){
                Beep(400, 80);
                Beep(600, 80);
                Beep(400, 80);
                Beep(600, 80);
            }
            cout << enemy1[i].name << " ������� ���� � ����������� ���� " << x << " ��������" << endl;
        }
        if ((i==107)&&(x > 0)){
                cout << "*���� ������ � ��������� �������*" << endl;
                if (zvyk ==1){
                    Beep (800,200);
                    Beep (800,200);
                }
                cout << "*� ���� ����� �������� ��!*" << endl;
                yad = 1;
        }
        if ((i==106)&&(x > 0)){
                cout << "*�������� ����� �������� ���������*" << endl;
                if (zvyk ==1){
                    Beep (800,200);
                    Beep (800,200);
                }
                cout << "*�� ��������� ������!*" << endl;
                krov = 1;
        }
        if ((i==5)&&(x > 0)){
                cout << "*�������� ����*" << endl;
                if (zvyk ==1){
                    Beep (800,200);
                    Beep (800,200);
                }
                cout << "*� ���� ����� �������� ��!*" << endl;
                yad = 1;
        }
        if ((i==16)&&(x > 0)){
            cout << "*������� ���� �����*" << endl;
            if (zvyk ==1){
                    Beep (800,200);
                    Beep (800,200);
                }
            cout << "*�� ��������� ������!*" << endl;
            krov = 1;
        }
        if ((i==30)&&(x > 0)){
            cout << "*���������� ������*" << endl;
            if (zvyk ==1){
                    Beep (800,200);
                    Beep (800,200);
                }
            cout << "*�� ��������� ������!*" << endl;
            krov = 1;
        }
        if ((i==31)&&(x > 0)){
                cout << "*���������� ����*" << endl;
                if (zvyk ==1){
                    Beep (800,200);
                    Beep (800,200);
                }
                cout << "*�� ����������� � �������*" << endl;
                bol = 1;
        }
        if ((i==32)&&(x > 0)){
                cout << "*������� �������� �����*" << endl;
                if (zvyk ==1){
                    Beep (800,200);
                    Beep (800,200);
                }
                cout << "*� ���� ����� �������� ��!*" << endl;
                yad = 1;
        }
        if ((i==34)&&(x > 0)){
                cout << "*���������*" << endl;
                if (zvyk ==1){
                    Beep (800,200);
                    Beep (800,200);
                }
                cout << "*�� ����������� � �������*" << endl;
                bol = 1;
        }
        if ((i==36)&&(x > 0)){
                cout << "*���� ������ ����� ��� ��������*" << endl;
                if (zvyk ==1){
                    Beep (800,200);
                    Beep (800,200);
                }
                cout << "*� ���� ����� �������� ��!*" << endl;
                yad = 1;
        }
        if ((i==37)&&(x > 0)){
                cout << "*������� ����� ������ ������ ��� ��������*" << endl;
                if (zvyk ==1){
                    Beep (800,200);
                    Beep (800,200);
                }
                cout << "*�� ��������� ������!*" << endl;
                cout << "*� ���� ����� �������� ��!*" << endl;
                krov = 1;
                yad = 1;
        }
        if ((i==38)&&(x > 0)){
                cout << "*������� ���� �����*" << endl;
                if (zvyk ==1){
                    Beep (800,200);
                    Beep (800,200);
                }
                cout << "*�� ��������� ������!*" << endl;
                cout << "*� ���� ����� �������� ��!*" << endl;
                cout << "*�� ����������� � �������*" << endl;
                krov = 1;
                yad = 1;
                bol = 1;
        }
        if ((i==45)&&(x > 0)){
                cout << "*����� ����������*" << endl;
                if (zvyk ==1){
                    Beep (800,200);
                    Beep (800,200);
                }
                cout << "*�� ��������� ������!*" << endl;
                krov = 1;
        }
        if ((i==95)&&(x > 0)){
                cout << "*��������� ������� ������*" << endl;
                if (zvyk ==1){
                    Beep (800,200);
                    Beep (800,200);
                }
                cout << "*�� ��������� ������!*" << endl;
                krov = 1;
        }
        if (panact == 1){
            x = 0;
            panact = 0;
        }
        if (panact2 == 1){
            x = 1;
        }
        if (x>0) cout << "��� ������� " << x << " �����" << endl;
        else if (x == 0) cout << "����� ���������� �� �������" << endl;
        else cout << "��� �������� " << x*-1 << " ��������" << endl;
        if (hero1[j].hp > hero1[j].hpm) hero1[j].hp = hero1[j].hpm;

    }
    if (i==26){
        enemy1[i].hp = enemy1[i].hp + x;
        if (enemy1[i].hp > enemy1[i].hpm) enemy1[i].hp = enemy1[i].hpm;
        if (zvyk ==1){
            Beep (150,500);
            Beep (600,200);
        }
        cout << enemy1[i].name << " ����������� ���� " << x << " ��������" << endl;
        }
    if (i==27){
        enemy1[i].hp = enemy1[i].hp + x;
        if (enemy1[i].hp > enemy1[i].hpm) enemy1[i].hp = enemy1[i].hpm;
        if (zvyk ==1){
            Beep (150,500);
            Beep (600,200);
        }
        cout << enemy1[i].name << " ����������� ���� " << x << " ��������" << endl;
        }
    if (i==28){
        enemy1[i].hp = enemy1[i].hp + x;
        if (enemy1[i].hp > enemy1[i].hpm) enemy1[i].hp = enemy1[i].hpm;
        if (zvyk ==1){
            Beep (150,500);
            Beep (600,200);
        }
        cout << enemy1[i].name << " ����������� ���� " << x << " ��������" << endl;
        }
    if (i==376){
        enemy1[i].hp = enemy1[i].hp + x;
        if (enemy1[i].hp > enemy1[i].hpm) enemy1[i].hp = enemy1[i].hpm;
        if (zvyk ==1){
            Beep (150,500);
            Beep (600,200);
        }
        cout << enemy1[i].name << " ����������� ���� " << x << " ��������" << endl;
    }
    if (i==396){
        enemy1[i].hp = enemy1[i].hp + x;
        if (enemy1[i].hp > enemy1[i].hpm) enemy1[i].hp = enemy1[i].hpm;
        if (zvyk ==1){
            Beep (150,500);
            Beep (600,200);
        }
        cout << enemy1[i].name << " ����������� ���� " << x << " ��������" << endl;
        }
    hero1[j].hp = hero1[j].hp - x;
    if (hero1[j].hp > hero1[j].hpm) hero1[j].hp = hero1[j].hpm;
    Sleep(1000);
    if (hero1[j].hp < 0) hero1[j].hp = 0;
    if ((hero1[j].hp <= 0)&&(j == 24)){
        hero1[j].hpm = hero1[j].hpm - 3;
        hero1[j].hp = hero1[j].hpm;
        hero1[j].atc1--;
        hero1[j].atc2--;
        hero1[j].atc12--;
        hero1[j].atc22--;
        if (hero1[j].hpm < 0) hero1[j].hpm = 0;
        if (zvyk == 1) Beep(100, 400);
        if (zvyk == 1) Beep(300, 300);
        if (zvyk == 1) Beep(200, 500);
        cout << " |------------------------------------------------------------------------------------------------------------------------------|" << endl;
        cout << "�� ��������!" << endl;
        Sleep(1000);
    }
    if (hero1[j].hp < 0) hero1[j].hp = 0;
    cout << " |------------------------------------------------------------------------------------------------------------------------------|" << endl;
    allstat(hero1[j], enemy1[i]);
    cout << " |------------------------------------------------------------------------------------------------------------------------------|" << endl;
    if ((i == 89)||(i == 400)||(i == 412)) {
            system("color 2A");
        if (i == 89) cout << "�� ������ ����� ����, " << enemy1[i].name << " ������� ��� ���������!" << endl;
        else if (i == 412) cout << "�� ������ ����, " << enemy1[i].name << " �������� ������������ ����� �� ���� � ���������� ���, ������� ���� �� ������������!" << endl;
        else if (i == 400) cout << "�� ������ ����, " << enemy1[i].name << " ����������� ��� � �������!" << endl;
            cout << " <------------------------------------------------------------------------------------------------------------------------------>" << endl;
            cout << "                                                                                                   " << endl;
            cout << "                                                                                  d8b              " << endl;
            cout << "                                                                                  Y8P              " << endl;
            cout << "                                                                                                   " << endl;
            cout << "                               888  888  .d88b.  888  888           888  888  888 888 88888b.      " << endl;
            cout << "                               888  888 d88\"\"88b 888  888           888  888  888 888 888 \"88b     " << endl;
            cout << "                               888  888 888  888 888  888           888  888  888 888 888  888     " << endl;
            cout << "                               Y88b 888 Y88..88P Y88b 888           Y88b 888 d88P 888 888  888     " << endl;
            cout << "                                \"Y88888  \"Y88P\"   \"Y88888            \"Y8888888P\"  888 888  888     " << endl;
            cout << "                                    888                                                            " << endl;
            cout << "                               Y8b d88P                                                            " << endl;
            cout << "                                \"Y88P\"                                                             " << endl;
            cout << "                                                                                                   " << endl;
            cout << " <------------------------------------------------------------------------------------------------------------------------------>" << endl;
            if (zvyk == 1) Beep (700,100);
            if (zvyk == 1) Beep (500,200);
            if (zvyk == 1) Beep (700,100);
            if (zvyk == 1) Beep (500,300);
            if (zvyk == 1) Beep (500,200);
            if (zvyk == 1) Beep (700,300);
            cout << "���� ����������:" << endl;
            cout << "�����: " << hero1[j].name << endl;
            lvlstat(hero1[j], nlvl);
            cout << "������ ��������: " << k << endl;
            zan = "0";
            while ((zan != "1")&&(zan !="2")){
            cout << "������ ������ ������?" << endl;
            cout << "1 - ��" << endl;
            cout << "2 - ���" << endl;
            getline(cin, zan);
            if (zan == "1") {
                    cout << " <------------------------------------------------------------------------------------------------------------------------------>" << endl;
                    goto start;
            }
            else if (zan == "2") exit(0);
            }
    }
    if (hero1[j].hp > 0) goto boy;
    if (hero1[j].hp <= 0) {
            end1:
            cout << "�� ���������. ��� �������� �������� " << enemy1[i].name << "!" << endl;
            system("color 4C");
            cout << "���� ��������!" << endl;
            cout << " <------------------------------------------------------------------------------------------------------------------------------>" << endl;
            cout << "                                                                                                             " << endl;
            cout << "                         .d88b.   8888b.  88888b.d88b.   .d88b.             .d88b.  888  888  .d88b.  888d888" << endl;
            cout << "                        d88P\"88b     \"88 b888 \"888 \"88b d8P  Y8b           d88\"\"88b 888  888 d8P  Y8b 888P\"  " << endl;
            cout << "                        888  888 .d88888 8888  888  888 88888888           888  888 Y88  88P 88888888 888    " << endl;
            cout << "                        Y88b 888 888  88 8888  888  888 Y8b.               Y88..88P  Y8bd8P  Y8b.     888    " << endl;
            cout << "                         \"Y88888 \"Y88888 8888  888  888  \"Y8888             \"Y88P\"    Y88P    \"Y8888  888    " << endl;
            cout << "                            888                                                                             " << endl;
            cout << "                        Y8b d88P                                                                             " << endl;
            cout << "                         \"Y88P\"                                                                              " << endl;
            cout << "                                                                                                             " << endl;
            cout << " <------------------------------------------------------------------------------------------------------------------------------>" << endl;
            if (zvyk == 1) Beep(1568, 200);
            if (zvyk == 1) Beep(1568, 200);
            if (zvyk == 1) Beep(1568, 200);
            if (zvyk == 1) Beep(1245, 1000);
            if (zvyk == 1) Beep(1397, 200);
            if (zvyk == 1) Beep(1397, 200);
            if (zvyk == 1) Beep(1397, 200);
            if (zvyk == 1) Beep(1175, 1000);
            cout << "���� ����������:" << endl;
            cout << "�����: " << hero1[j].name << endl;
            lvlstat(hero1[j], nlvl);
            cout << "������ ��������: " << k-1 << endl;
            cout << " <------------------------------------------------------------------------------------------------------------------------------>" << endl;
            zan = "0";
            while ((zan != "1")&&(zan !="2")){
            cout << "������ ������ ������?" << endl;
            cout << "1 - ��" << endl;
            cout << "2 - ���" << endl;
            getline(cin, zan);
            if (zan == "1") {
                    cout << " <------------------------------------------------------------------------------------------------------------------------------>" << endl;
                    goto start;
            }
            else if (zan == "2") exit(0);
            }
    }
    }
    if (enemy1[i].hp <= 0) enemy1[i].hp = 0;
    cout << " |------------------------------------------------------------------------------------------------------------------------------|" << endl;
    allstat(hero1[j], enemy1[i]);
    Sleep(1000);
    cout << " |------------------------------------------------------------------------------------------------------------------------------|" << endl;
    if (zvyk ==1){
        Beep(400, 100);
        Beep(800, 100);
    }
    cout << "�� �������� �������� " << enemy1[i].name << "!" << endl;
    panact2 = 0;
    x = (rand()%(4 - 1)) + 1;
    if (hero1[j].hp < hero1[j].hpm) hero1[j].hp = hero1[j].hp + x;
    else {
        if (hero1[j].hp >= hero1[j].hpm) hero1[j].hp = hero1[j].hpm;
        x = 0;
    }
    if (i == 95){
       rhave = 1;
       cout << "�� ������ ������� ������-���������, � ������ �� ����� �������������� � ����!" << endl;
    }
    if (x>0) cout << "�� �������� " << x << " ��������" << endl;
    else if (x == 0) cout << "������� ������� �� �������" << endl;
    else cout << "�� ������� ������ ���� � ������� ���� " << x*-1 << " �����" << endl;
    if (hero1[j].hp >= hero1[j].hpm) hero1[j].hp = hero1[j].hpm;
    if (krov == 1){
        krov = 0;
        cout << "�� ���������� ������������" << endl;
    }
    if (yad == 1){
        yad = 0;
        cout << "�� ���������� �� ���" << endl;
    }
    if (baff1 == 1){
        baff1 = 0;
    }
    cout << "�� �������� " << enemy1[i].exp << " �����" << endl;
    hero1[j].exp = hero1[j].exp + enemy1[i].exp;
    if (hero1[j].exp >= nlvl){
            if (zvyk == 1){
                Beep (200,200);
                Beep (300,200);
                Beep (400,200);
                Beep (500,200);
                Beep (600,200);
            }
    cout << "�� �������� ����� �������!" << endl;
    if (j != 21){
        hero1[j].hpm++;
        }
        hero1[j].lvl++;
        hero1[j].hp = hero1[j].hpm;
        hero1[j].exp = hero1[j].exp - nlvl;
        nlvl++;
        if (((hero1[j].lvl % 5)==0)&&(j != 21)){
        hero1[j].atc1++;
        hero1[j].atc2++;
        hero1[j].atc12++;
        hero1[j].atc22++;
        hero1[j].pred++;
        hero1[j].hpm++;
        hero1[j].heal2++;
        hero1[j].hp = hero1[j].hpm;
        if (zvyk == 1){
          Beep (700,200);
          Beep (800,200);
          Beep (900,200);
        }
    cout << "���� �������������� ��������!" << endl;
    cout << "�������� +1 = " << hero1[j].hpm << endl;
    cout << "���� ����� ����� +1 = " << hero1[j].atc1 << "-" << hero1[j].atc12 << endl;
    cout << "���� ������ ����� +1 = " << hero1[j].atc2 << "-" << hero1[j].atc22 << endl;
    cout << "������������ �������������� �������� +1 = " << hero1[j].heal << "-" << hero1[j].heal2 << endl;
        }
    }
    if (hero1[j].exp >= nlvl){
            if (zvyk == 1){
                Beep (200,200);
                Beep (300,200);
                Beep (400,200);
                Beep (500,200);
                Beep (600,200);
            }
    cout << "�� �������� ����� �������!" << endl;
    if (j != 21){
        hero1[j].hpm++;
        }
        hero1[j].lvl++;
        hero1[j].hp = hero1[j].hpm;
        hero1[j].exp = hero1[j].exp - nlvl;
        nlvl++;
        if (((hero1[j].lvl % 5)==0)&&(j != 21)){
        hero1[j].atc1++;
        hero1[j].atc2++;
        hero1[j].atc12++;
        hero1[j].atc22++;
        hero1[j].pred++;
        hero1[j].hpm++;
        hero1[j].heal2++;
        hero1[j].hp = hero1[j].hpm;
        if (zvyk == 1){
          Beep (700,200);
          Beep (800,200);
          Beep (900,200);
        }
    cout << "���� �������������� ��������!" << endl;
    cout << "�������� +1 = " << hero1[j].hpm << endl;
    cout << "���� ����� ����� +1 = " << hero1[j].atc1 << "-" << hero1[j].atc12 << endl;
    cout << "���� ������ ����� +1 = " << hero1[j].atc2 << "-" << hero1[j].atc22 << endl;
    cout << "������������ �������������� �������� +1 = " << hero1[j].heal << "-" << hero1[j].heal2 << endl;
        }
    }
    cout << " \\------------------------------------------------------------------------------------------------------------------------------/" << endl;
    Sleep(1000);
    herostat(hero1[j]);
    lvlstat(hero1[j], nlvl);
    k++;
    cout << "�� ������� � ��������� ������� (" << k << ")" << endl;
    if (zvyk == 1){
          Beep (200,400);
    }
    cout << " /------------------------------------------------------------------------------------------------------------------------------\\" << endl;
    Sleep(1000);
    goto boyo;
    return 0;
}
