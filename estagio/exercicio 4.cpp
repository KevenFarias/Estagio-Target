#include <stdio.h>

main(){
	double sp = 67836.43 ,rj = 36678.66 , mg =29229.88 ,es =27165.48 ,outros = 19849.53, total, porcentagemSP, porcentagemRJ, porcentagemMG, porcentagemES, porcentagemOutros;
	
	total = sp + rj + mg + es + outros;
	porcentagemSP = sp/total * 100;
	porcentagemRJ = rj/total * 100;
	porcentagemMG = mg/total * 100;
	porcentagemES = es/total * 100;
	porcentagemOutros = outros/total * 100;
	
	
	printf("SP R$ %.2f %.2f%% % \n", sp, porcentagemSP);
	printf("RJ R$ %.2f %.2f%% % \n", rj, porcentagemRJ);
	printf("MG R$ %.2f %.2f%% % \n", mg, porcentagemMG);
	printf("ES R$ %.2f %.2f%% % \n", es, porcentagemES);
	printf("Outros R$ %.2f %.2f%% \n",outros, porcentagemOutros);
	
}
