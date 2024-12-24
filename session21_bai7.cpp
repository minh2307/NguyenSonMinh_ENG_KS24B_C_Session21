#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char name[100];
    int age;
} Student;

int main() {
    FILE *fptr;
    int n;

    fptr = fopen("students.txt", "w");

    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    getchar();

    Student students[n];

    for (int i = 0; i < n; i++) {
        printf("\nNhap thong tin sinh vien%d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &students[i].id);
        getchar();

        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
       
        printf("Age: ");
        scanf("%d", &students[i].age);
        getchar();

        fprintf(fptr, "%d,%s,%d\n", students[i].id, students[i].name, students[i].age);
    }

    fclose(fptr);

    return 0;
}

