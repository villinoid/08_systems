#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "mystring.h"

int mystrlen(char *st){
	int i=0;
	while(*st++){
		i++;
	}
	return i;
}

char * mystrncpy(char *src,char *dest, int n){
	int i;
	for(i=0;i<n;i++){
		dest[i]=src[i];
	}
	dest[i]=0;
	return dest;
}

char * mystrcat(char *src, char *dest) {
	int i;
	int len=mystrlen(dest);
	for(i=0;src[i];i++){
		dest[len+i]=src[i];
	}
	dest[len+i]=0;
	return dest;
}

char * mystrchr(char *s,int c){
	int i;
	for(i=0;s[i];i++){
		if (!(c-s[i])){
			return s+i;
		}
	}
	if (!(s[i]-c)) {
		return s+i;
	}
	return 0;
}

int mystrcmp(char *s1, char *s2){
	int i;
	for(i=0; s1[i]+s2[i]; i++){
		if (s1[i]-s2[i]){
			return s1[i]-s2[i];
		}
	}
	return 0;
}