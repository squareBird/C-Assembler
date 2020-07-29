#include <stdio.h>
#include <string.h>

main(int argc, char* argv[]) {
	
	FILE *file = fopen(argv[1], "r");
	char oneline[100];
	int linecount = 0;

	if (file != NULL) // 파일이 열리는지 확인
	{
		printf("파일 오픈 성공!!\n");
		
		while (1)	// 한 줄 씩 받아와서 라인카운트.
		{
			if(fgets(oneline, 100, file) == NULL)
			{
				printf("이 파일은 %d 줄 입니다.\n",linecount);
				fclose(file);
				break;
			}
			linecount++;
		}
	}
	else
	{
		printf("파일 오픈 실패!!\n");
		
	}
	// 위는 라인 갯수 세기, 아래는 array배열에 내용 집어넣기.
	file = fopen(argv[1], "r");
	char array[linecount][100];
	int lc = 0;

	while (1)
	{
		if(fgets(array[lc], 100, file) == NULL)
		{
			break;
		}
		// printf("%s",array[lc]); 파일 출력하는 부분 잠깐 제거.
		lc++;
	}
	fclose(file);
	// array배열에 값들을 저장(한 줄 단위)

	char* token[linecount][5]; // 3차원배열의 필요성을 의심케한다...
	char* tok;
	int tk1 = 0, tk2 = 0;
	while (tk1!=linecount)
	{
		while (tk2!=5)
		{
			tok = strtok(array[linecount],"\t");
			token[tk1][tk2] = tok;
			tk2++;
			while(tok!=NULL)
			{
				tok = strtok(NULL, "\t");
				token[tk1][tk2] = tok;
				tk2++;
			}		
		}
		tk1++;
	}
	int a=0,b=0;

	/*for(a=0;a<linecount;a++)
	{
		for(b=0;b<5;b++)
		{
			printf("%s\t",token[a][b]);
		}
		printf("\n");
	}*/






















}
