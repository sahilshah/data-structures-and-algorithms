static Box* nextBox(Stock stock, Inventory inv);
static int addBox(Stock stock, Box* new_box);
static void addToInventory(Box *box, Inventory **inv);
static int writeToFile(inventory* inv);

int addNewTransaction(FILE *file, Stock stock){
char status[5];

do{
	fscanf(file,"%s ",status);
	if (strcmp(status,"sell")
		continue;
	
	
	




}while((c=getc(file))!=EOF);












return 0;
}
