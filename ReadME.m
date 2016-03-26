When creatiing character array , and then you want to copy them the character like this : 
char ar1 [] = "Hello World" ; 
char ar2 [20]; 
// doing this will create an error because this is not an attempt to copy all chars ina na array , this is only making a pointer to point to different addreess

ar1 = ar2 ; 
//better
strcpy(ar2,ar1); 
ar[0]= 'A' ; 

//also this is possible

///on other hands
char * ar1  = "hello world
char *ar2 ; 
//first , this is not immuatble
ar[0] = 'A' ; 
//because it has been creatred in the read-only part in memeory .
//but this is fine
ar2 = ar1 ; 
// not ar2 points to ar1
