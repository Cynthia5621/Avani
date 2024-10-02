#include <stdio.h>
int main () {
	
	int IDbook; //%d
	int duedate; //%d
	int returndate; //%d
	int overdue; //%d
	float finerate; //%d
	float fineamount; //%d

	printf("input IDbook\n");
	scanf("%d" ,&IDbook);

	printf("input duedate\n");
	scanf("%d" ,&duedate);

	printf("input returndate\n");
	scanf("%d" ,&returndate);

	overdue=returndate - duedate;

	if(overdue>=7){
		finerate = 20;
	}
	else if(overdue>=8){
		finerate = 50;
	}
	else if(overdue>=14){
		finerate = 100;
	}
	else { finerate = 0;
	}

	fineamount = overdue * finerate;

	printf("IDbook: %d\n", IDbook);
	printf("duedate: %d\n", duedate);
	printf("returndate: %d\n", returndate);
	printf("overdue: %d\n", overdue);
	printf("fineamount: %f\n", fineamount);
	return 0;
}

	