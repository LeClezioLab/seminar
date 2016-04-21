#include <stdio.h>

int main(){

	int num = 4;
	printf("%d\n",num );
	printf("%d\n",num/3); 
	//intは整数型なので少数以下を表現できない

	float num2 = 4.0/3.0; 
	printf("%f\n",num2);
	//floatは少数なので整数でも.0と表記しよう

	char word = 'h'; 
	printf("%c\n",word);
	//char型は一文字までしか扱えない

	char words[20] = "lelaboratory";
	printf("%s\n",words);
	printf("%c\n%c\n",words[0],words[1]);
	//単語を扱いたいときは配列をつかおう
	//配列の先頭は[0]から始まる
}

	//新たな変数を作成、現在の変数の値を変更することなく brother と出力せよ
