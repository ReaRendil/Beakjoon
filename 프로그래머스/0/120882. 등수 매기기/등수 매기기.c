#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int index;     
    double avg_score; 
    int rank;
} Student;

double avg(double a, double b) {
    return (a + b) / 2;
}

int avg_cmp(const void* a, const void* b) {
    Student* A = (Student*)a;
    Student* B = (Student*)b;
    if (B->avg_score > A->avg_score) return 1;
    else if (B->avg_score < A->avg_score) return -1;
    else return 0;
}
int index_cmp(const void* a, const void* b){
    Student* A = (Student*)a;
    Student* B = (Student*)b;
    return A->index - B->index;
}

int* solution(int** score, size_t row, size_t col) {
    Student* students = (Student*)malloc(sizeof(Student) * row);
    int* answer = (int*)malloc(sizeof(int) * row);
    for (int i = 0; i < row; i++) {
        students[i].avg_score = avg(score[i][0], score[i][1]);
        students[i].index = i;
    }
    qsort(students, row, sizeof(Student), avg_cmp);
    int num = 1;
    for (int i = 0; i < row; i++) {
        if (i > 0 && students[i].avg_score != students[i - 1].avg_score) {
            num = i + 1;
        }
        students[i].rank = num;
    }
    qsort(students, row, sizeof(Student), index_cmp);
    for(int i = 0;i<row;i++) answer[i] = students[i].rank;
    free(students);

    return answer;
}
