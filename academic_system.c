
   #include <stdio.h>

   struct Student{
    int studentID;
    char name[50];
    char grade;
    float marks[2];
    float avgM;
   };

   void CalculateAvg(struct Student *student){
    float totalmarks = 0.0;
    for(int i = 0; i < 5; i++){
        totalmarks += student->marks[i];
    }
    student->avgM = totalmarks/5;
   }

   void Grading(struct Student *student){
    if(student->avgM >=90){
        student->grade = 'A';
    }else if(student->avgM >=80){
        student->grade = 'B';
   }else if(student->avgM >=70){
        student->grade = 'C';
   }else if(student->avgM >=60){
        student->grade = 'D';
   }else{
        student->grade = 'F';
   }
   }

   int main(){
    struct Student students[2];

    for(int i = 0; i < 2; i++){
        printf("Enter your student ID: \n");
        scanf("%d", &students[i].studentID);

        printf("Enter your Name: \n");
        scanf("%s", &students[i].name);

        for(int j = 0; j < 2; j++){
            printf("Enter the marks of %d Subject: \n", j+1);
            scanf("%f",&students[i].marks[j]);
        }
        CalculateAvg(&students[i]);
        Grading(&students[i]);
    }

    printf("\n     ******STUDENT INFORMATION*****     \n");
    for(int i = 0; i <2; i++){
        printf("Student ID: %d \n", students[i].studentID);
        printf("Student Name: %s \n", students[i].name);
        printf("AVERAGE MARKS: %.2f \n", students[i].avgM);
        printf("Grade: %c \n", students[i].grade);
    }
    return 0;
   }

    
   

