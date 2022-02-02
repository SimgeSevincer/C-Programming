#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	
	int para=70000;
	int yil=2022;
	
	float x=150000/(70000+((70000*13.4)/100));
	int yeniyil=2022+x;
	
	printf("%d yilinda 150000 tlniz olacaktir ve %d yilinda 150000 tlyi asacaksiniz.",yeniyil,yeniyil+1);
	
	
	
	return 0;
}
