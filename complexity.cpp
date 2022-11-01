// find the complexity for 
check()
{
	for(i = n; i>1; i = i/2)
		cout<<" letsupgrade";
	
	/*
	The loop has an exponential decline and will occur log n times. 
	As first iteration n/2 times
		second iteration n/4 times
		third iteration n/8 times and so on.
		n+n/2+n/4+................+2+1
		=Log(n)
		
		therefor complexity of the given function is log(n)
		*/