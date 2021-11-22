#include <stdio.h>
#include <stdlib.h> 
enum Mark {Excellent = 5, Good = 4, Sat = 3, NotSat = 2};
enum MarkType {Zachet,Exam};
struct Subject
{
    char name[80];
    enum MarkType markType; 
    union {
        _Bool zachet;
        enum Mark mark;
    } mark;
    char date [11];
    char teacher[20];
    
    
};
struct Term
{
    unsigned short number;
    char year[9];
    struct Subject subjects[20];
};
struct Zachetka
{
    char firstName[30];
    char middleName[30];
    char lastName[30];
    struct Term terms[12];
    
};
int main(void)
{
    struct Zachetka z = 
    {
        .firstName = "Maxim",
        .middleName = "Andreevich",
        .lastName = "Remizov",
        .terms =
        {
            {
                .number = 1,
                .year ="2018/2019",
                .subjects = {
                    {
                        .name = "Rusiz",
                        .markType = Zachet,
                        .mark = {.zachet = 1},
                        .date = "25.12.2018",
                        .teacher = "Gorshkova"
                    },
                    {
                        .name = "Informatika",
                        .markType = Zachet,
                        .mark = {.zachet = 1},
                        .date = "26.12.2018",
                        .teacher = "Yuskov"
                    },
                    {
                        .name = "Vedenie v proffesion",
                        .markType = Zachet,
                        .mark = {.zachet = 1},
                        .date = "17.01.2019",
                        .teacher = "Vanushina"
                    },
                    {
                        .name = "Inostrani izics",
                        .markType = Zachet,
                        .mark = {.zachet = 1},
                        .date = "29.12.2018",
                        .teacher = "Shamshina"
                    },
                    {
                        .name = "Filosofi",
                        .markType = Exam,
                        .mark = {.mark = 5},
                        .date = "17.01.2019",
                        .teacher = "Pluzhnikova"
                    },
                    {
                        .name = "Vishi Matematic",
                        .markType = Exam,
                        .mark = {.mark = 4},
                        .date = "24.01.2019",
                        .teacher = "Lakernik"
                    },
                    {
                        .name = "AGiLA",
                        .markType = Exam,
                        .mark = {.mark = 4},
                        .date = "01.02.2019",
                        .teacher = "Piskarev"
                    },
                }
            },
            {
                .number = 2,
                .year ="2018/2019",
                .subjects = {
                    {
                        .name = "KG",
                        .markType = Zachet,
                        .mark = {.zachet = 1},
                        .date = "03.06.2019",
                        .teacher = "Evstratov"
                    },
                    {
                        .name = "Fizika",
                        .markType = Zachet,
                        .mark = {.zachet = 1},
                        .date = "03.06.2019",
                        .teacher = "Inozemceva"
                    },
                    {
                        .name = "ONPBDvI",
                        .markType = Zachet,
                        .mark = {.zachet = 1},
                        .date = "05.06.2019",
                        .teacher = "Antipov"
                    },
                    {
                        .name = "TOE",
                        .markType = Zachet,
                        .mark = {.zachet = 1},
                        .date = "06.06.2019",
                        .teacher = "Vlasoni"
                    },
                    {
                        .name = "Fizkultura",
                        .markType = Zachet,
                        .mark = {.zachet = 1},
                        .date = "9.10.2019",
                        .teacher = "Koroleva"
                    },
                    {
                        .name = "Informatika",
                        .markType = Exam,
                        .mark = {.mark = 5},
                        .date = "18.06.2019",
                        .teacher = "Yuskov"
                    },
                    {
                        .name = "Histori",
                        .markType = Exam,
                        .mark = {.mark = 5},
                        .date = "24.06.2019",
                        .teacher = "Polyanskaya"
                    },
                    {
                        .name = "Inostrani izics",
                        .markType = Exam,
                        .mark = {.mark = 5},
                        .date = "28.06.2019",
                        .teacher = "Kozhevnikova"
                    },
                    {
                        .name = "Vishi mat",
                        .markType = Exam,
                        .mark = {.mark = 5},
                        .date = "02.07.2019",
                        .teacher = "Lakernik"
                    },
                }
            },
            {
                .number = 3,
                .year ="2019/2020",
                .subjects = {
                    {
                        .name = "TFKP",
                        .markType = Zachet,
                        .mark = {.zachet = 1},
                        .date = "20.12.2019",
                        .teacher = "Nadezhina"
                    },
                    {
                        .name = "Fizkultura",
                        .markType = Zachet,
                        .mark = {.zachet = 1},
                        .date = "23.12.2019",
                        .teacher = "Ganiev"
                    },
                    {
                        .name = "VVMPP",
                        .markType = Zachet,
                        .mark = {.zachet = 1},
                        .date = "24.12.2019",
                        .teacher = "Yuskov"
                    },
                    {
                        .name = "IRSS",
                        .markType = Zachet,
                        .mark = {.zachet = 1},
                        .date = "25.12.2019",
                        .teacher = "Ziatina"
                    },
                    {
                        .name = "FOE",
                        .markType = Zachet,
                        .mark = {.zachet = 1},
                        .date = "26.12.2019",
                        .teacher = "Vlasoni"
                    },
                    {
                        .name = "TEC",
                        .markType = Zachet,
                        .mark = {.zachet = 1},
                        .date = "27.12.2019",
                        .teacher = "Grigorieva"
                    },
                    {
                        .name = "Fizika",
                        .markType = Exam,
                        .mark = {.mark = 5},
                        .date = "16.01.2020",
                        .teacher = "Inozemceva"
                    },
                    {
                        .name = "TVIMS",
                        .markType = Exam,
                        .mark = {.mark = 5},
                        .date = "20.01.2020",
                        .teacher = "Meirmanov"
                    },
                    {
                        .name = "Discret matematic",
                        .markType = Exam,
                        .mark = {.mark = 5},
                        .date = "27.01.2020",
                        .teacher = "Lakernik"
                    },
                    {
                        .name = "Vich models",
                        .markType = Exam,
                        .mark = {.mark = 4},
                        .date = "31.01.2020",
                        .teacher = "Kravchenko"
                    },
                   
                }
            }
        }
    };
    for(int j = 0; j < 3; ++j)
    {
        printf("%i ",z.terms[j].number);
        printf("%s\t","semestr");
        printf("%s\t",z.terms[j].year);
        printf("\n");
        printf("%-20s|%-6s|%-11s|%-20s|\r\n","Name","Mark","Date","Teacher" );
         	for (int i = 0; i < 8; ++i)
         	{
         		printf("%-20s|",z.terms[j].subjects[i].name);
         		if (z.terms[j].subjects[i].markType == Zachet)
         		{
         			printf("%-6s|",
         			z.terms[j].subjects[i].mark.zachet ? "Zachet":"Ne Zachet");
         		}
         		else
         		{
         		    printf("%-6d|",
         			z.terms[j].subjects[i].mark.mark);
         		}
         		printf("%-11s|",z.terms[j].subjects[i].date);
         		printf("%-20s|",z.terms[j].subjects[i].teacher);
         		printf("\r\n");
         	}
    }
    system("pause");
}