	
	int c=MAX
	for(c=0;c<c-1;c++)	
		for(a=0;a<c-1;a++){
			if(v[a]>v[a+1]){
				b=v[a];
				v[a]=v[a+1];
				v[a+1]=b;
			}
			if(a==c-2)
				c--;
			
