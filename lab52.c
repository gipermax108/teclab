char s[20];
for(i=0; x; i++) { s[i] = x%10; x /= 10; }
for( i--; i>=0; i--) printf("%c", s[i]);
printf("\n");