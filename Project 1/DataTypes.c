#include <stdio.h>

int main()
{
    int num_1, num_2;
    char ch_1, ch_2, ch_3;
    float fl_1, fl_2;
    double db_1, db_2;

    num_1 = 100;
    num_2 = 200;
    ch_1 = 't';
    ch_2 = 'h';
    ch_3 = 'e';
    fl_1 = 1.24;
    fl_2 = 2.35;
    db_1 = 1.23456789012;
    db_2 = 2.34567890123;

    printf("char\tch_1 = '%c'\n", ch_1);                //character
    printf("int\tnum_1 = %d\n", num_1);                 //integer
    printf("float\tfl_1 = %.2lf\n", fl_1);              //single precision decimal number
    printf("double\tdb_1 = %.11lf\n", db_1);            //double precision decimal number

    printf("num_1 + num_2 = %d\n", num_1 + num_2);
    printf("fl_1 * fl_2 = %.2lf\n", fl_1 * fl_2);
    printf("db_1 + db_2 = %.2lf\n", db_1 + db_2);
    printf("You are %c%c%c best teacher in the world!", ch_1, ch_2, ch_3);

    return 0;
}