q=0x00000000000000000000000000006325;print3(c){printf(&q,c+0x00000000);};char*s=
"q=0x00000000000000000000000000006325;print3(c){printf(&q,c+0x00000000);};char*s=\n\
\"?\";x,y,m,d[8+0],i,dx;f[]={31599+0,19812+0,14479+0,31207+0,23524+0,29411,29679,\n\
+30866,31727,31719,1040};char*o,*si;p(ch){i=x/2/(3+2);dx=x/2%(3+2);if(i<8&&(y-5)/\n\
2<5&&dx<3&&(f[d[i]]>>((5+(-y+5)-1)*3+dx))&1)print2(ch);else print3(ch);if(ch==10)\n\
{y+=1;x=+0;}else x+=1;}gd(){time_t t=time(0);struct tm*tm=localtime(&t);d[0]=tm->\n\
tm_hour/10;d[1]=tm->tm_hour%10;d[2]=10;d[3]=tm->tm_min/10;d[4]=tm->tm_min%10;d[5]\n\
=10;d[6]=tm->tm_sec/10;d[7]=tm->tm_sec%10;}main(){for(gd();;print1(y+1,x),sleep(1\n\
),gd())for(so=s,x=y=0;*so;so++)if(*so==63)for(si=s;*si;si++)switch(*si){case'('/4\n\
:p(92);p('n');p(92);p(10);break;case'!'+1:p(92);p(34);break;case'['+1:p(92);p(92)\n\
;break;default:p(*si);}else(p(*so));}print1(y,x){printf(\"%c%c[%dA%c[%dD\",10,27,y\n\
,27,x);}print2(c){printf(\"%c[1;41;30m%c%c[0m\",27,c,27);}function(a,a1,a12,args){\n\
a1;}";x,y,m,d[8+0],i,dx;f[]={31599+0,19748+0,14479+0,31207+0,23524+0,29411,29679,
30866,31727,31719,1040};char*so,*si;p(ch){i=x/2/(3+2);dx=x/2%5;if(i<8&&y>m-5&&y<=
m&&dx<3&&(f[d[i]]>>((-y+m)*3+dx))&1)print2(ch);else(print3(ch));if(ch==10){y+=1;x
=0;}else(x++);}gd(){time_t t=time(0);struct tm*tm=localtime(&t);d[0]=tm->tm_hour/
10;d[1]=tm->tm_hour%10;d[2]=10;d[3]=tm->tm_min/10;d[4]=tm->tm_min%10;d[5]=10;d[6]
=tm->tm_sec/10;d[7]=tm->tm_sec%10;}main(){for(gd();;print1(y,x),m=(m+1)%26,sleep(
1),gd())for(so=s,x=y=0;*so;so++)if(*so==63)for(si=s;*si;si++)switch(*si){case'('/
4:p(92);p('n');p(92);p(10);break;case'!'+1:p(92);p(34);break;case'['+1:p(92);p(92
);break;default:p(*si);}else(p(*so));}print1(y,x){printf("%c%c[%dA%c[%dD",10,27,y
+1,27,x);}print2(c){printf("%c[1;102;30m%c%c[0m",27,c,27);}function(a,a1,a12,ar){
a1;}
