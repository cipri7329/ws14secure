
typedef struct  
{
	char tan[16];
	int src_acc;
	int dst_acc;
	int amount;
	char description[251];
} Transaction;


std::vector<Transaction *> load_transactions(char * filename);

Transaction* convert_transaction(char * line);

int process_transactions(std::vector<Transaction *> transactions, sql::Connection *con);
