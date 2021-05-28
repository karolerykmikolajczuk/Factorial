//
// Created by Karol on 28.05.2021.
//

#ifndef FACTORIAL_MULTIPLICATION_H
#define FACTORIAL_MULTIPLICATION_H
char* MultiplyingBigNumbers(unsigned long* number1, unsigned long* number2) {
    char* number_1 = ParseNumber(number1);
    char* number_2 = ParseNumber(number2);

    PrintNumber(number_1);
    PrintNumber(number_2);

    char sums_to_add[20][361] {0};

    int indexes_of_sums = 360;
    int index_of_last_row = 360;

    for(int i=19; i>=0; i--) {
        int divider = (int)number_2[i];
        int number_from_before = 0;

        for(int j=19; j>=0; j--) {
            int result = divider * (int)number_1[j];
            sums_to_add[-i+19][indexes_of_sums]=result%10+number_from_before;
            number_from_before = result/10;

            indexes_of_sums--;
        }

        index_of_last_row--;
        indexes_of_sums = index_of_last_row;
    }

    char* multiply = new char[361] {0};

    int add_to_next_column = 0;
    for(int i=360; i>=0; i--) {
        int sum_of_column = 0;
        for(int j=19; j>=0; j--	) {
            sum_of_column += (int)sums_to_add[j][i];
        }
        multiply[i]=sum_of_column%10 + add_to_next_column;
        add_to_next_column = sum_of_column/10;
    }
    return multiply;
}
#endif //FACTORIAL_MULTIPLICATION_H
