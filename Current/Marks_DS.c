#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    char *roll;
    float marks;
};

int insert(char *name, char *roll, int marks)
{
    struct Student *s = (struct Student *)malloc(sizeof(struct Student));
    // s->name = strdup(name);
    s->roll = strdup(roll);
    s->marks = marks;
    return 0;
}

int display(struct Student s[], int n)
{
    printf("+----------------------+\n");
    printf("%s%12s%2s%7s%2s\n", "|", "Roll Number", "|", "Marks", "|");
    printf("+----------------------+\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s%8s%6s%5.1f%4s\n", "|", s[i].roll, "|", s[i].marks, "|");
        printf("+----------------------+\n");
    }
    return 0;
}

int compareMarks(struct Student s1, struct Student s2)
{
    if (s1.marks == s2.marks)
    {
        if (strcmp(s1.roll, s2.roll) > 0)
            return 0;
    }
    return s1.marks < s2.marks;
}

int sort(struct Student *s, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (compareMarks(*(s + j), *(s + j + 1)))
            {
                struct Student temp = *(s + j + 1);
                *(s + j + 1) = *(s + j);
                *(s + j) = temp;
            }
        }
    }
}

int main()
{
    struct Student students[71] = {
        {"191", 19},
        {"192", 16},
        {"193", 19},
        {"194", 15},
        {"195", 17},
        {"196", 20},
        {"197", 10},
        {"198", 19.5},
        {"199", 11},
        {"200", 19},
        {"201", 12},
        {"202", 14},
        {"203", 16.5},
        {"204", 18},
        {"205", 14.5},
        {"206", 18},
        {"207", 16.5},
        {"208", 15.0},
        {"209", 14},
        {"210", 11},
        {"211", 16},
        {"212", 16},
        {"213", 14},
        {"214", 14},
        {"215", 13},
        {"216", 00},
        {"217", 15},
        {"218", 14},
        {"219", 18},
        {"220", 12.5},
        {"221", 17},
        {"222", 15},
        {"224", 17.5},
        {"225", 14},
        {"226", 13.5},
        {"227", 18},
        {"228", 13},
        {"229", 13},
        {"230", 11},
        {"231", 12},
        {"232", 16},
        {"233", 14},
        {"234", 9.5},
        {"235", 14.5},
        {"236", 15},
        {"237", 16},
        {"238", 19.5},
        {"239", 12},
        {"240", 7},
        {"241", 20},
        {"242", 19.5},
        {"243", 18},
        {"244", 00},
        {"245", 3.5},
        {"246", 00},
        {"247", 16},
        {"248", 19},
        {"249", 13.5},
        {"250", 11},
        {"251", 17},
        {"252", 17},
        {"253", 7.5},
        {"254", 13.5},
        {"255", 20},
        {"256", 14.5},
        {"257", 18},
        {"258", 16},
        {"259", 16.5},
        {"260", 15},
        {"630", 16},
        {"631", 04},
    };
    sort((struct Student *)students, 71);
    display(students, 71);
}