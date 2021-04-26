int con(int x)
{
	if(x==0)
	{
		return 0;
	}
	else
	{
		return (x%2+10*con(x/2));
	}


}
