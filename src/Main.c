#include "/home/codeleaded/System/Static/Library/LibCrawler.h"

int main(){
    LibCrawler lc = LibCrawler_New("./inc");
	LibCrawler_EntryFind(&lc,"./src/WSEM_Cube.h");
	LibCrawler_Build(&lc);
	LibCrawler_Free(&lc);
    return 0;
}