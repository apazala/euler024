#include <stdio.h>

#define TARGET 999999
#define LEN 10

#define swap(a, b) aux = a; a = b; b = aux

int main(int argc, char **argv)
{
	char lexword[LEN+1] = "0123456789";
	char aux;
	
	for(int count = 0; count < TARGET; count++){
		int i = LEN - 2;
		while (lexword[i] >= lexword[i+1])
			i--;
		int j = LEN - 1;
		while (lexword[j] <= lexword[i])
			j--;
		swap(lexword[i], lexword[j]);
		for(char *suffwd = lexword + i + 1, *sufbwd = lexword + LEN -1; suffwd < sufbwd; suffwd++, sufbwd--)
		{
			swap(*sufbwd, *suffwd);
		}		
	}
	
	puts(lexword);
	
    return 0;
}
