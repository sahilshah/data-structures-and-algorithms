#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*struct _fruit{
	int number;
	char *name;
	struct _fruit *next;
	};
typedef struct _fruit Fruit;

typedef struct{
	int size;
	Fruit *head;
	} FruitList;
*/
typedef struct {
		int box;
		int number;
		char *name;
		}_fruit;
					
int main(){
	_fruit fruit[10];
	int i=0,k=0,size=0;
	char c,string[20],*fruitname;
	char *str;
	int w;
	FILE *fp;
	fp= fopen("boxes.txt","r");
	while ((c=getc(fp))!=EOF)
	{
		i++;
		ungetc(c,fp);	
		fscanf(fp,"%d",&fruit[i].box);
		while((c=getc(fp))!='\n'){
			ungetc(c,fp);
			fscanf(fp," %s",string);
			str=string;
			fruit[i].number=atoi(string);
			while (*str >= '0' && *str <= '9')
				str++;
			fruitname=str;
			fruit[i].name=fruitname;
			size++;
		}
	}

	for(i=0;i<size;i++);
		printf("\n%d %s %d\n",fruit[i].number,fruit[i].name,fruit[i].box);

return 0;
	}
