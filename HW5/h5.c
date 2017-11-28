void getPosition(char *col, int *row)

	/* Tahta üzerindeki kareleri belirler. */
	
int isValidCell(char col, int row)

	/* Taşın verilen hücreye gidip gidemeyeceğini belirler, uygunsa 1 döndürür  
		değilse 0 */
		
void printBoard(char *board)

	/* Öceden verilen komutu uygular, taşı hücreye götürür */
	
int isPieceMovable(char *board)

	/* Kullanıcıya taşın bulunduğu hücreyi ve gitmek istediği hücreyi sorar
		Eğer hücre müsaitse return 1, değilse return 0 */
		
	/* Önemli olan iki nokta var: 
		
		1 - Hedef hücrede başka bir taş var mı? Varsa uygun değil.
		2 - Taşın yolunda başka taş varsa gidemez. */
		
		
/*****************************************************************************************************/
int isKnightMovable(char *board, char sourceCol, int sourceRow, char targetCol, int targetRow)

	/* AT taşının gidebileceği hücreyi kontrol eder */
	
int isRookMovable(char *board , char sourceCol, int sourceRow, char targetCol, int targetRow)

	/* KALE taşının hareket edip edemeyeceğini kontrol eder */
	
/* DİĞER TAŞLAR İÇİNDE AYNI FONKSİYONLARI YAZ. */

int isKingMovable(char *board , char sourceCol, int sourceRow, char targetCol, int targetRow)

//-----ŞAH------

int isQueenMovable(char *board , char sourceCol, int sourceRow, char targetCol, int targetRow)

//-----VEZİR------

int isBishopMovable(char *board , char sourceCol, int sourceRow, char targetCol, int targetRow)

//-----FİL-------

int isPawnMovable(char *board , char sourceCol, int sourceRow, char targetCol, int targetRow)

//------PİYON----

/*****************************************************************************************************/















