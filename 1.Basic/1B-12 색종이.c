b['00'];a,j,k;
main(x,y){
	for(gets(&x);~scanf("%d%d",&x,&y);)
		for(j=x;j++<x+10;)
			for(k=y;k++<y+10;)a+=!b[j*101+k]++;
	printf("%d",a);
}