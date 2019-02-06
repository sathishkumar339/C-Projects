#include<stdio.h>
#include<string.h>

int main() {

	char name[15], *ptr;
	int index,len;
	
	printf("enter the name\n");
	scanf("%s",name);

	printf("enter the index to delete \n");
	scanf("%d",&index);
	
	len = strlen(name);
	ptr = &name[index];

	while(*(ptr+1) != '\0') {
		*ptr = *(ptr+1);
		ptr++;
	}
	*ptr = '\0';
	printf("name is %s\n",name);	
}
