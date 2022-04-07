#include<string.h>    //strcmp
#include<stdio.h>

int main(void) {
	char s1[7][10] = { "한국", "미국", "일본", "영국", "독일", "호주", "독일"};
	char key[10] = { "독일" };	//검색할 단어

	//strcmp("A","B") A번값과 B번값을 비교하는 함수
	//A과 B가 같은 경우 : 0
	//사전 순(오름차순)으로 A이 B보다 먼저 나오면 1
	//사전 순(오름차순)으로 A이 B보다 늦게 나오면 -1
	for (int i = 0; i < 7; i++) {
		if (strcmp(s1[i], key) == 0)
		{
			printf("찾는값(독일)이 %d번째에 있습니다.\n", i+1);
		}
	}
	return 0;
}