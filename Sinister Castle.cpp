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
    cout << "Здоровье вашего персонажа " << hero1.name << " = " << hero1.hp << "/" << hero1.hpm << endl;
};

void enemystat(struct enemy enemy1){
    cout << "Здоровье нападающего существа " << enemy1.name << " = " << enemy1.hp << "/" << enemy1.hpm << endl;
};

void allstat(struct hero hero1, struct enemy enemy1){
    cout << "Здоровье вашего персонажа " << hero1.name << " = " << hero1.hp << "/" << hero1.hpm << endl;
    cout << "Здоровье нападающего существа " << enemy1.name << " = " << enemy1.hp << "/" << enemy1.hpm << endl;
};

void startstat(struct hero hero1){
    if (hero1.name == "Лорд Райзус") {cout << "   - Здоровье этого персонажа: 8/" << hero1.hpm << endl;}
    else if (hero1.name == "Ученик мага") {cout << "   - Здоровье этого персонажа: 9/" << hero1.hpm << endl;}
    else {cout << "   - Здоровье этого персонажа: " << hero1.hpm << endl;};
    cout << "   - Урон лёгкой атаки этого персонажа: " << hero1.atc1 << "-" << hero1.atc12 << endl;
    cout << "   - Урон тяжёлой атаки этого персонажа: " << hero1.atc2 << "-" << hero1.atc22 << endl;
    cout << "   - Восстановление здоровья этого персонажа: " << hero1.heal << "-" << hero1.heal2 << endl;
    cout << "   - Способность этого персонажа: ";
    if (hero1.name == "Крестоносец") {cout << "Сокрушительный удар (Наносит 10 урона и даёт 1 к опыту)" << endl;}
    else if (hero1.name == "Фермер") {cout << "Свежий урожай (Лечит 5 здоровья, наносит 4 урона и даёт 3 к опыту)" << endl;}
    else if (hero1.name == "Лекарь") {cout << "Профессиональное лечение (Полностью восстанавливает здоровье и даёт 1 к опыту)" << endl;}
    else if (hero1.name == "Арбалетчик") {cout << "Несколько выстрелов (Наносит 2-18 урона и даёт 1 к опыту)" << endl;}
    else if (hero1.name == "Ученик мага") {cout << "Древнее заклинание (Снижает все виды атаки противника до 1 и даёт 1 к опыту)" << endl;}
    else if (hero1.name == "Бронированный боец") {cout << "Непробиваемый панцирь (Защищает от атаки, даёт 2 ход и даёт 1 к опыту)" << endl;}
    else if (hero1.name == "Лорд Райзус") {cout << "Тёмный ритуал (Даёт -1-1 ко всем видам оружия, восстанавливает -2-2 здоровья и даёт 1 к опыту)" << endl;}
    else if (hero1.name == "Мастер клинков") {cout << "Двойной удар (Всё оружие наносит х2 урон, пока не умрёт враг, и 1 к опыту)" << endl;}
    else if (hero1.name == "Рыцарь") {cout << "Прочные латы (1 к максимальному здоровью, и 2 к опыту)" << endl;}
    else if (hero1.name == "Воительница") {cout << "Прочная броня (1 к максимальному здоровью, и 2 к опыту)" << endl;}
    else if (hero1.name == "Синтольный качок") {
            cout << "Заколоться синтолом (Даёт 1 ко всем видам оружия, -3 к максимальному здоровью и его пополнение)" << endl;
            cout << "   - Особенность: за лёгкую атаку получает 0.25 опыта" << endl;
    }
    else if (hero1.name == "Голем из нефрита") {
            cout << "Нефритовая эволюция (Даёт 1 ко всем видам оружия и повышает нужное количество опыта на 5)" << endl;
            cout << "   - Особенность: Не получает опыт за лёгкую атаку, не получает очко навыка после победы над боссом, не получает бафф за уровень" << endl;
    }
    else if (hero1.name == "Робот-механик") {
            cout << "Улучшение (1 к максимальному здоровью, -1 ко всем характеристикам слабого оружия и 3 к опыту)" << endl;
            cout << "   - Особенность: Может использовать чипы, не получает опыт за лёгкую атаку" << endl;
    }
    else if (hero1.name == "Собиратель душ") {
            cout << "Тайное заклинание (-1 к максимальному здоровью и 1 ко всем характеристикам слабого оружия)" << endl;
            cout << "   - Особенность: Слабой атакой убивает обычного противника, если его минимальная сильная атака меньше вашей минимальной слабой," << endl;
            cout << "                  не получает опыт за лёгкую атаку" << endl;
    }
    else if (hero1.name == "Падший воин") {
            cout << "Некротическое восстановление (1 к максимальному здоровью и 1 к опыту)" << endl;
            cout << "   - Особенность: Если здоровье равно 0, то восстанавливает его полностью, но получает -3 к максимальному и -1 ко всем атакам" << endl;
            cout << "                  не получает опыт за лёгкую атаку" << endl;
    }
    else if (hero1.name == "Прототип нового робота") {
            cout << "Активация случайной программы (Случайный эффект)" << endl;
            cout << "   - Особенность: Может использовать флешки, получает 2 очка опыта за победу над БОССом, не получает опыт за лёгкую атаку" << endl;
    }
    else cout << "Нет" << endl;
}

void lvlstat(struct hero hero1, int nlvl){
    cout << "Уровень героя: " << hero1.lvl << endl;
    cout << "Опыт героя: " << hero1.exp << "/" << nlvl << endl;
}

