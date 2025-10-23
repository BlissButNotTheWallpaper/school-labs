#include <stdio.h>

/*
▪ One of the universities would like to determine the different types of scholarship a student can get based on
the following parameters: GPA, completed credit hours, and extracurricular involvement. Write a C++
program that will check the eligibility of the students based on the following criteria:
▪ University Scholarship
- GPA is 1.5 or lower; however, if GPA is 1.25 and lower, the student automatically qualified
regardless of credit hours
- Credit hours are 40 hours
▪ College Scholarship
- GPA is 2.0 or lower
- Credit hours are 30 hours
- Extracurricular involvement at least 2 activities
▪ Leadership Scholarship
- GPA is 2.5 or lower; however, if GPA is higher than 2.5, the student is not qualified in any
scholarship
- Credit hours are 20 hours
- Extracurricular involvement at least 1 activity
The program should prompt the user to provide the following values: GPA, completed credit hours, and
the number of extracurricular activities. Use the selection structures to determine which of the following
scholarships the student is eligible for and display all needed output.
*/

// lets not make this complicated ill put it all in one function

void determine_if_qualified() {
	float gpa;
	int credit_hours;
	int extracurricular_amount;

	// get user input
	printf("student GPA: ");
	scanf("%f", &gpa);
	printf("student credit hours: ");
	scanf("%d", &credit_hours);
	printf("student amount of extracurricular amount: ");
	scanf("%d", &extracurricular_amount);

	
	// test output
//	printf("student gpa is: %2.f \n", gpa);
//	printf("student credit hours is: %d \n", credit_hours);
//	printf("student number of extracurricular is: %d \n", extracurricular_amount); 	

/*
▪ University Scholarship
- GPA is 1.5 or lower; however, if GPA is 1.25 and lower, the student automatically qualified
regardless of credit hours
- Credit hours are 40 hours
▪ College Scholarship
- GPA is 2.0 or lower
- Credit hours are 30 hours
- Extracurricular involvement at least 2 activities
▪ Leadership Scholarship
- GPA is 2.5 or lower; however, if GPA is higher than 2.5, the student is not qualified in any
scholarship
- Credit hours are 20 hours
- Extracurricular involvement at least 1 activity
*/
	//University Scholarship
	if(gpa <= 1.25) {
		printf("the student automatically qualifies for University Scholarship\n");
	}else if (gpa <= 1.5 && credit_hours >= 40) {
		printf("the student qualifies for University Scholarship\n");
	//College Scholarship
	}else if (gpa <= 2.0 && credit_hours >= 30 && extracurricular_amount >= 2) {
		printf("the student qualifies for College Scholarship\n");
	}else if (gpa <= 2.5 && credit_hours >= 20 && extracurricular_amount >= 1) {
	//Leadership
		printf("the student qualifies for Leadership Scholarship\n");
	}else if (gpa > 2.5) {
		printf("the student didnt qualify for any scholarship\n");
	}
}

int main() {
	determine_if_qualified();	
}

