#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct Book{
	int number;
	char title[10];
};

void main(void) {
	struct Book *p;
	p = (struct Book*)malloc(2*sizeof(struct Book));
	if (p == NULL){
		printf("�޸� �Ҵ� ����\n");
		return;
	}
	p->number=1;
	strcpy(p->title, "c programming");
	
	(p+1)->number =2;
	strcpy((p+1)->title, "electronics");
	free(p);
	return;
}