void forstat(struct enemy enemy1, int i){
    cout << "   - Здоровье этого персонажа = " << enemy1.hpm << endl;
    cout << "   - Урон лёгкой атаки этого персонажа = " << enemy1.atc1 << "-" << enemy1.atc12 << endl;
    cout << "   - Урон тяжёлой атаки этого персонажа = " << enemy1.atc2 << "-" << enemy1.atc22 << endl;
    cout << "   - Особые свойства: ";
    if (i == 12){
        cout << "Может отнимать по 1 единице мощи любого оружия при атаке" << endl;
    }
    else if (i == 18) {
        cout << "Может отнимать по 1 единице мощи всех видов оружия и 1 единице от способности восстановления при атаке " << endl;
    }
    else if ((i == 30)||(i == 95)||(i == 16)||(i == 45)||(i == 106)) {
        cout << "Сильная атака этого существа вызывает у вас Кровотечение" << endl;
    }
    else if ((i == 26)||(i == 27)||(i == 28)||(i == 396)||(i==376)) {
        cout << "Восстанавливает здоровье после каждой атаки в размере нанесённого урона" << endl;
    }
    else if (i == 31) {
        cout << "Сильная атака этого существа вызывает у вас Болезнь" << endl;
    }
    else if ((i == 5)||(i == 107)||(i == 112)) {
        cout << "Сильная атака этого существа вызывает у вас Яд" << endl;
    }
    else if (i == 32) {
        cout << "Любая атака этого существа вызывает у вас Яд" << endl;
    }
    else if (i == 34) {
        cout << "Любая атака этого существа вызывает у вас Болезнь" << endl;
    }
    else if (i == 36) {
        cout << "Слабая атака этого существа вызывает у вас Кровотечение, а сильная Яд" << endl;
    }
    else if (i == 37) {
        cout << "Любая атака этого существа вызывает у вас Кровотечение и Яд" << endl;
    }
    else if (i == 38) {
        cout << "Любая атака этого существа вызывает у вас Кровотечение, Яд и Болезнь" << endl;
    }
    else if (i == 111) {
        cout << "Вместо атаки может починить себя и вылечить себе 2-3 здоровья" << endl;
    }
    else cout << "нет" << endl;
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
    string s3 = "Иван";
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
        wea1[0].name = "Кулаки";
        wea1[0].info = "кулаком";
        wea1[0].atc1 = 1;
        wea1[0].atc12 = 2;
        wea1[0].atc2 = 1;
        wea1[0].atc22 = 3;
        wea1[1].name = "Ржавый меч [Обычное]";
        wea1[1].info = "ржавым мечом";
        wea1[1].atc1 = 1;
        wea1[1].atc12 = 3;
        wea1[1].atc2 = 2;
        wea1[1].atc22 = 4;
        wea1[2].name = "Меч [Обычное]";
        wea1[2].info = "мечом";
        wea1[2].atc1 = 2;
        wea1[2].atc12 = 3;
        wea1[2].atc2 = 3;
        wea1[2].atc22 = 4;
        wea1[3].name = "Булава [Обычное]";
        wea1[3].info = "булавой";
        wea1[3].atc1 = 2;
        wea1[3].atc12 = 2;
        wea1[3].atc2 = 0;
        wea1[3].atc22 = 6;
        wea1[4].name = "Палка [Обычное]";
        wea1[4].info = "палкой";
        wea1[4].atc1 = 0;
        wea1[4].atc12 = 1;
        wea1[4].atc2 = 1;
        wea1[4].atc22 = 2;
        wea1[5].name = "Плеть [Редкое]";
        wea1[5].info = "плетью";
        wea1[5].atc1 = 2;
        wea1[5].atc12 = 4;
        wea1[5].atc2 = 1;
        wea1[5].atc22 = 5;
        wea1[6].name = "Многоконечная плеть [Редкое]";
        wea1[6].info = "многоконечной плетью";
        wea1[6].atc1 = 2;
        wea1[6].atc12 = 5;
        wea1[6].atc2 = 1;
        wea1[6].atc22 = 8;
        wea1[7].name = "Карандаш [Обычное]";
        wea1[7].info = "карандашом";
        wea1[7].atc1 = 0;
        wea1[7].atc12 = 1;
        wea1[7].atc2 = 0;
        wea1[7].atc22 = 1;
        wea1[8].name = "Деревянное копьё [Обычное]";
        wea1[8].info = "деревянным копьём";
        wea1[8].atc1 = 2;
        wea1[8].atc12 = 3;
        wea1[8].atc2 = 3;
        wea1[8].atc22 = 4;
        wea1[9].name = "Большой меч [Эпическое]";
        wea1[9].info = "большим мечом";
        wea1[9].atc1 = 3;
        wea1[9].atc12 = 4;
        wea1[9].atc2 = 4;
        wea1[9].atc22 = 6;
        wea1[10].name = "Бумажный меч [Обычное]";
        wea1[10].info = "бумажным мечом";
        wea1[10].atc1 = 0;
        wea1[10].atc12 = 0;
        wea1[10].atc2 = 0;
        wea1[10].atc22 = 1;
        wea1[11].name = "Посох с золотым котиком на конце [Легендарное]";
        wea1[11].info = "посохом с золотым котиком на конце";
        wea1[11].atc1 = 1;
        wea1[11].atc12 = 1;
        wea1[11].atc2 = 2;
        wea1[11].atc22 = 7;
        wea1[12].name = "Тесак [Обычное]";
        wea1[12].info = "тесаком";
        wea1[12].atc1 = 1;
        wea1[12].atc12 = 3;
        wea1[12].atc2 = 2;
        wea1[12].atc22 = 4;
        wea1[13].name = "Инъектатор [Эпическое]";
        wea1[13].info = "инъектатором";
        wea1[13].atc1 = 1;
        wea1[13].atc12 = 2;
        wea1[13].atc2 = 3;
        wea1[13].atc22 = 4;
        wea1[14].name = "Кирка [Обычное]";
        wea1[14].info = "киркой";
        wea1[14].atc1 = 3;
        wea1[14].atc12 = 4;
        wea1[14].atc2 = 2;
        wea1[14].atc22 = 5;
        wea1[15].name = "Кастет [Обычное]";
        wea1[15].info = "кастетом";
        wea1[15].atc1 = 1;
        wea1[15].atc12 = 3;
        wea1[15].atc2 = 1;
        wea1[15].atc22 = 4;
        wea1[16].name = "Меч с программным модулем [Легендарное]";
        wea1[16].info = "мечом с программным модулем";
        wea1[16].atc1 = 1;
        wea1[16].atc12 = 3;
        wea1[16].atc2 = 1;
        wea1[16].atc22 = 4;
        wea1[17].name = "Банка с едкими гвоздями [Эпическое]";
        wea1[17].info = "банкой с едкими гвоздями";
        wea1[17].atc1 = 1;
        wea1[17].atc12 = 3;
        wea1[17].atc2 = 0;
        wea1[17].atc22 = 8;
        wea1[18].name = "Бита [Обычное]";
        wea1[18].info = "битой";
        wea1[18].atc1 = 3;
        wea1[18].atc12 = 3;
        wea1[18].atc2 = 2;
        wea1[18].atc22 = 4;
        wea1[19].name = "Осколок зеркала [Обычное]";
        wea1[19].info = "осколком зеркала";
        wea1[19].atc1 = 0;
        wea1[19].atc12 = 4;
        wea1[19].atc2 = 1;
        wea1[19].atc22 = 4;
        wea1[20].name = "Клюшка для гольфа [Обычное]";
        wea1[20].info = "клюшкой для гольфа";
        wea1[20].atc1 = 2;
        wea1[20].atc12 = 3;
        wea1[20].atc2 = 3;
        wea1[20].atc22 = 4;
        wea1[21].name = "Волшебная трость [Редкое]";
        wea1[21].info = "волшебной тростью";
        wea1[21].atc1 = -2;
        wea1[21].atc12 = 4;
        wea1[21].atc2 = -3;
        wea1[21].atc22 = 6;
        wea1[22].name = "Стимулятор [Редкое]";
        wea1[22].info = "стимулятором";
        wea1[22].atc1 = -3;
        wea1[22].atc12 = -2;
        wea1[22].atc2 = -5;
        wea1[22].atc22 = -3;
        wea1[23].name = "Скалка [Обычное]";
        wea1[23].info = "скалкой";
        wea1[23].atc1 = 2;
        wea1[23].atc12 = 4;
        wea1[23].atc2 = 3;
        wea1[23].atc22 = 4;
        wea1[24].name = "Испепелитель [Легендарное]";
        wea1[24].info = "испепелителем";
        wea1[24].atc1 = 3;
        wea1[24].atc12 = 4;
        wea1[24].atc2 = 4;
        wea1[24].atc22 = 5;
        wea1[25].name = "Раскалённый уничтожитель [Легендарное]";
        wea1[25].info = "раскалённым уничтожителем";
        wea1[25].atc1 = 100;
        wea1[25].atc12 = 150;
        wea1[25].atc2 = 50;
        wea1[25].atc22 = 200;
    struct rel rel1[17];
        rel1[1].name = "Зелёный светящийся кристалл [Редкая]";
        rel1[1].info = "Восстанавливает 1 здоровья каждый ход";
        rel1[2].name = "Тёмный камень [Редкая]";
        rel1[2].info = "Забирает 1 здоровья каждый ход";
        rel1[3].name = "Рукоять древнего меча [Редкая]";
        rel1[3].info = "Наносит 1 урона врагу каждый ход";
        rel1[4].name = "Красный камень с иероглифами [Эпическая]";
        rel1[4].info = "Наносит 2 урона врагу каждый ход";
        rel1[5].name = "Амулет Разиды [Эпическая]";
        rel1[5].info = "Восстанавливает 2 здоровья каждый ход";
        rel1[6].name = "Перстень с агатом [Эпическая]";
        rel1[6].info = "Забирает 2 здоровья каждый ход";
        rel1[7].name = "Каменные ножны [Эпическая]";
        rel1[7].info = "Понижает минимальную слабую атаку на 1 каждый ход";
        rel1[8].name = "Шар застывшей лавы [Легендарная]";
        rel1[8].info = "Понижает минимальную сильную атаку на 1 каждый ход";
        rel1[9].name = "Деревянная монета [Обычная]";
        rel1[9].info = "Не делает ничего";
        rel1[10].name = "Золотое зеркальце [Легендарная]";
        rel1[10].info = "Показывает код шкатулки";
        rel1[11].name = "Нефритовый кубик [Обычная]";
        rel1[11].info = "Понижает минимальную слабую атаку на 1 и восстанавливает 1 здоровья каждый ход";
        rel1[12].name = "Шлем Озирия [Редкая]";
        rel1[12].info = "Даёт информацию о нападающем существе";
        rel1[13].name = "Фарфоровая чашка [Обычная]";
        rel1[13].info = "Не делает ничего";
        rel1[14].name = "Наручники из свинца [Редкая]";
        rel1[14].info = "Все ваши атаки минимальные";
        rel1[15].name = "Янтарная статуэтка котика [Легендарная]";
        rel1[15].info = "Не делает ничего, но она милая :3";
        rel1[16].name = "Амулет [Легендарная]";
        rel1[16].info = "ОБРАЩАЕТ ВАШУ ИГРУ ВО ТЬМУ";
    struct pred pred1[27];
        pred1[1].name = "Бутылка с зельем регенерации (3 к здоровью)";
        pred1[1].hp = 3;
        pred1[1].hpm = 0;
        pred1[1].atc1 = 0;
        pred1[1].atc12 = 0;
        pred1[1].atc2 = 0;
        pred1[1].atc22 = 0;
        pred1[1].heal = 0;
        pred1[1].heal2 = 0;
        pred1[1].exp = 0;
        pred1[2].name = "Бутылка с сильным зельем регенерации (5 к здоровью)";
        pred1[2].hp = 5;
        pred1[2].hpm = 0;
        pred1[2].atc1 = 0;
        pred1[2].atc12 = 0;
        pred1[2].atc2 = 0;
        pred1[2].atc22 = 0;
        pred1[2].heal = 0;
        pred1[2].heal2 = 0;
        pred1[2].exp = 0;
        pred1[3].name = "Буханка белого хлеба (1 к здоровью)";
        pred1[3].hp = 1;
        pred1[3].hpm = 0;
        pred1[3].atc1 = 0;
        pred1[3].atc12 = 0;
        pred1[3].atc2 = 0;
        pred1[3].atc22 = 0;
        pred1[3].heal = 0;
        pred1[3].heal2 = 0;
        pred1[3].exp = 0;
        pred1[4].name = "Бутерброд с колбасой (2 к здоровью)";
        pred1[4].hp = 2;
        pred1[4].hpm = 0;
        pred1[4].atc1 = 0;
        pred1[4].atc12 = 0;
        pred1[4].atc2 = 0;
        pred1[4].atc22 = 0;
        pred1[4].heal = 0;
        pred1[4].heal2 = 0;
        pred1[4].exp = 0;
        pred1[5].name = "Старая аптечка (7 к здоровью, -2 к максимальному здоровью)";
        pred1[5].hp = 7;
        pred1[5].hpm = -2;
        pred1[5].atc1 = 0;
        pred1[5].atc12 = 0;
        pred1[5].atc2 = 0;
        pred1[5].atc22 = 0;
        pred1[5].heal = 0;
        pred1[5].heal2 = 0;
        pred1[5].exp = 0;
        pred1[6].name = "Интересная тонкая книга (3 к опыту)";
        pred1[6].hp = 0;
        pred1[6].hpm = 0;
        pred1[6].atc1 = 0;
        pred1[6].atc12 = 0;
        pred1[6].atc2 = 0;
        pred1[6].atc22 = 0;
        pred1[6].heal = 0;
        pred1[6].heal2 = 0;
        pred1[6].exp = 3;
        pred1[7].name = "Древний свиток (5 к опыту)";
        pred1[7].hp = 0;
        pred1[7].hpm = 0;
        pred1[7].atc1 = 0;
        pred1[7].atc12 = 0;
        pred1[7].atc2 = 0;
        pred1[7].atc22 = 0;
        pred1[7].heal = 0;
        pred1[7].heal2 = 0;
        pred1[7].exp = 5;
        pred1[8].name = "Журнал про навыки борьбы (1 к максимальной атаке слабого оружия)";
        pred1[8].hp = 0;
        pred1[8].hpm = 0;
        pred1[8].atc1 = 0;
        pred1[8].atc12 = 1;
        pred1[8].atc2 = 0;
        pred1[8].atc22 = 0;
        pred1[8].heal = 0;
        pred1[8].heal2 = 0;
        pred1[8].exp = 0;
        pred1[9].name = "Древняя толстая книга (7 к опыту)";
        pred1[9].hp = 0;
        pred1[9].hpm = 0;
        pred1[9].atc1 = 0;
        pred1[9].atc12 = 0;
        pred1[9].atc2 = 0;
        pred1[9].atc22 = 0;
        pred1[9].heal = 0;
        pred1[9].heal2 = 0;
        pred1[9].exp = 7;
        pred1[10].name = "Жёлтая таблетка (6 к здоровью, -1 к максимальному здоровью)";
        pred1[10].hp = 6;
        pred1[10].hpm = -1;
        pred1[10].atc1 = 0;
        pred1[10].atc12 = 0;
        pred1[10].atc2 = 0;
        pred1[10].atc22 = 0;
        pred1[10].heal = 0;
        pred1[10].heal2 = 0;
        pred1[10].exp = 0;
        pred1[11].name = "Зелёная таблетка (1 к максимальному здоровью, -5 к здоровью)";
        pred1[11].hp = -5;
        pred1[11].hpm = 1;
        pred1[11].atc1 = 0;
        pred1[11].atc12 = 0;
        pred1[11].atc2 = 0;
        pred1[11].atc22 = 0;
        pred1[11].heal = 0;
        pred1[11].heal2 = 0;
        pred1[11].exp = 0;
        pred1[12].name = "Красная таблетка (-1 ко всему, кроме максимальной атаки сильного оружия, улучшение её на 1)";
        pred1[12].hp = -1;
        pred1[12].hpm = -1;
        pred1[12].atc1 = -1;
        pred1[12].atc12 = -1;
        pred1[12].atc2 = -1;
        pred1[12].atc22 = 1;
        pred1[12].heal = -1;
        pred1[12].heal2 = -1;
        pred1[12].exp = 0;
        pred1[13].name = "Синяя таблетка (1 ко всем навыкам лечения, -2 к максимальному здоровью)";
        pred1[13].hp = 0;
        pred1[13].hpm = -2;
        pred1[13].atc1 = 0;
        pred1[13].atc12 = 0;
        pred1[13].atc2 = 0;
        pred1[13].atc22 = 1;
        pred1[13].heal = 1;
        pred1[13].heal2 = 0;
        pred1[13].exp = 0;
        pred1[14].name = "Конверт (Записка)";
        pred1[14].hp = 0;
        pred1[14].hpm = 0;
        pred1[14].atc1 = 0;
        pred1[14].atc12 = 0;
        pred1[14].atc2 = 0;
        pred1[14].atc22 = 0;
        pred1[14].heal = 0;
        pred1[14].heal2 = 0;
        pred1[14].exp = 0;
        pred1[15].name = "Конверт (Записка)";
        pred1[15].hp = 0;
        pred1[15].hpm = 0;
        pred1[15].atc1 = 0;
        pred1[15].atc12 = 0;
        pred1[15].atc2 = 0;
        pred1[15].atc22 = 0;
        pred1[15].heal = 0;
        pred1[15].heal2 = 0;
        pred1[15].exp = 0;
        pred1[16].name = "Дохлая крыса (-1 к здоровью)";
        pred1[16].hp = -1;
        pred1[16].hpm = 0;
        pred1[16].atc1 = 0;
        pred1[16].atc12 = 0;
        pred1[16].atc2 = 0;
        pred1[16].atc22 = 0;
        pred1[16].heal = 0;
        pred1[16].heal2 = 0;
        pred1[16].exp = 0;
        pred1[17].name = "Кирпич (Ничего)";
        pred1[17].hp = 0;
        pred1[17].hpm = 0;
        pred1[17].atc1 = 0;
        pred1[17].atc12 = 0;
        pred1[17].atc2 = 0;
        pred1[17].atc22 = 0;
        pred1[17].heal = 0;
        pred1[17].heal2 = 0;
        pred1[17].exp = 0;
        pred1[18].name = "Мешочек с золотыми монетами (Ничего)";
        pred1[18].hp = 0;
        pred1[18].hpm = 0;
        pred1[18].atc1 = 0;
        pred1[18].atc12 = 0;
        pred1[18].atc2 = 0;
        pred1[18].atc22 = 0;
        pred1[18].heal = 0;
        pred1[18].heal2 = 0;
        pred1[18].exp = 0;
        pred1[19].name = "Свиток с заклинанием (-2 к минимальной и 1 к максимальной атакам сильного оружия)";
        pred1[19].hp = 0;
        pred1[19].hpm = 0;
        pred1[19].atc1 = 0;
        pred1[19].atc12 = 0;
        pred1[19].atc2 = -2;
        pred1[19].atc22 = 1;
        pred1[19].heal = 0;
        pred1[19].heal2 = 0;
        pred1[19].exp = 0;
        pred1[20].name = "Листик с заклинанием (-2 к минимальной и 1 к максимальной атакам слабого оружия)";
        pred1[20].hp = 0;
        pred1[20].hpm = 0;
        pred1[20].atc1 = -2;
        pred1[20].atc12 = 1;
        pred1[20].atc2 = 0;
        pred1[20].atc22 = 0;
        pred1[20].heal = 0;
        pred1[20].heal2 = 0;
        pred1[20].exp = 0;
        pred1[21].name = "Светящийся кристалл (3 к здоровью, 1 к максимальному восстановлению)";
        pred1[21].hp = 3;
        pred1[21].hpm = 0;
        pred1[21].atc1 = 0;
        pred1[21].atc12 = 0;
        pred1[21].atc2 = 0;
        pred1[21].atc22 = 0;
        pred1[21].heal = 0;
        pred1[21].heal2 = 1;
        pred1[21].exp = 0;
        pred1[22].name = "Кулон в виде сердца (4 к максимальному здоровью, восполнение здоровья, все атаки становятся минимальными)";
        pred1[22].hp = 0;
        pred1[22].hpm = 4;
        pred1[22].atc1 = 0;
        pred1[22].atc12 = 0;
        pred1[22].atc2 = 0;
        pred1[22].atc22 = 0;
        pred1[22].heal = 0;
        pred1[22].heal2 = 0;
        pred1[22].exp = 0;
        pred1[23].name = "Свиток с заклинанием огненного шара (Наносит 3 урона противнику)";
        pred1[23].hp = 0;
        pred1[23].hpm = 0;
        pred1[23].atc1 = 0;
        pred1[23].atc12 = 0;
        pred1[23].atc2 = 0;
        pred1[23].atc22 = 0;
        pred1[23].heal = 0;
        pred1[23].heal2 = 0;
        pred1[23].exp = 0;
        pred1[24].name = "Метательный дротик (Наносит 1 урона противнику)";
        pred1[24].hp = 0;
        pred1[24].hpm = 0;
        pred1[24].atc1 = 0;
        pred1[24].atc12 = 0;
        pred1[24].atc2 = 0;
        pred1[24].atc22 = 0;
        pred1[24].heal = 0;
        pred1[24].heal2 = 0;
        pred1[24].exp = 0;
        pred1[25].name = "Два метательных дротика (Наносит 2 урона противнику)";
        pred1[25].hp = 0;
        pred1[25].hpm = 0;
        pred1[25].atc1 = 0;
        pred1[25].atc12 = 0;
        pred1[25].atc2 = 0;
        pred1[25].atc22 = 0;
        pred1[25].heal = 0;
        pred1[25].heal2 = 0;
        pred1[25].exp = 0;
        pred1[26].name = "Шар предсказаний (Информация о существе)";
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
        obj1[0].name = "Бутылка с зельем";
        obj1[0].hp = 1;
        obj1[0].hpm = 1;
        obj1[0].atc1 = 0;
        obj1[0].atc12 = 0;
        obj1[0].atc2 = 0;
        obj1[0].atc22 = 0;
        obj1[0].heal = 0;
        obj1[0].heal2 = 0;
        obj1[0].exp = 0;
        obj1[1].name = "Бутылка с зельем";
        obj1[1].hp = -2;
        obj1[1].hpm = -1;
        obj1[1].atc1 = 0;
        obj1[1].atc12 = 0;
        obj1[1].atc2 = 0;
        obj1[1].atc22 = 0;
        obj1[1].heal = 0;
        obj1[1].heal2 = 0;
        obj1[1].exp = 0;
        obj1[2].name = "Таинственный сундук";
        obj1[2].hp = 0;
        obj1[2].hpm = 0;
        obj1[2].atc1 = 1;
        obj1[2].atc12 = 1;
        obj1[2].atc2 = 0;
        obj1[2].atc22 = 0;
        obj1[2].heal = 0;
        obj1[2].heal2 = 0;
        obj1[2].exp = 0;
        obj1[3].name = "Таинственный сундук";
        obj1[3].hp = 0;
        obj1[3].hpm = 0;
        obj1[3].atc1 = 0;
        obj1[3].atc12 = 0;
        obj1[3].atc2 = 0;
        obj1[3].atc22 = 0;
        obj1[3].heal = 0;
        obj1[3].heal2 = 0;
        obj1[3].exp = 0;
        obj1[4].name = "Таинственный сундук";
        obj1[4].hp = 0;
        obj1[4].hpm = 0;
        obj1[4].atc1 = 0;
        obj1[4].atc12 = 0;
        obj1[4].atc2 = 1;
        obj1[4].atc22 = 1;
        obj1[4].heal = 0;
        obj1[4].heal2 = 0;
        obj1[4].exp = 0;
        obj1[5].name = "Бутылка с зельем";
        obj1[5].hp = -5;
        obj1[5].hpm = 0;
        obj1[5].atc1 = 0;
        obj1[5].atc12 = 0;
        obj1[5].atc2 = 0;
        obj1[5].atc22 = 0;
        obj1[5].heal = 0;
        obj1[5].heal2 = 0;
        obj1[5].exp = 0;
        obj1[6].name = "Магическое свечение";
        obj1[6].hp = -2;
        obj1[6].hpm = -1;
        obj1[6].atc1 = -1;
        obj1[6].atc12 = -1;
        obj1[6].atc2 = -1;
        obj1[6].atc22 = -1;
        obj1[6].heal = 0;
        obj1[6].heal2 = 0;
        obj1[6].exp = 0;
        obj1[7].name = "Магическое свечение";
        obj1[7].hp = 5;
        obj1[7].hpm = 0;
        obj1[7].atc1 = 0;
        obj1[7].atc12 = 0;
        obj1[7].atc2 = 0;
        obj1[7].atc22 = 0;
        obj1[7].heal = 0;
        obj1[7].heal2 = 0;
        obj1[7].exp = 0;
        obj1[8].name = "Волшебный посох";
        obj1[8].hp = 0;
        obj1[8].hpm = 0;
        obj1[8].atc1 = 1;
        obj1[8].atc12 = 2;
        obj1[8].atc2 = 2;
        obj1[8].atc22 = 3;
        obj1[8].heal = 0;
        obj1[8].heal2 = 0;
        obj1[8].exp = 0;
        obj1[9].name = "Волшебный посох";
        obj1[9].hp = 0;
        obj1[9].hpm = 0;
        obj1[9].atc1 = 1;
        obj1[9].atc12 = 5;
        obj1[9].atc2 = 0;
        obj1[9].atc22 = 7;
        obj1[9].heal = 0;
        obj1[9].heal2 = 0;
        obj1[9].exp = 0;
        obj1[10].name = "Сумка";
        obj1[10].hp = 0;
        obj1[10].hpm = 0;
        obj1[10].atc1 = 0;
        obj1[10].atc12 = 0;
        obj1[10].atc2 = 0;
        obj1[10].atc22 = 0;
        obj1[10].heal = 1;
        obj1[10].heal2 = 1;
        obj1[10].exp = 0;
        obj1[11].name = "Сумка";
        obj1[11].hp = 0;
        obj1[11].hpm = 0;
        obj1[11].atc1 = 0;
        obj1[11].atc12 = 0;
        obj1[11].atc2 = 0;
        obj1[11].atc22 = 0;
        obj1[11].heal = -1;
        obj1[11].heal2 = -1;
        obj1[11].exp = 0;
        obj1[12].name = "Амулет";
        obj1[12].hp = 0;
        obj1[12].hpm = 0;
        obj1[12].atc1 = 0;
        obj1[12].atc12 = 0;
        obj1[12].atc2 = 0;
        obj1[12].atc22 = 0;
        obj1[12].heal = 0;
        obj1[12].heal2 = 0;
        obj1[12].exp = 0;
        obj1[13].name = "Амулет";
        obj1[13].hp = 0;
        obj1[13].hpm = 0;
        obj1[13].atc1 = 0;
        obj1[13].atc12 = 0;
        obj1[13].atc2 = 0;
        obj1[13].atc22 = 0;
        obj1[13].heal = 0;
        obj1[13].heal2 = 0;
        obj1[13].exp = 9;
        obj1[14].name = "Лекарство";
        obj1[14].hp = 0;
        obj1[14].hpm = 0;
        obj1[14].atc1 = 0;
        obj1[14].atc12 = 0;
        obj1[14].atc2 = 0;
        obj1[14].atc22 = 0;
        obj1[14].heal = 0;
        obj1[14].heal2 = 0;
        obj1[14].exp = 0;
        obj1[15].name = "Лекарство";
        obj1[15].hp = 0;
        obj1[15].hpm = 0;
        obj1[15].atc1 = 0;
        obj1[15].atc12 = 0;
        obj1[15].atc2 = 0;
        obj1[15].atc22 = 0;
        obj1[15].heal = 0;
        obj1[15].heal2 = 0;
        obj1[15].exp = 0;
        obj1[16].name = "Колба с жидкостью";
        obj1[16].hp = -101;
        obj1[16].hpm = -100;
        obj1[16].atc1 = 0;
        obj1[16].atc12 = 0;
        obj1[16].atc2 = 0;
        obj1[16].atc22 = 0;
        obj1[16].heal = 0;
        obj1[16].heal2 = 0;
        obj1[16].exp = 0;
        obj1[17].name = "Таинственный сундук";
        obj1[17].hp = 0;
        obj1[17].hpm = 0;
        obj1[17].atc1 = 0;
        obj1[17].atc12 = 0;
        obj1[17].atc2 = 0;
        obj1[17].atc22 = 0;
        obj1[17].heal = 0;
        obj1[17].heal2 = 0;
        obj1[17].exp = 0;
        obj1[18].name = "Лекарство";
        obj1[18].hp = 0;
        obj1[18].hpm = 0;
        obj1[18].atc1 = 0;
        obj1[18].atc12 = 0;
        obj1[18].atc2 = 0;
        obj1[18].atc22 = 0;
        obj1[18].heal = 0;
        obj1[18].heal2 = 0;
        obj1[18].exp = 0;
        obj1[19].name = "Лекарство";
        obj1[19].hp = 0;
        obj1[19].hpm = 0;
        obj1[19].atc1 = 0;
        obj1[19].atc12 = 0;
        obj1[19].atc2 = 0;
        obj1[19].atc22 = 0;
        obj1[19].heal = 0;
        obj1[19].heal2 = 0;
        obj1[19].exp = 0;
        obj1[20].name = "Золотой бараний рог";
        obj1[20].hp = 0;
        obj1[20].hpm = 0;
        obj1[20].atc1 = 0;
        obj1[20].atc12 = 0;
        obj1[20].atc2 = 0;
        obj1[20].atc22 = 0;
        obj1[20].heal = 0;
        obj1[20].heal2 = 0;
        obj1[20].exp = 0;
        obj1[21].name = "Золотой бараний рог";
        obj1[21].hp = 0;
        obj1[21].hpm = 0;
        obj1[21].atc1 = 0;
        obj1[21].atc12 = 0;
        obj1[21].atc2 = 0;
        obj1[21].atc22 = 0;
        obj1[21].heal = 0;
        obj1[21].heal2 = 0;
        obj1[21].exp = 0;
        obj1[22].name = "Огромный клык";
        obj1[22].hp = 0;
        obj1[22].hpm = 0;
        obj1[22].atc1 = 0;
        obj1[22].atc12 = 0;
        obj1[22].atc2 = 0;
        obj1[22].atc22 = 0;
        obj1[22].heal = 0;
        obj1[22].heal2 = 0;
        obj1[22].exp = 0;
        obj1[23].name = "Записка";
        obj1[23].hp = 0;
        obj1[23].hpm = 0;
        obj1[23].atc1 = 0;
        obj1[23].atc12 = 0;
        obj1[23].atc2 = 0;
        obj1[23].atc22 = 0;
        obj1[23].heal = 0;
        obj1[23].heal2 = 0;
        obj1[23].exp = 0;
        // Предметы для Забавные приключения
        obj1[26].name = "Банка с синтолом";
        obj1[26].hp = -4;
        obj1[26].hpm = -3;
        obj1[26].atc1 = 1;
        obj1[26].atc12 = 1;
        obj1[26].atc2 = 0;
        obj1[26].atc22 = 0;
        obj1[26].heal = 0;
        obj1[26].heal2 = 0;
        obj1[26].exp = 0;
        obj1[27].name = "Сгусток энергии";
        obj1[27].hp = -1;
        obj1[27].hpm = -1;
        obj1[27].atc1 = -1;
        obj1[27].atc12 = -1;
        obj1[27].atc2 = -1;
        obj1[27].atc22 = -1;
        obj1[27].heal = 0;
        obj1[27].heal2 = 0;
        obj1[27].exp = 0;
        obj1[28].name = "Сгусток энергии";
        obj1[28].hp = 1;
        obj1[28].hpm = 1;
        obj1[28].atc1 = 0;
        obj1[28].atc12 = 0;
        obj1[28].atc2 = 0;
        obj1[28].atc22 = 0;
        obj1[28].heal = 1;
        obj1[28].heal2 = 1;
        obj1[28].exp = 0;
        obj1[29].name = "Записка";
        obj1[29].hp = 0;
        obj1[29].hpm = 0;
        obj1[29].atc1 = 0;
        obj1[29].atc12 = 0;
        obj1[29].atc2 = 0;
        obj1[29].atc22 = 0;
        obj1[29].heal = 0;
        obj1[29].heal2 = 0;
        obj1[29].exp = 0;
        obj1[30].name = "Записка";
        obj1[30].hp = 0;
        obj1[30].hpm = 0;
        obj1[30].atc1 = 0;
        obj1[30].atc12 = 0;
        obj1[30].atc2 = 0;
        obj1[30].atc22 = 0;
        obj1[30].heal = 0;
        obj1[30].heal2 = 0;
        obj1[30].exp = 0;
        obj1[31].name = "Чип улучшения здоровья";
        obj1[31].hp = 0;
        obj1[31].hpm = 0;
        obj1[31].atc1 = 0;
        obj1[31].atc12 = 0;
        obj1[31].atc2 = 0;
        obj1[31].atc22 = 0;
        obj1[31].heal = 0;
        obj1[31].heal2 = 0;
        obj1[31].exp = 0;
        obj1[32].name = "Чип улучшения слабой атаки";
        obj1[32].hp = 0;
        obj1[32].hpm = 0;
        obj1[32].atc1 = 0;
        obj1[32].atc12 = 0;
        obj1[32].atc2 = 0;
        obj1[32].atc22 = 0;
        obj1[32].heal = 0;
        obj1[32].heal2 = 0;
        obj1[32].exp = 0;
        obj1[33].name = "Чип улучшения сильной атаки";
        obj1[33].hp = 0;
        obj1[33].hpm = 0;
        obj1[33].atc1 = 0;
        obj1[33].atc12 = 0;
        obj1[33].atc2 = 0;
        obj1[33].atc22 = 0;
        obj1[33].heal = 0;
        obj1[33].heal2 = 0;
        obj1[33].exp = 0;
        obj1[34].name = "Чип улучшения восстановления";
        obj1[34].hp = 0;
        obj1[34].hpm = 0;
        obj1[34].atc1 = 0;
        obj1[34].atc12 = 0;
        obj1[34].atc2 = 0;
        obj1[34].atc22 = 0;
        obj1[34].heal = 0;
        obj1[34].heal2 = 0;
        obj1[34].exp = 0;
        obj1[35].name = "Чип улучшения здоровья v 2.0";
        obj1[35].hp = 0;
        obj1[35].hpm = 0;
        obj1[35].atc1 = 0;
        obj1[35].atc12 = 0;
        obj1[35].atc2 = 0;
        obj1[35].atc22 = 0;
        obj1[35].heal = 0;
        obj1[35].heal2 = 0;
        obj1[35].exp = 0;
        obj1[36].name = "Потёртый чип";
        obj1[36].hp = 0;
        obj1[36].hpm = 0;
        obj1[36].atc1 = 0;
        obj1[36].atc12 = 0;
        obj1[36].atc2 = 0;
        obj1[36].atc22 = 0;
        obj1[36].heal = 0;
        obj1[36].heal2 = 0;
        obj1[36].exp = 0;
        obj1[37].name = "Чип для руки";
        obj1[37].hp = 0;
        obj1[37].hpm = 0;
        obj1[37].atc1 = 0;
        obj1[37].atc12 = 0;
        obj1[37].atc2 = 0;
        obj1[37].atc22 = 0;
        obj1[37].heal = 0;
        obj1[37].heal2 = 0;
        obj1[37].exp = 0;
        obj1[38].name = "Записка";
        obj1[38].hp = 0;
        obj1[38].hpm = 0;
        obj1[38].atc1 = 0;
        obj1[38].atc12 = 0;
        obj1[38].atc2 = 0;
        obj1[38].atc22 = 0;
        obj1[38].heal = 0;
        obj1[38].heal2 = 0;
        obj1[38].exp = 0;
        obj1[39].name = "Шкатулка с кодовым замком";
        obj1[39].hp = 0;
        obj1[39].hpm = 0;
        obj1[39].atc1 = 0;
        obj1[39].atc12 = 0;
        obj1[39].atc2 = 0;
        obj1[39].atc22 = 0;
        obj1[39].heal = 0;
        obj1[39].heal2 = 0;
        obj1[39].exp = 0;
        obj1[40].name = "Записка";
        obj1[40].hp = 0;
        obj1[40].hpm = 0;
        obj1[40].atc1 = 0;
        obj1[40].atc12 = 0;
        obj1[40].atc2 = 0;
        obj1[40].atc22 = 0;
        obj1[40].heal = 0;
        obj1[40].heal2 = 0;
        obj1[40].exp = 0;
        obj1[41].name = "Флешка с программой";
        obj1[41].hp = 0;
        obj1[41].hpm = 0;
        obj1[41].atc1 = 0;
        obj1[41].atc12 = 0;
        obj1[41].atc2 = 0;
        obj1[41].atc22 = 0;
        obj1[41].heal = 0;
        obj1[41].heal2 = 0;
        obj1[41].exp = 0;
        obj1[42].name = "Флешка с программой";
        obj1[42].hp = 0;
        obj1[42].hpm = 0;
        obj1[42].atc1 = 0;
        obj1[42].atc12 = 0;
        obj1[42].atc2 = 0;
        obj1[42].atc22 = 0;
        obj1[42].heal = 0;
        obj1[42].heal2 = 0;
        obj1[42].exp = 0;
        // Предметы для Механическое противостояние
    struct hero hero1[30];
        hero1[0].name="Крестоносец";
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
        hero1[1].name="Фермер";
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
        hero1[2].name="Лекарь";
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
        hero1[3].name="Арбалетчик";
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
        hero1[4].name="Ученик мага";
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
        hero1[5].name="Бронированный боец";
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
        hero1[6].name="Лорд Райзус";
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
        hero1[7].name="Мастер клинков";
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
        hero1[8].name="Бараночеловек";
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
        hero1[9].name="Последователь Сатаны";
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
        hero1[10].name="Оборотень в форме человека";
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
        hero1[11].name="Оборотень в форме огромного волка";
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
        //История
        hero1[19].name="Рыцарь";
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
        hero1[26].name="Воительница";
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
        //Для фана
        hero1[20].name="Синтольный качок";
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
        hero1[21].name="Голем из нефрита";
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
        hero1[22].name="Робот-механик";
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
        hero1[23].name="Собиратель душ";
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
        hero1[24].name="Падший воин";
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
        hero1[25].name="Прототип нового робота";
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
        enemy1[0].name = "Гигантский червь";
        enemy1[0].hp = 4;
        enemy1[0].hpm = 4;
        enemy1[0].atc1 = 1;
        enemy1[0].atc12 = 2;
        enemy1[0].atc2 = 2;
        enemy1[0].atc22 = 3;
        enemy1[0].exp = 2;
        enemy1[1].name = "Упырь";
        enemy1[1].hp = 8;
        enemy1[1].hpm = 8;
        enemy1[1].atc1 = 1;
        enemy1[1].atc12 = 2;
        enemy1[1].atc2 = 3;
        enemy1[1].atc22 = 4;
        enemy1[1].exp = 4;
        enemy1[2].name = "Волк";
        enemy1[2].hp = 6;
        enemy1[2].hpm = 6;
        enemy1[2].atc1 = 1;
        enemy1[2].atc12 = 2;
        enemy1[2].atc2 = 2;
        enemy1[2].atc22 = 4;
        enemy1[2].exp = 2;
        enemy1[3].name = "Оборотень";
        enemy1[3].hp = 10;
        enemy1[3].hpm = 10;
        enemy1[3].atc1 = 1;
        enemy1[3].atc12 = 3;
        enemy1[3].atc2 = 4;
        enemy1[3].atc22 = 5;
        enemy1[3].exp = 5;
        enemy1[4].name = "Огромный паук";
        enemy1[4].hp = 3;
        enemy1[4].hpm = 3;
        enemy1[4].atc1 = 1;
        enemy1[4].atc12 = 2;
        enemy1[4].atc2 = 2;
        enemy1[4].atc22 = 3;
        enemy1[4].exp = 1;
        enemy1[5].name = "Змея";
        enemy1[5].hp = 5;
        enemy1[5].hpm = 5;
        enemy1[5].atc1 = 2;
        enemy1[5].atc12 = 3;
        enemy1[5].atc2 = 3;
        enemy1[5].atc22 = 4;
        enemy1[5].exp = 3;
        enemy1[6].name = "Воин";
        enemy1[6].hp = 10;
        enemy1[6].hpm = 10;
        enemy1[6].atc1 = 2;
        enemy1[6].atc12 = 4;
        enemy1[6].atc2 = 3;
        enemy1[6].atc22 = 5;
        enemy1[6].exp = 4;
        enemy1[7].name = "Лечащий тотем";
        enemy1[7].hp = 1;
        enemy1[7].hpm = 1;
        enemy1[7].atc1 = -1;
        enemy1[7].atc12 = -1;
        enemy1[7].atc2 = -2;
        enemy1[7].atc22 = -2;
        enemy1[7].exp = 0;
        enemy1[8].name = "Гном";
        enemy1[8].hp = 6;
        enemy1[8].hpm = 6;
        enemy1[8].atc1 = 2;
        enemy1[8].atc12 = 3;
        enemy1[8].atc2 = 3;
        enemy1[8].atc22 = 4;
        enemy1[8].exp = 2;
        enemy1[9].name = "Охотник";
        enemy1[9].hp = 6;
        enemy1[9].hpm = 6;
        enemy1[9].atc1 = 1;
        enemy1[9].atc12 = 4;
        enemy1[9].atc2 = 0;
        enemy1[9].atc22 = 5;
        enemy1[9].exp = 4;
        enemy1[10].name = "Нестабильный тотем";
        enemy1[10].hp = 3;
        enemy1[10].hpm = 3;
        enemy1[10].atc1 = -1;
        enemy1[10].atc12 = 2;
        enemy1[10].atc2 = -2;
        enemy1[10].atc22 = 3;
        enemy1[10].exp = 1;
        enemy1[11].name = "Тотем смерти";
        enemy1[11].hp = 2;
        enemy1[11].hpm = 2;
        enemy1[11].atc1 = 50;
        enemy1[11].atc12 = 60;
        enemy1[11].atc2 = 80;
        enemy1[11].atc22 = 100;
        enemy1[11].exp = 0;
        enemy1[12].name = "Тотем забора силы";
        enemy1[12].hp = 4;
        enemy1[12].hpm = 4;
        enemy1[12].atc1 = 0;
        enemy1[12].atc12 = 0;
        enemy1[12].atc2 = 1;
        enemy1[12].atc22 = 1;
        enemy1[12].exp = 1;
        enemy1[13].name = "Кабан";
        enemy1[13].hp = 7;
        enemy1[13].hpm = 7;
        enemy1[13].atc1 = 2;
        enemy1[13].atc12 = 4;
        enemy1[13].atc2 = 3;
        enemy1[13].atc22 = 4;
        enemy1[13].exp = 2;
        enemy1[14].name = "Горилла";
        enemy1[14].hp = 8;
        enemy1[14].hpm = 8;
        enemy1[14].atc1 = 3;
        enemy1[14].atc12 = 4;
        enemy1[14].atc2 = 4;
        enemy1[14].atc22 = 4;
        enemy1[14].exp = 3;
        enemy1[15].name = "Ядовитая слизь";
        enemy1[15].hp = 10;
        enemy1[15].hpm = 10;
        enemy1[15].atc1 = 1;
        enemy1[15].atc12 = 4;
        enemy1[15].atc2 = 0;
        enemy1[15].atc22 = 5;
        enemy1[15].exp = 3;
        enemy1[16].name = "Ловушка с шипами";
        enemy1[16].hp = 14;
        enemy1[16].hpm = 14;
        enemy1[16].atc1 = 0;
        enemy1[16].atc12 = 1;
        enemy1[16].atc2 = 1;
        enemy1[16].atc22 = 1;
        enemy1[16].exp = 4;
        enemy1[17].name = "Каменная преграда";
        enemy1[17].hp = 20;
        enemy1[17].hpm = 20;
        enemy1[17].atc1 = 0;
        enemy1[17].atc12 = 0;
        enemy1[17].atc2 = 0;
        enemy1[17].atc22 = 0;
        enemy1[17].exp = 2;
        enemy1[18].name = "Сгусток порчи";
        enemy1[18].hp = 3;
        enemy1[18].hpm = 3;
        enemy1[18].atc1 = 1;
        enemy1[18].atc12 = 2;
        enemy1[18].atc2 = 2;
        enemy1[18].atc22 = 3;
        enemy1[18].exp = 1;
        enemy1[19].name = "Комната с ловушками";
        enemy1[19].hp = 14;
        enemy1[19].hpm = 14;
        enemy1[19].atc1 = 1;
        enemy1[19].atc12 = 2;
        enemy1[19].atc2 = 1;
        enemy1[19].atc22 = 3;
        enemy1[19].exp = 4;
        enemy1[20].name = "Живое дерево";
        enemy1[20].hp = 12;
        enemy1[20].hpm = 12;
        enemy1[20].atc1 = 1;
        enemy1[20].atc12 = 3;
        enemy1[20].atc2 = 1;
        enemy1[20].atc22 = 4;
        enemy1[20].exp = 4;
        enemy1[21].name = "Акула в бассейне";
        enemy1[21].hp = 8;
        enemy1[21].hpm = 8;
        enemy1[21].atc1 = 1;
        enemy1[21].atc12 = 3;
        enemy1[21].atc2 = 0;
        enemy1[21].atc22 = 5;
        enemy1[21].exp = 3;
        enemy1[22].name = "Мясник";
        enemy1[22].hp = 6;
        enemy1[22].hpm = 6;
        enemy1[22].atc1 = 2;
        enemy1[22].atc12 = 4;
        enemy1[22].atc2 = 3;
        enemy1[22].atc22 = 4;
        enemy1[22].exp = 3;
        enemy1[23].name = "Смотритель";
        enemy1[23].hp = 10;
        enemy1[23].hpm = 10;
        enemy1[23].atc1 = 0;
        enemy1[23].atc12 = 5;
        enemy1[23].atc2 = 2;
        enemy1[23].atc22 = 4;
        enemy1[23].exp = 3;
        enemy1[24].name = "[Случайный БОСС] Небольшой дракон";
        enemy1[24].hp = 16;
        enemy1[24].hpm = 16;
        enemy1[24].atc1 = 3;
        enemy1[24].atc12 = 4;
        enemy1[24].atc2 = 3;
        enemy1[24].atc22 = 5;
        enemy1[24].exp = 6;
        enemy1[25].name = "Кислотная лужа";
        enemy1[25].hp = 12;
        enemy1[25].hpm = 12;
        enemy1[25].atc1 = 1;
        enemy1[25].atc12 = 1;
        enemy1[25].atc2 = 1;
        enemy1[25].atc22 = 2;
        enemy1[25].exp = 4;
        enemy1[26].name = "Призрак";
        enemy1[26].hp = 8;
        enemy1[26].hpm = 8;
        enemy1[26].atc1 = 0;
        enemy1[26].atc12 = 2;
        enemy1[26].atc2 = 1;
        enemy1[26].atc22 = 3;
        enemy1[26].exp = 4;
        enemy1[27].name = "[Случайный БОСС] Заар";
        enemy1[27].hp = 16;
        enemy1[27].hpm = 16;
        enemy1[27].atc1 = 2;
        enemy1[27].atc12 = 3;
        enemy1[27].atc2 = 3;
        enemy1[27].atc22 = 4;
        enemy1[27].exp = 6;
        enemy1[28].name = "Тотем забора здоровья";
        enemy1[28].hp = 5;
        enemy1[28].hpm = 5;
        enemy1[28].atc1 = 2;
        enemy1[28].atc12 = 4;
        enemy1[28].atc2 = 1;
        enemy1[28].atc22 = 5;
        enemy1[28].exp = 1;
        enemy1[29].name = "Пират";
        enemy1[29].hp = 8;
        enemy1[29].hpm = 8;
        enemy1[29].atc1 = 1;
        enemy1[29].atc12 = 4;
        enemy1[29].atc2 = 3;
        enemy1[29].atc22 = 4;
        enemy1[29].exp = 3;
        enemy1[30].name = "Копьеносец";
        enemy1[30].hp = 10;
        enemy1[30].hpm = 10;
        enemy1[30].atc1 = 1;
        enemy1[30].atc12 = 3;
        enemy1[30].atc2 = 3;
        enemy1[30].atc22 = 4;
        enemy1[30].exp = 3;
        enemy1[31].name = "Чумной доктор";
        enemy1[31].hp = 5;
        enemy1[31].hpm = 5;
        enemy1[31].atc1 = 2;
        enemy1[31].atc12 = 3;
        enemy1[31].atc2 = 1;
        enemy1[31].atc22 = 2;
        enemy1[31].exp = 2;
        enemy1[32].name = "Клубок змей";
        enemy1[32].hp = 12;
        enemy1[32].hpm = 12;
        enemy1[32].atc1 = 1;
        enemy1[32].atc12 = 2;
        enemy1[32].atc2 = 1;
        enemy1[32].atc22 = 3;
        enemy1[32].exp = 3;
        enemy1[33].name = "Замок на двери";
        enemy1[33].hp = 1;
        enemy1[33].hpm = 1;
        enemy1[33].atc1 = 0;
        enemy1[33].atc12 = 0;
        enemy1[33].atc2 = 0;
        enemy1[33].atc22 = 0;
        enemy1[33].exp = 0;
        enemy1[34].name = "Древний тотем";
        enemy1[34].hp = 3;
        enemy1[34].hpm = 3;
        enemy1[34].atc1 = 0;
        enemy1[34].atc12 = 0;
        enemy1[34].atc2 = 0;
        enemy1[34].atc22 = 0;
        enemy1[34].exp = 0;
        enemy1[35].name = "Мусорный голем";
        enemy1[35].hp = 12;
        enemy1[35].hpm = 12;
        enemy1[35].atc1 = 1;
        enemy1[35].atc12 = 2;
        enemy1[35].atc2 = 2;
        enemy1[35].atc22 = 3;
        enemy1[35].exp = 3;
        enemy1[36].name = "Маленький сумасшедший робот-вакцинатор";
        enemy1[36].hp = 10;
        enemy1[36].hpm = 10;
        enemy1[36].atc1 = 1;
        enemy1[36].atc12 = 1;
        enemy1[36].atc2 = 1;
        enemy1[36].atc22 = 1;
        enemy1[36].exp = 3;
        enemy1[37].name = "[Случайный БОСС] Большой сумасшедший робот-вакцинатор";
        enemy1[37].hp = 16;
        enemy1[37].hpm = 16;
        enemy1[37].atc1 = 1;
        enemy1[37].atc12 = 2;
        enemy1[37].atc2 = 1;
        enemy1[37].atc22 = 3;
        enemy1[37].exp = 6;
        enemy1[38].name = "Заразный металлический шершень";
        enemy1[38].hp = 4;
        enemy1[38].hpm = 4;
        enemy1[38].atc1 = 1;
        enemy1[38].atc12 = 1;
        enemy1[38].atc2 = 1;
        enemy1[38].atc22 = 2;
        enemy1[38].exp = 2;
        enemy1[39].name = "Охранный мини-робот";
        enemy1[39].hp = 6;
        enemy1[39].hpm = 6;
        enemy1[39].atc1 = 1;
        enemy1[39].atc12 = 2;
        enemy1[39].atc2 = 0;
        enemy1[39].atc22 = 4;
        enemy1[39].exp = 2;
        enemy1[40].name = "Охранный робот";
        enemy1[40].hp = 10;
        enemy1[40].hpm = 10;
        enemy1[40].atc1 = 2;
        enemy1[40].atc12 = 3;
        enemy1[40].atc2 = 0;
        enemy1[40].atc22 = 5;
        enemy1[40].exp = 4;
        enemy1[41].name = "Электромина";
        enemy1[41].hp = 3;
        enemy1[41].hpm = 3;
        enemy1[41].atc1 = 3;
        enemy1[41].atc12 = 5;
        enemy1[41].atc2 = 4;
        enemy1[41].atc22 = 6;
        enemy1[41].exp = 0;
        enemy1[42].name = "Злая книга";
        enemy1[42].hp = 5;
        enemy1[42].hpm = 5;
        enemy1[42].atc1 = 0;
        enemy1[42].atc12 = 2;
        enemy1[42].atc2 = 1;
        enemy1[42].atc22 = 3;
        enemy1[42].exp = 5;
        enemy1[43].name = "Гигантский муравейник";
        enemy1[43].hp = 18;
        enemy1[43].hpm = 18;
        enemy1[43].atc1 = 0;
        enemy1[43].atc12 = 1;
        enemy1[43].atc2 = 1;
        enemy1[43].atc22 = 2;
        enemy1[43].exp = 3;
        enemy1[44].name = "Робот-машинка";
        enemy1[44].hp = 2;
        enemy1[44].hpm = 2;
        enemy1[44].atc1 = 0;
        enemy1[44].atc12 = 1;
        enemy1[44].atc2 = 0;
        enemy1[44].atc22 = 1;
        enemy1[44].exp = 0;
        enemy1[45].name = "Робот-убийца";
        enemy1[45].hp = 6;
        enemy1[45].hpm = 6;
        enemy1[45].atc1 = 2;
        enemy1[45].atc12 = 4;
        enemy1[45].atc2 = 3;
        enemy1[45].atc22 = 5;
        enemy1[45].exp = 2;
        enemy1[46].name = "Робот-уборщица";
        enemy1[46].hp = 5;
        enemy1[46].hpm = 5;
        enemy1[46].atc1 = 1;
        enemy1[46].atc12 = 2;
        enemy1[46].atc2 = 2;
        enemy1[46].atc22 = 3;
        enemy1[46].exp = 1;
        enemy1[47].name = "Ржавый охранный робот";
        enemy1[47].hp = 7;
        enemy1[47].hpm = 7;
        enemy1[47].atc1 = 0;
        enemy1[47].atc12 = 2;
        enemy1[47].atc2 = 0;
        enemy1[47].atc22 = 3;
        enemy1[47].exp = 1;
        enemy1[48].name = "Разлагающийся упырь";
        enemy1[48].hp = 6;
        enemy1[48].hpm = 6;
        enemy1[48].atc1 = 0;
        enemy1[48].atc12 = 2;
        enemy1[48].atc2 = 1;
        enemy1[48].atc22 = 3;
        enemy1[48].exp = 1;
        enemy1[49].name = "Сбежавший заключённый";
        enemy1[49].hp = 8;
        enemy1[49].hpm = 8;
        enemy1[49].atc1 = 1;
        enemy1[49].atc12 = 2;
        enemy1[49].atc2 = 1;
        enemy1[49].atc22 = 4;
        enemy1[49].exp = 3;
        enemy1[50].name = "[Случайный БОСС] Гоблин";
        enemy1[50].hp = 8;
        enemy1[50].hpm = 8;
        enemy1[50].atc1 = 0;
        enemy1[50].atc12 = 5;
        enemy1[50].atc2 = 0;
        enemy1[50].atc22 = 6;
        enemy1[50].exp = 3;
        enemy1[51].name = "Пулемётная слабая турель";
        enemy1[51].hp = 4;
        enemy1[51].hpm = 4;
        enemy1[51].atc1 = 1;
        enemy1[51].atc12 = 4;
        enemy1[51].atc2 = 2;
        enemy1[51].atc22 = 5;
        enemy1[51].exp = 2;
        enemy1[52].name = "[Случайный БОСС] Турель с миниганами";
        enemy1[52].hp = 10;
        enemy1[52].hpm = 10;
        enemy1[52].atc1 = 0;
        enemy1[52].atc12 = 6;
        enemy1[52].atc2 = 0;
        enemy1[52].atc22 = 8;
        enemy1[52].exp = 5;
        enemy1[53].name = "Подтаявший ледяной голем";
        enemy1[53].hp = 8;
        enemy1[53].hpm = 8;
        enemy1[53].atc1 = 2;
        enemy1[53].atc12 = 3;
        enemy1[53].atc2 = 3;
        enemy1[53].atc22 = 4;
        enemy1[53].exp = 3;
        enemy1[54].name = "Самолюбивый паладин";
        enemy1[54].hp = 10;
        enemy1[54].hpm = 10;
        enemy1[54].atc1 = 1;
        enemy1[54].atc12 = 2;
        enemy1[54].atc2 = 2;
        enemy1[54].atc22 = 3;
        enemy1[54].exp = 3;
        // БОССЫ
        enemy1[99].name = "[БОСС] Огненный элементаль";
        enemy1[99].hp = 10;
        enemy1[99].hpm = 10;
        enemy1[99].atc1 = 3;
        enemy1[99].atc12 = 4;
        enemy1[99].atc2 = 4;
        enemy1[99].atc22 = 5;
        enemy1[99].exp = 7;
        enemy1[98].name = "[БОСС] Циклоп-камнеметатель";
        enemy1[98].hp = 12;
        enemy1[98].hpm = 12;
        enemy1[98].atc1 = 4;
        enemy1[98].atc12 = 5;
        enemy1[98].atc2 = 2;
        enemy1[98].atc22 = 6;
        enemy1[98].exp = 8;
        enemy1[97].name = "[БОСС] Архимаг Гнилос";
        enemy1[97].hp = 16;
        enemy1[97].hpm = 16;
        enemy1[97].atc1 = 3;
        enemy1[97].atc12 = 5;
        enemy1[97].atc2 = 4;
        enemy1[97].atc22 = 6;
        enemy1[97].exp = 9;
        enemy1[96].name = "[БОСС] Императорский улей";
        enemy1[96].hp = 22;
        enemy1[96].hpm = 22;
        enemy1[96].atc1 = 2;
        enemy1[96].atc12 = 3;
        enemy1[96].atc2 = 2;
        enemy1[96].atc22 = 4;
        enemy1[96].exp = 11;
        enemy1[95].name = "[БОСС] Игломётная турель и Сломанный ржавый робот-помощник";
        enemy1[95].hp = 30;
        enemy1[95].hpm = 30;
        enemy1[95].atc1 = 1;
        enemy1[95].atc12 = 3;
        enemy1[95].atc2 = 2;
        enemy1[95].atc22 = 2;
        enemy1[95].exp = 12;
        enemy1[94].name = "[БОСС] Невинная душа";
        enemy1[94].hp = 3;
        enemy1[94].hpm = 3;
        enemy1[94].atc1 = -1;
        enemy1[94].atc12 = -1;
        enemy1[94].atc2 = -2;
        enemy1[94].atc22 = -2;
        enemy1[94].exp = 13;
        enemy1[93].name = "[БОСС] Гора плоти";
        enemy1[93].hp = 40;
        enemy1[93].hpm = 40;
        enemy1[93].atc1 = 1;
        enemy1[93].atc12 = 3;
        enemy1[93].atc2 = 1;
        enemy1[93].atc22 = 4;
        enemy1[93].exp = 14;
        enemy1[92].name = "[БОСС] Трэм";
        enemy1[92].hp = 30;
        enemy1[92].hpm = 30;
        enemy1[92].atc1 = 4;
        enemy1[92].atc12 = 6;
        enemy1[92].atc2 = 5;
        enemy1[92].atc22 = 8;
        enemy1[92].exp = 15;
        enemy1[91].name = "[БОСС] Вестник Смерти";
        enemy1[91].hp = 22;
        enemy1[91].hpm = 22;
        enemy1[91].atc1 = 7;
        enemy1[91].atc12 = 10;
        enemy1[91].atc2 = 9;
        enemy1[91].atc22 = 12;
        enemy1[91].exp = 16;
        enemy1[90].name = "[БОСС] Смерть";
        enemy1[90].hp = 24;
        enemy1[90].hpm = 24;
        enemy1[90].atc1 = 6;
        enemy1[90].atc12 = 8;
        enemy1[90].atc2 = 8;
        enemy1[90].atc22 = 10;
        enemy1[90].exp = 17;
        enemy1[89].name = "[БОСС] Сердце Замка";
        enemy1[89].hp = 1000;
        enemy1[89].hpm = 1000;
        enemy1[89].atc1 = 0;
        enemy1[89].atc12 = 0;
        enemy1[89].atc2 = 0;
        enemy1[89].atc22 = 0;
        enemy1[89].exp = 0;
        // Особые
        enemy1[88].name = "Разъярённый мимик";
        enemy1[88].hp = 16;
        enemy1[88].hpm = 16;
        enemy1[88].atc1 = 4;
        enemy1[88].atc12 = 6;
        enemy1[88].atc2 = 5;
        enemy1[88].atc22 = 7;
        enemy1[88].exp = 5;
        enemy1[87].name = "Каратель";
        enemy1[87].hp = 20;
        enemy1[87].hpm = 20;
        enemy1[87].atc1 = 4;
        enemy1[87].atc12 = 6;
        enemy1[87].atc2 = 6;
        enemy1[87].atc22 = 8;
        enemy1[87].exp = 8;
        // Механическое противостояние
        enemy1[100].name = "Робот-электрик";
        enemy1[100].hp = 5;
        enemy1[100].hpm = 5;
        enemy1[100].atc1 = 1;
        enemy1[100].atc12 = 2;
        enemy1[100].atc2 = 0;
        enemy1[100].atc22 = 3;
        enemy1[100].exp = 2;
        enemy1[101].name = "Робот-охранник";
        enemy1[101].hp = 7;
        enemy1[101].hpm = 7;
        enemy1[101].atc1 = 2;
        enemy1[101].atc12 = 2;
        enemy1[101].atc2 = 2;
        enemy1[101].atc22 = 4;
        enemy1[101].exp = 3;
        enemy1[102].name = "Поломанный ржавый командир роботов";
        enemy1[102].hp = 7;
        enemy1[102].hpm = 7;
        enemy1[102].atc1 = 0;
        enemy1[102].atc12 = 3;
        enemy1[102].atc2 = 0;
        enemy1[102].atc22 = 4;
        enemy1[102].exp = 3;
        enemy1[103].name = "Маленький робот";
        enemy1[103].hp = 4;
        enemy1[103].hpm = 4;
        enemy1[103].atc1 = 1;
        enemy1[103].atc12 = 2;
        enemy1[103].atc2 = 1;
        enemy1[103].atc22 = 3;
        enemy1[103].exp = 1;
        enemy1[104].name = "Робот-официант";
        enemy1[104].hp = 6;
        enemy1[104].hpm = 6;
        enemy1[104].atc1 = 1;
        enemy1[104].atc12 = 2;
        enemy1[104].atc2 = 2;
        enemy1[104].atc22 = 4;
        enemy1[104].exp = 2;
        enemy1[105].name = "Робот-пылесос";
        enemy1[105].hp = 1;
        enemy1[105].hpm = 1;
        enemy1[105].atc1 = 0;
        enemy1[105].atc12 = 0;
        enemy1[105].atc2 = 0;
        enemy1[105].atc22 = 1;
        enemy1[105].exp = 0;
        enemy1[106].name = "Робот-садовник";
        enemy1[106].hp = 7;
        enemy1[106].hpm = 7;
        enemy1[106].atc1 = 1;
        enemy1[106].atc12 = 2;
        enemy1[106].atc2 = 3;
        enemy1[106].atc22 = 4;
        enemy1[106].exp = 3;
        enemy1[107].name = "Робокот";
        enemy1[107].hp = 4;
        enemy1[107].hpm = 4;
        enemy1[107].atc1 = 1;
        enemy1[107].atc12 = 2;
        enemy1[107].atc2 = 1;
        enemy1[107].atc22 = 2;
        enemy1[107].exp = 1;
        enemy1[108].name = "Робот-воин";
        enemy1[108].hp = 8;
        enemy1[108].hpm = 8;
        enemy1[108].atc1 = 1;
        enemy1[108].atc12 = 3;
        enemy1[108].atc2 = 2;
        enemy1[108].atc22 = 5;
        enemy1[108].exp = 3;
        enemy1[109].name = "Музыкальная шкатулка";
        enemy1[109].hp = 1;
        enemy1[109].hpm = 1;
        enemy1[109].atc1 = 0;
        enemy1[109].atc12 = 0;
        enemy1[109].atc2 = 0;
        enemy1[109].atc22 = 0;
        enemy1[109].exp = 0;
        enemy1[110].name = "Робот-шахтёр";
        enemy1[110].hp = 6;
        enemy1[110].hpm = 6;
        enemy1[110].atc1 = 2;
        enemy1[110].atc12 = 3;
        enemy1[110].atc2 = 3;
        enemy1[110].atc22 = 5;
        enemy1[110].exp = 2;
        enemy1[111].name = "Робот-инженер";
        enemy1[111].hp = 8;
        enemy1[111].hpm = 8;
        enemy1[111].atc1 = 2;
        enemy1[111].atc12 = 3;
        enemy1[111].atc2 = 0;
        enemy1[111].atc22 = 0;
        enemy1[111].exp = 2;
        enemy1[112].name = "Небольшой летающий над землёй дрон";
        enemy1[112].hp = 4;
        enemy1[112].hpm = 4;
        enemy1[112].atc1 = 1;
        enemy1[112].atc12 = 2;
        enemy1[112].atc2 = 2;
        enemy1[112].atc22 = 3;
        enemy1[112].exp = 1;
        enemy1[113].name = "Робот-самурай";
        enemy1[113].hp = 10;
        enemy1[113].hpm = 10;
        enemy1[113].atc1 = 0;
        enemy1[113].atc12 = 3;
        enemy1[113].atc2 = 0;
        enemy1[113].atc22 = 4;
        enemy1[113].exp = 2;
        enemy1[114].name = "Робот-замок с игольной пушкой";
        enemy1[114].hp = 3;
        enemy1[114].hpm = 3;
        enemy1[114].atc1 = 1;
        enemy1[114].atc12 = 1;
        enemy1[114].atc2 = 1;
        enemy1[114].atc22 = 2;
        enemy1[114].exp = 0;
        //Сражение с падшими героями
        enemy1[150].name = "Призрак крестоносца";
        enemy1[150].hp = 8;
        enemy1[150].hpm = 8;
        enemy1[150].atc1 = 1;
        enemy1[150].atc12 = 2;
        enemy1[150].atc2 = 1;
        enemy1[150].atc22 = 4;
        enemy1[150].exp = 3;
        enemy1[151].name = "Призрак крестьянина";
        enemy1[151].hp = 6;
        enemy1[151].hpm = 6;
        enemy1[151].atc1 = 1;
        enemy1[151].atc12 = 3;
        enemy1[151].atc2 = 2;
        enemy1[151].atc22 = 3;
        enemy1[151].exp = 2;
        enemy1[152].name = "Призрак арбалетчика";
        enemy1[152].hp = 6;
        enemy1[152].hpm = 6;
        enemy1[152].atc1 = 1;
        enemy1[152].atc12 = 1;
        enemy1[152].atc2 = 0;
        enemy1[152].atc22 = 6;
        enemy1[152].exp = 2;
        enemy1[153].name = "Призрак фермера";
        enemy1[153].hp = 6;
        enemy1[153].hpm = 6;
        enemy1[153].atc1 = 1;
        enemy1[153].atc12 = 2;
        enemy1[153].atc2 = 1;
        enemy1[153].atc22 = 3;
        enemy1[153].exp = 2;
        enemy1[154].name = "Призрак лекаря";
        enemy1[154].hp = 5;
        enemy1[154].hpm = 5;
        enemy1[154].atc1 = 1;
        enemy1[154].atc12 = 1;
        enemy1[154].atc2 = 1;
        enemy1[154].atc22 = 2;
        enemy1[154].exp = 1;
        enemy1[155].name = "Призрак ученика мага";
        enemy1[155].hp = 7;
        enemy1[155].hpm = 7;
        enemy1[155].atc1 = 1;
        enemy1[155].atc12 = 1;
        enemy1[155].atc2 = -1;
        enemy1[155].atc22 = 4;
        enemy1[155].exp = 2;
        enemy1[156].name = "Призрак бронированного бойца";
        enemy1[156].hp = 12;
        enemy1[156].hpm = 12;
        enemy1[156].atc1 = 1;
        enemy1[156].atc12 = 1;
        enemy1[156].atc2 = 1;
        enemy1[156].atc22 = 4;
        enemy1[156].exp = 3;
        enemy1[157].name = "Призрак рыцаря";
        enemy1[157].hp = 9;
        enemy1[157].hpm = 9;
        enemy1[157].atc1 = 2;
        enemy1[157].atc12 = 3;
        enemy1[157].atc2 = 2;
        enemy1[157].atc22 = 4;
        enemy1[157].exp = 3;
        enemy1[158].name = "Призрак кота";
        enemy1[158].hp = 4;
        enemy1[158].hpm = 4;
        enemy1[158].atc1 = 1;
        enemy1[158].atc12 = 2;
        enemy1[158].atc2 = 2;
        enemy1[158].atc22 = 3;
        enemy1[158].exp = 1;
        enemy1[159].name = "Призрак центуриона";
        enemy1[159].hp = 7;
        enemy1[159].hpm = 7;
        enemy1[159].atc1 = 2;
        enemy1[159].atc12 = 4;
        enemy1[159].atc2 = 2;
        enemy1[159].atc22 = 5;
        enemy1[159].exp = 4;
        enemy1[159].name = "Призрак пирата";
        enemy1[160].hp = 6;
        enemy1[160].hpm = 6;
        enemy1[160].atc1 = 0;
        enemy1[160].atc12 = 2;
        enemy1[160].atc2 = 2;
        enemy1[160].atc22 = 4;
        enemy1[160].exp = 3;
        //Познание истины
        enemy1[200].name = "Дворецкий";
        enemy1[200].hp = 7;
        enemy1[200].hpm = 7;
        enemy1[200].atc1 = 1;
        enemy1[200].atc12 = 2;
        enemy1[200].atc2 = 2;
        enemy1[200].atc22 = 3;
        enemy1[200].exp = 1;
        //Забавные приключения
        //Гриб
        enemy1[300].name = "Котодевочка";
        enemy1[300].hp = 6;
        enemy1[300].hpm = 6;
        enemy1[300].atc1 = 1;
        enemy1[300].atc12 = 2;
        enemy1[300].atc2 = 1;
        enemy1[300].atc22 = 3;
        enemy1[300].exp = 1;
        enemy1[301].name = "Нуб в кс";
        enemy1[301].hp = 8;
        enemy1[301].hpm = 8;
        enemy1[301].atc1 = 0;
        enemy1[301].atc12 = 0;
        enemy1[301].atc2 = 0;
        enemy1[301].atc22 = 1;
        enemy1[301].exp = 1;
        enemy1[302].name = "Анимешник";
        enemy1[302].hp = 8;
        enemy1[302].hpm = 8;
        enemy1[302].atc1 = 0;
        enemy1[302].atc12 = 0;
        enemy1[302].atc2 = 2;
        enemy1[302].atc22 = 4;
        enemy1[302].exp = 2;
        enemy1[303].name = "Грибочеловек воин";
        enemy1[303].hp = 10;
        enemy1[303].hpm = 10;
        enemy1[303].atc1 = 0;
        enemy1[303].atc12 = 1;
        enemy1[303].atc2 = 3;
        enemy1[303].atc22 = 4;
        enemy1[303].exp = 3;
        enemy1[304].name = "Гриб";
        enemy1[304].hp = 2;
        enemy1[304].hpm = 2;
        enemy1[304].atc1 = 0;
        enemy1[304].atc12 = 1;
        enemy1[304].atc2 = 0;
        enemy1[304].atc22 = 1;
        enemy1[304].exp = 0;
        enemy1[305].name = "Игрок в кс";
        enemy1[305].hp = 8;
        enemy1[305].hpm = 8;
        enemy1[305].atc1 = 2;
        enemy1[305].atc12 = 3;
        enemy1[305].atc2 = 2;
        enemy1[305].atc22 = 4;
        enemy1[305].exp = 2;
        enemy1[306].name = "Японский самурай";
        enemy1[306].hp = 8;
        enemy1[306].hpm = 8;
        enemy1[306].atc1 = 2;
        enemy1[306].atc12 = 4;
        enemy1[306].atc2 = 2;
        enemy1[306].atc22 = 4;
        enemy1[306].exp = 3;
        enemy1[307].name = "Клубок тентаклей";
        enemy1[307].hp = 12;
        enemy1[307].hpm = 12;
        enemy1[307].atc1 = 0;
        enemy1[307].atc12 = 2;
        enemy1[307].atc2 = 1;
        enemy1[307].atc22 = 2;
        enemy1[307].exp = 3;
        enemy1[308].name = "Грибочеловек стрелок";
        enemy1[308].hp = 10;
        enemy1[308].hpm = 10;
        enemy1[308].atc1 = 0;
        enemy1[308].atc12 = 1;
        enemy1[308].atc2 = 0;
        enemy1[308].atc22 = 4;
        enemy1[308].exp = 3;
        enemy1[309].name = "Японская бабка";
        enemy1[309].hp = 10;
        enemy1[309].hpm = 10;
        enemy1[309].atc1 = 1;
        enemy1[309].atc12 = 3;
        enemy1[309].atc2 = 2;
        enemy1[309].atc22 = 3;
        enemy1[309].exp = 2;
        //Серёга
        enemy1[310].name = "Тотем древних богов";
        enemy1[310].hp = 3;
        enemy1[310].hpm = 3;
        enemy1[310].atc1 = 4;
        enemy1[310].atc12 = 6;
        enemy1[310].atc2 = 8;
        enemy1[310].atc22 = 10;
        enemy1[310].exp = 1;
        enemy1[311].name = "Злой волк";
        enemy1[311].hp = 6;
        enemy1[311].hpm = 6;
        enemy1[311].atc1 = 1;
        enemy1[311].atc12 = 2;
        enemy1[311].atc2 = 1;
        enemy1[311].atc22 = 3;
        enemy1[311].exp = 2;
        enemy1[312].name = "Конь";
        enemy1[312].hp = 7;
        enemy1[312].hpm = 7;
        enemy1[312].atc1 = 2;
        enemy1[312].atc12 = 3;
        enemy1[312].atc2 = 3;
        enemy1[312].atc22 = 3;
        enemy1[312].exp = 3;
        enemy1[313].name = "Злой оборотень";
        enemy1[313].hp = 8;
        enemy1[313].hpm = 8;
        enemy1[313].atc1 = 1;
        enemy1[313].atc12 = 3;
        enemy1[313].atc2 = 3;
        enemy1[313].atc22 = 4;
        enemy1[313].exp = 4;
        enemy1[314].name = "Пустой бобик";
        enemy1[314].hp = 20;
        enemy1[314].hpm = 20;
        enemy1[314].atc1 = 0;
        enemy1[314].atc12 = 0;
        enemy1[314].atc2 = 0;
        enemy1[314].atc22 = 0;
        enemy1[314].exp = 1;
        enemy1[315].name = "Капкан";
        enemy1[315].hp = 3;
        enemy1[315].hpm = 3;
        enemy1[315].atc1 = 2;
        enemy1[315].atc12 = 3;
        enemy1[315].atc2 = 2;
        enemy1[315].atc22 = 3;
        enemy1[315].exp = 1;
        enemy1[316].name = "Лодочник";
        enemy1[316].hp = 6;
        enemy1[316].hpm = 6;
        enemy1[316].atc1 = 1;
        enemy1[316].atc12 = 3;
        enemy1[316].atc2 = 2;
        enemy1[316].atc22 = 4;
        enemy1[316].exp = 2;
        enemy1[317].name = "Старец-маг";
        enemy1[317].hp = 6;
        enemy1[317].hpm = 6;
        enemy1[317].atc1 = -1;
        enemy1[317].atc12 = 3;
        enemy1[317].atc2 = -2;
        enemy1[317].atc22 = 4;
        enemy1[317].exp = 2;
        enemy1[318].name = "Буханка хлеба";
        enemy1[318].hp = 1;
        enemy1[318].hpm = 1;
        enemy1[318].atc1 = 0;
        enemy1[318].atc12 = 0;
        enemy1[318].atc2 = 0;
        enemy1[318].atc22 = 0;
        enemy1[318].exp = 0;
        enemy1[319].name = "Воин богов";
        enemy1[319].hp = 8;
        enemy1[319].hpm = 8;
        enemy1[319].atc1 = 0;
        enemy1[319].atc12 = 0;
        enemy1[319].atc2 = 2;
        enemy1[319].atc22 = 5;
        enemy1[319].exp = 3;
        //Ильяс
        enemy1[320].name = "Уставший крестоносец";
        enemy1[320].hp = 6;
        enemy1[320].hpm = 6;
        enemy1[320].atc1 = 1;
        enemy1[320].atc12 = 3;
        enemy1[320].atc2 = 2;
        enemy1[320].atc22 = 3;
        enemy1[320].exp = 2;
        enemy1[321].name = "Канализационная труба, преграждающая путь";
        enemy1[321].hp = 3;
        enemy1[321].hpm = 3;
        enemy1[321].atc1 = 0;
        enemy1[321].atc12 = 0;
        enemy1[321].atc2 = 0;
        enemy1[321].atc22 = 0;
        enemy1[321].exp = 0;
        enemy1[322].name = "Лирооой";
        enemy1[322].hp = 2;
        enemy1[322].hpm = 2;
        enemy1[322].atc1 = 6;
        enemy1[322].atc12 = 6;
        enemy1[322].atc2 = 6;
        enemy1[322].atc22 = 6;
        enemy1[322].exp = 1;
        enemy1[323].name = "Немецкий солдат";
        enemy1[323].hp = 8;
        enemy1[323].hpm = 8;
        enemy1[323].atc1 = 2;
        enemy1[323].atc12 = 3;
        enemy1[323].atc2 = 0;
        enemy1[323].atc22 = 4;
        enemy1[323].exp = 3;
        enemy1[324].name = "Немецкий солдат-зомби";
        enemy1[324].hp = 6;
        enemy1[324].hpm = 6;
        enemy1[324].atc1 = 0;
        enemy1[324].atc12 = 2;
        enemy1[324].atc2 = 1;
        enemy1[324].atc22 = 2;
        enemy1[324].exp = 2;
        enemy1[325].name = "Повозка с провизией";
        enemy1[325].hp = 12;
        enemy1[325].hpm = 12;
        enemy1[325].atc1 = -1;
        enemy1[325].atc12 = -1;
        enemy1[325].atc2 = -2;
        enemy1[325].atc22 = -2;
        enemy1[325].exp = 0;
        enemy1[326].name = "Форест";
        enemy1[326].hp = 2;
        enemy1[326].hpm = 2;
        enemy1[326].atc1 = 2;
        enemy1[326].atc12 = 6;
        enemy1[326].atc2 = 6;
        enemy1[326].atc22 = 8;
        enemy1[326].exp = 1;
        enemy1[327].name = "Лучник";
        enemy1[327].hp = 8;
        enemy1[327].hpm = 8;
        enemy1[327].atc1 = 1;
        enemy1[327].atc12 = 3;
        enemy1[327].atc2 = 0;
        enemy1[327].atc22 = 5;
        enemy1[327].exp = 2;
        enemy1[328].name = "Комната с ловушками из ручек";
        enemy1[328].hp = 14;
        enemy1[328].hpm = 14;
        enemy1[328].atc1 = 0;
        enemy1[328].atc12 = 1;
        enemy1[328].atc2 = 0;
        enemy1[328].atc22 = 1;
        enemy1[328].exp = 3;
        enemy1[329].name = "Божественная преграда";
        enemy1[329].hp = 1;
        enemy1[329].hpm = 1;
        enemy1[329].atc1 = 0;
        enemy1[329].atc12 = 0;
        enemy1[329].atc2 = 0;
        enemy1[329].atc22 = 0;
        enemy1[329].exp = 0;
        //Маффин
        enemy1[330].name = "Голем из нефрита";
        enemy1[330].hp = 1;
        enemy1[330].hpm = 1;
        enemy1[330].atc1 = 1;
        enemy1[330].atc12 = 1;
        enemy1[330].atc2 = 1;
        enemy1[330].atc22 = 1;
        enemy1[330].exp = 1;
        enemy1[331].name = "Голем из нефрита";
        enemy1[331].hp = 2;
        enemy1[331].hpm = 2;
        enemy1[331].atc1 = 2;
        enemy1[331].atc12 = 2;
        enemy1[331].atc2 = 2;
        enemy1[331].atc22 = 2;
        enemy1[331].exp = 2;
        enemy1[332].name = "Голем из нефрита";
        enemy1[332].hp = 3;
        enemy1[332].hpm = 3;
        enemy1[332].atc1 = 3;
        enemy1[332].atc12 = 3;
        enemy1[332].atc2 = 3;
        enemy1[332].atc22 = 3;
        enemy1[332].exp = 3;
        enemy1[333].name = "Голем из нефрита";
        enemy1[333].hp = 4;
        enemy1[333].hpm = 4;
        enemy1[333].atc1 = 4;
        enemy1[333].atc12 = 4;
        enemy1[333].atc2 = 4;
        enemy1[333].atc22 = 4;
        enemy1[333].exp = 4;
        enemy1[334].name = "Голем из нефрита";
        enemy1[334].hp = 5;
        enemy1[334].hpm = 5;
        enemy1[334].atc1 = 5;
        enemy1[334].atc12 = 5;
        enemy1[334].atc2 = 5;
        enemy1[334].atc22 = 5;
        enemy1[334].exp = 5;
        enemy1[335].name = "Глиняная преграда";
        enemy1[335].hp = 10;
        enemy1[335].hpm = 10;
        enemy1[335].atc1 = 0;
        enemy1[335].atc12 = 0;
        enemy1[335].atc2 = 0;
        enemy1[335].atc22 = 0;
        enemy1[335].exp = 2;
        enemy1[336].name = "Злая глина";
        enemy1[336].hp = 4;
        enemy1[336].hpm = 4;
        enemy1[336].atc1 = 1;
        enemy1[336].atc12 = 2;
        enemy1[336].atc2 = 2;
        enemy1[336].atc22 = 3;
        enemy1[336].exp = 1;
        enemy1[337].name = "Голем из глины";
        enemy1[337].hp = 5;
        enemy1[337].hpm = 5;
        enemy1[337].atc1 = 1;
        enemy1[337].atc12 = 2;
        enemy1[337].atc2 = 3;
        enemy1[337].atc22 = 4;
        enemy1[337].exp = 2;
        enemy1[338].name = "Глиняные острые шипы";
        enemy1[338].hp = 10;
        enemy1[338].hpm = 10;
        enemy1[338].atc1 = 0;
        enemy1[338].atc12 = 1;
        enemy1[338].atc2 = 1;
        enemy1[338].atc22 = 1;
        enemy1[338].exp = 2;
        enemy1[339].name = "Глиняный замок на двери";
        enemy1[339].hp = 1;
        enemy1[339].hpm = 1;
        enemy1[339].atc1 = 0;
        enemy1[339].atc12 = 0;
        enemy1[339].atc2 = 0;
        enemy1[339].atc22 = 0;
        enemy1[339].exp = 0;
        //Еноти
        enemy1[340].name = "Енот";
        enemy1[340].hp = 2;
        enemy1[340].hpm = 2;
        enemy1[340].atc1 = 1;
        enemy1[340].atc12 = 2;
        enemy1[340].atc2 = 1;
        enemy1[340].atc22 = 2;
        enemy1[340].exp = 1;
        enemy1[341].name = "Солдат";
        enemy1[341].hp = 8;
        enemy1[341].hpm = 8;
        enemy1[341].atc1 = 1;
        enemy1[341].atc12 = 3;
        enemy1[341].atc2 = 0;
        enemy1[341].atc22 = 4;
        enemy1[341].exp = 3;
        enemy1[342].name = "Рок-звезда";
        enemy1[342].hp = 7;
        enemy1[342].hpm = 7;
        enemy1[342].atc1 = 1;
        enemy1[342].atc12 = 2;
        enemy1[342].atc2 = 3;
        enemy1[342].atc22 = 4;
        enemy1[342].exp = 3;
        enemy1[343].name = "Спящий солдат";
        enemy1[343].hp = 6;
        enemy1[343].hpm = 6;
        enemy1[343].atc1 = 0;
        enemy1[343].atc12 = 0;
        enemy1[343].atc2 = 0;
        enemy1[343].atc22 = 0;
        enemy1[343].exp = 0;
        enemy1[344].name = "Элитный боец";
        enemy1[344].hp = 12;
        enemy1[344].hpm = 12;
        enemy1[344].atc1 = 2;
        enemy1[344].atc12 = 3;
        enemy1[344].atc2 = 4;
        enemy1[344].atc22 = 5;
        enemy1[344].exp = 5;
        enemy1[345].name = "Сломанная машина";
        enemy1[345].hp = 20;
        enemy1[345].hpm = 20;
        enemy1[345].atc1 = 0;
        enemy1[345].atc12 = 0;
        enemy1[345].atc2 = 0;
        enemy1[345].atc22 = 0;
        enemy1[345].exp = 2;
        enemy1[346].name = "Боец";
        enemy1[346].hp = 10;
        enemy1[346].hpm = 10;
        enemy1[346].atc1 = 1;
        enemy1[346].atc12 = 3;
        enemy1[346].atc2 = 3;
        enemy1[346].atc22 = 4;
        enemy1[346].exp = 3;
        enemy1[347].name = "Острые обломки вертолёта";
        enemy1[347].hp = 16;
        enemy1[347].hpm = 16;
        enemy1[347].atc1 = 1;
        enemy1[347].atc12 = 1;
        enemy1[347].atc2 = 1;
        enemy1[347].atc22 = 2;
        enemy1[347].exp = 2;
        enemy1[348].name = "Гангстер";
        enemy1[348].hp = 8;
        enemy1[348].hpm = 8;
        enemy1[348].atc1 = 1;
        enemy1[348].atc12 = 3;
        enemy1[348].atc2 = 0;
        enemy1[348].atc22 = 5;
        enemy1[348].exp = 2;
        enemy1[349].name = "Андроид-гонщик с встроенной 1080 Ti видеокартой";
        enemy1[349].hp = 7;
        enemy1[349].hpm = 7;
        enemy1[349].atc1 = 1;
        enemy1[349].atc12 = 2;
        enemy1[349].atc2 = 3;
        enemy1[349].atc22 = 4;
        enemy1[349].exp = 2;
        //Мыши
        enemy1[350].name = "Лабораторная мышь";
        enemy1[350].hp = 2;
        enemy1[350].hpm = 2;
        enemy1[350].atc1 = 1;
        enemy1[350].atc12 = 1;
        enemy1[350].atc2 = 1;
        enemy1[350].atc22 = 2;
        enemy1[350].exp = 0;
        enemy1[351].name = "Мутировавшая гигантская мышь";
        enemy1[351].hp = 12;
        enemy1[351].hpm = 12;
        enemy1[351].atc1 = 2;
        enemy1[351].atc12 = 4;
        enemy1[351].atc2 = 3;
        enemy1[351].atc22 = 5;
        enemy1[351].exp = 5;
        enemy1[352].name = "Завал из тетрадок по математике";
        enemy1[352].hp = 20;
        enemy1[352].hpm = 20;
        enemy1[352].atc1 = 0;
        enemy1[352].atc12 = 0;
        enemy1[352].atc2 = 0;
        enemy1[352].atc22 = 0;
        enemy1[352].exp = 1;
        enemy1[353].name = "Мышечеловек";
        enemy1[353].hp = 9;
        enemy1[353].hpm = 9;
        enemy1[353].atc1 = 2;
        enemy1[353].atc12 = 3;
        enemy1[353].atc2 = 2;
        enemy1[353].atc22 = 4;
        enemy1[353].exp = 2;
        enemy1[354].name = "Маленький алмазный элементаль";
        enemy1[354].hp = 6;
        enemy1[354].hpm = 6;
        enemy1[354].atc1 = 2;
        enemy1[354].atc12 = 4;
        enemy1[354].atc2 = 2;
        enemy1[354].atc22 = 5;
        enemy1[354].exp = 2;
        enemy1[355].name = "Алмазная ферма";
        enemy1[355].hp = 16;
        enemy1[355].hpm = 16;
        enemy1[355].atc1 = 1;
        enemy1[355].atc12 = 2;
        enemy1[355].atc2 = 1;
        enemy1[355].atc22 = 3;
        enemy1[355].exp = 3;
        enemy1[356].name = "Несколько мышей";
        enemy1[356].hp = 8;
        enemy1[356].hpm = 8;
        enemy1[356].atc1 = 3;
        enemy1[356].atc12 = 3;
        enemy1[356].atc2 = 2;
        enemy1[356].atc22 = 4;
        enemy1[356].exp = 2;
        enemy1[357].name = "Мышечеловек воин";
        enemy1[357].hp = 10;
        enemy1[357].hpm = 10;
        enemy1[357].atc1 = 1;
        enemy1[357].atc12 = 3;
        enemy1[357].atc2 = 3;
        enemy1[357].atc22 = 5;
        enemy1[357].exp = 4;
        enemy1[358].name = "Алмазный замок";
        enemy1[358].hp = 3;
        enemy1[358].hpm = 3;
        enemy1[358].atc1 = 0;
        enemy1[358].atc12 = 0;
        enemy1[358].atc2 = 0;
        enemy1[358].atc22 = 0;
        enemy1[358].exp = 0;
        enemy1[359].name = "Огромная крыса";
        enemy1[359].hp = 5;
        enemy1[359].hpm = 5;
        enemy1[359].atc1 = 2;
        enemy1[359].atc12 = 3;
        enemy1[359].atc2 = 2;
        enemy1[359].atc22 = 3;
        enemy1[359].exp = 1;
        //Антон
        enemy1[360].name = "Перекати-поле";
        enemy1[360].hp = 1;
        enemy1[360].hpm = 1;
        enemy1[360].atc1 = 0;
        enemy1[360].atc12 = 0;
        enemy1[360].atc2 = 0;
        enemy1[360].atc22 = 0;
        enemy1[360].exp = 0;
        enemy1[361].name = "Старый замок на двери";
        enemy1[361].hp = 1;
        enemy1[361].hpm = 1;
        enemy1[361].atc1 = 0;
        enemy1[361].atc12 = 0;
        enemy1[361].atc2 = 0;
        enemy1[361].atc22 = 0;
        enemy1[361].exp = 0;
        enemy1[362].name = "Подгнившие доски, прибитые к двери и стене";
        enemy1[362].hp = 4;
        enemy1[362].hpm = 4;
        enemy1[362].atc1 = 0;
        enemy1[362].atc12 = 0;
        enemy1[362].atc2 = 0;
        enemy1[362].atc22 = 0;
        enemy1[362].exp = 0;
        enemy1[363].name = "Ящики у двери";
        enemy1[363].hp = 6;
        enemy1[363].hpm = 6;
        enemy1[363].atc1 = 0;
        enemy1[363].atc12 = 0;
        enemy1[363].atc2 = 0;
        enemy1[363].atc22 = 0;
        enemy1[363].exp = 0;
        enemy1[364].name = "Деревянные шипы на полу";
        enemy1[364].hp = 10;
        enemy1[364].hpm = 10;
        enemy1[364].atc1 = 1;
        enemy1[364].atc12 = 2;
        enemy1[364].atc2 = 1;
        enemy1[364].atc22 = 3;
        enemy1[364].exp = 1;
        enemy1[365].name = "Деревянный голем";
        enemy1[365].hp = 10;
        enemy1[365].hpm = 10;
        enemy1[365].atc1 = 3;
        enemy1[365].atc12 = 4;
        enemy1[365].atc2 = 3;
        enemy1[365].atc22 = 5;
        enemy1[365].exp = 3;
        enemy1[366].name = "Парта у двери";
        enemy1[366].hp = 4;
        enemy1[366].hpm = 4;
        enemy1[366].atc1 = 0;
        enemy1[366].atc12 = 0;
        enemy1[366].atc2 = 0;
        enemy1[366].atc22 = 0;
        enemy1[366].exp = 0;
        enemy1[367].name = "Скелет";
        enemy1[367].hp = 8;
        enemy1[367].hpm = 8;
        enemy1[367].atc1 = 2;
        enemy1[367].atc12 = 3;
        enemy1[367].atc2 = 3;
        enemy1[367].atc22 = 4;
        enemy1[367].exp = 2;
        enemy1[368].name = "Куча паутины";
        enemy1[368].hp = 8;
        enemy1[368].hpm = 8;
        enemy1[368].atc1 = 0;
        enemy1[368].atc12 = 0;
        enemy1[368].atc2 = 0;
        enemy1[368].atc22 = 0;
        enemy1[368].exp = 0;
        enemy1[369].name = "Древесно-смоляной голем";
        enemy1[369].hp = 12;
        enemy1[369].hpm = 12;
        enemy1[369].atc1 = 3;
        enemy1[369].atc12 = 5;
        enemy1[369].atc2 = 3;
        enemy1[369].atc22 = 6;
        enemy1[369].exp = 3;
        //Димас Алекс
        enemy1[370].name = "Тёмный самурай";
        enemy1[370].hp = 10;
        enemy1[370].hpm = 10;
        enemy1[370].atc1 = 2;
        enemy1[370].atc12 = 4;
        enemy1[370].atc2 = 3;
        enemy1[370].atc22 = 4;
        enemy1[370].exp = 4;
        enemy1[371].name = "Парящее око с тентаклями";
        enemy1[371].hp = 8;
        enemy1[371].hpm = 8;
        enemy1[371].atc1 = 1;
        enemy1[371].atc12 = 4;
        enemy1[371].atc2 = 3;
        enemy1[371].atc22 = 6;
        enemy1[371].exp = 3;
        enemy1[372].name = "Тёмные оковы";
        enemy1[372].hp = 10;
        enemy1[372].hpm = 10;
        enemy1[372].atc1 = 2;
        enemy1[372].atc12 = 2;
        enemy1[372].atc2 = 2;
        enemy1[372].atc22 = 2;
        enemy1[372].exp = 2;
        enemy1[373].name = "Тьма";
        enemy1[373].hp = 8;
        enemy1[373].hpm = 8;
        enemy1[373].atc1 = 3;
        enemy1[373].atc12 = 4;
        enemy1[373].atc2 = 3;
        enemy1[373].atc22 = 4;
        enemy1[373].exp = 3;
        enemy1[374].name = "Огромный тёмный осьминог";
        enemy1[374].hp = 12;
        enemy1[374].hpm = 12;
        enemy1[374].atc1 = 2;
        enemy1[374].atc12 = 4;
        enemy1[374].atc2 = 3;
        enemy1[374].atc22 = 5;
        enemy1[374].exp = 5;
        enemy1[375].name = "Голем из тёмного камня";
        enemy1[375].hp = 8;
        enemy1[375].hpm = 8;
        enemy1[375].atc1 = 2;
        enemy1[375].atc12 = 6;
        enemy1[375].atc2 = 2;
        enemy1[375].atc22 = 6;
        enemy1[375].exp = 3;
        enemy1[376].name = "Тёмный камень";
        enemy1[376].hp = 14;
        enemy1[376].hpm = 14;
        enemy1[376].atc1 = 2;
        enemy1[376].atc12 = 2;
        enemy1[376].atc2 = 3;
        enemy1[376].atc22 = 3;
        enemy1[376].exp = 2;
        enemy1[377].name = "Тёмный замок на двери";
        enemy1[377].hp = 2;
        enemy1[377].hpm = 2;
        enemy1[377].atc1 = 0;
        enemy1[377].atc12 = 0;
        enemy1[377].atc2 = 0;
        enemy1[377].atc22 = 0;
        enemy1[377].exp = 0;
        enemy1[378].name = "Тёмный маг";
        enemy1[378].hp = 12;
        enemy1[378].hpm = 12;
        enemy1[378].atc1 = -1;
        enemy1[378].atc12 = 4;
        enemy1[378].atc2 = -2;
        enemy1[378].atc22 = 6;
        enemy1[378].exp = 3;
        enemy1[379].name = "Тёмный суккуб";
        enemy1[379].hp = 10;
        enemy1[379].hpm = 10;
        enemy1[379].atc1 = 2;
        enemy1[379].atc12 = 3;
        enemy1[379].atc2 = 4;
        enemy1[379].atc22 = 5;
        enemy1[379].exp = 2;
        //Машрум Опалённый
        enemy1[380].name = "Огненное порождение";
        enemy1[380].hp = 6;
        enemy1[380].hpm = 6;
        enemy1[380].atc1 = 1;
        enemy1[380].atc12 = 3;
        enemy1[380].atc2 = 1;
        enemy1[380].atc22 = 4;
        enemy1[380].exp = 3;
        enemy1[381].name = "Огненное создание";
        enemy1[381].hp = 5;
        enemy1[381].hpm = 5;
        enemy1[381].atc1 = 0;
        enemy1[381].atc12 = 3;
        enemy1[381].atc2 = 1;
        enemy1[381].atc22 = 4;
        enemy1[381].exp = 1;
        enemy1[382].name = "Огонёк";
        enemy1[382].hp = 3;
        enemy1[382].hpm = 3;
        enemy1[382].atc1 = 1;
        enemy1[382].atc12 = 2;
        enemy1[382].atc2 = 1;
        enemy1[382].atc22 = 3;
        enemy1[382].exp = 1;
        enemy1[383].name = "Лава на полу";
        enemy1[383].hp = 8;
        enemy1[383].hpm = 8;
        enemy1[383].atc1 = 0;
        enemy1[383].atc12 = 2;
        enemy1[383].atc2 = 0;
        enemy1[383].atc22 = 3;
        enemy1[383].exp = 1;
        enemy1[384].name = "Вестник мести";
        enemy1[384].hp = 8;
        enemy1[384].hpm = 8;
        enemy1[384].atc1 = 1;
        enemy1[384].atc12 = 3;
        enemy1[384].atc2 = 3;
        enemy1[384].atc22 = 5;
        enemy1[384].exp = 2;
        enemy1[385].name = "Огненный дух";
        enemy1[385].hp = 9;
        enemy1[385].hpm = 9;
        enemy1[385].atc1 = 2;
        enemy1[385].atc12 = 4;
        enemy1[385].atc2 = 1;
        enemy1[385].atc22 = 6;
        enemy1[385].exp = 2;
        enemy1[386].name = "Горящие брёвна";
        enemy1[386].hp = 20;
        enemy1[386].hpm = 20;
        enemy1[386].atc1 = 0;
        enemy1[386].atc12 = 2;
        enemy1[386].atc2 = 1;
        enemy1[386].atc22 = 3;
        enemy1[386].exp = 3;
        enemy1[387].name = "Лавовый элементаль";
        enemy1[387].hp = 12;
        enemy1[387].hpm = 12;
        enemy1[387].atc1 = 3;
        enemy1[387].atc12 = 4;
        enemy1[387].atc2 = 2;
        enemy1[387].atc22 = 5;
        enemy1[387].exp = 3;
        enemy1[388].name = "Магмовая пушка и обгоревший артиллерист";
        enemy1[388].hp = 14;
        enemy1[388].hpm = 14;
        enemy1[388].atc1 = 1;
        enemy1[388].atc12 = 2;
        enemy1[388].atc2 = 0;
        enemy1[388].atc22 = 8;
        enemy1[388].exp = 3;
        enemy1[389].name = "Существо из глубин вулкана";
        enemy1[389].hp = 12;
        enemy1[389].hpm = 12;
        enemy1[389].atc1 = 0;
        enemy1[389].atc12 = 5;
        enemy1[389].atc2 = 0;
        enemy1[389].atc22 = 6;
        enemy1[389].exp = 3;
        //Димас
        enemy1[390].name = "Мурлок";
        enemy1[390].hp = 6;
        enemy1[390].hpm = 6;
        enemy1[390].atc1 = 2;
        enemy1[390].atc12 = 3;
        enemy1[390].atc2 = 3;
        enemy1[390].atc22 = 4;
        enemy1[390].exp = 1;
        enemy1[391].name = "Механический пони с миниганами";
        enemy1[391].hp = 12;
        enemy1[391].hpm = 12;
        enemy1[391].atc1 = 0;
        enemy1[391].atc12 = 6;
        enemy1[391].atc2 = 0;
        enemy1[391].atc22 = 7;
        enemy1[391].exp = 4;
        enemy1[392].name = "БиTb|й к0д";
        enemy1[392].hp = 10;
        enemy1[392].hpm = 10;
        enemy1[392].atc1 = 1;
        enemy1[392].atc12 = 1;
        enemy1[392].atc2 = 1;
        enemy1[392].atc22 = 3;
        enemy1[392].exp = 1;
        enemy1[393].name = "Гигантский кот";
        enemy1[393].hp = 10;
        enemy1[393].hpm = 10;
        enemy1[393].atc1 = 2;
        enemy1[393].atc12 = 4;
        enemy1[393].atc2 = 3;
        enemy1[393].atc22 = 5;
        enemy1[393].exp = 4;
        enemy1[394].name = "Магическая матрица-поле из 0 и 1";
        enemy1[394].hp = 16;
        enemy1[394].hpm = 16;
        enemy1[394].atc1 = 0;
        enemy1[394].atc12 = 0;
        enemy1[394].atc2 = 0;
        enemy1[394].atc22 = 0;
        enemy1[394].exp = 2;
        enemy1[395].name = "Котик";
        enemy1[395].hp = 3;
        enemy1[395].hpm = 3;
        enemy1[395].atc1 = 1;
        enemy1[395].atc12 = 1;
        enemy1[395].atc2 = 2;
        enemy1[395].atc22 = 2;
        enemy1[395].exp = 0;
        enemy1[396].name = "Титановый колосс";
        enemy1[396].hp = 20;
        enemy1[396].hpm = 20;
        enemy1[396].atc1 = 3;
        enemy1[396].atc12 = 5;
        enemy1[396].atc2 = 4;
        enemy1[396].atc22 = 6;
        enemy1[396].exp = 5;
        enemy1[397].name = "Мистическое существо из крови";
        enemy1[397].hp = 12;
        enemy1[397].hpm = 12;
        enemy1[397].atc1 = 2;
        enemy1[397].atc12 = 3;
        enemy1[397].atc2 = 2;
        enemy1[397].atc22 = 4;
        enemy1[397].exp = 3;
        enemy1[398].name = "Синтольный голем";
        enemy1[398].hp = 12;
        enemy1[398].hpm = 12;
        enemy1[398].atc1 = 3;
        enemy1[398].atc12 = 4;
        enemy1[398].atc2 = 4;
        enemy1[398].atc22 = 5;
        enemy1[398].exp = 3;
        enemy1[399].name = "Коммунист в броне Тесла";
        enemy1[399].hp = 20;
        enemy1[399].hpm = 20;
        enemy1[399].atc1 = 2;
        enemy1[399].atc12 = 3;
        enemy1[399].atc2 = 0;
        enemy1[399].atc22 = 5;
        enemy1[399].exp = 5;
        // БОССЫ для Забавные приключения
        enemy1[410].name = "[БОСС] Паладин Машрум";
        enemy1[410].hp = 11;
        enemy1[410].hpm = 11;
        enemy1[410].atc1 = 1;
        enemy1[410].atc12 = 3;
        enemy1[410].atc2 = 4;
        enemy1[410].atc22 = 5;
        enemy1[410].exp = 7;
        enemy1[409].name = "[БОСС] Предприниматель Серёга";
        enemy1[409].hp = 12;
        enemy1[409].hpm = 12;
        enemy1[409].atc1 = 1;
        enemy1[409].atc12 = 2;
        enemy1[409].atc2 = 4;
        enemy1[409].atc22 = 4;
        enemy1[409].exp = 8;
        enemy1[408].name = "[БОСС] Канцлер Ильяпарт";
        enemy1[408].hp = 14;
        enemy1[408].hpm = 14;
        enemy1[408].atc1 = 1;
        enemy1[408].atc12 = 3;
        enemy1[408].atc2 = 2;
        enemy1[408].atc22 = 6;
        enemy1[408].exp = 9;
        enemy1[407].name = "[БОСС] Друид Маффион";
        enemy1[407].hp = 16;
        enemy1[407].hpm = 16;
        enemy1[407].atc1 = 2;
        enemy1[407].atc12 = 3;
        enemy1[407].atc2 = 3;
        enemy1[407].atc22 = 6;
        enemy1[407].exp = 10;
        enemy1[406].name = "[БОСС] Злобный Енотик";
        enemy1[406].hp = 18;
        enemy1[406].hpm = 18;
        enemy1[406].atc1 = 1;
        enemy1[406].atc12 = 6;
        enemy1[406].atc2 = 1;
        enemy1[406].atc22 = 7;
        enemy1[406].exp = 11;
        enemy1[405].name = "[БОСС] Мышиные короли Кир и Инз";
        enemy1[405].hp = 22;
        enemy1[405].hpm = 22;
        enemy1[405].atc1 = 2;
        enemy1[405].atc12 = 6;
        enemy1[405].atc2 = 2;
        enemy1[405].atc22 = 6;
        enemy1[405].exp = 12;
        enemy1[404].name = "[БОСС] Стул, оставленный Антонио";
        enemy1[404].hp = 3;
        enemy1[404].hpm = 3;
        enemy1[404].atc1 = 0;
        enemy1[404].atc12 = 0;
        enemy1[404].atc2 = 0;
        enemy1[404].atc22 = 0;
        enemy1[404].exp = 0;
        enemy1[403].name = "[БОСС] Лорд Алексимос";
        enemy1[403].hp = 24;
        enemy1[403].hpm = 24;
        enemy1[403].atc1 = 2;
        enemy1[403].atc12 = 5;
        enemy1[403].atc2 = 4;
        enemy1[403].atc22 = 6;
        enemy1[403].exp = 14;
        enemy1[402].name = "[БОСС] Машрум Опалённый";
        enemy1[402].hp = 26;
        enemy1[402].hpm = 26;
        enemy1[402].atc1 = 2;
        enemy1[402].atc12 = 6;
        enemy1[402].atc2 = 5;
        enemy1[402].atc22 = 7;
        enemy1[402].exp = 15;
        enemy1[401].name = "[БОСС] Архимаг Деметрум";
        enemy1[401].hp = 30;
        enemy1[401].hpm = 30;
        enemy1[401].atc1 = 3;
        enemy1[401].atc12 = 8;
        enemy1[401].atc2 = 3;
        enemy1[401].atc22 = 10;
        enemy1[401].exp = 16;
        enemy1[400].name = "[БОСС] Тёмная Звезда";
        enemy1[400].hp = 9999999;
        enemy1[400].hpm = 9999999;
        enemy1[400].atc1 = 0;
        enemy1[400].atc12 = 0;
        enemy1[400].atc2 = 0;
        enemy1[400].atc22 = 0;
        enemy1[400].exp = 0;
        enemy1[411].name = "[БОСС] Сердце замка";
        enemy1[411].hp = 1000;
        enemy1[411].hpm = 1000;
        enemy1[411].atc1 = 4;
        enemy1[411].atc12 = 5;
        enemy1[411].atc2 = 4;
        enemy1[411].atc22 = 5;
        enemy1[411].exp = 0;
        enemy1[412].name = "[БОСС] Падший светлый король";
        enemy1[412].hp = 1000;
        enemy1[412].hpm = 1000;
        enemy1[412].atc1 = 0;
        enemy1[412].atc12 = 0;
        enemy1[412].atc2 = 0;
        enemy1[412].atc22 = 0;
        enemy1[412].exp = 0;
        enemy1[413].name = "ТЁМНЫЙ КАРАТЕЛЬ";
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
    cout << " |                                          | Добро пожаловать в игру Sinister Castle! |                                        |" << endl;
    cout << " \\------------------------------------------------------------------------------------------------------------------------------/" << endl;
    s2 = "-";
    while ((s2 != "1")&&(s2 != "2")&&(s2 != "3")&&(s2 != "4")&&(s2 != "5")){
    cout << "1 - Начать кампанию \"Зловещий замок\"" << endl;
    cout << "2 - Начать кампанию \"Механическое противостояние\"" << endl;
    cout << "3 - Начать кампанию \"Сражение с падшими героями\"" << endl;
    cout << "4 - Начать кампанию \"Финальное столкновение\"" << endl;
    cout << "5 - Начать кампанию \"Забавные приключения\"" << endl;
    cout << "6 - Информация об игре" << endl;
    cout << "7 - Информация об авторе" << endl;
    cout << "8 - Инструкция" << endl;
    cout << "9 - Предыстория" << endl;
    cout << "10 - Настройки" << endl;
    cout << "0 - Выход" << endl;
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
        cout << "Версия игры: Sinister Castle v 1.8" << endl;
        cout << " <------------------------------------------------------------------------------------------------------------------------------>" << endl;
    }
    if (s2 == "7"){
        if (zvyk == 1) Beep(300,100);
        cout << " <------------------------------------------------------------------------------------------------------------------------------>" << endl;
        cout << "Создатель и владелец игры: Семенов Дмитрий Алексеевич (https://vk.com/queen_fluttershy)" << endl;
        cout << " <------------------------------------------------------------------------------------------------------------------------------>" << endl;
    }
    if (s2 == "8"){
        if (zvyk == 1) Beep(300,100);
        cout << " <------------------------------------------------------------------------------------------------------------------------------>" << endl;
        cout << "Sinister Castle - пошаговая стратегия сражения с различными врагами. В начале игры вы находитесь в первой комнате Зловещего Замка, в которой встречаетесь с первым врагом. После победы над ним, вы переходите в следующую комнату, в которой также будет какое-либо существо. В каждой комнате есть существо, также есть существа-боссы, они отмечены табличкой [БОСС] и обычно обладают какими-либо особенностями. Также иногда перед началом боя в комнате может находиться какой-либо предмет, с которым вы можете взаимодействовать, он произведёт какой-либо непредсказуемый эффект. Каждая сторона ходит по очереди, первым в комнате ходит игрок. У игрока есть слабая атака, сильная атака, способ восстановить здоровье, специальная атака и узнать побольше информации о враге. ВНИМАНИЕ! Узнать информацию - тоже считается ходом, так что лучше либо использовать это на будущее, чтобы в следующей игре больше знать о противниках, либо не использовать вообще, чтобы не пропустить ход. Специальная атака - это атака, расходующая очки, в начале игры у каждого класса их по 0-10. Также в каждой комнате можно найти предмет, который можно взять с собой. Если у вас уже есть предмет, то вы можете выбросить ваш текущий предмет и взять новый. Также в игре есть реликвии, они похожи на предметы, которые можно подобрать, но, в отличие от них, реликвии дают пассивный эффект каждый ход, также реликвию нельзя просто убрать из инвентаря, её можно только заменить на другую. При использовании предмета вы получаете 2 ход. У игрока также есть опыт и уровень. С каждого врага игрок получает 0+ опыта, за каждые несколько единиц опыта игрок получает новый уровень. При получении нового уровня повышается количество максимального здоровья и полностью пополняется здоровье до нового максимального уровня. Также на некоторых уровнях поднимаются все способности игрока и добавляется ещё одно очко к специальной способности. Слабые удары дают +0.5 к опыту. У некоторых врагов есть особые атаки, которые могут дать какой-либо эффект герою. Их существует 3 вида: Кровотечение (-1 к здоровью героя после дейстия игрока), Яд (-2 к здоровью героя после дейстия игрока) и Болезнь (-1 к здоровью героя после дейстия игрока). От каждой из них есть излечение. Сможете ли вы пройти 100 комнат? Если вы готовы бросить вызов существам, обитающим в них, то вперёд!" << endl;
        cout << " <------------------------------------------------------------------------------------------------------------------------------>" << endl;
    }
    if (s2 == "9"){
        if (zvyk == 1) Beep(300,100);
        cout << " <------------------------------------------------------------------------------------------------------------------------------>" << endl;
        cout << "В Королевстве Кабад пошёл слух о том, что есть некий Зловещий Замок, в котором хранятся несметные богатства, поговаривали даже, что там можно обрести бессмертие. Но замок тот был огромен и наполнен разными существами, мало кто отважился пойти в него. Наш герой решил попытать удачу и попробовать побороть всё зло в этом замке и получить то, что хранил замок." << endl;
        cout << " <------------------------------------------------------------------------------------------------------------------------------>" << endl;
    }
    if (s2 == "10"){
        if (zvyk == 1) Beep(300,100);
        cout << " <------------------------------------------------------------------------------------------------------------------------------>" << endl;
    while ((s4 != "1")&&(s4 != "2")&&(s4 != "0")){
        cout << "Настройки:" << endl;
        cout << "1 - Размер окна" << endl;
        cout << "2 - Звуки" << endl;
        cout << "0 - Вернуться в главное меню" << endl;
        getline(cin, s4);
        }
    if (s4 == "2"){
        if (zvyk == 1) Beep(300,100);
        s4="-";
    while ((s4 != "1")&&(s4 != "2")){
        s4="-";
        cout << "Включение и выключение звука:" << endl;
        cout << "1 - Включить звук" << endl;
        cout << "2 - Выключить звук" << endl;
        getline(cin, s4);
    }
    if (s4 == "1"){
        zvyk = 1;
        if (zvyk == 1) Beep(300,100);
        cout << "Звук включён" << endl;
        cout << " <------------------------------------------------------------------------------------------------------------------------------>" << endl;
        s4="-";
    }
    if (s4 == "2"){
        zvyk = 0;
        if (zvyk == 1) Beep(300,100);
        cout << "Звук выключен" << endl;
        cout << " <------------------------------------------------------------------------------------------------------------------------------>" << endl;
        s4="-";
    }}
    if (s4 == "1"){
        if (zvyk == 1) Beep(300,100);
        s4="-";
    while ((s4 != "1")&&(s4 != "2")&&(s4 != "3")){
        s4="-";
        cout << "Выберите размер окна:" << endl;
        cout << "1 - Большой" << endl;
        cout << "2 - Средний (Не рекомендуется для 1, 2, 3 и 5 глав)" << endl;
        cout << "3 - Маленький (Не рекомендуется для 1, 2, 3 и 5 глав)" << endl;
        getline(cin, s4);
        }
    if (s4 == "1"){
        system("mode 130, 50");
        if (zvyk == 1) Beep(300,100);
        cout << "Размер окна изменён на большой" << endl;
        cout << " <------------------------------------------------------------------------------------------------------------------------------>" << endl;
        s4="-";
    }
    if (s4 == "2"){
        system("mode 130, 40");
        if (zvyk == 1) Beep(300,100);
        cout << "Размер окна изменён на средний" << endl;
        cout << " <------------------------------------------------------------------------------------------------------------------------------>" << endl;
        s4="-";
    }
    if (s4 == "3"){
        system("mode 130, 30");
        if (zvyk == 1) Beep(300,100);
        cout << "Размер окна изменён на маленький" << endl;
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
    cout << "Выберите героя:" << endl;
    cout << "1 - Крестносец" << endl;
    startstat(hero1[0]);
    cout << "2 - Фермер" << endl;
    startstat(hero1[1]);
    cout << "3 - Лекарь" << endl;
    startstat(hero1[2]);
    cout << "4 - Арбалетчик" << endl;
    startstat(hero1[3]);
    cout << "5 - Ученик мага" << endl;
    startstat(hero1[4]);
    cout << "6 - Бронированный боец" << endl;
    startstat(hero1[5]);
    cout << "7 - Лорд Райзус" << endl;
    startstat(hero1[6]);
    cout << "8 - Мастер клинков" << endl;
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
    cout << "Выберите героя:" << endl;
    cout << "1 - Рыцарь" << endl;
    startstat(hero1[19]);
    cout << "2 - Воительница" << endl;
    startstat(hero1[26]);
    getline(cin, s);
    }
    if (s == "1") {
        j=19;
        if (zvyk == 1) Beep(300,100);
        cout << "Введите имя своего героя:" << endl;
        getline(cin, s3);
        hero1[j].name = hero1[j].name + " " + s3;
    }
    if (s == "2") {
        j=26;
        if (zvyk == 1) Beep(300,100);
        cout << "Введите имя своего героя:" << endl;
        getline(cin, s3);
        hero1[j].name = hero1[j].name + " " + s3;
    }
    }
    else if (reg == 4){
        while ((s != "1")&&(s != "2")&&(s != "3")&&(s != "4")&&(s != "5")&&(s != "6")){
    cout << "Выберите героя:" << endl;
    cout << "1 - Синтольный качок" << endl;
    startstat(hero1[20]);
    cout << "2 - Голем из нефрита" << endl;
    startstat(hero1[21]);
    cout << "3 - Робот-механик" << endl;
    startstat(hero1[22]);
    cout << "4 - Собиратель душ" << endl;
    startstat(hero1[23]);
    cout << "5 - Падший воин" << endl;
    startstat(hero1[24]);
    cout << "6 - Прототип нового робота" << endl;
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
    if (reg == 0) cout << "Вы начали кампанию \"Зловещий Замок\"!" << endl;
    else if (reg == 1) cout << "Вы начали кампанию \"Механическое противостояние\"!" << endl;
    else if (reg == 2) cout << "Вы начали кампанию \"Сражение с падшими героями\"!" << endl;
    else if (reg == 3) cout << "Вы начали кампанию \"Финальное столкновение\"!" << endl;
    else if (reg == 4) cout << "Вы начали кампанию \"Забавные приключения\"!" << endl;
    cout << "Выбран герой: " << hero1[j].name << endl;
    herostat(hero1[j]);
    lvlstat(hero1[j], nlvl);
    cout << " <------------------------------------------------------------------------------------------------------------------------------>" << endl;
    cout << "Вы входите в первую комнату" << endl;
    cout << " /------------------------------------------------------------------------------------------------------------------------------\\" << endl;
    Sleep(1000);
    boyo:
    if (reg == 0)
    {
        i = (rand()%(55 - 0)) + 0;
    if ((k == 20)||(k == 40)||(k == 60)||(k == 80)){
        cout << "Все существа становятся опытней (1 ко всем характеристикам)" << endl;
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
            cout << "Вы получили 1 очко способности!" << endl;
            hero1[j].pred++;
    }
    l = (rand()%(91 - 0)) + 0;
    if ((l == 0)||(l == 1)||(l == 2)||(l == 3)||(l == 4)||(l == 5)||(l == 6)||(l == 7)||(l == 8)||(l == 9)||(l == 10)||(l == 11)||(l == 12)||(l == 13)||(l == 14)||(l == 15)||(l == 16)||(l == 17)||(l == 18)||(l == 19)||(l == 20)||(l == 21)||(l == 22)||(l == 23)||(l == 39)||(l == 40)){
        re = '0';
        cout << "Вы находите в комнате предмет " << obj1[l].name << endl;
        if (zvyk ==1){
            Beep(400, 200);
            Beep(600, 300);
            Beep(800, 800);
        }
        cout << " |------------------------------------------------------------------------------------------------------------------------------|" << endl;
        cout << "Вы хотите его использовать?" << endl;
        while ((re != "1")&&(re != "2")){
        cout << "1 - Да" << endl;
        cout << "2 - Нет" << endl;
        getline(cin, re);
        if (re == "1"){
                if (zvyk == 1) Beep(300,100);
                if (l == 0){
                    cout << "Вы выпиваете содержимое бутылки" << endl;
                    cout << "Вы чувствуете прилив здоровья (1 к максимальному здоровью и 1 к здоровью)" << endl;
                }
                if (l == 1){
                    cout << "Вы выпиваете содержимое бутылки" << endl;
                    cout << "Вы чувствуете боль по всему телу (-1 к максимальному здоровью и -2 к здоровью)" << endl;
                }
                if (l == 2){
                    cout << "Вы открываете сундук" << endl;
                    cout << "Вы находите в нём улучшение для слабого оружия (1 ко всем атакам слабого оружия)" << endl;
                }
                if ((l == 3)||(l == 17)){
                    cout << "Вы открываете сундук" << endl;
                    cout << "Что-то он... не открывается...";
                    if ((k != 10)&&(k != 20)&&(k != 30)&&(k != 40)&&(k != 50)&&(k != 60)&&(k != 70)&&(k != 80)&&(k != 90)&&(k != 100)&&(k != 101)){
                        i = 88;
                        cout << " ЧТО ЭТО?!";
                    }
                    cout << endl;
                }
                if (l == 4){
                    cout << "Вы открываете сундук" << endl;
                    cout << "Вы находите в нём улучшение для мощного оружия (1 ко всем атакам мощного оружия)" << endl;
                }
                if (l == 5){
                    cout << "Вы выпиваете содержимое бутылки" << endl;
                    cout << "Вы чувствуете резкую боль по всему телу (-5 к здоровью)" << endl;
                }
                if (l == 6){
                    cout << "Вы ведёте рукой в сторону свечения" << endl;
                    cout << "Вас отбрасывает, и свечение исчезает (-1 ко всем характеристикам персонажа)" << endl;
                }
                if (l == 7){
                    cout << "Вы ведёте рукой в сторону свечения" << endl;
                    cout << "Вы чувствуете прилив здоровья, и свечение исчезает (5 к здоровью)" << endl;
                }
                if (l == 8){
                    cout << "Вы берёте посох в руку" << endl;
                    cout << "Вы, не задумываясь, воздействуете им на себя (атаки 1-2, 2-3)" << endl;
                }
                if (l == 9){
                    cout << "Вы берёте посох в руку" << endl;
                    cout << "Вы с радостью воздействуете им на себя (атаки 1-5, 0-7)" << endl;
                }
                if (l == 10){
                    cout << "Вы берёте сумку в руки" << endl;
                    cout << "В ней оказываются медикаменты (1 ко всем навыкам лечения)" << endl;
                }
                if (l == 11){
                    cout << "Вы берёте сумку в руки" << endl;
                    cout << "В ней оказываются испорченные медикаменты (-1 ко всем навыкам лечения)" << endl;
                }
                if (l == 12){
                    cout << "Вы берёте в руку амулет" << endl;
                    cout << "Вы рассматриваете его... ";
                    if ((k != 10)&&(k != 20)&&(k != 30)&&(k != 40)&&(k != 50)&&(k != 60)&&(k != 70)&&(k != 80)&&(k != 90)&&(k != 100)&&(k != 101)){
                        i = 87;
                        cout << "в центре комнаты появился портал, и из него вылезло существо!";
                    }
                    else cout << "и ничего не происходит";
                    cout << endl;
                }
                if (l == 13){
                    cout << "Вы берёте в руку амулет" << endl;
                    cout << "Вы рассматриваете его... он наполняет вас опытом (9 к опыту)" << endl;
                }
                if ((l == 14)||(l == 15)||(l == 18)||(l == 19)){
                    cout << "Вы берёте в руку лекарство" << endl;
                    bol = 0;
                    cout << "Вы выпиваете его (Излечение от Болезни)" << endl;
                }
                if (l == 16){
                    cout << "Вы берёте в руку колбу" << endl;
                    cout << "Вы выпиваете содержимое (Смерть)" << endl;
                    hero1[j].hp = 0;
                    hero1[j].hpm = 0;
                    Sleep(1000);
                    cout << " |------------------------------------------------------------------------------------------------------------------------------|" << endl;
                    goto end1;
                }
                if ((l == 20)||(l == 21)){
                        if ((j != 8)&&(j != 9)){
                            cout << "Вы берёте в руку рог" << endl;
                            cout << "Вы превращаетесь в Бараночеловека (Смена героя на Бараночеловека)" << endl;
                            hero1[j].hp = hero1[j].hpm;
                            j = 8;
                            hero1[j].pred = 3;
                        }
                        else if ((j == 8)||(j == 9)){
                            cout << "Вы берёте в руку рог" << endl;
                            cout << "Вы превращаетесь в Последователь Сатаны (Смена героя на Последователя Сатаны)" << endl;
                            hero1[j].hp = hero1[j].hpm;
                            j = 9;
                             hero1[j].pred = 2;
                        }
                }
                if (l == 22){
                    cout << "Вы берёте в руку клык" << endl;
                    cout << "Вы превращаетесь в Оборотня в форме человека (Смена героя на Оборотня в форме человека)" << endl;
                    j = 10;
                    hero1[j].hp = hero1[j].hpm;
                    hero1[j].pred = 0;
                }
                if (l == 23){
                    cout << "Вы берёте записку в руку и читаете её" << endl;
                    cout << "Там написано: \"Сколько это может продолжаться? Сколько это может продолжаться?\"" << endl;
                }
                if (l == 39){
                    cout << "Вы подходите к шкатулке и пытаетесь ввести код:" << endl;
                    getline(cin, kodv);
                    if (kod == atoi(kodv.c_str())){
                        cout << "Вы вводите правильный код, и шкатулка открывается" << endl;
                        if (zvyk ==1) Beep(800, 500);
                        cout << "В ней вы находите волшебный кристалл и забираете его себе (1 ко всем характеристикам и полное здоровье)" << endl;
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
                        cout << "Вы вводите неправильный код, и шкатулка не открывается" << endl;
                        if (zvyk ==1) Beep(100, 500);
                        cout << "Отчаявшись, вы оставляете её и идёте дальше" << endl;
                    }
                    kod = (rand()%(100000 - 10000)) + 10000;
                }
                if (l == 40){
                    cout << "Вы берёте записку в руку и читаете её" << endl;
                    cout << "Там написано: \"" << kod <<"\"" << endl;
                    cout << "Хммм... что бы это могло значить" << endl;
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
                    cout << "Вы оставляете содержимое бутылки нетронутым" << endl;
            }
            if ((l == 2)||(l == 3)||(l == 17)||(l == 4)){
                    cout << "Вы проходите мимо сундука" << endl;
            }
            if (l == 5){
                    cout << "Вы оставляете содержимое бутылки нетронутым" << endl;
            }
            if ((l == 6)||(l == 7)){
                    cout << "Вы проходите мимо свечения" << endl;
            }
            if ((l == 8)||(l == 9)){
                    cout << "Вы проходите мимо посоха" << endl;
            }
            if ((l == 10)||(l == 11)){
                    cout << "Вы не трогаете сумку и идёте дальше" << endl;
            }
            if ((l == 12)||(l == 13)){
                    cout << "Вы не прикасаетесь к амулету и идёте дальше" << endl;
            }
            if ((l == 14)||(l == 15)||(l == 18)||(l == 19)){
                    cout << "Вы не берёте лекарство и идёте дальше" << endl;
            }
            if (l == 16){
                    cout << "Вы не трогаете колбу и идёте дальше" << endl;
            }
            if ((l == 20)||(l == 21)){
                    cout << "Вы не трогаете рог и идёте дальше" << endl;
            }
            if (l == 22){
                    cout << "Вы не трогаете клык и идёте дальше" << endl;
            }
            if ((l == 40)||(l == 23)){
                    cout << "Вы проходите мимо записки и идёте дальше" << endl;
            }
            if (l == 39){
                    cout << "Вы не трогаете шкатулку и идёте дальше" << endl;
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
            cout << "Вы получили 1 очко способности!" << endl;
            hero1[j].pred++;
                }
        }
        if (k%30==0){
        cout << "Все роботы улучшают себя (1 ко всем характеристикам)" << endl;
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
        cout << "Вы находите в комнате предмет " << obj1[l].name << endl;
        if (zvyk ==1){
            Beep(400, 200);
            Beep(600, 300);
            Beep(800, 800);
        }
        cout << " |------------------------------------------------------------------------------------------------------------------------------|" << endl;
        cout << "Вы хотите его использовать?" << endl;
        while ((re != "1")&&(re != "2")){
        cout << "1 - Да" << endl;
        cout << "2 - Нет" << endl;
        getline(cin, re);
        if (re == "1"){
                if (zvyk == 1) Beep(300,100);
                if (l == 12){
                    cout << "Вы берёте в руку амулет" << endl;
                    cout << "Вы рассматриваете его... ";
                    if ((k != 10)&&(k != 20)&&(k != 30)&&(k != 40)&&(k != 50)&&(k != 60)&&(k != 70)&&(k != 80)&&(k != 90)&&(k != 100)&&(k != 101)){
                        i = 87;
                        cout << "в центре комнаты появился портал, и из него вылезло существо!";
                    }
                    else cout << "и ничего не происходит";
                    cout << endl;
                }
                if (l == 13){
                    cout << "Вы берёте в руку амулет" << endl;
                    cout << "Вы рассматриваете его... он наполняет вас опытом (9 к опыту)" << endl;
                }
                if (l == 23){
                    cout << "Вы берёте записку в руку и читаете её" << endl;
                    cout << "Там написано: \"psin(a)\"" << endl;
                }
                if (l == 29){
                    cout << "Вы берёте записку в руку и читаете её" << endl;
                    cout << "Там написано: \"Этим роботам нет конца!\"" << endl;
                }
                if (l == 30){
                    cout << "Вы берёте записку в руку и читаете её" << endl;
                    cout << "Там написано: \"Думал, что тут код? Лол, нет :)\"" << endl;
                }
                if (l == 38){
                    cout << "Вы берёте записку в руку и читаете её" << endl;
                    cout << "Там написано: \"Сейчас бы записки читать...\"" << endl;
                }
                if (l == 39){
                    cout << "Вы подходите к шкатулке и пытаетесь ввести код:" << endl;
                    getline(cin, kodv);
                    if (kod == atoi(kodv.c_str())){
                        cout << "Вы вводите правильный код, и шкатулка открывается" << endl;
                        if (zvyk ==1) Beep(800, 500);
                        cout << "В ней вы находите волшебный кристалл и забираете его себе (1 ко всем характеристикам и полное здоровье)" << endl;
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
                        cout << "Вы вводите неправильный код, и шкатулка не открывается" << endl;
                        if (zvyk ==1) Beep(100, 500);
                        cout << "Отчаявшись, вы оставляете её и идёте дальше" << endl;
                    }
                    kod = (rand()%(100000 - 10000)) + 10000;
                }
                if (l == 40){
                    cout << "Вы берёте записку в руку и читаете её" << endl;
                    cout << "Там написано: \"" << kod <<"\"" << endl;
                    cout << "Хммм... что бы это могло значить" << endl;
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
                    cout << "Вы не прикасаетесь к амулету и идёте дальше" << endl;
            }
            if ((l == 23)||(l == 29)||(l == 30)||(l == 38)||(l == 40)){
                    cout << "Вы проходите мимо записки и идёте дальше" << endl;
            }
            if (l == 39){
                    cout << "Вы не трогаете шкатулку и идёте дальше" << endl;
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
            cout << "Вы получили 1 очко способности!" << endl;
            hero1[j].pred++;
        }
        if (k%10==0){
        cout << "Все призраки усиливают себя (1 ко всем характеристикам)" << endl;
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
        cout << "Все существа становятся опытней (1 ко всем характеристикам)" << endl;
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
            cout << "Вы получили 1 очко способности!" << endl;
            hero1[j].pred++;
    }
        l4 = (rand()%(252 - 1)) + 1;
        if (k == 1) l4 = 1;
        if (k == 100) l4 = 1;
    if ((l4 >= 1)&&(l4 <= 24)){
        if (k == 100) l4 = 25;
        re = '0';
        cout << "Вы находите в комнате оружие " << wea1[l4].name << endl;
            if (zvyk ==1){
                Beep(700, 200);
                Beep(800, 300);
            }
        cout << " |------------------------------------------------------------------------------------------------------------------------------|" << endl;
        if (w == 0) cout << "Вы хотите взять это оружие?" << endl;
        else cout << "Вы хотите заменить ваше оружие на это?" << endl;
        while ((re != "1")&&(re != "2")){
        cout << "1 - Да" << endl;
        cout << "2 - Нет" << endl;
        getline(cin, re);
        if (re == "1"){
                if (zvyk == 1) Beep(300,100);
                    if (w != 0) cout << "Вы оставляете ваше оружие в комнате" << endl;
                    cout << "Вы забираете это оружие" << endl;
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
                    cout << "Вы не берёте это оружие и идёте дальше" << endl;
        }
    }
    Sleep(1000);
    cout << " |------------------------------------------------------------------------------------------------------------------------------|" << endl;
    }
    l3 = (rand()%(402 - 1)) + 1;
    if ((l3 >= 1)&&(l3 <= 16)){
        re = '0';
        cout << "Вы находите в комнате реликвию " << rel1[l3].name << endl;
        if (zvyk ==1){
            Beep(100, 500);
            Beep(150, 600);
            Beep(200, 700);
        }
        cout << " |------------------------------------------------------------------------------------------------------------------------------|" << endl;
        if (estrel == 0) cout << "Вы хотите её взять?" << endl;
        else cout << "Вы хотите заменить вашу реликвию на эту?" << endl;
        while ((re != "1")&&(re != "2")){
        cout << "1 - Да" << endl;
        cout << "2 - Нет" << endl;
        getline(cin, re);
        if (re == "1"){
                if (zvyk == 1) Beep(300,100);
                if (estrel != 0) cout << "Вы оставляете вашу реликвию в комнате" << endl;
                    cout << "Вы забираете эту реликвию" << endl;
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
                    cout << "Вы не берёте эту реликвию и идёте дальше" << endl;
        }
    }
    Sleep(1000);
    cout << " |------------------------------------------------------------------------------------------------------------------------------|" << endl;
    }
        l2 = (rand()%(252 - 1)) + 1;
    if ((l2 >= 1)&&(l2 <= 26)){
        re = '0';
        cout << "Вы находите в комнате предмет, который можно взять с собой " << pred1[l2].name << endl;
        if (zvyk ==1){
            Beep(400, 200);
            Beep(600, 300);
            Beep(800, 500);
            Beep(1000, 800);
        }
        cout << " |------------------------------------------------------------------------------------------------------------------------------|" << endl;
        if (estpred == 0) cout << "Вы хотите его взять?" << endl;
        else cout << "Вы хотите заменить ваш предмет на этот?" << endl;
        while ((re != "1")&&(re != "2")){
        cout << "1 - Да" << endl;
        cout << "2 - Нет" << endl;
        getline(cin, re);
        if (re == "1"){
                if (zvyk == 1) Beep(300,100);
                if (estpred != 0) cout << "Вы оставляете ваш предмет в комнате" << endl;
                    cout << "Вы забираете этот предмет" << endl;
                    estpred = l2;
        }
        else if (re == "2"){
            if (zvyk == 1) Beep(300,100);
                    cout << "Вы не берёте этот предмет и идёте дальше" << endl;
        }
    }
    Sleep(1000);
    cout << " |------------------------------------------------------------------------------------------------------------------------------|" << endl;
    }
    l = (rand()%(151 - 0)) + 0;
    if ((l == 0)||(l == 1)||(l == 2)||(l == 3)||(l == 4)||(l == 5)||(l == 6)||(l == 7)||(l == 8)||(l == 9)||(l == 10)||(l == 11)||(l == 12)||(l == 13)||(l == 14)||(l == 15)||(l == 16)||(l == 17)||(l == 18)||(l == 19)||(l == 23)||(l == 39)||(l == 40)){
        re = '0';
        cout << "Вы находите в комнате предмет " << obj1[l].name << endl;
        if (zvyk ==1){
            Beep(400, 200);
            Beep(600, 300);
            Beep(800, 800);
        }
        cout << " |------------------------------------------------------------------------------------------------------------------------------|" << endl;
        cout << "Вы хотите его использовать?" << endl;
        while ((re != "1")&&(re != "2")){
        cout << "1 - Да" << endl;
        cout << "2 - Нет" << endl;
        getline(cin, re);
        if (re == "1"){
                if (zvyk == 1) Beep(300,100);
                if (l == 0){
                    cout << "Вы выпиваете содержимое бутылки" << endl;
                    cout << "Вы чувствуете прилив здоровья (1 к максимальному здоровью и 1 к здоровью)" << endl;
                }
                if (l == 1){
                    cout << "Вы выпиваете содержимое бутылки" << endl;
                    cout << "Вы чувствуете боль по всему телу (-1 к максимальному здоровью и -2 к здоровью)" << endl;
                }
                if (l == 2){
                    cout << "Вы открываете сундук" << endl;
                    cout << "Вы находите в нём улучшение для слабого оружия (1 ко всем атакам слабого оружия)" << endl;
                }
                if ((l == 3)||(l == 17)){
                    cout << "Вы открываете сундук" << endl;
                    cout << "Что-то он... не открывается...";
                    if ((k != 10)&&(k != 20)&&(k != 30)&&(k != 40)&&(k != 50)&&(k != 60)&&(k != 70)&&(k != 80)&&(k != 90)&&(k != 100)&&(k != 101)){
                        i = 88;
                        cout << " ЧТО ЭТО?!";
                    }
                    cout << endl;
                }
                if (l == 4){
                    cout << "Вы открываете сундук" << endl;
                    cout << "Вы находите в нём улучшение для мощного оружия (1 ко всем атакам мощного оружия)" << endl;
                }
                if (l == 5){
                    cout << "Вы выпиваете содержимое бутылки" << endl;
                    cout << "Вы чувствуете резкую боль по всему телу (-5 к здоровью)" << endl;
                }
                if (l == 6){
                    cout << "Вы ведёте рукой в сторону свечения" << endl;
                    cout << "Вас отбрасывает, и свечение исчезает (-1 ко всем характеристикам персонажа)" << endl;
                }
                if (l == 7){
                    cout << "Вы ведёте рукой в сторону свечения" << endl;
                    cout << "Вы чувствуете прилив здоровья, и свечение исчезает (5 к здоровью)" << endl;
                }
                if (l == 8){
                    cout << "Вы берёте посох в руку" << endl;
                    cout << "Вы, не задумываясь, воздействуете им на себя (атаки 1-2, 2-3)" << endl;
                }
                if (l == 9){
                    cout << "Вы берёте посох в руку" << endl;
                    cout << "Вы с радостью воздействуете им на себя (атаки 1-5, 0-7)" << endl;
                }
                if (l == 10){
                    cout << "Вы берёте сумку в руки" << endl;
                    cout << "В ней оказываются медикаменты (1 ко всем навыкам лечения)" << endl;
                }
                if (l == 11){
                    cout << "Вы берёте сумку в руки" << endl;
                    cout << "В ней оказываются испорченные медикаменты (-1 ко всем навыкам лечения)" << endl;
                }
                if (l == 12){
                    cout << "Вы берёте в руку амулет" << endl;
                    cout << "Вы рассматриваете его... ";
                    if ((k != 10)&&(k != 20)&&(k != 30)&&(k != 40)&&(k != 50)&&(k != 60)&&(k != 70)&&(k != 80)&&(k != 90)&&(k != 100)&&(k != 101)){
                        i = 87;
                        cout << "в центре комнаты появился портал, и из него вылезло существо!";
                    }
                    else cout << "и ничего не происходит";
                    cout << endl;
                }
                if (l == 13){
                    cout << "Вы берёте в руку амулет" << endl;
                    cout << "Вы рассматриваете его... он наполняет вас опытом (9 к опыту)" << endl;
                }
                if ((l == 14)||(l == 15)||(l == 18)||(l == 19)){
                    cout << "Вы берёте в руку лекарство" << endl;
                    bol = 0;
                    cout << "Вы выпиваете его (Излечение от Болезни)" << endl;
                }
                if (l == 16){
                    cout << "Вы берёте в руку колбу" << endl;
                    cout << "Вы выпиваете содержимое (Смерть)" << endl;
                    hero1[j].hp = 0;
                    hero1[j].hpm = 0;
                    Sleep(1000);
                    cout << " |------------------------------------------------------------------------------------------------------------------------------|" << endl;
                    goto end1;
                }
                if (l == 23){
                    cout << "Вы берёте записку в руку и читаете её" << endl;
                    cout << "Там написано: \"Сколько это может продолжаться? Сколько это может продолжаться?\"" << endl;
                }
                if (l == 39){
                    cout << "Вы подходите к шкатулке и пытаетесь ввести код:" << endl;
                    getline(cin, kodv);
                    if (kod == atoi(kodv.c_str())){
                        cout << "Вы вводите правильный код, и шкатулка открывается" << endl;
                        if (zvyk ==1) Beep(800, 500);
                        cout << "В ней вы находите волшебный кристалл и забираете его себе (1 ко всем характеристикам и полное здоровье)" << endl;
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
                        cout << "Вы вводите неправильный код, и шкатулка не открывается" << endl;
                        if (zvyk ==1) Beep(100, 500);
                        cout << "Отчаявшись, вы оставляете её и идёте дальше" << endl;
                    }
                    kod = (rand()%(100000 - 10000)) + 10000;
                }
                if (l == 40){
                    cout << "Вы берёте записку в руку и читаете её" << endl;
                    cout << "Там написано: \"" << kod <<"\"" << endl;
                    cout << "Хммм... что бы это могло значить" << endl;
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
                    cout << "Вы оставляете содержимое бутылки нетронутым" << endl;
            }
            if ((l == 2)||(l == 3)||(l == 17)||(l == 4)){
                    cout << "Вы проходите мимо сундука" << endl;
            }
            if (l == 5){
                    cout << "Вы оставляете содержимое бутылки нетронутым" << endl;
            }
            if ((l == 6)||(l == 7)){
                    cout << "Вы проходите мимо свечения" << endl;
            }
            if ((l == 8)||(l == 9)){
                    cout << "Вы проходите мимо посоха" << endl;
            }
            if ((l == 10)||(l == 11)){
                    cout << "Вы не трогаете сумку и идёте дальше" << endl;
            }
            if ((l == 12)||(l == 13)){
                    cout << "Вы не прикасаетесь к амулету и идёте дальше" << endl;
            }
            if ((l == 14)||(l == 15)||(l == 18)||(l == 19)){
                    cout << "Вы не берёте лекарство и идёте дальше" << endl;
            }
            if (l == 16){
                    cout << "Вы не трогаете колбу и идёте дальше" << endl;
            }
            if ((l == 20)||(l == 21)){
                    cout << "Вы не трогаете рог и идёте дальше" << endl;
            }
            if (l == 22){
                    cout << "Вы не трогаете клык и идёте дальше" << endl;
            }
            if ((l == 40)||(l == 23)){
                    cout << "Вы проходите мимо записки и идёте дальше" << endl;
            }
            if (l == 39){
                    cout << "Вы не трогаете шкатулку и идёте дальше" << endl;
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
                    cout << "Вы получили 2 очка способности!" << endl;
                    hero1[j].pred++;
                    hero1[j].pred++;
                    if (zvyk ==1){
                        Beep(700, 100);
                        Beep(800, 100);
                    }
                }
                else {
                    cout << "Вы получили 1 очко способности!" << endl;
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
        cout << "Вы находите в комнате реликвию " << rel1[l3].name << endl;
        if (zvyk ==1){
            Beep(100, 500);
            Beep(150, 600);
            Beep(200, 700);
        }
        cout << " |------------------------------------------------------------------------------------------------------------------------------|" << endl;
        if (estrel == 0) cout << "Вы хотите её взять?" << endl;
        else cout << "Вы хотите заменить вашу реликвию на эту?" << endl;
        while ((re != "1")&&(re != "2")){
        cout << "1 - Да" << endl;
        cout << "2 - Нет" << endl;
        getline(cin, re);
        if (re == "1"){
                if (zvyk == 1) Beep(300,100);
                if (estrel != 0) cout << "Вы оставляете вашу реликвию в комнате" << endl;
                    cout << "Вы забираете эту реликвию" << endl;
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
                    cout << "Вы не берёте эту реликвию и идёте дальше" << endl;
        }
    }
    Sleep(1000);
    cout << " |------------------------------------------------------------------------------------------------------------------------------|" << endl;
    }
        l2 = (rand()%(252 - 1)) + 1;
    if ((l2 >= 1)&&(l2 <= 26)){
        re = '0';
        cout << "Вы находите в комнате предмет, который можно взять с собой " << pred1[l2].name << endl;
        if (zvyk ==1){
            Beep(400, 200);
            Beep(600, 300);
            Beep(800, 500);
            Beep(1000, 800);
        }
        cout << " |------------------------------------------------------------------------------------------------------------------------------|" << endl;
        if (estpred == 0) cout << "Вы хотите его взять?" << endl;
        else cout << "Вы хотите заменить ваш предмет на этот?" << endl;
        while ((re != "1")&&(re != "2")){
        cout << "1 - Да" << endl;
        cout << "2 - Нет" << endl;
        getline(cin, re);
        if (re == "1"){
                if (zvyk == 1) Beep(300,100);
                if (estpred != 0) cout << "Вы оставляете ваш предмет в комнате" << endl;
                    cout << "Вы забираете этот предмет" << endl;
                    estpred = l2;
        }
        else if (re == "2"){
            if (zvyk == 1) Beep(300,100);
                    cout << "Вы не берёте этот предмет и идёте дальше" << endl;
        }
    }
    Sleep(1000);
    cout << " |------------------------------------------------------------------------------------------------------------------------------|" << endl;
    }
        l = (rand()%(81 - 0)) + 0;
    if ((l == 12)||(l == 13)||(l == 23)||(l == 26)||(l == 27)||(l == 28)||(l == 29)||(l == 30)||(l == 31)||(l == 32)||(l == 33)||(l == 34)||(l == 35)||(l == 36)||(l == 37)||(l == 38)||(l == 39)||(l == 40)||(l == 41)||(l == 42)){
        re = '0';
        cout << "Вы находите в комнате предмет " << obj1[l].name << endl;
        if (zvyk ==1){
            Beep(400, 200);
            Beep(600, 300);
            Beep(800, 800);
        }
        cout << " |------------------------------------------------------------------------------------------------------------------------------|" << endl;
        cout << "Вы хотите его использовать?" << endl;
        while ((re != "1")&&(re != "2")){
        cout << "1 - Да" << endl;
        cout << "2 - Нет" << endl;
        getline(cin, re);
        if (re == "1"){
                if (zvyk == 1) Beep(300,100);
                if (l == 26){
                    cout << "Вы выпиваете содержимое банки" << endl;
                    cout << "Вы чувствуете прилив сил, но ухудшение здоровья (-3 к максимальному здоровью, -1 к здоровью и 1 ко всем слабым атакам)" << endl;
                }
                if (l == 12){
                    cout << "Вы берёте в руку амулет" << endl;
                    cout << "Вы рассматриваете его... ";
                    if ((k != 10)&&(k != 20)&&(k != 30)&&(k != 40)&&(k != 50)&&(k != 60)&&(k != 70)&&(k != 80)&&(k != 90)&&(k != 100)&&(k != 101)){
                        i = 87;
                        cout << "в центре комнаты появился портал, и из него вылезло существо!";
                    }
                    else cout << "и ничего не происходит";
                    cout << endl;
                }
                if (l == 13){
                    cout << "Вы берёте в руку амулет" << endl;
                    cout << "Вы рассматриваете его... он наполняет вас опытом (9 к опыту)" << endl;
                }
                if (l == 27){
                    cout << "Вы притрагиваетесь к сгустку" << endl;
                    cout << "Вы чувствуете изнеможение (-1 к максимальному здоровью и ко всем атакам)" << endl;
                }
                if (l == 28){
                    cout << "Вы притрагиваетесь к сгустку" << endl;
                    cout << "Вы чувствуете прилив здоровья (1 к максимальному здоровью и навыкам лечения)" << endl;
                }
                if (l == 29){
                    cout << "Вы берёте записку в руку и читаете её" << endl;
                    cout << "Там написано: \"Что, пацаны, синтол?\"" << endl;
                }
                if (l == 30){
                    cout << "Вы берёте записку в руку и читаете её" << endl;
                    cout << "Там написано: \"Капец, тут враги жёсткие, ребята, я умираю...\"" << endl;
                }
                if (l == 31){
                    cout << "Вы берёте чип в руку" << endl;
                    if (j == 22){
                      cout << "Вы вставляете его в один из слотов для чипов и улучшаете себя (1 к максимальному здоровью)" << endl;
                      hero1[j].hpm++;
                    }
                    else cout << "Вы не знаете, как можно использовать этот чип и оставляете его в комнате" << endl;

                }
                if (l == 32){
                    cout << "Вы берёте чип в руку" << endl;
                    if (j == 22){
                      cout << "Вы вставляете его в один из слотов для чипов и улучшаете себя (1 к максимальной слабой атаке)" << endl;
                      hero1[j].atc12++;
                    }
                    else cout << "Вы не знаете, как можно использовать этот чип и оставляете его в комнате" << endl;

                }
                if (l == 33){
                    cout << "Вы берёте чип в руку" << endl;
                    if (j == 22){
                      cout << "Вы вставляете его в один из слотов для чипов и улучшаете себя (1 к максимальной сильной атаке)" << endl;
                      hero1[j].atc22++;
                    }
                    else cout << "Вы не знаете, как можно использовать этот чип и оставляете его в комнате" << endl;

                }
                if (l == 34){
                    cout << "Вы берёте чип в руку" << endl;
                    if (j == 22){
                      cout << "Вы вставляете его в один из слотов для чипов и улучшаете себя (1 к максимальному восстановлению)" << endl;
                      hero1[j].heal2++;
                    }
                    else cout << "Вы не знаете, как можно использовать этот чип и оставляете его в комнате" << endl;

                }
                if (l == 35){
                    cout << "Вы берёте чип в руку" << endl;
                    if (j == 22){
                      cout << "Вы вставляете его в один из слотов для чипов и улучшаете себя (1 к максимальному здоровью, полное здоровье)" << endl;
                      hero1[j].hpm++;
                      hero1[j].hp = hero1[j].hpm;
                    }
                    else cout << "Вы не знаете, как можно использовать этот чип и оставляете его в комнате" << endl;

                }
                if (l == 36){
                    cout << "Вы берёте чип в руку" << endl;
                    if (j == 22){
                      cout << "Вы вставляете его в один из слотов для чипов и вас коротит (-10 к максимальному здоровью)" << endl;
                      hero1[j].hpm = hero1[j].hpm - 10;
                      if (hero1[j].hp > hero1[j].hpm) hero1[j].hp = hero1[j].hpm;
                    }
                    else cout << "Вы не знаете, как можно использовать этот чип и оставляете его в комнате" << endl;
                }
                if (l == 37){
                    cout << "Вы берёте чип в руку" << endl;
                    if (j == 22){
                      cout << "Вы вставляете его в один из слотов для чипов, и ваша рука перестаёт работать (Все сильные атаки 0)" << endl;
                      hero1[j].atc2 = 0;
                      hero1[j].atc22 = 0;
                    }
                    else cout << "Вы не знаете, как можно использовать этот чип и оставляете его в комнате" << endl;
                }
                if (l == 23){
                    cout << "Вы берёте записку в руку и читаете её" << endl;
                    cout << "Там написано: \"Сколько это может продолжаться? Сколько это может продолжаться?\"" << endl;
                }
                if (l == 38){
                    cout << "Вы берёте записку в руку и читаете её" << endl;
                    cout << "Там написано: \"Да где эти чёртовы чипы?!\"" << endl;
                }
                if (l == 39){
                    cout << "Вы подходите к шкатулке и пытаетесь ввести код:" << endl;
                    getline(cin, kodv);
                    if (kod == atoi(kodv.c_str())){
                        cout << "Вы вводите правильный код, и шкатулка открывается" << endl;
                        if (zvyk ==1) Beep(800, 500);
                        cout << "В ней вы находите волшебный кристалл и забираете его себе (1 ко всем характеристикам и полное здоровье)" << endl;
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
                        cout << "Вы вводите неправильный код, и шкатулка не открывается" << endl;
                        if (zvyk ==1) Beep(100, 500);
                        cout << "Отчаявшись, вы оставляете её и идёте дальше" << endl;
                    }
                    kod = (rand()%(100000 - 10000)) + 10000;
                }
                if (l == 40){
                    cout << "Вы берёте записку в руку и читаете её" << endl;
                    cout << "Там написано: \"" << kod <<"\"" << endl;
                    cout << "Хммм... что бы это могло значить" << endl;
                }
                if ((l == 41)||(l == 42)){
                    cout << "Вы берёте флешку в руку" << endl;
                    if (j == 25){
                        cout << "Вы вставляете её в один из USB-разъёмов и запускаете программу, которая была в ней (Случайный эффект)" << endl;
                cout << "Идёт выбор случайной программы ";
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
                cout << "Выбор завершён" << endl;
                prog = (rand()%(15 - 0)) + 0;
                if (prog == 0){
                cout << "Запущена программа \"Восстановление здоровья v 2.0\"" << endl;
                hero1[j].hp = hero1[j].hpm;
                if (hero1[j].hp > hero1[j].hpm) hero1[j].hp = hero1[j].hpm;
                cout << "Идёт выполнение программы ";
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
                cout << "Выполнение завершено" << endl;
                cout << "Вы полностью восстановили здоровье" << endl;
                }
                else if (prog == 1){
                cout << "Запущена программа \"Восстановление здоровья\"" << endl;
                x = (rand()%(6 - 1)) + 1;
                hero1[j].hp = hero1[j].hpm;
                if (hero1[j].hp > hero1[j].hpm) hero1[j].hp = hero1[j].hpm;
                cout << "Идёт выполнение программы ";
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
                cout << "Выполнение завершено" << endl;
                cout << "Вы восстановили " << x << " здоровья" << endl;
                }
                else if (prog == 2){
                cout << "Запущена программа \"Понижение здоровья\"" << endl;
                x = (rand()%(6 - 1)) + 1;
                hero1[j].hp = hero1[j].hp - x;
                if (hero1[j].hp < 0) hero1[j].hp = 0;
                cout << "Идёт выполнение программы ";
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
                cout << "Выполнение завершено" << endl;
                cout << "Вы понизили своё здоровье на " << x << " единиц" << endl;
                }
                else if (prog == 3){
                cout << "Запущена программа \"Понижение максимального здоровья\"" << endl;
                x = (rand()%(3 - 1)) + 1;
                hero1[j].hpm = hero1[j].hpm - x;
                if (hero1[j].hpm < 0) hero1[j].hpm = 0;
                if (hero1[j].hp > hero1[j].hpm) hero1[j].hp = hero1[j].hpm;
                if (hero1[j].hp < 0) hero1[j].hp = 0;
                cout << "Идёт выполнение программы ";
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
                cout << "Выполнение завершено" << endl;
                cout << "Вы понизили своё максимальное здоровье на " << x << " единиц" << endl;
                }
                else if (prog == 4){
                cout << "Запущена программа \"Бездействие системы\"" << endl;
                cout << "Идёт выполнение программы ";
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
                cout << "Выполнение завершено" << endl;
                cout << "Ничего не происходит" << endl;
                }
                else if (prog == 5){
                cout << "Запущена программа \"Повышение максимального здоровья\"" << endl;
                x = (rand()%(3 - 1)) + 1;
                hero1[j].hpm = hero1[j].hpm + x;
                cout << "Идёт выполнение программы ";
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
                cout << "Выполнение завершено" << endl;
                cout << "Вы повысили своё максимальное здоровье на " << x << " единиц" << endl;
                }
                else if (prog == 6){
                cout << "Запущена программа \"Повышение максимального здоровья v 2.0\"" << endl;
                x = (rand()%(3 - 1)) + 1;
                hero1[j].hpm = hero1[j].hpm + x;
                hero1[j].hp = hero1[j].hpm;
                cout << "Идёт выполнение программы ";
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
                cout << "Выполнение завершено" << endl;
                cout << "Вы повысили своё максимальное здоровье на " << x << " единиц и полностью восстановили его" << endl;
                }
                else if (prog == 7){
                cout << "Запущена программа \"Повышение максимальной атаки слабого оружия\"" << endl;
                hero1[j].atc12++;
                cout << "Идёт выполнение программы ";
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
                cout << "Выполнение завершено" << endl;
                cout << "Вы повысили максимальную атаку слабого оружия на 1" << endl;
                }
                else if (prog == 8){
                cout << "Запущена программа \"Получние 2 очков способности\"" << endl;
                hero1[j].pred++;
                hero1[j].pred++;
                cout << "Идёт выполнение программы ";
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
                cout << "Выполнение завершено" << endl;
                cout << "Вы получили 2 очка способности" << endl;
                }
                else if (prog == 9){
                cout << "Запущена программа \"Получние кода шкатулки\"" << endl;
                cout << "Идёт выполнение программы ";
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
                cout << "Выполнение завершено" << endl;
                cout << "Текущий код шкатулки: " << kod << endl;
                }
                else if (prog == 10){
                cout << "Запущена программа \"Полуff@# @#^*#\"" << endl;
                cout << "Идёт выполнение программы ";
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
                cout << "Выполнение прервано" << endl;
                }
                else if (prog == 11){
                cout << "Запущена программа \"Получение информации о существе\"" << endl;
                cout << "Идёт выполнение программы ";
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
                cout << "Выполнение завершено" << endl;
                cout << "Полученные данные: " << endl;
                forstat(enemy1[i], i);
                }
                else if (prog == 12){
                cout << "Запущена программа \"Понижение минимальной атаки слабого оружия\"" << endl;
                hero1[j].atc1--;
                cout << "Идёт выполнение программы ";
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
                cout << "Выполнение завершено" << endl;
                cout << "Вы понизили минимальную атаку слабого оружия на 1" << endl;
                }
                else if (prog == 13){
                cout << "Запущена программа \"Получение опыта\"" << endl;
                x = (rand()%(9 - 2)) + 2;
                hero1[j].exp = hero1[j].exp + x;
                cout << "Идёт выполнение программы ";
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
                cout << "Выполнение завершено" << endl;
                cout << "Вы получили " << x << " к опыту" << endl;
                }
                else if (prog == 14){
                cout << "Запущена программа \"Игра с самим собой в крестики-нолики\"" << endl;
                cout << "Идёт выполнение программы ";
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
                cout << "Выполнение завершено" << endl;
                cout << "Вы победили" << endl;
                }
                        cout << "Вы вытаскиваете флешку и оставляете её в комнате" << endl;
                    }
                    else cout << "Вы не знаете, как можно использовать эту флешку и оставляете её в комнате" << endl;
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
                    cout << "Вы не прикасаетесь к амулету и идёте дальше" << endl;
            }
            if (l == 26){
                    cout << "Вы оставляете содержимое банки нетронутым" << endl;
            }
            if ((l == 27)||(l == 28)){
                    cout << "Вы проходите мимо сгустка и идёте дальше" << endl;
            }
            if ((l == 23)||(l == 29)||(l == 30)||(l == 38)||(l == 40)){
                    cout << "Вы проходите мимо записки и идёте дальше" << endl;
            }
            if ((l == 31)||(l == 32)||(l == 33)||(l == 34)||(l == 35)||(l == 36)||(l == 37)){
                    cout << "Вы не трогаете чип и идёте дальше" << endl;
            }
            if ((l == 41)||(l == 42)){
                    cout << "Вы не трогаете флешку и идёте дальше" << endl;
            }
            if (l == 39){
                    cout << "Вы не трогаете шкатулку и идёте дальше" << endl;
            }
        }
    }
    Sleep(1000);
    cout << " |------------------------------------------------------------------------------------------------------------------------------|" << endl;
    }
    }

    enemy1[i].hp = enemy1[i].hpm;
    cout << "На вас нападает " << enemy1[i].name << endl;
    herostat(hero1[j]);
    enemystat(enemy1[i]);
    cout << " |------------------------------------------------------------------------------------------------------------------------------|" << endl;
    Sleep(1000);
    boy:
    cout << "Вы атакуете" << endl;
    cout << " |------------------------------------------------------------------------------------------------------------------------------|" << endl;
    Sleep(1000);
    atcs = "-";
    while ((atcs != "1")&&(atcs != "2")&&(atcs != "3")&&(atcs != "4")&&(atcs != "5")&&(atcs != "6")&&(atcs != "7")&&(atcs != "8")&&(atcs != "0")){
    zan:
    cout << "Выберите действие:" << endl;
    if (j==0){
    cout << "1 - Удар щитом (" << hero1[j].atc1 << "-" << hero1[j].atc12 << ")" << endl;
    cout << "2 - Удар мечом (" << hero1[j].atc2 << "-" << hero1[j].atc22 << ")" << endl;
    cout << "3 - Перебинтовать раны (" << hero1[j].heal << "-" << hero1[j].heal2 << ")" << endl;
    cout << "4 - Использовать Сокрушительный удар (10 урона, 1 опыта), осталось: (" << hero1[j].pred << ")"<< endl;
    };
    if (j==1){
    cout << "1 - Удар кулаком (" << hero1[j].atc1 << "-" << hero1[j].atc12 << ")" << endl;
    cout << "2 - Удар вилами (" << hero1[j].atc2 << "-" << hero1[j].atc22 << ")" << endl;
    cout << "3 - Перебинтовать раны с использованием трав (" << hero1[j].heal << "-" << hero1[j].heal2 << ")" << endl;
    cout << "4 - Использовать Свежий урожай (5 здоровья, 4 урона, 3 опыта), осталось: (" << hero1[j].pred << ")"<< endl;
    };
    if (j==2){
    cout << "1 - Удар скальпелем (" << hero1[j].atc1 << "-" << hero1[j].atc12 << ")" << endl;
    cout << "2 - Удар медицинской пилой (" << hero1[j].atc2 << "-" << hero1[j].atc22 << ")" << endl;
    cout << "3 - Вылечить раны (" << hero1[j].heal << "-" << hero1[j].heal2 << ")" << endl;
    cout << "4 - Использовать Профессиональное лечение (Полное здоровье, 1 опыта), осталось: (" << hero1[j].pred << ")"<< endl;
    };
    if (j==3){
    cout << "1 - Удар прикладом арбалета (" << hero1[j].atc1 << "-" << hero1[j].atc12 << ")" << endl;
    cout << "2 - Выстрел из арбалета (" << hero1[j].atc2 << "-" << hero1[j].atc22 << ")" << endl;
    cout << "3 - Перебинтовать раны (" << hero1[j].heal << "-" << hero1[j].heal2 << ")" << endl;
    cout << "4 - Использовать Несколько выстрелов (0-12 урона, 1 опыта), осталось: (" << hero1[j].pred << ")"<< endl;
    };
    if (j==4){
    cout << "1 - Удар волшебной палочкой (" << hero1[j].atc1 << "-" << hero1[j].atc12 << ")" << endl;
    cout << "2 - Сотворить и использовать заклинание на противнике (" << hero1[j].atc2 << "-" << hero1[j].atc22 << ")" << endl;
    cout << "3 - Сотворить и использовать заклинание на себе (" << hero1[j].heal << "-" << hero1[j].heal2 << ")" << endl;
    cout << "4 - Использовать Древнее заклинание (Атака противника равна 1, 1 опыта), осталось: (" << hero1[j].pred << ")"<< endl;
    };
    if (j==5){
    cout << "1 - Удар шлемом (" << hero1[j].atc1 << "-" << hero1[j].atc12 << ")" << endl;
    cout << "2 - Удар булавой (" << hero1[j].atc2 << "-" << hero1[j].atc22 << ")" << endl;
    cout << "3 - Попытаться перебинтовать раны (" << hero1[j].heal << "-" << hero1[j].heal2 << ")" << endl;
    cout << "4 - Использовать Непробиваемый панцирь (Блок, 2 ход, 1 опыта), осталось: (" << hero1[j].pred << ")"<< endl;
    };
    if (j==6){
    cout << "1 - Призыв силы тьмы (" << hero1[j].atc1 << "-" << hero1[j].atc12 << ")" << endl;
    cout << "2 - Направление силы тьмы на врага (" << hero1[j].atc2 << "-" << hero1[j].atc22 << ")" << endl;
    cout << "3 - Использование на себе силы тьмы (" << hero1[j].heal << "-" << hero1[j].heal2 << ")" << endl;
    cout << "4 - Использовать Тёмный ритуал (-1-1 к атакам всего оружия, -2-2 к здоровью, 1 опыта), осталось: (" << hero1[j].pred << ")" << endl;
    };
    if (j==7){
    cout << "1 - Удар дагой (" << hero1[j].atc1 << "-" << hero1[j].atc12 << ")" << endl;
    cout << "2 - Удар шпагой (" << hero1[j].atc2 << "-" << hero1[j].atc22 << ")" << endl;
    cout << "3 - Вылечить раны припаркой (" << hero1[j].heal << "-" << hero1[j].heal2 << ")" << endl;
    cout << "4 - Использовать Двойной удар (Урон х2 для всего оружия, пока не умрёт враг, 1 опыта), осталось: (" << hero1[j].pred << ")" << endl;
    };
    if (j==8){
    cout << "1 - Удар рогами (" << hero1[j].atc1 << "-" << hero1[j].atc12 << ")" << endl;
    cout << "2 - Удар рогами с разбега (" << hero1[j].atc2 << "-" << hero1[j].atc22 << ")" << endl;
    cout << "3 - Поесть траву и восстановить этим здоровье (" << hero1[j].heal << "-" << hero1[j].heal2 << ")" << endl;
    cout << "4 - Использовать Силу рогов (6 урона, 10 опыта), осталось: (" << hero1[j].pred << ")" << endl;
    };
    if (j==9){
    cout << "1 - Удар изогнутым кинжалом (" << hero1[j].atc1 << "-" << hero1[j].atc12 << ")" << endl;
    cout << "2 - Удар трезубцем (" << hero1[j].atc2 << "-" << hero1[j].atc22 << ")" << endl;
    cout << "3 - Восстановить здоровье с помощью энергии тьмы (" << hero1[j].heal << "-" << hero1[j].heal2 << ")" << endl;
    cout << "4 - Использовать Заговор сил тьмы (100 урона, -5-5, здоровья, 1 опыта), осталось: (" << hero1[j].pred << ")" << endl;
    };
    if (j==10){
    cout << "1 - Удар кулаками (" << hero1[j].atc1 << "-" << hero1[j].atc12 << ")" << endl;
    cout << "2 - Удар дубиной (" << hero1[j].atc2 << "-" << hero1[j].atc22 << ")" << endl;
    cout << "3 - Восстановить здоровье перевязкой ран (" << hero1[j].heal << "-" << hero1[j].heal2 << ")" << endl;
    cout << "4 - Использовать Трансформация (Смена героя на Оборотень в форме огромного волка), осталось: (" << hero1[j].pred << ")" << endl;
    };
    if (j==11){
    cout << "1 - Удар лапой с когтями (" << hero1[j].atc1 << "-" << hero1[j].atc12 << ")" << endl;
    cout << "2 - Удар лапами с когтями (" << hero1[j].atc2 << "-" << hero1[j].atc22 << ")" << endl;
    cout << "3 - Восстановить здоровье поеданием сырого мяса (" << hero1[j].heal << "-" << hero1[j].heal2 << ")" << endl;
    cout << "4 - Использовать Трансформация (Смена героя на Оборотень в форме человека), осталось: (" << hero1[j].pred << ")" << endl;
    };
    if (j==20){
    cout << "1 - Удар рукой-базукой (" << hero1[j].atc1 << "-" << hero1[j].atc12 << ")" << endl;
    cout << "2 - Прописывание двоечки (" << hero1[j].atc2 << "-" << hero1[j].atc22 << ")" << endl;
    cout << "3 - Вколоть себе стимулятор (" << hero1[j].heal << "-" << hero1[j].heal2 << ")" << endl;
    cout << "4 - Использовать Заколоться синтолом (1 ко всем видам оружия, -3 к максимальному здоровью и его восстановление), осталось: (" << hero1[j].pred << ")" << endl;
    };
    if (j==21){
    cout << "1 - Удар правым нефритовым кулаком (" << hero1[j].atc1 << "-" << hero1[j].atc12 << ")" << endl;
    cout << "2 - Удар левым нефритовым кулаком (" << hero1[j].atc2 << "-" << hero1[j].atc22 << ")" << endl;
    cout << "3 - Восстановить себе здоровье нефритом (" << hero1[j].heal << "-" << hero1[j].heal2 << ")" << endl;
    cout << "4 - Использовать Нефритовая эволюция (1 ко всем характеристикам и 5 к нужному количество опыта), осталось: (" << hero1[j].pred << ")" << endl;
    };
    if (j==22){
    cout << "1 - Удар большим гаечным ключом (" << hero1[j].atc1 << "-" << hero1[j].atc12 << ")" << endl;
    cout << "2 - Удар металлической трубой (" << hero1[j].atc2 << "-" << hero1[j].atc22 << ")" << endl;
    cout << "3 - Починить себя (" << hero1[j].heal << "-" << hero1[j].heal2 << ")" << endl;
    cout << "4 - Использовать Улучшение (1 к максимальному здоровью, -1 ко всем характеристикам слабого оружия и 3 к опыту), осталось: (" << hero1[j].pred << ")" << endl;
    };
    if (j==23){
    cout << "1 - Использование тайных сил (" << hero1[j].atc1 << "-" << hero1[j].atc12 << ")" << endl;
    cout << "2 - Удар магическим посохом (" << hero1[j].atc2 << "-" << hero1[j].atc22 << ")" << endl;
    cout << "3 - Магическое восстановление (" << hero1[j].heal << "-" << hero1[j].heal2 << ")" << endl;
    cout << "4 - Использовать Тайное заклинание (-1 к максимальному здоровью и 1 ко всем характеристикам слабого оружия), осталось: (" << hero1[j].pred << ")" << endl;
    };
    if (j==24){
    cout << "1 - Удар костлявым кулаком (" << hero1[j].atc1 << "-" << hero1[j].atc12 << ")" << endl;
    cout << "2 - Удар сломанным большим мечом (" << hero1[j].atc2 << "-" << hero1[j].atc22 << ")" << endl;
    cout << "3 - Некротическая регенерация (" << hero1[j].heal << "-" << hero1[j].heal2 << ")" << endl;
    cout << "4 - Использовать Некротическое восстановление (1 к максимальному здоровью и 1 к опыту), осталось: (" << hero1[j].pred << ")" << endl;
    };
    if (j==25){
    cout << "1 - Удар металлическим кулаком (" << hero1[j].atc1 << "-" << hero1[j].atc12 << ")" << endl;
    cout << "2 - Выстрел из руки-винтовки (" << hero1[j].atc2 << "-" << hero1[j].atc22 << ")" << endl;
    cout << "3 - Починить себя (" << hero1[j].heal << "-" << hero1[j].heal2 << ")" << endl;
    cout << "4 - Использовать Активация случайной программы (Случайный эффект), осталось: (" << hero1[j].pred << ")" << endl;
    };
    if (j==19){ //Рыцарь
    cout << "1 - Удар " << wea1[w].info << " (" << hero1[j].atc1 << "-" << hero1[j].atc12 << ")" << endl;
    cout << "2 - Сильный удар " << wea1[w].info << " (" << hero1[j].atc2 << "-" << hero1[j].atc22 << ")" << endl;
    cout << "3 - Перебинтовать раны (" << hero1[j].heal << "-" << hero1[j].heal2 << ")" << endl;
    cout << "4 - Использовать Прочные латы (1 к максимальному здоровью, и 2 к опыту), осталось: (" << hero1[j].pred << ")" << endl;
    };
    if (j==26){ //Воительница
    cout << "1 - Удар " << wea1[w].info << " (" << hero1[j].atc1 << "-" << hero1[j].atc12 << ")" << endl;
    cout << "2 - Сильный удар " << wea1[w].info << " (" << hero1[j].atc2 << "-" << hero1[j].atc22 << ")" << endl;
    cout << "3 - Перебинтовать раны (" << hero1[j].heal << "-" << hero1[j].heal2 << ")" << endl;
    cout << "4 - Использовать Прочная броня (1 к максимальному здоровью, и 2 к опыту), осталось: (" << hero1[j].pred << ")" << endl;
    };
    cout << "5 - Узнать больше информации о существе " << enemy1[i].name << endl;
    if (estpred != 0){
    cout << "6 - Использовать предмет " << pred1[estpred].name << endl;
    }
    if (estrel != 0){
    cout << "7 - Узнать информацию о реликвии " << rel1[estrel].name << endl;
    }
    if (w != 0){
    cout << "8 - Выбросить оружие " << wea1[w].name << endl;
    }
    cout << "0 - Выйти в меню без сохранения" << endl;
    getline(cin, atcs);
    };
    if (atcs == "0"){
        goto start;
    };
    if ((atcs == "6")&&(estpred != 0)){
        cout << "Вы используете предмет " << pred1[estpred].name  << endl;
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
                cout << "Вы открываете конверт, достаёте из него лист и читаете его содержимое" << endl;
                cout << "Там написано: \"" << kod <<"\"" << endl;
            }
            if (estpred == 15){
                cout << "Вы открываете конверт, достаёте из него лист и читаете его содержимое" << endl;
                cout << "Там написано: \"Тебе нужна моя помощь?\"" << endl;
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
                cout << "*Шар предсказывает информацию о существе и исчезает:" << endl;
                forstat(enemy1[i], i);
            }
    estpred = 0;
    goto zan;
    }
    else if ((atcs == "6")&&(estpred == 0)) goto zan;
    if ((atcs == "7")&&(estrel != 0)){
        cout << "Свойство реликвии: " << rel1[estrel].info  << endl;
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
        cout << "Вы выбрасываете оружие " << wea1[w].name  << endl;
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
        if (j==0) cout << "*Удар щитом*" << endl;
        if (j==1) cout << "*Удар кулаком*" << endl;
        if (j==2) cout << "*Удар скальпелем*" << endl;
        if (j==3) cout << "*Удар прикладом арбалета*" << endl;
        if (j==4) cout << "*Удар волшебной палочкой*" << endl;
        if (j==5) cout << "*Удар шлемом*" << endl;
        if (j==6) cout << "*Призыв силы тьмы*" << endl;
        if (j==7) cout << "*Удар дагой*" << endl;
        if (j==8) cout << "*Удар рогами*" << endl;
        if (j==9) cout << "*Удар изогнутым кинжалом*" << endl;
        if (j==10) cout << "*Удар кулаками*" << endl;
        if (j==11) cout << "*Удар лапой с когтями*" << endl;
        if (j==19) cout << "*Удар " << wea1[w].info << "*" << endl;
        if (j==20) cout << "*Удар рукой-базукой*" << endl;
        if (j==21) cout << "*Удар правым нефритовым кулаком*" << endl;
        if (j==22) cout << "*Удар большим гаечным ключом*" << endl;
        if (j==23) cout << "*Использование тайных сил*" << endl;
        if (j==24) cout << "*Удар костлявым кулаком*" << endl;
        x = (rand()%(hero1[j].atc12+1 - hero1[j].atc1)) + hero1[j].atc1;
        if (baff1 == 1) x = x*2;
        if (j==23){
                if ((k != 10)&&(k != 20)&&(k != 30)&&(k != 40)&&(k != 50)&&(k != 60)&&(k != 70)&&(k != 80)&&(k != 90)&&(k != 100)&&(k != 101)){
            if (hero1[j].atc1 > enemy1[i].atc22) x = enemy1[i].hp;
                }
        }
        if (x>0) cout << "Вы нанесли " << x << " урона" << endl;
        else if (x == 0) cout << "Ваша атака не удалась" << endl;
        else cout << "Вы вылечили " << x*-1 << " здоровья противнику" << endl;
        enemy1[i].hp = enemy1[i].hp - x;
        if (enemy1[i].hp > enemy1[i].hpm) enemy1[i].hp = enemy1[i].hpm;
        if ((j == 21)||(j == 22)||(j == 23)||(j == 24)||(j == 25)){
        }
        else if (j == 20){
        hero1[j].exp = hero1[j].exp + 0.25;
        cout << "Вы получили 0.25 к опыту!" << endl;
        }
        else if (j != 8){
        hero1[j].exp = hero1[j].exp + 0.5;
        cout << "Вы получили 0.5 к опыту!" << endl;
        }
        else {
            hero1[j].exp = hero1[j].exp + 1;
            cout << "Вы получили 1 к опыту!" << endl;
        }
    }
    if (atcs == "2"){
        if (zvyk == 1) Beep(300, 200);
        if (zvyk == 1) Beep(400, 100);
        if (j==0) cout << "*Удар мечом*" << endl;
        if (j==1) cout << "*Удар вилами*" << endl;
        if (j==2) cout << "*Удар медицинской пилой*" << endl;
        if (j==3) cout << "*Выстрел из арбалета*" << endl;
        if (j==4) cout << "*Сотворение и использование заклинания на противнике*" << endl;
        if (j==5) cout << "*Удар булавой*" << endl;
        if (j==6) cout << "*Направление силы тьмы на врага*" << endl;
        if (j==7) cout << "*Удар шпагой*" << endl;
        if (j==8) cout << "*Удар рогами с разбега*" << endl;
        if (j==9) cout << "*Удар трезубцем*" << endl;
        if (j==10) cout << "*Удар дубиной*" << endl;
        if (j==11) cout << "*Удар лапами с когтями*" << endl;
        if (j==19) cout << "*Сильный удар " << wea1[w].info << "*" << endl;
        if (j==20) cout << "*Прописывание двоечки*" << endl;
        if (j==21) cout << "*Удар левым нефритовым кулаком*" << endl;
        if (j==22) cout << "*Удар металлической трубой*" << endl;
        if (j==23) cout << "*Удар магическим посохом*" << endl;
        if (j==24) cout << "*Удар сломанным большим мечом*" << endl;
        x = (rand()%(hero1[j].atc22+1 - hero1[j].atc2)) + hero1[j].atc2;
        if (baff1 == 1) x = x*2;
        if (x>0) cout << "Вы нанесли " << x << " урона" << endl;
        else if (x == 0) cout << "Ваша атака не удалась" << endl;
        else cout << "Вы вылечили " << x*-1 << " здоровья противнику" << endl;
        enemy1[i].hp = enemy1[i].hp - x;
        if (enemy1[i].hp > enemy1[i].hpm) enemy1[i].hp = enemy1[i].hpm;
        if (w == 5){
            hero1[j].hp--;
            if (hero1[j].hp < 0) hero1[j].hp = 0;
            cout << "*Вы случайно задеваете себя и наносите себе 1 урона*" << endl;
        }
        if (w == 6){
            hero1[j].hp = hero1[j].hp - 2;
            if (hero1[j].hp < 0) hero1[j].hp = 0;
            cout << "*Вы случайно задеваете себя и наносите себе 2 урона*" << endl;
        }
        if (w == 13){
            hero1[j].hp++;
            if (hero1[j].hp > hero1[j].hpm) hero1[j].hp = hero1[j].hpm;
            cout << "*Вы восстанавливаете себе 1 здоровья*" << endl;
        }
        if (w == 17){
            x = (rand()%(4 - 1)) + 1;
            hero1[j].hp = hero1[j].hp - x;
            if (hero1[j].hp < 0) hero1[j].hp = 0;
            cout << "*Банка взрывается и наносит вам " << x << " урона*" << endl;
        }
        if (w == 16){
            cout << "*Активация случайной программы*" << endl;
                cout << "Идёт выбор случайной программы ";
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
                cout << "Выбор завершён" << endl;
                prog = (rand()%(13 - 1)) + 1;
                if (prog == 1){
                cout << "Запущена программа \"Восстановление здоровья\"" << endl;
                x = (rand()%(6 - 1)) + 1;
                hero1[j].hp = hero1[j].hpm;
                if (hero1[j].hp > hero1[j].hpm) hero1[j].hp = hero1[j].hpm;
                cout << "Идёт выполнение программы ";
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
                cout << "Выполнение завершено" << endl;
                cout << "Вы восстановили " << x << " здоровья" << endl;
                }
                else if (prog == 2){
                cout << "Запущена программа \"Понижение здоровья\"" << endl;
                x = (rand()%(6 - 1)) + 1;
                hero1[j].hp = hero1[j].hp - x;
                if (hero1[j].hp < 0) hero1[j].hp = 0;
                cout << "Идёт выполнение программы ";
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
                cout << "Выполнение завершено" << endl;
                cout << "Вы понизили своё здоровье на " << x << " единиц" << endl;
                }
                else if (prog == 3){
                cout << "Запущена программа \"Понижение максимального здоровья\"" << endl;
                x = (rand()%(3 - 1)) + 1;
                hero1[j].hpm = hero1[j].hpm - x;
                if (hero1[j].hpm < 0) hero1[j].hpm = 0;
                if (hero1[j].hp > hero1[j].hpm) hero1[j].hp = hero1[j].hpm;
                if (hero1[j].hp < 0) hero1[j].hp = 0;
                cout << "Идёт выполнение программы ";
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
                cout << "Выполнение завершено" << endl;
                cout << "Вы понизили своё максимальное здоровье на " << x << " единиц" << endl;
                }
                else if (prog == 4){
                cout << "Запущена программа \"Бездействие системы\"" << endl;
                cout << "Идёт выполнение программы ";
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
                cout << "Выполнение завершено" << endl;
                cout << "Ничего не происходит" << endl;
                }
                else if (prog == 5){
                cout << "Запущена программа \"Повышение максимального здоровья\"" << endl;
                x = (rand()%(3 - 1)) + 1;
                hero1[j].hpm = hero1[j].hpm + x;
                cout << "Идёт выполнение программы ";
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
                cout << "Выполнение завершено" << endl;
                cout << "Вы повысили своё максимальное здоровье на " << x << " единиц" << endl;
                }
                else if (prog == 6){
                cout << "Запущена программа \"Получние 1 очка способности\"" << endl;
                hero1[j].pred++;
                cout << "Идёт выполнение программы ";
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
                cout << "Выполнение завершено" << endl;
                cout << "Вы получили 1 очко способности" << endl;
                }
                else if (prog == 7){
                cout << "Запущена программа \"Получние кода шкатулки\"" << endl;
                cout << "Идёт выполнение программы ";
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
                cout << "Выполнение завершено" << endl;
                cout << "Текущий код шкатулки: " << kod << endl;
                }
                else if (prog == 8){
                cout << "Запущена программа \"Полуff@# @#^*#\"" << endl;
                cout << "Идёт выполнение программы ";
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
                cout << "Выполнение прервано" << endl;
                }
                else if (prog == 9){
                cout << "Запущена программа \"Получение информации о существе\"" << endl;
                cout << "Идёт выполнение программы ";
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
                cout << "Выполнение завершено" << endl;
                cout << "Полученные данные: " << endl;
                forstat(enemy1[i], i);
                }
                else if (prog == 10){
                cout << "Запущена программа \"Понижение минимальной атаки слабого оружия\"" << endl;
                hero1[j].atc1--;
                cout << "Идёт выполнение программы ";
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
                cout << "Выполнение завершено" << endl;
                cout << "Вы понизили минимальную атаку слабого оружия на 1" << endl;
                }
                else if (prog == 11){
                cout << "Запущена программа \"Получение опыта\"" << endl;
                x = (rand()%(6 - 2)) + 2;
                hero1[j].exp = hero1[j].exp + x;
                cout << "Идёт выполнение программы ";
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
                cout << "Выполнение завершено" << endl;
                cout << "Вы получили " << x << " к опыту" << endl;
                }
                else if (prog == 12){
                cout << "Запущена программа \"Игра с самим собой в крестики-нолики\"" << endl;
                cout << "Идёт выполнение программы ";
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
                cout << "Выполнение завершено" << endl;
                cout << "Вы победили" << endl;
                x = (rand()%(4 - 1)) + 1;
                hero1[j].hp = hero1[j].hp - x;
                if (hero1[j].hp < 0) hero1[j].hp = 0;
                cout << "*Модуль коротит и наносит вам " << x << " урона*" << endl;
        }
    }
    }
    if (atcs == "3"){
        if (hero1[j].hp < hero1[j].hpm){
            if (zvyk == 1) Beep(200, 80);
            if (zvyk == 1) Beep(300, 80);
            if (zvyk == 1) Beep(200, 80);
            if (zvyk == 1) Beep(300, 80);
            if (j==0) cout << "*Перебинтовывание ран*" << endl;
            if (j==1) cout << "*Лечение ран с использованием трав*" << endl;
            if (j==2) cout << "*Лечение ран*" << endl;
            if (j==3) cout << "*Перебинтовывание ран*" << endl;
            if (j==4) cout << "*Сотворение и использование заклинания на себе*" << endl;
            if (j==5) cout << "*Попытка перевязать раны*" << endl;
            if (j==6) cout << "*Использование на себе силы тьмы*" << endl;
            if (j==7) cout << "*Вылечить раны припаркой*" << endl;
            if (j==8) cout << "*Поесть траву и восстановить этим здоровье*" << endl;
            if (j==9) cout << "*Восстановить здоровье с помощью энергии тьмы*" << endl;
            if (j==10) cout << "*Восстановить здоровье перевязкой ран*" << endl;
            if (j==11) cout << "*Восстановить здоровье поеданием сырого мяса*" << endl;
            if (j==19) cout << "*Перебинтовывание ран*" << endl;
            if (j==20) cout << "*Вколоть себе стимулятор*" << endl;
            if (j==21) cout << "*Восстановить себе здоровье нефритом*" << endl;
            if (j==22) cout << "*Починить себя*" << endl;
            if (j==23) cout << "*Магическое восстановление*" << endl;
            if (j==24) cout << "*Некротическая регенерация*" << endl;
            x = (rand()%(hero1[j].heal2+1 - hero1[j].heal)) + hero1[j].heal;
            if (x>0) cout << "Вы вылечили " << x << " здоровья" << endl;
            else if (x == 0) cout << "Попытка лечения не удалась" << endl;
            else cout << "Вы сделали только хуже и нанесли себе " << x*-1 << " урона" << endl;
            hero1[j].hp = hero1[j].hp + x;}
        else{
            if (zvyk == 1) Beep(500, 500);
            cout << "У вас полное здоровье!" << endl;
            goto zan;
        }
    }
    if (atcs == "4"){
            if (j == 0){
        if ((k != 10)&&(k != 20)&&(k != 30)&&(k != 40)&&(k != 50)&&(k != 60)&&(k != 70)&&(k != 80)&&(k != 90)&&(k != 100)&&(k != 101)){
            if (hero1[j].pred > 0){
                cout << "*Сокрушительный удар*" << endl;
                if (zvyk == 1) Beep(400,300);
                if (zvyk == 1) Beep(600,200);
                x = 10;
                cout << "Вы нанесли " << x << " урона" << endl;
                enemy1[i].hp = enemy1[i].hp - x;
                hero1[j].exp = hero1[j].exp + 1;
                hero1[j].pred--;
                cout << "Вы получили 1 к опыту!" << endl;
            }
            else{
                if (zvyk == 1) Beep(500, 500);
               cout << "У вас кончились очки способности!" << endl;
               goto zan;
            }}
        else{
                if (zvyk == 1) Beep(500, 500);
            cout << "В комнате с БОССОМ нельзя использовать способность!" << endl;
               goto zan;
        }}
        else if (j == 1){
        if ((k != 10)&&(k != 20)&&(k != 30)&&(k != 40)&&(k != 50)&&(k != 60)&&(k != 70)&&(k != 80)&&(k != 90)&&(k != 100)&&(k != 101)){
            if (hero1[j].pred > 0){
                cout << "*Свежий урожай*" << endl;
                if (zvyk == 1) Beep(400,300);
                if (zvyk == 1) Beep(600,200);
                hero1[j].hp = hero1[j].hp + 5;
                if (hero1[j].hp > hero1[j].hpm) hero1[j].hp = hero1[j].hpm;
                cout << "Вы вылечили 5 здоровья" << endl;
                x = 4;
                cout << "Вы нанесли " << x << " урона" << endl;
                enemy1[i].hp = enemy1[i].hp - x;
                hero1[j].exp = hero1[j].exp + 3;
                hero1[j].pred--;
                cout << "Вы получили 3 к опыту" << endl;
            }
            else{
                if (zvyk == 1) Beep(500, 500);
               cout << "У вас кончились очки способности!" << endl;
               goto zan;
            }}
        else{
            if (zvyk == 1) Beep(500, 500);
            cout << "В комнате с БОССОМ нельзя использовать способность!" << endl;
               goto zan;
        }}
        else if (j == 2){
        if ((k != 10)&&(k != 20)&&(k != 30)&&(k != 40)&&(k != 50)&&(k != 60)&&(k != 70)&&(k != 80)&&(k != 90)&&(k != 100)&&(k != 101)){
            if (hero1[j].pred > 0){
                cout << "*Профессиональное лечение*" << endl;
                if (zvyk == 1) Beep(400,300);
                if (zvyk == 1) Beep(600,200);
                x = 0;
                cout << "Вы полностью восстановили здоровье" << endl;
                hero1[j].hp = hero1[j].hpm;
                enemy1[i].hp = enemy1[i].hp - x;
                hero1[j].exp = hero1[j].exp + 1;
                hero1[j].pred--;
                cout << "Вы получили 1 к опыту" << endl;
            }
            else{
                if (zvyk == 1) Beep(500, 500);
               cout << "У вас кончились очки способности!" << endl;
               goto zan;
            }}
        else{
            if (zvyk == 1) Beep(500, 500);
            cout << "В комнате с БОССОМ нельзя использовать способность!" << endl;
               goto zan;
        }}
        else if (j == 3){
        if ((k != 10)&&(k != 20)&&(k != 30)&&(k != 40)&&(k != 50)&&(k != 60)&&(k != 70)&&(k != 80)&&(k != 90)&&(k != 100)&&(k != 101)){
            if (hero1[j].pred > 0){
                cout << "*Несколько выстрелов*" << endl;
                if (zvyk == 1) Beep(400,300);
                if (zvyk == 1) Beep(600,200);
                x = (rand()%(19 - 2)) + 2;
                cout << "Вы нанесли " << x << " урона" << endl;
                enemy1[i].hp = enemy1[i].hp - x;
                hero1[j].exp = hero1[j].exp + 1;
                hero1[j].pred--;
                cout << "Вы получили 1 к опыту" << endl;
            }
            else{
                if (zvyk == 1) Beep(500, 500);
               cout << "У вас кончились очки способности!" << endl;
               goto zan;
            }}
        else{
            if (zvyk == 1) Beep(500, 500);
            cout << "В комнате с БОССОМ нельзя использовать способность!" << endl;
               goto zan;
        }}
        else if (j == 4){
        if ((k != 10)&&(k != 20)&&(k != 30)&&(k != 40)&&(k != 50)&&(k != 60)&&(k != 70)&&(k != 80)&&(k != 90)&&(k != 100)&&(k != 101)){
            if (hero1[j].pred > 0){
                cout << "*Древнее заклинание*" << endl;
                if (zvyk == 1) Beep(400,300);
                if (zvyk == 1) Beep(600,200);
                panact2 = 1;
                cout << "Атаки всего оружия противника снижены до 1" << endl;
                x = 0;
                enemy1[i].hp = enemy1[i].hp - x;
                hero1[j].exp = hero1[j].exp + 1;
                hero1[j].pred--;
                cout << "Вы получили 1 к опыту" << endl;
            }
            else{
                if (zvyk == 1) Beep(500, 500);
               cout << "У вас кончились очки способности!" << endl;
               goto zan;
            }}
        else{
            if (zvyk == 1) Beep(500, 500);
            cout << "В комнате с БОССОМ нельзя использовать способность!" << endl;
               goto zan;
        }}
        else if (j == 5){
        if ((k != 10)&&(k != 20)&&(k != 30)&&(k != 40)&&(k != 50)&&(k != 60)&&(k != 70)&&(k != 80)&&(k != 90)&&(k != 100)&&(k != 101)){
            if (hero1[j].pred > 0){
                    if (panact == 0){
                cout << "*Непробиваемый панцирь*" << endl;
                if (zvyk == 1) Beep(400,300);
                if (zvyk == 1) Beep(600,200);
                x = 0;
                panact = 1;
                enemy1[i].hp = enemy1[i].hp - x;
                hero1[j].exp = hero1[j].exp + 1;
                hero1[j].pred--;
                cout << "Вы получили 1 к опыту" << endl;
                goto zan;
                    }
                else{
                    if (zvyk == 1) Beep(500, 500);
                    cout << "Вы уже использовали Непробиваемый панцирь на этом ходу" << endl;
                    goto zan;
                }
            }
            else{
                if (zvyk == 1) Beep(500, 500);
               cout << "У вас кончились очки способности!" << endl;
               goto zan;
            }}
        else{
            if (zvyk == 1) Beep(500, 500);
            cout << "В комнате с БОССОМ нельзя использовать способность!" << endl;
               goto zan;
        }}
        else if (j == 6){
        if ((k != 10)&&(k != 20)&&(k != 30)&&(k != 40)&&(k != 50)&&(k != 60)&&(k != 70)&&(k != 80)&&(k != 90)&&(k != 100)&&(k != 101)){
            if (hero1[j].pred > 0){
                cout << "*Тёмный ритуал*" << endl;
                if (zvyk == 1) Beep(400,300);
                if (zvyk == 1) Beep(600,200);
                x = (rand()%(2 + 1)) -1;
                hero1[j].atc1 = hero1[j].atc1 + x;
                hero1[j].atc12 = hero1[j].atc12 + x;
                hero1[j].atc2 = hero1[j].atc2 + x;
                hero1[j].atc22 = hero1[j].atc22 + x;
                cout << "Вы получили " << x << " к атаке всего оружия" << endl;
                x = (rand()%(3 + 2)) -2;
                if (x>0) cout << "Вы вылечили " << x << " здоровья" << endl;
                else if (x == 0) cout << "Попытка лечения не удалась" << endl;
                else cout << "Вы сделали только хуже и нанесли себе " << x*-1 << " урона" << endl;
                hero1[j].hp = hero1[j].hp + x;
                if (hero1[j].hp > hero1[j].hpm) hero1[j].hp = hero1[j].hpm;
                x = 0;
                enemy1[i].hp = enemy1[i].hp - x;
                hero1[j].exp = hero1[j].exp + 1;
                hero1[j].pred--;
                cout << "Вы получили 1 к опыту" << endl;
            }
            else{
                if (zvyk == 1) Beep(500, 500);
               cout << "У вас кончились очки способности!" << endl;
               goto zan;
            }}
        else{
            if (zvyk == 1) Beep(500, 500);
            cout << "В комнате с БОССОМ нельзя использовать способность!" << endl;
               goto zan;
        }}
        else if (j == 7){
        if ((k != 10)&&(k != 20)&&(k != 30)&&(k != 40)&&(k != 50)&&(k != 60)&&(k != 70)&&(k != 80)&&(k != 90)&&(k != 100)&&(k != 101)){
            if (hero1[j].pred > 0){
                    if (panact == 0){
                cout << "*Двойной удар*" << endl;
                if (zvyk == 1) Beep(400,300);
                if (zvyk == 1) Beep(600,200);
                baff1 = 1;
                enemy1[i].hp = enemy1[i].hp - x;
                hero1[j].exp = hero1[j].exp + 1;
                hero1[j].pred--;
                cout << "Вы получили 1 к опыту" << endl;
                    }
                    else {
                        if (zvyk == 1) Beep(500, 500);
                        cout << "Вы уже использовали Двойной удар в битве с этим врагом" << endl;
                        goto zan;
                    }
            }
            else{
                if (zvyk == 1) Beep(500, 500);
               cout << "У вас кончились очки способности!" << endl;
               goto zan;
            }}
        else{
            if (zvyk == 1) Beep(500, 500);
            cout << "В комнате с БОССОМ нельзя использовать способность!" << endl;
               goto zan;
        }}
        else if (j == 8){
        if ((k != 10)&&(k != 20)&&(k != 30)&&(k != 40)&&(k != 50)&&(k != 60)&&(k != 70)&&(k != 80)&&(k != 90)&&(k != 100)&&(k != 101)){
            if (hero1[j].pred > 0){
                cout << "*Сила рогов*" << endl;
                if (zvyk == 1) Beep(400,300);
                if (zvyk == 1) Beep(600,200);
                x = 6;
                cout << "Вы нанесли " << x << " урона" << endl;
                enemy1[i].hp = enemy1[i].hp - x;
                hero1[j].exp = hero1[j].exp + 10;
                hero1[j].pred--;
                cout << "Вы получили 10 к опыту" << endl;
            }
            else{
                if (zvyk == 1) Beep(500, 500);
               cout << "У вас кончились очки способности!" << endl;
               goto zan;
            }}
        else{
            if (zvyk == 1) Beep(500, 500);
            cout << "В комнате с БОССОМ нельзя использовать способность!" << endl;
               goto zan;
        }}
        else if (j == 9){
        if ((k != 10)&&(k != 20)&&(k != 30)&&(k != 40)&&(k != 50)&&(k != 60)&&(k != 70)&&(k != 80)&&(k != 90)&&(k != 100)&&(k != 101)){
            if (hero1[j].pred > 0){
                cout << "*Сила рогов*" << endl;
                if (zvyk == 1) Beep(400,300);
                if (zvyk == 1) Beep(600,200);
                x = 100;
                enemy1[i].hp = enemy1[i].hp - x;
                cout << "Вы нанесли " << x << " урона" << endl;
                x = (rand()%(6 + 5)) - 5;
                hero1[j].hp = hero1[j].hp + x;
                if (hero1[j].hp > hero1[j].hpm) hero1[j].hp = hero1[j].hpm;
                if (x>0) cout << "Вы вылечили " << x << " здоровья" << endl;
                else if (x == 0) cout << "Попытка лечения не удалась" << endl;
                else cout << "Вы сделали только хуже и нанесли себе " << x*-1 << " урона" << endl;
                hero1[j].exp = hero1[j].exp + 1;
                hero1[j].pred--;
                cout << "Вы получили 1 к опыту" << endl;
            }
            else{
                if (zvyk == 1) Beep(500, 500);
               cout << "У вас кончились очки способности!" << endl;
               goto zan;
            }}
        else{
            if (zvyk == 1) Beep(500, 500);
            cout << "В комнате с БОССОМ нельзя использовать способность!" << endl;
               goto zan;
        }}
        else if (j == 10){
        if ((k != 10)&&(k != 20)&&(k != 30)&&(k != 40)&&(k != 50)&&(k != 60)&&(k != 70)&&(k != 80)&&(k != 90)&&(k != 100)&&(k != 101)){
            if (hero1[j].pred > 0){
                cout << "*Трансформация*" << endl;
                if (zvyk == 1) Beep(400,300);
                if (zvyk == 1) Beep(600,200);
                j = 11;
                hero1[j].hp = hero1[j].hpm;
                cout << "Вы трансформировались в Оборотень в форме огромного волка" << endl;
            }
            else{
                if (zvyk == 1) Beep(500, 500);
               cout << "У вас кончились очки способности!" << endl;
               goto zan;
            }}
        else{
            if (zvyk == 1) Beep(500, 500);
            cout << "В комнате с БОССОМ нельзя использовать способность!" << endl;
               goto zan;
        }}
        else if (j == 11){
        if ((k != 10)&&(k != 20)&&(k != 30)&&(k != 40)&&(k != 50)&&(k != 60)&&(k != 70)&&(k != 80)&&(k != 90)&&(k != 100)&&(k != 101)){
            if (hero1[j].pred > 0){
                cout << "*Трансформация*" << endl;
                if (zvyk == 1) Beep(400,300);
                if (zvyk == 1) Beep(600,200);
                j = 10;
                hero1[j].hp = hero1[j].hpm;
                cout << "Вы трансформировались в Оборотень в форме человека" << endl;
            }
            else{
                if (zvyk == 1) Beep(500, 500);
               cout << "У вас кончились очки способности!" << endl;
               goto zan;
            }}
        else{
            if (zvyk == 1) Beep(500, 500);
            cout << "В комнате с БОССОМ нельзя использовать способность!" << endl;
               goto zan;
        }}
        else if (j == 19){
        if ((k != 10)&&(k != 20)&&(k != 30)&&(k != 40)&&(k != 50)&&(k != 60)&&(k != 70)&&(k != 80)&&(k != 90)&&(k != 100)&&(k != 101)){
            if (hero1[j].pred > 0){
                cout << "*Прочные латы*" << endl;
                if (zvyk == 1) Beep(400,300);
                if (zvyk == 1) Beep(600,200);
                hero1[j].hpm++;
                cout << "Вы увеличили своё максимальное здоровье на 1" << endl;
                hero1[j].exp = hero1[j].exp+2;
                hero1[j].pred--;
                cout << "Вы получили 2 к опыту" << endl;
            }
            else{
                if (zvyk == 1) Beep(500, 500);
               cout << "У вас кончились очки способности!" << endl;
               goto zan;
            }}
        else{
            if (zvyk == 1) Beep(500, 500);
            cout << "В комнате с БОССОМ нельзя использовать способность!" << endl;
               goto zan;
        }}
        else if (j == 26){
        if ((k != 10)&&(k != 20)&&(k != 30)&&(k != 40)&&(k != 50)&&(k != 60)&&(k != 70)&&(k != 80)&&(k != 90)&&(k != 100)&&(k != 101)){
            if (hero1[j].pred > 0){
                cout << "*Прочная броня*" << endl;
                if (zvyk == 1) Beep(400,300);
                if (zvyk == 1) Beep(600,200);
                hero1[j].hpm++;
                cout << "Вы увеличили своё максимальное здоровье на 1" << endl;
                hero1[j].exp = hero1[j].exp+2;
                hero1[j].pred--;
                cout << "Вы получили 2 к опыту" << endl;
            }
            else{
                if (zvyk == 1) Beep(500, 500);
               cout << "У вас кончились очки способности!" << endl;
               goto zan;
            }}
        else{
            if (zvyk == 1) Beep(500, 500);
            cout << "В комнате с БОССОМ нельзя использовать способность!" << endl;
               goto zan;
        }}
        else if (j == 20){
        if ((k != 10)&&(k != 20)&&(k != 30)&&(k != 40)&&(k != 50)&&(k != 60)&&(k != 70)&&(k != 80)&&(k != 90)&&(k != 100)&&(k != 101)){
            if (hero1[j].pred > 0){
                cout << "*Заколоться синтолом*" << endl;
                if (zvyk == 1) Beep(400,300);
                if (zvyk == 1) Beep(600,200);
                hero1[j].hpm = hero1[j].hpm - 3;
                hero1[j].hp = hero1[j].hpm;
                hero1[j].atc1++;
                hero1[j].atc2++;
                hero1[j].atc12++;
                hero1[j].atc22++;
                hero1[j].pred--;
                cout << "Вы получили 1 ко всем видам оружия" << endl;
                cout << "Вы получили -3 к максмальному здоровью" << endl;
                cout << "Вы полностью восстановили здоровье" << endl;
            }
            else{
                if (zvyk == 1) Beep(500, 500);
               cout << "У вас кончились очки способности!" << endl;
               goto zan;
            }}
        else{
            if (zvyk == 1) Beep(500, 500);
            cout << "В комнате с БОССОМ нельзя использовать способность!" << endl;
               goto zan;
        }}
        else if (j == 21){
        if ((k != 10)&&(k != 20)&&(k != 30)&&(k != 40)&&(k != 50)&&(k != 60)&&(k != 70)&&(k != 80)&&(k != 90)&&(k != 100)&&(k != 101)){
            if (hero1[j].pred > 0){
                cout << "*Нефритовая эволюция*" << endl;
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
                cout << "Вы получили 1 ко всем характеристикам, кроме минимального лечения" << endl;
                cout << "Вы увеличили на 5 количество опыта до нового уровня" << endl;
            }
            else{
                if (zvyk == 1) Beep(500, 500);
               cout << "У вас кончились очки способности!" << endl;
               goto zan;
            }}
        else{
            if (zvyk == 1) Beep(500, 500);
            cout << "В комнате с БОССОМ нельзя использовать способность!" << endl;
               goto zan;
        }}
        else if (j == 22){
        if ((k != 10)&&(k != 20)&&(k != 30)&&(k != 40)&&(k != 50)&&(k != 60)&&(k != 70)&&(k != 80)&&(k != 90)&&(k != 100)&&(k != 101)){
            if (hero1[j].pred > 0){
                cout << "*Улучшение*" << endl;
                if (zvyk == 1) Beep(400,300);
                if (zvyk == 1) Beep(600,200);
                hero1[j].hpm++;
                hero1[j].atc1--;
                hero1[j].atc12--;
                hero1[j].exp++;
                hero1[j].pred--;
                cout << "Вы получили 1 к максимальному здоровью" << endl;
                cout << "Вы получили -1 ко всем характеристикам слабого оружия" << endl;
                cout << "Вы получили 1 к опыту" << endl;
            }
            else{
                if (zvyk == 1) Beep(500, 500);
               cout << "У вас кончились очки способности!" << endl;
               goto zan;
            }}
        else{
            if (zvyk == 1) Beep(500, 500);
            cout << "В комнате с БОССОМ нельзя использовать способность!" << endl;
               goto zan;
        }}
        else if (j == 23){
        if ((k != 10)&&(k != 20)&&(k != 30)&&(k != 40)&&(k != 50)&&(k != 60)&&(k != 70)&&(k != 80)&&(k != 90)&&(k != 100)&&(k != 101)){
            if (hero1[j].pred > 0){
                cout << "*Тайное заклинание*" << endl;
                if (zvyk == 1) Beep(400,300);
                if (zvyk == 1) Beep(600,200);
                hero1[j].hpm--;
                if (hero1[j].hp > hero1[j].hpm) hero1[j].hp = hero1[j].hpm;
                hero1[j].atc1++;
                hero1[j].atc12++;
                hero1[j].pred--;
                cout << "Вы получили -1 к максимальному здоровью" << endl;
                cout << "Вы получили 1 ко всем характеристикам слабого оружия" << endl;
            }
            else{
                if (zvyk == 1) Beep(500, 500);
               cout << "У вас кончились очки способности!" << endl;
               goto zan;
            }}
        else{
            if (zvyk == 1) Beep(500, 500);
            cout << "В комнате с БОССОМ нельзя использовать способность!" << endl;
               goto zan;
        }}
        else if (j == 24){
        if ((k != 10)&&(k != 20)&&(k != 30)&&(k != 40)&&(k != 50)&&(k != 60)&&(k != 70)&&(k != 80)&&(k != 90)&&(k != 100)&&(k != 101)){
            if (hero1[j].pred > 0){
                cout << "*Некротическое восстановление*" << endl;
                if (zvyk == 1) Beep(400,300);
                if (zvyk == 1) Beep(600,200);
                hero1[j].hpm++;
                hero1[j].exp++;
                cout << "Вы получили 1 к максимальному здоровью" << endl;
                cout << "Вы получили 1 к опыту" << endl;
                hero1[j].pred--;
            }
            else{
                if (zvyk == 1) Beep(500, 500);
               cout << "У вас кончились очки способности!" << endl;
               goto zan;
            }}
        else{
            if (zvyk == 1) Beep(500, 500);
            cout << "В комнате с БОССОМ нельзя использовать способность!" << endl;
               goto zan;
        }}
        else if (j == 25){
        if ((k != 10)&&(k != 20)&&(k != 30)&&(k != 40)&&(k != 50)&&(k != 60)&&(k != 70)&&(k != 80)&&(k != 90)&&(k != 100)&&(k != 101)){
            if (hero1[j].pred > 0){
                cout << "*Активация случайной программы*" << endl;
                if (zvyk == 1) Beep(400,300);
                if (zvyk == 1) Beep(600,200);
                cout << "Идёт выбор случайной программы ";
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
                cout << "Выбор завершён" << endl;
                prog = (rand()%(15 - 0)) + 0;
                if (prog == 0){
                cout << "Запущена программа \"Восстановление здоровья v 2.0\"" << endl;
                hero1[j].hp = hero1[j].hpm;
                if (hero1[j].hp > hero1[j].hpm) hero1[j].hp = hero1[j].hpm;
                cout << "Идёт выполнение программы ";
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
                cout << "Выполнение завершено" << endl;
                cout << "Вы полностью восстановили здоровье" << endl;
                }
                else if (prog == 1){
                cout << "Запущена программа \"Восстановление здоровья\"" << endl;
                x = (rand()%(6 - 1)) + 1;
                hero1[j].hp = hero1[j].hpm;
                if (hero1[j].hp > hero1[j].hpm) hero1[j].hp = hero1[j].hpm;
                cout << "Идёт выполнение программы ";
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
                cout << "Выполнение завершено" << endl;
                cout << "Вы восстановили " << x << " здоровья" << endl;
                }
                else if (prog == 2){
                cout << "Запущена программа \"Понижение здоровья\"" << endl;
                x = (rand()%(6 - 1)) + 1;
                hero1[j].hp = hero1[j].hp - x;
                if (hero1[j].hp < 0) hero1[j].hp = 0;
                cout << "Идёт выполнение программы ";
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
                cout << "Выполнение завершено" << endl;
                cout << "Вы понизили своё здоровье на " << x << " единиц" << endl;
                }
                else if (prog == 3){
                cout << "Запущена программа \"Понижение максимального здоровья\"" << endl;
                x = (rand()%(3 - 1)) + 1;
                hero1[j].hpm = hero1[j].hpm - x;
                if (hero1[j].hpm < 0) hero1[j].hpm = 0;
                if (hero1[j].hp > hero1[j].hpm) hero1[j].hp = hero1[j].hpm;
                if (hero1[j].hp < 0) hero1[j].hp = 0;
                cout << "Идёт выполнение программы ";
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
                cout << "Выполнение завершено" << endl;
                cout << "Вы понизили своё максимальное здоровье на " << x << " единиц" << endl;
                }
                else if (prog == 4){
                cout << "Запущена программа \"Бездействие системы\"" << endl;
                cout << "Идёт выполнение программы ";
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
                cout << "Выполнение завершено" << endl;
                cout << "Ничего не происходит" << endl;
                }
                else if (prog == 5){
                cout << "Запущена программа \"Повышение максимального здоровья\"" << endl;
                x = (rand()%(3 - 1)) + 1;
                hero1[j].hpm = hero1[j].hpm + x;
                cout << "Идёт выполнение программы ";
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
                cout << "Выполнение завершено" << endl;
                cout << "Вы повысили своё максимальное здоровье на " << x << " единиц" << endl;
                }
                else if (prog == 6){
                cout << "Запущена программа \"Повышение максимального здоровья v 2.0\"" << endl;
                x = (rand()%(3 - 1)) + 1;
                hero1[j].hpm = hero1[j].hpm + x;
                hero1[j].hp = hero1[j].hpm;
                cout << "Идёт выполнение программы ";
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
                cout << "Выполнение завершено" << endl;
                cout << "Вы повысили своё максимальное здоровье на " << x << " единиц и полностью восстановили его" << endl;
                }
                else if (prog == 7){
                cout << "Запущена программа \"Повышение максимальной атаки слабого оружия\"" << endl;
                hero1[j].atc12++;
                cout << "Идёт выполнение программы ";
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
                cout << "Выполнение завершено" << endl;
                cout << "Вы повысили максимальную атаку слабого оружия на 1" << endl;
                }
                else if (prog == 8){
                cout << "Запущена программа \"Получние 2 очков способности\"" << endl;
                hero1[j].pred++;
                hero1[j].pred++;
                cout << "Идёт выполнение программы ";
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
                cout << "Выполнение завершено" << endl;
                cout << "Вы получили 2 очка способности" << endl;
                }
                else if (prog == 9){
                cout << "Запущена программа \"Получние кода шкатулки\"" << endl;
                cout << "Идёт выполнение программы ";
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
                cout << "Выполнение завершено" << endl;
                cout << "Текущий код шкатулки: " << kod << endl;
                }
                else if (prog == 10){
                cout << "Запущена программа \"Полуff@# @#^*#\"" << endl;
                cout << "Идёт выполнение программы ";
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
                cout << "Выполнение прервано" << endl;
                }
                else if (prog == 11){
                cout << "Запущена программа \"Получение информации о существе\"" << endl;
                cout << "Идёт выполнение программы ";
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
                cout << "Выполнение завершено" << endl;
                cout << "Полученные данные: " << endl;
                forstat(enemy1[i], i);
                }
                else if (prog == 12){
                cout << "Запущена программа \"Понижение минимальной атаки слабого оружия\"" << endl;
                hero1[j].atc1--;
                cout << "Идёт выполнение программы ";
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
                cout << "Выполнение завершено" << endl;
                cout << "Вы понизили минимальную атаку слабого оружия на 1" << endl;
                }
                else if (prog == 13){
                cout << "Запущена программа \"Получение опыта\"" << endl;
                x = (rand()%(9 - 2)) + 2;
                hero1[j].exp = hero1[j].exp + x;
                cout << "Идёт выполнение программы ";
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
                cout << "Выполнение завершено" << endl;
                cout << "Вы получили " << x << " к опыту" << endl;
                }
                else if (prog == 14){
                cout << "Запущена программа \"Игра с самим собой в крестики-нолики\"" << endl;
                cout << "Идёт выполнение программы ";
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
                cout << "Выполнение завершено" << endl;
                cout << "Вы победили" << endl;
                }
                hero1[j].pred--;
            }
            else{
                if (zvyk == 1) Beep(500, 500);
               cout << "У вас кончились очки способности!" << endl;
               goto zan;
            }}
        else{
            if (zvyk == 1) Beep(500, 500);
            cout << "В комнате с БОССОМ нельзя использовать способность!" << endl;
               goto zan;
        }}
        else goto zan;
    }
    if (rhave == 1){
        hero1[j].hp++;
        if (zvyk == 1) Beep(200, 500);
        cout << "*Ржавый робот-помощник лечит вас на 1 здоровья*" << endl;
        enemy1[i].hp--;
        cout << "*Ржавый робот-помощник атакует врага на 1 урона*" << endl;
    }
    if (estrel != 0){
        if (estrel == 1){
            hero1[j].hp++;
            if (hero1[j].hp > hero1[j].hpm) hero1[j].hp = hero1[j].hpm;
            if (zvyk == 1) Beep(200, 500);
            cout << "*Зелёный светящийся кристалл восстанавливает вам 1 здоровья*" << endl;
        }
        if (estrel == 2){
            hero1[j].hp--;
            if (hero1[j].hp < 0) hero1[j].hp = 0;
            if (zvyk == 1) Beep(200, 500);
            cout << "*Тёмный камень забирает у вас 1 здоровья*" << endl;
        }
        if (estrel == 3){
            enemy1[i].hp--;
            if (enemy1[i].hp < 0) enemy1[i].hp = 0;
            if (zvyk == 1) Beep(200, 500);
            cout << "*Рукоять древнего меча наносит врагу 1 урона*" << endl;
        }
        if (estrel == 4){
            enemy1[i].hp = enemy1[i].hp - 2;
            if (enemy1[i].hp < 0) enemy1[i].hp = 0;
            if (zvyk == 1) Beep(200, 500);
            cout << "*Красный камень с иероглифами наносит врагу 2 урона*" << endl;
        }
        if (estrel == 5){
            hero1[j].hp = hero1[j].hp + 2;
            if (hero1[j].hp > hero1[j].hpm) hero1[j].hp = hero1[j].hpm;
            if (zvyk == 1) Beep(200, 500);
            cout << "*Амулет Разиды восстанавливает вам 2 здоровья*" << endl;
        }
        if (estrel == 6){
            hero1[j].hp = hero1[j].hp - 2;
            if (hero1[j].hp < 0) hero1[j].hp = 0;
            if (zvyk == 1) Beep(200, 500);
            cout << "*Перстень с агатом забирает у вас 2 здоровья*" << endl;
        }
        if (estrel == 7){
            hero1[j].atc1--;
            if (zvyk == 1) Beep(200, 500);
            cout << "*Каменные ножны понижают вашу минимальную слабую атаку на 1*" << endl;
        }
        if (estrel == 8){
            hero1[j].atc2--;
            if (zvyk == 1) Beep(200, 500);
            cout << "*Шар застывшей лав понижает вашу минимальную сильную атаку на 1*" << endl;
        }
        if (estrel == 10){
                if (zvyk == 1) Beep(200, 500);
            cout << "*Золотое зеркальце показывает вам код: " << kod << "*" << endl;
        }
        if (estrel == 11){
            hero1[j].atc1--;
            hero1[j].hp++;
            if (hero1[j].hp > hero1[j].hpm) hero1[j].hp = hero1[j].hpm;
        if (zvyk == 1) Beep(200, 500);
            cout << "*Нефритовый кубик понижает вашу минимальную слабую атаку на 1 и восстанавливает 1 здоровья*" << endl;
        }
        if (estrel == 12){
                if (zvyk == 1) Beep(200, 500);
            cout << "*Шлем Озирия узнаёт информацию о нападающем существе:" << endl;
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
        cout << "*Вы изнемогаете от Кровотечения*" << endl;
        hero1[j].hp--;
    }
    if (yad == 1){
          if (zvyk == 1) Beep(900, 100);
          if (zvyk == 1) Beep(800, 200);
          if (zvyk == 1) Beep(700, 300);
        cout << "*Вы изнемогаете от Яда*" << endl;
        hero1[j].hp = hero1[j].hp - 2;
    }
    if (bol == 1){
          if (zvyk == 1) Beep(900, 100);
          if (zvyk == 1) Beep(800, 200);
          if (zvyk == 1) Beep(700, 300);
        cout << "*Вы изнемогаете от Болезни*" << endl;
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
        cout << "Вы восстали!" << endl;
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
    cout << enemy1[i].name << " атакует" << endl;
    cout << " |------------------------------------------------------------------------------------------------------------------------------|" << endl;
    Sleep(1000);
    gen = (rand()%(3 - 1)) + 1;
    if (gen == 1){
            if (zvyk == 1) Beep(700, 200);
            if (zvyk == 1) Beep(500, 400);
        if (i==0) cout << "*Удар хвостом*" << endl;
        if (i==1) cout << "*Удар кулаком*" << endl;
        if (i==2) cout << "*Удар лапой*" << endl;
        if (i==3) cout << "*Удар лапой с когтями*" << endl;
        if (i==4) cout << "*Укус жвалами*" << endl;
        if (i==5) cout << "*Укус зубами*" << endl;
        if (i==6) cout << "*Удар кинжалом*" << endl;
        if (i==7) cout << "*Слабое лечение*" << endl;
        if (i==8) cout << "*Удар гаечным ключом*" << endl;
        if (i==9) cout << "*Выстрел из пистолета*" << endl;
        if (i==10) cout << "*Волшебный огонёк*" << endl;
        if (i==11) cout << "*Дыхание смерти*" << endl;
        if (i==14) cout << "*Слабый удар*" << endl;
        if (i==15) cout << "*Несколько плевков ядовитой слизью*" << endl;
        if (i==16) cout << "*Укол шипом*" << endl;
        if (i==17) cout << "*Бездействие*" << endl;
        if (i==19) cout << "*Попадание в лёгкую ловушку*" << endl;
        if (i==20) cout << "*Удар веткой*" << endl;
        if (i==21) cout << "*Удар хвостом*" << endl;
        if (i==22) cout << "*Удар тесаком*" << endl;
        if (i==23) cout << "*Удар плетью*" << endl;
        if (i==24) cout << "*Удар огромной лапой*" << endl;
        if (i==25) cout << "*Слабый ожёг кислотой*" << endl;
        if (i==26) cout << "*Слабый забор жизни*" << endl;
        if (i==27) cout << "*Высасывание здоровья*" << endl;
        if (i==28) cout << "*Слабый забор здоровья*" << endl;
        if (i==29) cout << "*Удар крюком*" << endl;
        if (i==30) cout << "*Удар копьём*" << endl;
        if (i==31) cout << "*Удар серпом*" << endl;
        if (i==33) cout << "*Бездействие*" << endl;
        if (i==35) cout << "*Бросок тухлым помидором*" << endl;
        if (i==39) cout << "*Удар металлической клешнёй*" << endl;
        if (i==40) cout << "*Удар металлической большой клешнёй*" << endl;
        if (i==41) cout << "*Удар током*" << endl;
        if (i==42) cout << "*Попытка сотворить слабое заклинание*" << endl;
        if (i==43) cout << "*Укусы муравьёв*" << endl;
        if (i==44) cout << "*Попытка наехать на ногу*" << endl;
        if (i==45) cout << "*Удар электрошокером*" << endl;
        if (i==46) cout << "*Удар метёлкой*" << endl;
        if (i==47) cout << "*Удар металлической ржавой большой клешнёй*" << endl;
        if (i==48) cout << "*Удар разлагающимся кулаком*" << endl;
        if (i==49) cout << "*Удар кастетом*" << endl;
        if (i==50) cout << "*Взрыв небольшой брошенной банки с гвоздями*" << endl;
        if (i==51) cout << "*Несколько выстрелов из пулемёта*" << endl;
        if (i==52) cout << "*Несколько выстрелов из миниганов*" << endl;
        if (i==53) cout << "*Удар ледяным кулаком*" << endl;
        if (i==54) cout << "*Аккуратный удар мечом*" << endl;
        if (i==99) cout << "*Ожёг пламенем*" << endl;
        if (i==98) cout << "*Удар каменным кулаком*" << endl;
        if (i==97) cout << "*Волшебные стрелы*" << endl;
        if (i==96) cout << "*Атака пчёл*" << endl;
        if (i==95) cout << "*Обстрел иглами*" << endl;
        if (i==94) cout << "*\"Прости...\"*" << endl;
        if (i==93) cout << "*Непонятное движение*" << endl;
        if (i==92) cout << "*Громкий вопль*" << endl;
        if (i==91) cout << "*Злой шёпот*" << endl;
        if (i==90) cout << "*\"ТЫ УМРЁШЬ, " << hero1[j].name << "!\"*" << endl;
        if (i==89) cout << "[КОНЕЦ]" << endl;
        if (i==100) cout << "*Удар металлическим кулаком*" << endl;
        if (i==101) cout << "*Удар металлической дубинкой*" << endl;
        if (i==102) cout << "*Удар ржавым кулаком*" << endl;
        if (i==103) cout << "*Удар металлическим кулачком*" << endl;
        if (i==104) cout << "*Удар столовым ножом*" << endl;
        if (i==105) cout << "*Засасывание пыли*" << endl;
        if (i==106) cout << "*Удар садовыми ножницами*" << endl;
        if (i==107) cout << "*Удар лапкой с когтями*" << endl;
        if (i==108) cout << "*Удар щитом*" << endl;
        if (i==109) cout << "*Не играет музыку*" << endl;
        if (i==110) cout << "*Удар лопатой*" << endl;
        if (i==111) cout << "*Удар раздвижным ключом*" << endl;
        if (i==112) cout << "*Выстрел иглой*" << endl;
        if (i==113) cout << "*Удар катаной*" << endl;
        if (i==114) cout << "*Выстрел иглой*" << endl;
        if (i==150) cout << "*Удар щитом*" << endl;
        if (i==151) cout << "*Удар кулаком*" << endl;
        if (i==152) cout << "*Удар прикладом арбалета*" << endl;
        if (i==153) cout << "*Удар кулаком*" << endl;
        if (i==154) cout << "*Удар скальпелем*" << endl;
        if (i==155) cout << "*Удар волшебной палочкой*" << endl;
        if (i==156) cout << "*Удар шлемом*" << endl;
        if (i==157) cout << "*Удар двуручным мечом*" << endl;
        if (i==158) cout << "*Кусь*" << endl;
        if (i==159) cout << "*Удар кинжалом*" << endl;
        if (i==160) cout << "*Выстрел из пистолета*" << endl;
        if (i==200) cout << "*Удар кулаком*" << endl;
        if (i==300) cout << "*Удар рукой*" << endl;
        if (i==301) cout << "*Выстрел из пистолета*" << endl;
        if (i==302) cout << "*Агрессивная речь на японском*" << endl;
        if (i==303) cout << "*Плевок спорами*" << endl;
        if (i==304) cout << "*Плевок спорами*" << endl;
        if (i==305) cout << "*Выстрел из пистолета*" << endl;
        if (i==306) cout << "*Удар катаной*" << endl;
        if (i==307) cout << "*Удар тентаклей*" << endl;
        if (i==308) cout << "*Плевок спорами*" << endl;
        if (i==309) cout << "*Слабая атака колдовством*" << endl;
        if (i==310) cout << "*Удар молнией*" << endl;
        if (i==311) cout << "*Удар лапой*" << endl;
        if (i==312) cout << "*Удар головой*" << endl;
        if (i==313) cout << "*Удар лапой с когтями*" << endl;
        if (i==314) cout << "*Бездействие*" << endl;
        if (i==315) cout << "*Попадание в капкан*" << endl;
        if (i==316) cout << "*Удар слабым кулаком*" << endl;
        if (i==317) cout << "*Использование слабого заклинания на вас*" << endl;
        if (i==318) cout << "*Бездействие*" << endl;
        if (i==319) cout << "*Продумывание плана*" << endl;
        if (i==320) cout << "*Слабый удар щитом*" << endl;
        if (i==321) cout << "*Бездействие*" << endl;
        if (i==322) cout << "*Удар мечом*" << endl;
        if (i==323) cout << "*Удар ножом-штыком*" << endl;
        if (i==324) cout << "*Удар кулаком*" << endl;
        if (i==325) cout << "*Перекус*" << endl;
        if (i==326) cout << "*Удар с Фореста*" << endl;
        if (i==327) cout << "*Удар кинжалом*" << endl;
        if (i==328) cout << "*Укол ручкой*" << endl;
        if (i==329) cout << "*Жёлтое мерцание*" << endl;
        if ((i==330)||(i==331)||(i==332)||(i==333)||(i==334)) cout << "*Удар нефритовым кулаком*" << endl;
        if (i==335) cout << "*Бездействие*" << endl;
        if (i==336) cout << "*Плевок глиной*" << endl;
        if (i==337) cout << "*Удар глиняным кулаком*" << endl;
        if (i==338) cout << "*Укол глиняным шипом*" << endl;
        if (i==339) cout << "*Бездействие*" << endl;
        if (i==340) cout << "*Укус*" << endl;
        if (i==341) cout << "*Удар кортиком*" << endl;
        if (i==342) cout << "*Удар кулаком в перчатке*" << endl;
        if (i==343) cout << "*Сон*" << endl;
        if (i==344) cout << "*Выстрел из пистолета*" << endl;
        if (i==345) cout << "*Бездействие*" << endl;
        if (i==346) cout << "*Выстрел из пистолета*" << endl;
        if (i==347) cout << "*Слабое ранение об обломок*" << endl;
        if (i==348) cout << "*Бросок кинжалом*" << endl;
        if (i==349) cout << "*Удар перчаткой*" << endl;
        if (i==350) cout << "*Слабый укус*" << endl;
        if (i==351) cout << "*Удар хвостом*" << endl;
        if (i==352) cout << "*Бездействие*" << endl;
        if (i==353) cout << "*Удар когтями*" << endl;
        if (i==354) cout << "*Удар алмазным кулачком*" << endl;
        if (i==355) cout << "*Слабый порез острым алмазом*" << endl;
        if (i==356) cout << "*Слабые укусы мышей*" << endl;
        if (i==357) cout << "*Удар когтистым кулаком*" << endl;
        if (i==358) cout << "*Бездействие*" << endl;
        if (i==359) cout << "*Укус*" << endl;
        if ((i==360)||(i==361)||(i==362)||(i==363)||(i==366)||(i==368)) cout << "*Бездействие*" << endl;
        if (i==364) cout << "*Слабый укол деревянным шипом*" << endl;
        if (i==365) cout << "*Удар деревянным кулаком*" << endl;
        if (i==367) cout << "*Удар костяным кулаком*" << endl;
        if (i==369) cout << "*Удар деревянным кулаком со смоляными шипами*" << endl;
        if (i==370) cout << "*Удар тёмной катаной*" << endl;
        if (i==371) cout << "*Удар тентаклей*" << endl;
        if (i==372) cout << "*Поглощение тёмной энергии*" << endl;
        if (i==373) cout << "*Тьма поглощает вас*" << endl;
        if (i==374) cout << "*Удар щупальцем*" << endl;
        if (i==375) cout << "*Удар левым кулаком*" << endl;
        if (i==376) cout << "*Восстановление*" << endl;
        if (i==377) cout << "*Бездействие*" << endl;
        if (i==378) cout << "*Использование тёмного заклинания на вас*" << endl;
        if (i==379) cout << "*Удар рукой с когтями*" << endl;
        if (i==380) cout << "*Ожёг*" << endl;
        if (i==381) cout << "*Слабый ожёг*" << endl;
        if (i==382) cout << "*Струя пара*" << endl;
        if (i==383) cout << "*Слабый ожёг о лаву*" << endl;
        if (i==384) cout << "*Удар огненным клинком*" << endl;
        if (i==385) cout << "*Бросок маленьким огненным шаром*" << endl;
        if (i==386) cout << "*Слабый ожёг о горящее бревно*" << endl;
        if (i==387) cout << "*Опаление огнём*" << endl;
        if (i==388) cout << "*Удар горящим шомполом*" << endl;
        if (i==389) cout << "*Несколько плевков кусками подстывшей лавы*" << endl;
        if (i==390) cout << "*Удар деревянным копьём*" << endl;
        if (i==391) cout << "*Несколько выстрелов из миниганов*" << endl;
        if (i==392) cout << "*0000*" << endl;
        if (i==393) cout << "*Удар лапой*" << endl;
        if (i==394) cout << "*Бездействие*" << endl;
        if (i==395) cout << "*Кусь*" << endl;
        if (i==396) cout << "*Лёгкий удар титановым кулаком*" << endl;
        if (i==397) cout << "*Слабая атака магией крови*" << endl;
        if (i==398) cout << "*Ожёг горячим синтолом*" << endl;
        if (i==399) cout << "*Удар металлической рукой*" << endl;
        if (i==411) cout << "*Плевки расплавленным свинцом*" << endl;
        if (i==410) cout << "*Удар перебинтованным кулаком*" << endl;
        if (i==409) cout << "*Выстрел из особого лука*" << endl;
        if (i==408) cout << "*Деморализующий взгляд*" << endl;
        if (i==407) cout << "*Бросок глиной*" << endl;
        if (i==406) cout << "*Бросок гранаты*" << endl;
        if (i==405) cout << "*Кир бросает в вас большим алмазным шипом*" << endl;
        if (i==404) cout << "*Бездействие*" << endl;
        if (i==403) cout << "*Удар волшебной легендарной катаной*" << endl;
        if (i==402) cout << "*Бросок большим огненным шаром*" << endl;
        if (i==401) cout << "*Расстрел из магического минигана*" << endl;
        if (i==88) cout << "*Удар с разбега*" << endl;
        if (i==87) cout << "*Удар молотом*" << endl;
        if (i==12){ cout << "*Слабый забор силы*" << endl;
        if (zvyk ==1){
          Beep (800,800);
          Beep (600,800);
        }
            if (hero1[j].atc1>0) hero1[j].atc1--;
            if (hero1[j].atc12>0) hero1[j].atc12--;
        }
        if (i==13) cout << "*Удар бивнями*" << endl;
        if (i==18){ cout << "*Слабая порча*" << endl;
        if (hero1[j].atc1>0) hero1[j].atc1--;
        if (hero1[j].atc12>0) hero1[j].atc12--;
        if (hero1[j].atc2>0) hero1[j].atc2--;
        if (hero1[j].atc22>0) hero1[j].atc22--;
        if (hero1[j].heal>0) hero1[j].heal--;
        if (hero1[j].heal2>0) hero1[j].heal2--;
        }
        x = (rand()%(enemy1[i].atc12+1 - enemy1[i].atc1)) + enemy1[i].atc1;
        if ((i==32)&&(x > 0)){
                cout << "*Ядовитые укусы*" << endl;
                if (zvyk ==1){
                  Beep (800,800);
                  Beep (600,800);
                }
                cout << "*В вашу кровь попадает яд!*" << endl;
                yad = 1;
        }
        if ((i==34)&&(x > 0)){
                cout << "*Заражение*" << endl;
                if (zvyk ==1){
                  Beep (800,800);
                  Beep (600,800);
                }
                cout << "*Вы заражаетесь и Болеете*" << endl;
                bol = 1;
        }
        if ((i==36)&&(x > 0)){
                cout << "*Укол левой иглой для инъекций*" << endl;
                if (zvyk ==1){
                  Beep (800,800);
                  Beep (600,800);
                }
                cout << "*Вы истекаете кровью!*" << endl;
                krov = 1;
        }
        if ((i==37)&&(x > 0)){
                cout << "*Уколы обеими иглами для инъекций*" << endl;
                if (zvyk ==1){
                  Beep (800,800);
                  Beep (600,800);
                }
                cout << "*Вы истекаете кровью!*" << endl;
                cout << "*В вашу кровь попадает яд!*" << endl;
                krov = 1;
                yad = 1;
        }
        if ((i==38)&&(x > 0)){
                cout << "*Слабый укол жалом*" << endl;
                cout << "*Вы истекаете кровью!*" << endl;
                cout << "*В вашу кровь попадает яд!*" << endl;
                if (zvyk ==1){
                  Beep (800,800);
                  Beep (600,800);
                }
                cout << "*Вы заражаетесь и Болеете*" << endl;
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
        if (x>0) cout << "Вам нанесли " << x << " урона" << endl;
        else if (x == 0) cout << "Атака противника не удалась" << endl;
        else cout << "Вам вылечили " << x*-1 << " здоровья" << endl;
    }
    if (gen == 2){
            if (zvyk == 1) Beep(400, 200);
            if (zvyk == 1) Beep(200, 400);
        if (i==0) cout << "*Укус*" << endl;
        if (i==1) cout << "*Удар камнем*" << endl;
        if (i==2) cout << "*Сильный укус*" << endl;
        if (i==3) cout << "*Удар двумя лапами с когтями*" << endl;
        if (i==4) cout << "*Плевок едкой паутиной*" << endl;
        if (i==6) cout << "*Удар мечом*" << endl;
        if (i==7) cout << "*Лечение*" << endl;
        if (i==8) cout << "*Удар киркой*" << endl;
        if (i==9) cout << "*Выстрел из двустволки*" << endl;
        if (i==10) cout << "*Волшебное сияние*" << endl;
        if (i==11) cout << "*Высасывание жизни*" << endl;
        if (i==14) cout << "*Сильный удар*" << endl;
        if (i==15) cout << "*Много плевков ядовитой слизью*" << endl;
        if (i==17) cout << "*Затяжное бездействие*" << endl;
        if (i==19) cout << "*Попадание в тяжёлую ловушку*" << endl;
        if (i==20) cout << "*Удар ветвями*" << endl;
        if (i==21) cout << "*Попытка укусить*" << endl;
        if (i==22) cout << "*Удар двумя тесаками*" << endl;
        if (i==23) cout << "*Удар стальной дубинкой*" << endl;
        if (i==24) cout << "*Огненное дыхание*" << endl;
        if (i==25) cout << "*Сильный ожёг кислотой*" << endl;
        if (i==26) cout << "*Мощный забор жизни*" << endl;
        if (i==27) cout << "*Высасывание души*" << endl;
        if (i==28) cout << "*Мощный забор здоровья*" << endl;
        if (i==29) cout << "*Удар саблей*" << endl;
        if (i==35) cout << "*Удар отломанной ножкой от стула*" << endl;
        if (i==39) cout << "*Выстрел из руки-пистолета*" << endl;
        if (i==40) cout << "*Выстрел из руки-ружья*" << endl;
        if (i==41) cout << "*Мощный удар током*" << endl;
        if (i==42) cout << "*Слабое заклинание*" << endl;
        if (i==43) cout << "*Сильные укусы муравьёв*" << endl;
        if (i==44) cout << "*Попытка удариться о ногу*" << endl;
        if (i==46) cout << "*Удар метлой*" << endl;
        if (i==47) cout << "*Выстрел из ржавой руки-ружья*" << endl;
        if (i==48) cout << "*Слабый удар камнем*" << endl;
        if (i==49) cout << "*Удар цепью*" << endl;
        if (i==50) cout << "*Взрыв большой брошенной банки с гвоздями*" << endl;
        if (i==51) cout << "*Много выстрелов из пулемёта*" << endl;
        if (i==52) cout << "*Много выстрелов из миниганов*" << endl;
        if (i==33) cout << "*Затяжное бездействие*" << endl;
        if (i==53) cout << "*Удары ледяными кулаками*" << endl;
        if (i==54) cout << "*Удар мечом*" << endl;
        if (i==99) cout << "*Ожёг огненным шаром*" << endl;
        if (i==98) cout << "*Бросок камня*" << endl;
        if (i==97) cout << "*Удар посохом боли*" << endl;
        if (i==96) cout << "*Множественные атаки пчёл*" << endl;
        if (i==94) cout << "*\"Извини...\"*" << endl;
        if (i==93) cout << "*Плевок жижей*" << endl;
        if (i==92) cout << "*Очень громкий вопль*" << endl;
        if (i==91) cout << "*Проклятие*" << endl;
        if (i==90) cout << "*\"ТЕБЕ НЕ ПОБЕДИТЬ МЕНЯ, " << hero1[j].name << "!\"*" << endl;
        if (i==100) cout << "*Разряды тока*" << endl;
        if (i==101) cout << "*Удары металлической дубинкой*" << endl;
        if (i==102) cout << "*Удар ржавым куском древка со знаменем*" << endl;
        if (i==103) cout << "*Удар металлическими кулачками*" << endl;
        if (i==104) cout << "*Удар тесаком*" << endl;
        if (i==105) cout << "*Настойчивое засасывание пыли*" << endl;
        if (i==108) cout << "*Удар мечом*" << endl;
        if (i==109) cout << "*Играет музыку*" << endl;
        if (i==110) cout << "*Удар буром-рукой*" << endl;
        if (i==113) cout << "*Удар катанами*" << endl;
        if (i==114) cout << "*Мощный выстрел иглой*" << endl;
        if (i==150) cout << "*Удар мечом*" << endl;
        if (i==151) cout << "*Удар граблями*" << endl;
        if (i==152) cout << "*Выстрел из арбалета*" << endl;
        if (i==153) cout << "*Удар вилами*" << endl;
        if (i==154) cout << "*Удар медицинской пилой*" << endl;
        if (i==155) cout << "*Сотворение и использование заклинание на вас*" << endl;
        if (i==156) cout << "*Удар булавой*" << endl;
        if (i==157) cout << "*Сильный удар двуручным мечом*" << endl;
        if (i==158) cout << "*Сильный кусь*" << endl;
        if (i==159) cout << "*Удар большим мечом*" << endl;
        if (i==160) cout << "*Удар саблей*" << endl;
        if (i==200) cout << "*Удар тростью*" << endl;
        if (i==300) cout << "*Удары руками*" << endl;
        if (i==301) cout << "*Выстрел из автомата*" << endl;
        if (i==302) cout << "*Удар с ноги*" << endl;
        if (i==303) cout << "*Удар заострённой палкой*" << endl;
        if (i==304) cout << "*Плевок спорами*" << endl;
        if (i==305) cout << "*Выстрел из автомата*" << endl;
        if (i==306) cout << "*Удар катанами*" << endl;
        if (i==307) cout << "*Удар двумя тентаклями*" << endl;
        if (i==308) cout << "*Выстрел из лука*" << endl;
        if (i==309) cout << "*Сильная атака колдовством*" << endl;
        if (i==310) cout << "*Удары молниями*" << endl;
        if (i==311) cout << "*Укус*" << endl;
        if (i==312) cout << "*Удар копытом*" << endl;
        if (i==313) cout << "*Удар двумя лапами с когтями*" << endl;
        if (i==314) cout << "*Затяжное бездействие*" << endl;
        if (i==315) cout << "*Попадание в капкан*" << endl;
        if (i==316) cout << "*Удар веслом*" << endl;
        if (i==317) cout << "*Использование заклинания на вас*" << endl;
        if (i==318) cout << "*Затяжное бездействие*" << endl;
        if (i==319) cout << "*Удар двуручным мечом*" << endl;
        if (i==320) cout << "*Слабый удар мечом*" << endl;
        if (i==321) cout << "*Затяжное бездействие*" << endl;
        if (i==322) cout << "*Удар мечом*" << endl;
        if (i==323) cout << "*Выстрел из винтовки*" << endl;
        if (i==324) cout << "*Сильный удар кулаком*" << endl;
        if (i==325) cout << "*Сытный перекус*" << endl;
        if (i==326) cout << "*Мощный удар с Фореста*" << endl;
        if (i==327) cout << "*Выстрел из лука*" << endl;
        if (i==328) cout << "*Больный укол ручкой*" << endl;
        if (i==329) cout << "*Затяжное жёлтое мерцание*" << endl;
        if ((i==330)||(i==331)||(i==332)||(i==333)||(i==334)) cout << "*Удар нефритовым кулаком*" << endl;
        if (i==335) cout << "*Затяжное бездействие*" << endl;
        if (i==336) cout << "*Сильный плевок глиной*" << endl;
        if (i==337) cout << "*Сильный удар глиняным кулаком*" << endl;
        if (i==338) cout << "*Сильный укол глиняным шипом*" << endl;
        if (i==339) cout << "*Затяжное бездействие*" << endl;
        if (i==340) cout << "*Сильный укус*" << endl;
        if (i==341) cout << "*Выстрелы из автомата*" << endl;
        if (i==342) cout << "*Удар электрогитарой*" << endl;
        if (i==343) cout << "*Невозмутимый сон*" << endl;
        if (i==344) cout << "*Выстрел из автомата*" << endl;
        if (i==345) cout << "*Затяжное бездействие*" << endl;
        if (i==346) cout << "*Выстрел из автомата*" << endl;
        if (i==347) cout << "*Ранение об обломок*" << endl;
        if (i==348) cout << "*Выстрелы из ПП Томпсона" << endl;
        if (i==349) cout << "*Удар шлемом*" << endl;
        if (i==350) cout << "*Сильный укус*" << endl;
        if (i==351) cout << "*Укус*" << endl;
        if (i==352) cout << "*Затяжное бездействие*" << endl;
        if (i==353) cout << "*Удары когтями*" << endl;
        if (i==354) cout << "*Удар большим алмазным шипом*" << endl;
        if (i==355) cout << "*Порез острым алмазом*" << endl;
        if (i==356) cout << "*Укусы мышей*" << endl;
        if (i==357) cout << "*Удар алмазным большим шипом*" << endl;
        if (i==358) cout << "*Затяжное бездействие*" << endl;
        if (i==359) cout << "*Сильный укус*" << endl;
        if ((i==360)||(i==361)||(i==362)||(i==363)||(i==366)||(i==368)) cout << "*Затяжное бездействие*" << endl;
        if (i==364) cout << "*Укол деревянным шипом*" << endl;
        if (i==365) cout << "*Удар дубиной*" << endl;
        if (i==367) cout << "*Удар костяным мечом*" << endl;
        if (i==369) cout << "*Удар большой дубиной со смоляными шипами*" << endl;
        if (i==370) cout << "*Удар тёмными катанами*" << endl;
        if (i==371) cout << "*Выстрел тёмным лучом из глаза*" << endl;
        if (i==372) cout << "*Поглощение тёмной энергии*" << endl;
        if (i==373) cout << "*Тьма поглощает вас*" << endl;
        if (i==374) cout << "*Удар двумя щупальцами*" << endl;
        if (i==375) cout << "*Удар правым кулаком*" << endl;
        if (i==376) cout << "*Хорошее восстановление*" << endl;
        if (i==377) cout << "*Затяжное бездействие*" << endl;
        if (i==378) cout << "*Использование сильного тёмного заклинания на вас*" << endl;
        if (i==379) cout << "*Удар хлыстом*" << endl;
        if (i==380) cout << "*Сильный ожёг*" << endl;
        if (i==381) cout << "*Ожёг*" << endl;
        if (i==382) cout << "*Струя огня*" << endl;
        if (i==383) cout << "*Ожёг о лаву*" << endl;
        if (i==384) cout << "*Удар огненными клинками*" << endl;
        if (i==385) cout << "*Бросок огненным шаром*" << endl;
        if (i==386) cout << "*Ожёг о горящее бревно*" << endl;
        if (i==387) cout << "*Сильное опаление огнём*" << endl;
        if (i==388) cout << "*Выстрел из магмовой пушки*" << endl;
        if (i==389) cout << "*Много плевков кусками подстывшей лавы*" << endl;
        if (i==390) cout << "*Сильный укус*" << endl;
        if (i==391) cout << "*Много выстрелов из миниганов*" << endl;
        if (i==392) cout << "*0001*" << endl;
        if (i==393) cout << "*Сильный удар лапой*" << endl;
        if (i==394) cout << "*Затяжное бездействие*" << endl;
        if (i==395) cout << "*Больный кусь*" << endl;
        if (i==396) cout << "*Удар титановым кулаком*" << endl;
        if (i==397) cout << "*Атака магией крови*" << endl;
        if (i==398) cout << "*Сильный ожёг горячим синтолом*" << endl;
        if (i==399) cout << "*Удар искуственной молнией*" << endl;
        if (i==411) cout << "*Плевки едким расплавленным свинцом*" << endl;
        if (i==410) cout << "*Удар Испепелителем*" << endl;
        if (i==409) cout << "*Появление коня и его набег на вас*" << endl;
        if (i==408) cout << "*Удар с Фореста*" << endl;
        if (i==407) cout << "*Удар от голема*" << endl;
        if (i==406) cout << "*Выстрел из рпг*" << endl;
        if (i==405) cout << "*Инз бьёт вас алмазным молотом*" << endl;
        if (i==404) cout << "*Затяжное бездействие*" << endl;
        if (i==403) cout << "*Удары волшебной легендарной катаной*" << endl;
        if (i==402) cout << "*Удар Огненным испепелителем*" << endl;
        if (i==401) cout << "*Изменение пространства*" << endl;
        if (i==89) cout << "[КОНЕЦ]" << endl;
        if (i==88) cout << "*Укус стальными зубами*" << endl;
        if (i==87) cout << "*Удар секирой*" << endl;
        if (i==12){ cout << "*Сильный забор силы*" << endl;
        if (zvyk ==1){
          Beep (800,800);
          Beep (600,800);
        }
            if (hero1[j].atc2>0) hero1[j].atc2--;
            if (hero1[j].atc22>0) hero1[j].atc22--;
        }
        if (i==13) cout << "*Удар бивнями с разбега*" << endl;
        if (i==18){ cout << "*Сильная порча*" << endl;
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
                cout << "*Выстрел ядовитой иглой*" << endl;
                if (zvyk ==1){
                    Beep (800,200);
                    Beep (800,200);
                }
                cout << "*В вашу кровь попадает яд!*" << endl;
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
            cout << enemy1[i].name << " починил себя и восстановил себе " << x << " здоровья" << endl;
        }
        if ((i==107)&&(x > 0)){
                cout << "*Удар лапкой с ядовитыми когтями*" << endl;
                if (zvyk ==1){
                    Beep (800,200);
                    Beep (800,200);
                }
                cout << "*В вашу кровь попадает яд!*" << endl;
                yad = 1;
        }
        if ((i==106)&&(x > 0)){
                cout << "*Глубокий порез садовыми ножницами*" << endl;
                if (zvyk ==1){
                    Beep (800,200);
                    Beep (800,200);
                }
                cout << "*Вы истекаете кровью!*" << endl;
                krov = 1;
        }
        if ((i==5)&&(x > 0)){
                cout << "*Ядовитый укус*" << endl;
                if (zvyk ==1){
                    Beep (800,200);
                    Beep (800,200);
                }
                cout << "*В вашу кровь попадает яд!*" << endl;
                yad = 1;
        }
        if ((i==16)&&(x > 0)){
            cout << "*Сильный укол шипом*" << endl;
            if (zvyk ==1){
                    Beep (800,200);
                    Beep (800,200);
                }
            cout << "*Вы истекаете кровью!*" << endl;
            krov = 1;
        }
        if ((i==30)&&(x > 0)){
            cout << "*Протыкание копьём*" << endl;
            if (zvyk ==1){
                    Beep (800,200);
                    Beep (800,200);
                }
            cout << "*Вы истекаете кровью!*" << endl;
            krov = 1;
        }
        if ((i==31)&&(x > 0)){
                cout << "*Распыление чумы*" << endl;
                if (zvyk ==1){
                    Beep (800,200);
                    Beep (800,200);
                }
                cout << "*Вы заражаетесь и Болеете*" << endl;
                bol = 1;
        }
        if ((i==32)&&(x > 0)){
                cout << "*Сильные ядовитые укусы*" << endl;
                if (zvyk ==1){
                    Beep (800,200);
                    Beep (800,200);
                }
                cout << "*В вашу кровь попадает яд!*" << endl;
                yad = 1;
        }
        if ((i==34)&&(x > 0)){
                cout << "*Заражение*" << endl;
                if (zvyk ==1){
                    Beep (800,200);
                    Beep (800,200);
                }
                cout << "*Вы заражаетесь и Болеете*" << endl;
                bol = 1;
        }
        if ((i==36)&&(x > 0)){
                cout << "*Укол правой иглой для инъекций*" << endl;
                if (zvyk ==1){
                    Beep (800,200);
                    Beep (800,200);
                }
                cout << "*В вашу кровь попадает яд!*" << endl;
                yad = 1;
        }
        if ((i==37)&&(x > 0)){
                cout << "*Сильные уколы обеими иглами для инъекций*" << endl;
                if (zvyk ==1){
                    Beep (800,200);
                    Beep (800,200);
                }
                cout << "*Вы истекаете кровью!*" << endl;
                cout << "*В вашу кровь попадает яд!*" << endl;
                krov = 1;
                yad = 1;
        }
        if ((i==38)&&(x > 0)){
                cout << "*Сильный укол жалом*" << endl;
                if (zvyk ==1){
                    Beep (800,200);
                    Beep (800,200);
                }
                cout << "*Вы истекаете кровью!*" << endl;
                cout << "*В вашу кровь попадает яд!*" << endl;
                cout << "*Вы заражаетесь и Болеете*" << endl;
                krov = 1;
                yad = 1;
                bol = 1;
        }
        if ((i==45)&&(x > 0)){
                cout << "*Порез бензопилой*" << endl;
                if (zvyk ==1){
                    Beep (800,200);
                    Beep (800,200);
                }
                cout << "*Вы истекаете кровью!*" << endl;
                krov = 1;
        }
        if ((i==95)&&(x > 0)){
                cout << "*Усиленный обстрел иглами*" << endl;
                if (zvyk ==1){
                    Beep (800,200);
                    Beep (800,200);
                }
                cout << "*Вы истекаете кровью!*" << endl;
                krov = 1;
        }
        if (panact == 1){
            x = 0;
            panact = 0;
        }
        if (panact2 == 1){
            x = 1;
        }
        if (x>0) cout << "Вам нанесли " << x << " урона" << endl;
        else if (x == 0) cout << "Атака противника не удалась" << endl;
        else cout << "Вам вылечили " << x*-1 << " здоровья" << endl;
        if (hero1[j].hp > hero1[j].hpm) hero1[j].hp = hero1[j].hpm;

    }
    if (i==26){
        enemy1[i].hp = enemy1[i].hp + x;
        if (enemy1[i].hp > enemy1[i].hpm) enemy1[i].hp = enemy1[i].hpm;
        if (zvyk ==1){
            Beep (150,500);
            Beep (600,200);
        }
        cout << enemy1[i].name << " восстановил себе " << x << " здоровья" << endl;
        }
    if (i==27){
        enemy1[i].hp = enemy1[i].hp + x;
        if (enemy1[i].hp > enemy1[i].hpm) enemy1[i].hp = enemy1[i].hpm;
        if (zvyk ==1){
            Beep (150,500);
            Beep (600,200);
        }
        cout << enemy1[i].name << " восстановил себе " << x << " здоровья" << endl;
        }
    if (i==28){
        enemy1[i].hp = enemy1[i].hp + x;
        if (enemy1[i].hp > enemy1[i].hpm) enemy1[i].hp = enemy1[i].hpm;
        if (zvyk ==1){
            Beep (150,500);
            Beep (600,200);
        }
        cout << enemy1[i].name << " восстановил себе " << x << " здоровья" << endl;
        }
    if (i==376){
        enemy1[i].hp = enemy1[i].hp + x;
        if (enemy1[i].hp > enemy1[i].hpm) enemy1[i].hp = enemy1[i].hpm;
        if (zvyk ==1){
            Beep (150,500);
            Beep (600,200);
        }
        cout << enemy1[i].name << " восстановил себе " << x << " здоровья" << endl;
    }
    if (i==396){
        enemy1[i].hp = enemy1[i].hp + x;
        if (enemy1[i].hp > enemy1[i].hpm) enemy1[i].hp = enemy1[i].hpm;
        if (zvyk ==1){
            Beep (150,500);
            Beep (600,200);
        }
        cout << enemy1[i].name << " восстановил себе " << x << " здоровья" << endl;
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
        cout << "Вы восстали!" << endl;
        Sleep(1000);
    }
    if (hero1[j].hp < 0) hero1[j].hp = 0;
    cout << " |------------------------------------------------------------------------------------------------------------------------------|" << endl;
    allstat(hero1[j], enemy1[i]);
    cout << " |------------------------------------------------------------------------------------------------------------------------------|" << endl;
    if ((i == 89)||(i == 400)||(i == 412)) {
            system("color 2A");
        if (i == 89) cout << "Вы прошли лёгкую игру, " << enemy1[i].name << " признаёт своё поражение!" << endl;
        else if (i == 412) cout << "Вы прошли игру, " << enemy1[i].name << " радуется освобождению замка от тьмы и благодарит вас, отдавая ключ от сокровищницы!" << endl;
        else if (i == 400) cout << "Вы прошли игру, " << enemy1[i].name << " поздравляет вас с победой!" << endl;
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
            cout << "Ваша статистика:" << endl;
            cout << "Герой: " << hero1[j].name << endl;
            lvlstat(hero1[j], nlvl);
            cout << "Комнат пройдено: " << k << endl;
            zan = "0";
            while ((zan != "1")&&(zan !="2")){
            cout << "Хотите начать заново?" << endl;
            cout << "1 - Да" << endl;
            cout << "2 - Нет" << endl;
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
            cout << "Вы проиграли. Вас победило существо " << enemy1[i].name << "!" << endl;
            system("color 4C");
            cout << "Игра окончена!" << endl;
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
            cout << "Ваша статистика:" << endl;
            cout << "Герой: " << hero1[j].name << endl;
            lvlstat(hero1[j], nlvl);
            cout << "Комнат пройдено: " << k-1 << endl;
            cout << " <------------------------------------------------------------------------------------------------------------------------------>" << endl;
            zan = "0";
            while ((zan != "1")&&(zan !="2")){
            cout << "Хотите начать заново?" << endl;
            cout << "1 - Да" << endl;
            cout << "2 - Нет" << endl;
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
    cout << "Вы победили существо " << enemy1[i].name << "!" << endl;
    panact2 = 0;
    x = (rand()%(4 - 1)) + 1;
    if (hero1[j].hp < hero1[j].hpm) hero1[j].hp = hero1[j].hp + x;
    else {
        if (hero1[j].hp >= hero1[j].hpm) hero1[j].hp = hero1[j].hpm;
        x = 0;
    }
    if (i == 95){
       rhave = 1;
       cout << "Вы чините Ржавого робота-помощника, и теперь он будет путешествовать с вами!" << endl;
    }
    if (x>0) cout << "Вы вылечили " << x << " здоровья" << endl;
    else if (x == 0) cout << "Попытка лечения не удалась" << endl;
    else cout << "Вы сделали только хуже и нанесли себе " << x*-1 << " урона" << endl;
    if (hero1[j].hp >= hero1[j].hpm) hero1[j].hp = hero1[j].hpm;
    if (krov == 1){
        krov = 0;
        cout << "Вы остановили Кровотечение" << endl;
    }
    if (yad == 1){
        yad = 0;
        cout << "Вы вылечились от Яда" << endl;
    }
    if (baff1 == 1){
        baff1 = 0;
    }
    cout << "Вы получили " << enemy1[i].exp << " опыта" << endl;
    hero1[j].exp = hero1[j].exp + enemy1[i].exp;
    if (hero1[j].exp >= nlvl){
            if (zvyk == 1){
                Beep (200,200);
                Beep (300,200);
                Beep (400,200);
                Beep (500,200);
                Beep (600,200);
            }
    cout << "Вы получили новый уровень!" << endl;
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
    cout << "Ваши характеристики улучшены!" << endl;
    cout << "Здоровье +1 = " << hero1[j].hpm << endl;
    cout << "Урон лёгкой атаки +1 = " << hero1[j].atc1 << "-" << hero1[j].atc12 << endl;
    cout << "Урон тяжёлой атаки +1 = " << hero1[j].atc2 << "-" << hero1[j].atc22 << endl;
    cout << "Максимальное восстановление здоровья +1 = " << hero1[j].heal << "-" << hero1[j].heal2 << endl;
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
    cout << "Вы получили новый уровень!" << endl;
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
    cout << "Ваши характеристики улучшены!" << endl;
    cout << "Здоровье +1 = " << hero1[j].hpm << endl;
    cout << "Урон лёгкой атаки +1 = " << hero1[j].atc1 << "-" << hero1[j].atc12 << endl;
    cout << "Урон тяжёлой атаки +1 = " << hero1[j].atc2 << "-" << hero1[j].atc22 << endl;
    cout << "Максимальное восстановление здоровья +1 = " << hero1[j].heal << "-" << hero1[j].heal2 << endl;
        }
    }
    cout << " \\------------------------------------------------------------------------------------------------------------------------------/" << endl;
    Sleep(1000);
    herostat(hero1[j]);
    lvlstat(hero1[j], nlvl);
    k++;
    cout << "Вы входите в следующую комнату (" << k << ")" << endl;
    if (zvyk == 1){
          Beep (200,400);
    }
    cout << " /------------------------------------------------------------------------------------------------------------------------------\\" << endl;
    Sleep(1000);
    goto boyo;
    return 0;
}
