a[2][2]='x';
else{printf("invalid number.");exit(0);}
print(a);
if(a[0][0]=='x' && a[0][1]=='x' && a[0][2]=='x'){printf("Player First Win!");exit(0);}
else if(a[1][0]=='x' && a[1][1]=='x' && a[1][2]=='x'){printf("Player First Win!");exit(0);}
else if(a[2][0]=='x' && a[2][1]=='x' && a[2][2]=='x'){printf("Player First Win!");exit(0);}
else if(a[0][0]=='x' && a[1][0]=='x' && a[2][0]=='x'){printf("Player First Win!");exit(0);}
else if(a[0][1]=='x' && a[1][1]=='x' && a[2][1]=='x'){printf("Player First Win!");exit(0);}
else if(a[0][2]=='x' && a[1][2]=='x' && a[2][2]=='x'){printf("Player First Win!");exit(0);}
else if(a[0][0]=='x' && a[1][1]=='x' && a[2][2]=='x'){printf("Player First Win!");exit(0);}
else if(a[0][2]=='x' && a[1][1]=='x' && a[2][0]=='x'){printf("Player First Win!");exit(0);}

printf("Enter Position Second Player : ");
scanf("%d",&z);
if(z==1 && a[0][1]!='o' && a[0][1]!='x')
a[0][0]=='o';
else if(z==2 && a[0][1]!='o' && a[0][1]!='x')
a[0][1]='o';
else if(z==3 && a[0][2]!='o' && a[0][2]!='x')
a[0][2]='o';
else if(z==4 && a[1][0]!='o' && a[1][0]!='x')
a[1][0]='o';
else if(z==5 && a[1][1]!='o' && a[1][1]!='x')
a[1][1]='o';
else if(z==6 && a[1][2]!='o' && a[1][2]!='x')
a[1][2]='o';
else if(z==7 && a[2][0]!='o' && a[2][0]!='x')
a[2][0]='o';
else if(z==8 && a[2][1]!='o' && a[2][1]!='x')
a[2][1]='o';
else if(z==9 && a[2][2]!='o' && a[2][2]!='x')
a[2][2]='o';
else{printf("invalid number.");exit(0);}
print(a);
if(a[0][0]=='o' && a[0][1]=='o' && a[0][2]=='o'){printf("Player Second Win!");exit(0);}
else if(a[1][0]=='o' && a[1][1]=='o' && a[1][2]=='o'){printf("Player Second Win!");exit(0);}
else if(a[2][0]=='o' && a[2][1]=='o' && a[2][2]=='o'){printf("Player Second Win!");exit(0);}
else if(a[0][0]=='o' && a[1][0]=='o' && a[2][0]=='o'){printf("Player Second Win!");exit(0);}
else if(a[0][1]=='o' && a[1][1]=='o' && a[2][1]=='o'){printf("Player Second Win!");exit(0);}
else if(a[0][2]=='o' && a[1][2]=='o' && a[2][2]=='o'){printf("Player Second Win!");exit(0);}
else if(a[0][0]=='o' && a[1][1]=='o' && a[2][2]=='o'){printf("Player Second Win!");exit(0);}
else if(a[0][2]=='o' && a[1][1]=='o' && a[2][0]=='o'){printf("Player Second Win!");exit(0);}

printf("Enter Position First Player : ");
scanf("%d",&y);
if(y==1 && a[0][1]!='o' && a[0][1]!='x')
a[0][0]=='x';
else if(y==2 && a[0][1]!='o' && a[0][1]!='x')
a[0][1]='x';
else if(y==3 && a[0][2]!='o' && a[0][2]!='x')
a[0][2]='x';
else if(y==4 && a[1][0]!='o' && a[1][0]!='x')
a[1][0]='x';
else if(y==5 && a[1][1]!='o' && a[1][1]!='x')
a[1][1]='x';
else if(y==6 && a[1][2]!='o' && a[1][2]!='x')
a[1][2]='x';
else if(y==7 && a[2][0]!='o' && a[2][0]!='x')
a[2][0]='x';
else if(y==8 && a[2][1]!='o' && a[2][1]!='x')
a[2][1]='x';
else if(y==9 && a[2][2]!='o' && a[2][2]!='x'