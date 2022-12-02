#include<stdio.h>

struct t_time {
    int hora;
    int minuto;
    int segundo;
};

struct t_timetable {
    struct t_time time;
    char value[25];
};

int time_cmp(struct t_time h1, struct t_time h2) {
    if (h1.hora == h2.hora && h1.minuto == h2.minuto && h1.segundo == h2.segundo) return 0;
    else if (h1.hora > h2.hora) return 1; 
    else if (h1.hora == h2.hora && h1.minuto > h2.minuto) return 1;
    else if (h1.hora == h2.hora && h1.minuto == h2.minuto && h1.segundo > h2.segundo) return 1;
    else return -1;
};


int main() {

};